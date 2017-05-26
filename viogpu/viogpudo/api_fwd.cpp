#include "driver.h"
#include "viogpudo.h"
#include "helper.h"
#include "api_fwd.h"

#define ENTRIES_COUNT 10

// From Oracle blog GNU HASH for elf symbols
UINT32 gnu_hash(const char* s) {
	UINT32 h = 5381;
	for (UCHAR c = *s; c != 0; c = *s++)
		h = h * 33 + c;
	return h;
}

/* Why ?
 * I could have done a section base array, but could not find a better
 * way to find section boundaries than create two others just before/after.
 *
 * Could not do a static array either, because... well, no CRT section
*/
NTSTATUS api_fwd::initialize_entries(api_fwd::bundle_s **entries) {
	VIOGPU_ASSERT(entries);

	entries = static_cast<api_fwd::bundle_s**>(ExAllocatePoolWithTag(NonPagedPoolNx, sizeof(api_fwd::bundle_s) * ENTRIES_COUNT, 'AFWD'));
	if (!entries)
		return STATUS_NO_MEMORY;

	(*entries)[0] = REGISTER_ENTRY(glBegin);
	(*entries)[1] = REGISTER_ENTRY(glClear);
	(*entries)[2] = REGISTER_ENTRY(glColor3f);
	(*entries)[3] = REGISTER_ENTRY(glEnd);
	(*entries)[4] = REGISTER_ENTRY(glFlush);
	(*entries)[5] = REGISTER_ENTRY(glVertex2i);
	(*entries)[6] = REGISTER_ENTRY(glViewport);
	(*entries)[7] = REGISTER_ENTRY(wglCreateContext);
	(*entries)[8] = REGISTER_ENTRY(wglMakeCurrent);
	(*entries)[9] = REGISTER_ENTRY(wglDeleteContext);

	return STATUS_SUCCESS;
}

NTSTATUS api_fwd::call_entry(CtrlQueue *queue, api_fwd::bundle_s *entries, UINT32 hash, VOID *data, UINT32 size) {
    DbgPrint(TRACE_LEVEL_VERBOSE, ("<---> %s\n", __FUNCTION__));
	for (UINT32 i = 0; i < ENTRIES_COUNT; i++)
		if (entries[i].hash == hash)
			return entries[i].func(queue, hash, data, size);
	return STATUS_DEVICE_FEATURE_NOT_SUPPORTED;
}


/* Why all this redudant code ?
 * The first step is to do something dumb : path QEMU/VIRGL and add a magic
 * command to forward calls.
 * But I'd like to use real CMDS, so will replace these bit by bit
*/

#define DUMB_FW_FUNCTION(FunctionName)												      \
NTSTATUS api_fwd::FunctionName(CtrlQueue *queue, UINT32 hash, VOID *payload, UINT size) { \
	PAGED_CODE();																		  \
    DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));                           \
	UINT64 data[APIFWD_BUFFER_SIZE];                                                      \
	memcpy(data, payload, size);                                                          \
	queue->ApiForward(hash, data);                                                        \
    DbgPrint(TRACE_LEVEL_VERBOSE, ("<--- %s\n", __FUNCTION__));                           \
	return STATUS_SUCCESS;                                                                \
}

DUMB_FW_FUNCTION(glBegin)
DUMB_FW_FUNCTION(glClear)
DUMB_FW_FUNCTION(glColor3f)
DUMB_FW_FUNCTION(glEnd)
DUMB_FW_FUNCTION(glFlush)
DUMB_FW_FUNCTION(glVertex2i)
DUMB_FW_FUNCTION(glViewport)

NTSTATUS api_fwd::wglCreateContext(CtrlQueue *queue, UINT32 hash, VOID *payload, UINT size)
{
	PAGED_CODE();
	DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
	UNREFERENCED_PARAMETER(hash);

	UINT64 data[APIFWD_BUFFER_SIZE];
	memcpy(data, payload, size);
	queue->CreateContext(data);
	DbgPrint(TRACE_LEVEL_VERBOSE, ("<--- %s\n", __FUNCTION__));
	return STATUS_SUCCESS;
}

NTSTATUS api_fwd::wglDeleteContext(CtrlQueue *queue, UINT32 hash, VOID *payload, UINT size)
{
	PAGED_CODE();
	DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
	UNREFERENCED_PARAMETER(hash);

	UINT64 data[APIFWD_BUFFER_SIZE];
	memcpy(data, payload, size);
	queue->DeleteContext(data);
	DbgPrint(TRACE_LEVEL_VERBOSE, ("<--- %s\n", __FUNCTION__));
	return STATUS_SUCCESS;
}

NTSTATUS api_fwd::wglMakeCurrent(CtrlQueue *queue, UINT32 hash, VOID *payload, UINT size)
{
	PAGED_CODE();
	DbgPrint(TRACE_LEVEL_VERBOSE, ("---> %s\n", __FUNCTION__));
	UNREFERENCED_PARAMETER(hash);

	UINT64 data[APIFWD_BUFFER_SIZE];
	memcpy(data, payload, size);
	queue->MakeCurrent(data);
	DbgPrint(TRACE_LEVEL_VERBOSE, ("<--- %s\n", __FUNCTION__));
	return STATUS_SUCCESS;
}

#include "driver.h"
#include "helper.h"
#include "api_fwd.h"

#define ENTRIES_COUNT 1

// From Oracle blog GNU HASH for elf symbols
UINT32 gnu_hash(const char* s) {
	UINT32 h = 5381;
	for (UCHAR c = *s; c != 0; c = *s++)
		h = h * 33 + c;
	return h;
}

NTSTATUS api_fwd::initialize_entries(api_fwd::bundle_s **entries) {
	VIOGPU_ASSERT(entries);

	entries = static_cast<api_fwd::bundle_s**>(ExAllocatePoolWithTag(NonPagedPoolNx, sizeof(api_fwd::bundle_s) * ENTRIES_COUNT, 'AFWD'));
	if (!entries)
		return STATUS_NO_MEMORY;

	(*entries)[0] = REGISTER_ENTRY(glBegin);

	return STATUS_SUCCESS;
}

NTSTATUS api_fwd::call_entry(api_fwd::bundle_s *entries, UINT32 hash, void* ptr) {
    DbgPrint(TRACE_LEVEL_VERBOSE, ("<---> %s\n", __FUNCTION__));
	const UINT32 size = ENTRIES_COUNT;
	for (UINT32 i = 0; i < size; i++)
		if (entries[i].hash == hash)
			return entries[i].func(ptr);
	return STATUS_DEVICE_FEATURE_NOT_SUPPORTED;
}

NTSTATUS api_fwd::glBegin(void *payload) {
    DbgPrint(TRACE_LEVEL_VERBOSE, ("<---> %s\n", __FUNCTION__));
	UNREFERENCED_PARAMETER(payload);
	return STATUS_SUCCESS;
}
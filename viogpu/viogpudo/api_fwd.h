#pragma once

#include "helper.h"

#define REGISTER_ENTRY( function ) { gnu_hash( #function ), api_fwd::function };

namespace api_fwd
{
	typedef NTSTATUS(*entry)(CtrlQueue*, UINT32, VOID*, UINT32);

	struct bundle_s {
		UINT32 hash;
		entry func;
	};

	NTSTATUS initialize_entries(bundle_s **entries);
	NTSTATUS call_entry(CtrlQueue  *queue, bundle_s *entries, UINT32 hash, VOID* data, UINT32 size);

#define DUMB_FWD_PROT(Name) \
	NTSTATUS Name(CtrlQueue *queue, UINT32 hash, VOID *data, UINT32 size);

	DUMB_FWD_PROT(glBegin)
	DUMB_FWD_PROT(glClear)
	DUMB_FWD_PROT(glColor3f)
	DUMB_FWD_PROT(glEnd)
	DUMB_FWD_PROT(glFlush)
	DUMB_FWD_PROT(glVertex2i)
	DUMB_FWD_PROT(glViewport)

	NTSTATUS wglCreateContext(CtrlQueue *queue, UINT32 hash, VOID *payload, UINT size);
	NTSTATUS wglDeleteContext(CtrlQueue *queue, UINT32 hash, VOID *payload, UINT size);
	NTSTATUS wglMakeCurrent(CtrlQueue *queue, UINT32 hash, VOID *payload, UINT size);
};
#pragma once

#include "helper.h"

#define REGISTER_ENTRY( function ) { gnu_hash( #function ), api_fwd::function };

namespace api_fwd
{
	typedef NTSTATUS(*entry)(void*);

	struct bundle_s {
		UINT32 hash;
		entry func;
	};

	NTSTATUS initialize_entries(bundle_s **entries);
	NTSTATUS call_entry(bundle_s *entries, UINT32 hash, void* ptr);
	NTSTATUS glBegin(void *payload);
};
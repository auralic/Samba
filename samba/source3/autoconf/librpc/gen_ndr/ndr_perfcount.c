/* parser auto-generated by pidl */

#include "includes.h"
#include "autoconf/librpc/gen_ndr/ndr_perfcount.h"

static enum ndr_err_code ndr_push_SYSTEMTIME(struct ndr_push *ndr, int ndr_flags, const struct SYSTEMTIME *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 2));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->year));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->month));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->dayofweek));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->day));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->hour));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->minute));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->second));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->milliseconds));
		NDR_CHECK(ndr_push_trailer_align(ndr, 2));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_SYSTEMTIME(struct ndr_pull *ndr, int ndr_flags, struct SYSTEMTIME *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 2));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->year));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->month));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->dayofweek));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->day));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->hour));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->minute));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->second));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->milliseconds));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 2));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_SYSTEMTIME(struct ndr_print *ndr, const char *name, const struct SYSTEMTIME *r)
{
	ndr_print_struct(ndr, name, "SYSTEMTIME");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint16(ndr, "year", r->year);
	ndr_print_uint16(ndr, "month", r->month);
	ndr_print_uint16(ndr, "dayofweek", r->dayofweek);
	ndr_print_uint16(ndr, "day", r->day);
	ndr_print_uint16(ndr, "hour", r->hour);
	ndr_print_uint16(ndr, "minute", r->minute);
	ndr_print_uint16(ndr, "second", r->second);
	ndr_print_uint16(ndr, "milliseconds", r->milliseconds);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_PERF_COUNTER_DEFINITION(struct ndr_push *ndr, int ndr_flags, const struct PERF_COUNTER_DEFINITION *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ByteLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CounterNameTitleIndex));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CounterNameTitlePointer));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CounterHelpTitleIndex));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CounterHelpTitlePointer));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->DefaultScale));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->DetailLevel));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CounterType));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CounterSize));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CounterOffset));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_PERF_COUNTER_DEFINITION(struct ndr_pull *ndr, int ndr_flags, struct PERF_COUNTER_DEFINITION *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ByteLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CounterNameTitleIndex));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CounterNameTitlePointer));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CounterHelpTitleIndex));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CounterHelpTitlePointer));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->DefaultScale));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->DetailLevel));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CounterType));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CounterSize));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CounterOffset));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_PERF_COUNTER_DEFINITION(struct ndr_print *ndr, const char *name, const struct PERF_COUNTER_DEFINITION *r)
{
	ndr_print_struct(ndr, name, "PERF_COUNTER_DEFINITION");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "ByteLength", r->ByteLength);
	ndr_print_uint32(ndr, "CounterNameTitleIndex", r->CounterNameTitleIndex);
	ndr_print_uint32(ndr, "CounterNameTitlePointer", r->CounterNameTitlePointer);
	ndr_print_uint32(ndr, "CounterHelpTitleIndex", r->CounterHelpTitleIndex);
	ndr_print_uint32(ndr, "CounterHelpTitlePointer", r->CounterHelpTitlePointer);
	ndr_print_uint32(ndr, "DefaultScale", r->DefaultScale);
	ndr_print_uint32(ndr, "DetailLevel", r->DetailLevel);
	ndr_print_uint32(ndr, "CounterType", r->CounterType);
	ndr_print_uint32(ndr, "CounterSize", r->CounterSize);
	ndr_print_uint32(ndr, "CounterOffset", r->CounterOffset);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_PERF_COUNTER_BLOCK(struct ndr_push *ndr, int ndr_flags, const struct PERF_COUNTER_BLOCK *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ByteLength));
		NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->data, r->ByteLength));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_PERF_COUNTER_BLOCK(struct ndr_pull *ndr, int ndr_flags, struct PERF_COUNTER_BLOCK *r)
{
	uint32_t size_data_0 = 0;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ByteLength));
		size_data_0 = r->ByteLength;
		NDR_PULL_ALLOC_N(ndr, r->data, size_data_0);
		NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->data, size_data_0));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_PERF_COUNTER_BLOCK(struct ndr_print *ndr, const char *name, const struct PERF_COUNTER_BLOCK *r)
{
	ndr_print_struct(ndr, name, "PERF_COUNTER_BLOCK");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "ByteLength", r->ByteLength);
	ndr_print_array_uint8(ndr, "data", r->data, r->ByteLength);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_PERF_INSTANCE_DEFINITION(struct ndr_push *ndr, int ndr_flags, const struct PERF_INSTANCE_DEFINITION *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ByteLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ParentObjectTitleIndex));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ParentObjectTitlePointer));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->UniqueID));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->NameOffset));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->NameLength));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->data));
		NDR_CHECK(ndr_push_PERF_COUNTER_BLOCK(ndr, NDR_SCALARS, &r->counter_data));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->data) {
			NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, *r->data));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_PERF_INSTANCE_DEFINITION(struct ndr_pull *ndr, int ndr_flags, struct PERF_INSTANCE_DEFINITION *r)
{
	uint32_t _ptr_data;
	TALLOC_CTX *_mem_save_data_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ByteLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ParentObjectTitleIndex));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ParentObjectTitlePointer));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->UniqueID));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->NameOffset));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->NameLength));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_data));
		if (_ptr_data) {
			NDR_PULL_ALLOC(ndr, r->data);
		} else {
			r->data = NULL;
		}
		NDR_CHECK(ndr_pull_PERF_COUNTER_BLOCK(ndr, NDR_SCALARS, &r->counter_data));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->data) {
			_mem_save_data_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->data, 0);
			NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, r->data));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_data_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_PERF_INSTANCE_DEFINITION(struct ndr_print *ndr, const char *name, const struct PERF_INSTANCE_DEFINITION *r)
{
	ndr_print_struct(ndr, name, "PERF_INSTANCE_DEFINITION");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "ByteLength", r->ByteLength);
	ndr_print_uint32(ndr, "ParentObjectTitleIndex", r->ParentObjectTitleIndex);
	ndr_print_uint32(ndr, "ParentObjectTitlePointer", r->ParentObjectTitlePointer);
	ndr_print_uint32(ndr, "UniqueID", r->UniqueID);
	ndr_print_uint32(ndr, "NameOffset", r->NameOffset);
	ndr_print_uint32(ndr, "NameLength", r->NameLength);
	ndr_print_ptr(ndr, "data", r->data);
	ndr->depth++;
	if (r->data) {
		ndr_print_uint8(ndr, "data", *r->data);
	}
	ndr->depth--;
	ndr_print_PERF_COUNTER_BLOCK(ndr, "counter_data", &r->counter_data);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_PERF_OBJECT_TYPE(struct ndr_push *ndr, int ndr_flags, const struct PERF_OBJECT_TYPE *r)
{
	uint32_t cntr_counters_0;
	uint32_t cntr_instances_0;
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->TotalByteLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->DefinitionLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->HeaderLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ObjectNameTitleIndex));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ObjectNameTitlePointer));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ObjectHelpTitleIndex));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ObjectHelpTitlePointer));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->DetailLevel));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->NumCounters));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->DefaultCounter));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->NumInstances));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->CodePage));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->PerfTime));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->PerfFreq));
		for (cntr_counters_0 = 0; cntr_counters_0 < (r->NumCounters); cntr_counters_0++) {
			NDR_CHECK(ndr_push_PERF_COUNTER_DEFINITION(ndr, NDR_SCALARS, &r->counters[cntr_counters_0]));
		}
		for (cntr_instances_0 = 0; cntr_instances_0 < (r->NumInstances); cntr_instances_0++) {
			NDR_CHECK(ndr_push_PERF_INSTANCE_DEFINITION(ndr, NDR_SCALARS, &r->instances[cntr_instances_0]));
		}
		NDR_CHECK(ndr_push_PERF_COUNTER_BLOCK(ndr, NDR_SCALARS, &r->counter_data));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		for (cntr_instances_0 = 0; cntr_instances_0 < (r->NumInstances); cntr_instances_0++) {
			NDR_CHECK(ndr_push_PERF_INSTANCE_DEFINITION(ndr, NDR_BUFFERS, &r->instances[cntr_instances_0]));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_PERF_OBJECT_TYPE(struct ndr_pull *ndr, int ndr_flags, struct PERF_OBJECT_TYPE *r)
{
	uint32_t size_counters_0 = 0;
	uint32_t cntr_counters_0;
	TALLOC_CTX *_mem_save_counters_0 = NULL;
	uint32_t size_instances_0 = 0;
	uint32_t cntr_instances_0;
	TALLOC_CTX *_mem_save_instances_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->TotalByteLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->DefinitionLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->HeaderLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ObjectNameTitleIndex));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ObjectNameTitlePointer));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ObjectHelpTitleIndex));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ObjectHelpTitlePointer));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->DetailLevel));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->NumCounters));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->DefaultCounter));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->NumInstances));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->CodePage));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->PerfTime));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->PerfFreq));
		size_counters_0 = r->NumCounters;
		NDR_PULL_ALLOC_N(ndr, r->counters, size_counters_0);
		_mem_save_counters_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->counters, 0);
		for (cntr_counters_0 = 0; cntr_counters_0 < (size_counters_0); cntr_counters_0++) {
			NDR_CHECK(ndr_pull_PERF_COUNTER_DEFINITION(ndr, NDR_SCALARS, &r->counters[cntr_counters_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_counters_0, 0);
		size_instances_0 = r->NumInstances;
		NDR_PULL_ALLOC_N(ndr, r->instances, size_instances_0);
		_mem_save_instances_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->instances, 0);
		for (cntr_instances_0 = 0; cntr_instances_0 < (size_instances_0); cntr_instances_0++) {
			NDR_CHECK(ndr_pull_PERF_INSTANCE_DEFINITION(ndr, NDR_SCALARS, &r->instances[cntr_instances_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_instances_0, 0);
		NDR_CHECK(ndr_pull_PERF_COUNTER_BLOCK(ndr, NDR_SCALARS, &r->counter_data));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		size_instances_0 = r->NumInstances;
		_mem_save_instances_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->instances, 0);
		for (cntr_instances_0 = 0; cntr_instances_0 < (size_instances_0); cntr_instances_0++) {
			NDR_CHECK(ndr_pull_PERF_INSTANCE_DEFINITION(ndr, NDR_BUFFERS, &r->instances[cntr_instances_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_instances_0, 0);
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_PERF_OBJECT_TYPE(struct ndr_print *ndr, const char *name, const struct PERF_OBJECT_TYPE *r)
{
	uint32_t cntr_counters_0;
	uint32_t cntr_instances_0;
	ndr_print_struct(ndr, name, "PERF_OBJECT_TYPE");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "TotalByteLength", r->TotalByteLength);
	ndr_print_uint32(ndr, "DefinitionLength", r->DefinitionLength);
	ndr_print_uint32(ndr, "HeaderLength", r->HeaderLength);
	ndr_print_uint32(ndr, "ObjectNameTitleIndex", r->ObjectNameTitleIndex);
	ndr_print_uint32(ndr, "ObjectNameTitlePointer", r->ObjectNameTitlePointer);
	ndr_print_uint32(ndr, "ObjectHelpTitleIndex", r->ObjectHelpTitleIndex);
	ndr_print_uint32(ndr, "ObjectHelpTitlePointer", r->ObjectHelpTitlePointer);
	ndr_print_uint32(ndr, "DetailLevel", r->DetailLevel);
	ndr_print_uint32(ndr, "NumCounters", r->NumCounters);
	ndr_print_uint32(ndr, "DefaultCounter", r->DefaultCounter);
	ndr_print_uint32(ndr, "NumInstances", r->NumInstances);
	ndr_print_uint32(ndr, "CodePage", r->CodePage);
	ndr_print_hyper(ndr, "PerfTime", r->PerfTime);
	ndr_print_hyper(ndr, "PerfFreq", r->PerfFreq);
	ndr->print(ndr, "%s: ARRAY(%d)", "counters", (int)r->NumCounters);
	ndr->depth++;
	for (cntr_counters_0 = 0; cntr_counters_0 < (r->NumCounters); cntr_counters_0++) {
		ndr_print_PERF_COUNTER_DEFINITION(ndr, "counters", &r->counters[cntr_counters_0]);
	}
	ndr->depth--;
	ndr->print(ndr, "%s: ARRAY(%d)", "instances", (int)r->NumInstances);
	ndr->depth++;
	for (cntr_instances_0 = 0; cntr_instances_0 < (r->NumInstances); cntr_instances_0++) {
		ndr_print_PERF_INSTANCE_DEFINITION(ndr, "instances", &r->instances[cntr_instances_0]);
	}
	ndr->depth--;
	ndr_print_PERF_COUNTER_BLOCK(ndr, "counter_data", &r->counter_data);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_PERF_DATA_BLOCK(struct ndr_push *ndr, int ndr_flags, const struct PERF_DATA_BLOCK *r)
{
	uint32_t cntr_Signature_0;
	uint32_t cntr_objects_0;
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		for (cntr_Signature_0 = 0; cntr_Signature_0 < (4); cntr_Signature_0++) {
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->Signature[cntr_Signature_0]));
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->LittleEndian));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->Version));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->Revision));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->TotalByteLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->HeaderLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->NumObjectTypes));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->DefaultObject));
		NDR_CHECK(ndr_push_SYSTEMTIME(ndr, NDR_SCALARS, &r->SystemTime));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->Padding));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->PerfTime));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->PerfFreq));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->PerfTime100nSec));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->SystemNameLength));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->SystemNameOffset));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->data));
		for (cntr_objects_0 = 0; cntr_objects_0 < (r->NumObjectTypes); cntr_objects_0++) {
			NDR_CHECK(ndr_push_PERF_OBJECT_TYPE(ndr, NDR_SCALARS, &r->objects[cntr_objects_0]));
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->data) {
			NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, *r->data));
		}
		for (cntr_objects_0 = 0; cntr_objects_0 < (r->NumObjectTypes); cntr_objects_0++) {
			NDR_CHECK(ndr_push_PERF_OBJECT_TYPE(ndr, NDR_BUFFERS, &r->objects[cntr_objects_0]));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_PERF_DATA_BLOCK(struct ndr_pull *ndr, int ndr_flags, struct PERF_DATA_BLOCK *r)
{
	uint32_t size_Signature_0 = 0;
	uint32_t cntr_Signature_0;
	uint32_t _ptr_data;
	TALLOC_CTX *_mem_save_data_0 = NULL;
	uint32_t size_objects_0 = 0;
	uint32_t cntr_objects_0;
	TALLOC_CTX *_mem_save_objects_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		size_Signature_0 = 4;
		for (cntr_Signature_0 = 0; cntr_Signature_0 < (size_Signature_0); cntr_Signature_0++) {
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->Signature[cntr_Signature_0]));
		}
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->LittleEndian));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->Version));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->Revision));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->TotalByteLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->HeaderLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->NumObjectTypes));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->DefaultObject));
		NDR_CHECK(ndr_pull_SYSTEMTIME(ndr, NDR_SCALARS, &r->SystemTime));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->Padding));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->PerfTime));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->PerfFreq));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->PerfTime100nSec));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->SystemNameLength));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->SystemNameOffset));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_data));
		if (_ptr_data) {
			NDR_PULL_ALLOC(ndr, r->data);
		} else {
			r->data = NULL;
		}
		size_objects_0 = r->NumObjectTypes;
		NDR_PULL_ALLOC_N(ndr, r->objects, size_objects_0);
		_mem_save_objects_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->objects, 0);
		for (cntr_objects_0 = 0; cntr_objects_0 < (size_objects_0); cntr_objects_0++) {
			NDR_CHECK(ndr_pull_PERF_OBJECT_TYPE(ndr, NDR_SCALARS, &r->objects[cntr_objects_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_objects_0, 0);
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->data) {
			_mem_save_data_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->data, 0);
			NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, r->data));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_data_0, 0);
		}
		size_objects_0 = r->NumObjectTypes;
		_mem_save_objects_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->objects, 0);
		for (cntr_objects_0 = 0; cntr_objects_0 < (size_objects_0); cntr_objects_0++) {
			NDR_CHECK(ndr_pull_PERF_OBJECT_TYPE(ndr, NDR_BUFFERS, &r->objects[cntr_objects_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_objects_0, 0);
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_PERF_DATA_BLOCK(struct ndr_print *ndr, const char *name, const struct PERF_DATA_BLOCK *r)
{
	uint32_t cntr_Signature_0;
	uint32_t cntr_objects_0;
	ndr_print_struct(ndr, name, "PERF_DATA_BLOCK");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr->print(ndr, "%s: ARRAY(%d)", "Signature", (int)4);
	ndr->depth++;
	for (cntr_Signature_0 = 0; cntr_Signature_0 < (4); cntr_Signature_0++) {
		ndr_print_uint16(ndr, "Signature", r->Signature[cntr_Signature_0]);
	}
	ndr->depth--;
	ndr_print_uint32(ndr, "LittleEndian", r->LittleEndian);
	ndr_print_uint32(ndr, "Version", r->Version);
	ndr_print_uint32(ndr, "Revision", r->Revision);
	ndr_print_uint32(ndr, "TotalByteLength", r->TotalByteLength);
	ndr_print_uint32(ndr, "HeaderLength", r->HeaderLength);
	ndr_print_uint32(ndr, "NumObjectTypes", r->NumObjectTypes);
	ndr_print_uint32(ndr, "DefaultObject", r->DefaultObject);
	ndr_print_SYSTEMTIME(ndr, "SystemTime", &r->SystemTime);
	ndr_print_uint32(ndr, "Padding", r->Padding);
	ndr_print_hyper(ndr, "PerfTime", r->PerfTime);
	ndr_print_hyper(ndr, "PerfFreq", r->PerfFreq);
	ndr_print_hyper(ndr, "PerfTime100nSec", r->PerfTime100nSec);
	ndr_print_uint32(ndr, "SystemNameLength", r->SystemNameLength);
	ndr_print_uint32(ndr, "SystemNameOffset", r->SystemNameOffset);
	ndr_print_ptr(ndr, "data", r->data);
	ndr->depth++;
	if (r->data) {
		ndr_print_uint8(ndr, "data", *r->data);
	}
	ndr->depth--;
	ndr->print(ndr, "%s: ARRAY(%d)", "objects", (int)r->NumObjectTypes);
	ndr->depth++;
	for (cntr_objects_0 = 0; cntr_objects_0 < (r->NumObjectTypes); cntr_objects_0++) {
		ndr_print_PERF_OBJECT_TYPE(ndr, "objects", &r->objects[cntr_objects_0]);
	}
	ndr->depth--;
	ndr->depth--;
}


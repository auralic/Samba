/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_mdssvc.h"

#include "librpc/gen_ndr/ndr_misc.h"
_PUBLIC_ enum ndr_err_code ndr_push_mdssvc_blob(struct ndr_push *ndr, int ndr_flags, const struct mdssvc_blob *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->length));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->spotlight_blob));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->spotlight_blob) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->size));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->length));
			NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->spotlight_blob, r->length));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_mdssvc_blob(struct ndr_pull *ndr, int ndr_flags, struct mdssvc_blob *r)
{
	uint32_t _ptr_spotlight_blob;
	uint32_t size_spotlight_blob_1 = 0;
	uint32_t length_spotlight_blob_1 = 0;
	TALLOC_CTX *_mem_save_spotlight_blob_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->length));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_spotlight_blob));
		if (_ptr_spotlight_blob) {
			NDR_PULL_ALLOC(ndr, r->spotlight_blob);
		} else {
			r->spotlight_blob = NULL;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->spotlight_blob) {
			_mem_save_spotlight_blob_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->spotlight_blob, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->spotlight_blob));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->spotlight_blob));
			size_spotlight_blob_1 = ndr_get_array_size(ndr, &r->spotlight_blob);
			length_spotlight_blob_1 = ndr_get_array_length(ndr, &r->spotlight_blob);
			if (length_spotlight_blob_1 > size_spotlight_blob_1) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_spotlight_blob_1, length_spotlight_blob_1);
			}
			NDR_PULL_ALLOC_N(ndr, r->spotlight_blob, size_spotlight_blob_1);
			NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->spotlight_blob, length_spotlight_blob_1));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_spotlight_blob_0, 0);
		}
		if (r->spotlight_blob) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->spotlight_blob, r->size));
		}
		if (r->spotlight_blob) {
			NDR_CHECK(ndr_check_array_length(ndr, (void*)&r->spotlight_blob, r->length));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_mdssvc_blob(struct ndr_print *ndr, const char *name, const struct mdssvc_blob *r)
{
	ndr_print_struct(ndr, name, "mdssvc_blob");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "length", r->length);
	ndr_print_uint32(ndr, "size", r->size);
	ndr_print_ptr(ndr, "spotlight_blob", r->spotlight_blob);
	ndr->depth++;
	if (r->spotlight_blob) {
		ndr_print_array_uint8(ndr, "spotlight_blob", r->spotlight_blob, r->length);
	}
	ndr->depth--;
	ndr->depth--;
}

static enum ndr_err_code ndr_push_mdssvc_open(struct ndr_push *ndr, int flags, const struct mdssvc_open *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		if (r->in.device_id == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->in.unkn2 == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->in.unkn3 == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->in.device_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->in.unkn2));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->in.unkn3));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 1025));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->in.share_mount_path, CH_UTF8)));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->in.share_mount_path, ndr_charset_length(r->in.share_mount_path, CH_UTF8), sizeof(uint8_t), CH_UTF8));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 1025));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->in.share_name, CH_UTF8)));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->in.share_name, ndr_charset_length(r->in.share_name, CH_UTF8), sizeof(uint8_t), CH_UTF8));
	}
	if (flags & NDR_OUT) {
		if (r->out.device_id == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.unkn2 == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.unkn3 == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.handle == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.device_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.unkn2));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.unkn3));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 1025));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->out.share_path, CH_UTF8)));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->out.share_path, ndr_charset_length(r->out.share_path, CH_UTF8), sizeof(uint8_t), CH_UTF8));
		NDR_CHECK(ndr_push_policy_handle(ndr, NDR_SCALARS, r->out.handle));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_mdssvc_open(struct ndr_pull *ndr, int flags, struct mdssvc_open *r)
{
	uint32_t size_share_mount_path_0 = 0;
	uint32_t length_share_mount_path_0 = 0;
	uint32_t size_share_name_0 = 0;
	uint32_t length_share_name_0 = 0;
	uint32_t size_share_path_0 = 0;
	uint32_t length_share_path_0 = 0;
	TALLOC_CTX *_mem_save_device_id_0 = NULL;
	TALLOC_CTX *_mem_save_unkn2_0 = NULL;
	TALLOC_CTX *_mem_save_unkn3_0 = NULL;
	TALLOC_CTX *_mem_save_handle_0 = NULL;
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.device_id);
		}
		_mem_save_device_id_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.device_id, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->in.device_id));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_device_id_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.unkn2);
		}
		_mem_save_unkn2_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.unkn2, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->in.unkn2));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unkn2_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->in.unkn3);
		}
		_mem_save_unkn3_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->in.unkn3, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->in.unkn3));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unkn3_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_array_size(ndr, &r->in.share_mount_path));
		NDR_CHECK(ndr_pull_array_length(ndr, &r->in.share_mount_path));
		size_share_mount_path_0 = ndr_get_array_size(ndr, &r->in.share_mount_path);
		length_share_mount_path_0 = ndr_get_array_length(ndr, &r->in.share_mount_path);
		if (length_share_mount_path_0 > size_share_mount_path_0) {
			return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_share_mount_path_0, length_share_mount_path_0);
		}
		NDR_CHECK(ndr_check_string_terminator(ndr, length_share_mount_path_0, sizeof(uint8_t)));
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->in.share_mount_path, length_share_mount_path_0, sizeof(uint8_t), CH_UTF8));
		NDR_CHECK(ndr_pull_array_size(ndr, &r->in.share_name));
		NDR_CHECK(ndr_pull_array_length(ndr, &r->in.share_name));
		size_share_name_0 = ndr_get_array_size(ndr, &r->in.share_name);
		length_share_name_0 = ndr_get_array_length(ndr, &r->in.share_name);
		if (length_share_name_0 > size_share_name_0) {
			return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_share_name_0, length_share_name_0);
		}
		NDR_CHECK(ndr_check_string_terminator(ndr, length_share_name_0, sizeof(uint8_t)));
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->in.share_name, length_share_name_0, sizeof(uint8_t), CH_UTF8));
		NDR_PULL_ALLOC(ndr, r->out.device_id);
		*r->out.device_id = *r->in.device_id;
		NDR_PULL_ALLOC(ndr, r->out.unkn2);
		*r->out.unkn2 = *r->in.unkn2;
		NDR_PULL_ALLOC(ndr, r->out.unkn3);
		*r->out.unkn3 = *r->in.unkn3;
		NDR_PULL_ALLOC(ndr, r->out.handle);
		ZERO_STRUCTP(r->out.handle);
		if (r->in.share_mount_path) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->in.share_mount_path, 1025));
		}
		if (r->in.share_name) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->in.share_name, 1025));
		}
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.device_id);
		}
		_mem_save_device_id_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.device_id, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.device_id));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_device_id_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.unkn2);
		}
		_mem_save_unkn2_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.unkn2, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.unkn2));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unkn2_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.unkn3);
		}
		_mem_save_unkn3_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.unkn3, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.unkn3));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unkn3_0, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_array_size(ndr, &r->out.share_path));
		NDR_CHECK(ndr_pull_array_length(ndr, &r->out.share_path));
		size_share_path_0 = ndr_get_array_size(ndr, &r->out.share_path);
		length_share_path_0 = ndr_get_array_length(ndr, &r->out.share_path);
		if (length_share_path_0 > size_share_path_0) {
			return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_share_path_0, length_share_path_0);
		}
		NDR_CHECK(ndr_check_string_terminator(ndr, length_share_path_0, sizeof(uint8_t)));
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->out.share_path, length_share_path_0, sizeof(uint8_t), CH_UTF8));
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.handle);
		}
		_mem_save_handle_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.handle, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_policy_handle(ndr, NDR_SCALARS, r->out.handle));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_handle_0, LIBNDR_FLAG_REF_ALLOC);
		if (r->out.share_path) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->out.share_path, 1025));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_mdssvc_open(struct ndr_print *ndr, const char *name, int flags, const struct mdssvc_open *r)
{
	ndr_print_struct(ndr, name, "mdssvc_open");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "mdssvc_open");
		ndr->depth++;
		ndr_print_ptr(ndr, "device_id", r->in.device_id);
		ndr->depth++;
		ndr_print_uint32(ndr, "device_id", *r->in.device_id);
		ndr->depth--;
		ndr_print_ptr(ndr, "unkn2", r->in.unkn2);
		ndr->depth++;
		ndr_print_uint32(ndr, "unkn2", *r->in.unkn2);
		ndr->depth--;
		ndr_print_ptr(ndr, "unkn3", r->in.unkn3);
		ndr->depth++;
		ndr_print_uint32(ndr, "unkn3", *r->in.unkn3);
		ndr->depth--;
		ndr_print_string(ndr, "share_mount_path", r->in.share_mount_path);
		ndr_print_string(ndr, "share_name", r->in.share_name);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "mdssvc_open");
		ndr->depth++;
		ndr_print_ptr(ndr, "device_id", r->out.device_id);
		ndr->depth++;
		ndr_print_uint32(ndr, "device_id", *r->out.device_id);
		ndr->depth--;
		ndr_print_ptr(ndr, "unkn2", r->out.unkn2);
		ndr->depth++;
		ndr_print_uint32(ndr, "unkn2", *r->out.unkn2);
		ndr->depth--;
		ndr_print_ptr(ndr, "unkn3", r->out.unkn3);
		ndr->depth++;
		ndr_print_uint32(ndr, "unkn3", *r->out.unkn3);
		ndr->depth--;
		ndr_print_string(ndr, "share_path", r->out.share_path);
		ndr_print_ptr(ndr, "handle", r->out.handle);
		ndr->depth++;
		ndr_print_policy_handle(ndr, "handle", r->out.handle);
		ndr->depth--;
		ndr->depth--;
	}
	ndr->depth--;
}

static enum ndr_err_code ndr_push_mdssvc_unknown1(struct ndr_push *ndr, int flags, const struct mdssvc_unknown1 *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_policy_handle(ndr, NDR_SCALARS, &r->in.handle));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn1));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.device_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn3));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.uid));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.gid));
	}
	if (flags & NDR_OUT) {
		if (r->out.status == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.flags == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.unkn7 == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.status));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.unkn7));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_mdssvc_unknown1(struct ndr_pull *ndr, int flags, struct mdssvc_unknown1 *r)
{
	TALLOC_CTX *_mem_save_status_0 = NULL;
	TALLOC_CTX *_mem_save_flags_0 = NULL;
	TALLOC_CTX *_mem_save_unkn7_0 = NULL;
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_policy_handle(ndr, NDR_SCALARS, &r->in.handle));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn1));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.device_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn3));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.uid));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.gid));
		NDR_PULL_ALLOC(ndr, r->out.status);
		ZERO_STRUCTP(r->out.status);
		NDR_PULL_ALLOC(ndr, r->out.flags);
		ZERO_STRUCTP(r->out.flags);
		NDR_PULL_ALLOC(ndr, r->out.unkn7);
		ZERO_STRUCTP(r->out.unkn7);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.status);
		}
		_mem_save_status_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.status, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.status));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_status_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.flags);
		}
		_mem_save_flags_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.flags, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.flags));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_flags_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.unkn7);
		}
		_mem_save_unkn7_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.unkn7, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.unkn7));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unkn7_0, LIBNDR_FLAG_REF_ALLOC);
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_mdssvc_unknown1(struct ndr_print *ndr, const char *name, int flags, const struct mdssvc_unknown1 *r)
{
	ndr_print_struct(ndr, name, "mdssvc_unknown1");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "mdssvc_unknown1");
		ndr->depth++;
		ndr_print_policy_handle(ndr, "handle", &r->in.handle);
		ndr_print_uint32(ndr, "unkn1", r->in.unkn1);
		ndr_print_uint32(ndr, "device_id", r->in.device_id);
		ndr_print_uint32(ndr, "unkn3", r->in.unkn3);
		ndr_print_uint32(ndr, "unkn4", r->in.unkn4);
		ndr_print_uint32(ndr, "uid", r->in.uid);
		ndr_print_uint32(ndr, "gid", r->in.gid);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "mdssvc_unknown1");
		ndr->depth++;
		ndr_print_ptr(ndr, "status", r->out.status);
		ndr->depth++;
		ndr_print_uint32(ndr, "status", *r->out.status);
		ndr->depth--;
		ndr_print_ptr(ndr, "flags", r->out.flags);
		ndr->depth++;
		ndr_print_uint32(ndr, "flags", *r->out.flags);
		ndr->depth--;
		ndr_print_ptr(ndr, "unkn7", r->out.unkn7);
		ndr->depth++;
		ndr_print_uint32(ndr, "unkn7", *r->out.unkn7);
		ndr->depth--;
		ndr->depth--;
	}
	ndr->depth--;
}

static enum ndr_err_code ndr_push_mdssvc_cmd(struct ndr_push *ndr, int flags, const struct mdssvc_cmd *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_policy_handle(ndr, NDR_SCALARS, &r->in.handle));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn1));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.device_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn3));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.flags));
		NDR_CHECK(ndr_push_mdssvc_blob(ndr, NDR_SCALARS|NDR_BUFFERS, &r->in.request_blob));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn5));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.max_fragment_size1));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn6));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.max_fragment_size2));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn7));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn8));
	}
	if (flags & NDR_OUT) {
		if (r->out.status == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.response_blob == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.unkn9 == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.status));
		NDR_CHECK(ndr_push_mdssvc_blob(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.response_blob));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.unkn9));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_mdssvc_cmd(struct ndr_pull *ndr, int flags, struct mdssvc_cmd *r)
{
	TALLOC_CTX *_mem_save_status_0 = NULL;
	TALLOC_CTX *_mem_save_response_blob_0 = NULL;
	TALLOC_CTX *_mem_save_unkn9_0 = NULL;
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_policy_handle(ndr, NDR_SCALARS, &r->in.handle));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn1));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.device_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn3));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.flags));
		NDR_CHECK(ndr_pull_mdssvc_blob(ndr, NDR_SCALARS|NDR_BUFFERS, &r->in.request_blob));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn5));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.max_fragment_size1));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn6));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.max_fragment_size2));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn7));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn8));
		NDR_PULL_ALLOC(ndr, r->out.status);
		ZERO_STRUCTP(r->out.status);
		NDR_PULL_ALLOC(ndr, r->out.response_blob);
		ZERO_STRUCTP(r->out.response_blob);
		NDR_PULL_ALLOC(ndr, r->out.unkn9);
		ZERO_STRUCTP(r->out.unkn9);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.status);
		}
		_mem_save_status_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.status, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.status));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_status_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.response_blob);
		}
		_mem_save_response_blob_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.response_blob, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_mdssvc_blob(ndr, NDR_SCALARS|NDR_BUFFERS, r->out.response_blob));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_response_blob_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.unkn9);
		}
		_mem_save_unkn9_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.unkn9, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.unkn9));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_unkn9_0, LIBNDR_FLAG_REF_ALLOC);
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_mdssvc_cmd(struct ndr_print *ndr, const char *name, int flags, const struct mdssvc_cmd *r)
{
	ndr_print_struct(ndr, name, "mdssvc_cmd");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "mdssvc_cmd");
		ndr->depth++;
		ndr_print_policy_handle(ndr, "handle", &r->in.handle);
		ndr_print_uint32(ndr, "unkn1", r->in.unkn1);
		ndr_print_uint32(ndr, "device_id", r->in.device_id);
		ndr_print_uint32(ndr, "unkn3", r->in.unkn3);
		ndr_print_uint32(ndr, "unkn4", r->in.unkn4);
		ndr_print_uint32(ndr, "flags", r->in.flags);
		ndr_print_mdssvc_blob(ndr, "request_blob", &r->in.request_blob);
		ndr_print_uint32(ndr, "unkn5", r->in.unkn5);
		ndr_print_uint32(ndr, "max_fragment_size1", r->in.max_fragment_size1);
		ndr_print_uint32(ndr, "unkn6", r->in.unkn6);
		ndr_print_uint32(ndr, "max_fragment_size2", r->in.max_fragment_size2);
		ndr_print_uint32(ndr, "unkn7", r->in.unkn7);
		ndr_print_uint32(ndr, "unkn8", r->in.unkn8);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "mdssvc_cmd");
		ndr->depth++;
		ndr_print_ptr(ndr, "status", r->out.status);
		ndr->depth++;
		ndr_print_uint32(ndr, "status", *r->out.status);
		ndr->depth--;
		ndr_print_ptr(ndr, "response_blob", r->out.response_blob);
		ndr->depth++;
		ndr_print_mdssvc_blob(ndr, "response_blob", r->out.response_blob);
		ndr->depth--;
		ndr_print_ptr(ndr, "unkn9", r->out.unkn9);
		ndr->depth++;
		ndr_print_uint32(ndr, "unkn9", *r->out.unkn9);
		ndr->depth--;
		ndr->depth--;
	}
	ndr->depth--;
}

static enum ndr_err_code ndr_push_mdssvc_close(struct ndr_push *ndr, int flags, const struct mdssvc_close *r)
{
	NDR_PUSH_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_policy_handle(ndr, NDR_SCALARS, &r->in.in_handle));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn1));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.device_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn2));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->in.unkn3));
	}
	if (flags & NDR_OUT) {
		if (r->out.out_handle == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		if (r->out.status == NULL) {
			return ndr_push_error(ndr, NDR_ERR_INVALID_POINTER, "NULL [ref] pointer");
		}
		NDR_CHECK(ndr_push_policy_handle(ndr, NDR_SCALARS, r->out.out_handle));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, *r->out.status));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_mdssvc_close(struct ndr_pull *ndr, int flags, struct mdssvc_close *r)
{
	TALLOC_CTX *_mem_save_out_handle_0 = NULL;
	TALLOC_CTX *_mem_save_status_0 = NULL;
	NDR_PULL_CHECK_FN_FLAGS(ndr, flags);
	if (flags & NDR_IN) {
		ZERO_STRUCT(r->out);

		NDR_CHECK(ndr_pull_policy_handle(ndr, NDR_SCALARS, &r->in.in_handle));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn1));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.device_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn2));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->in.unkn3));
		NDR_PULL_ALLOC(ndr, r->out.out_handle);
		ZERO_STRUCTP(r->out.out_handle);
		NDR_PULL_ALLOC(ndr, r->out.status);
		ZERO_STRUCTP(r->out.status);
	}
	if (flags & NDR_OUT) {
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.out_handle);
		}
		_mem_save_out_handle_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.out_handle, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_policy_handle(ndr, NDR_SCALARS, r->out.out_handle));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_out_handle_0, LIBNDR_FLAG_REF_ALLOC);
		if (ndr->flags & LIBNDR_FLAG_REF_ALLOC) {
			NDR_PULL_ALLOC(ndr, r->out.status);
		}
		_mem_save_status_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->out.status, LIBNDR_FLAG_REF_ALLOC);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, r->out.status));
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_status_0, LIBNDR_FLAG_REF_ALLOC);
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_mdssvc_close(struct ndr_print *ndr, const char *name, int flags, const struct mdssvc_close *r)
{
	ndr_print_struct(ndr, name, "mdssvc_close");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "mdssvc_close");
		ndr->depth++;
		ndr_print_policy_handle(ndr, "in_handle", &r->in.in_handle);
		ndr_print_uint32(ndr, "unkn1", r->in.unkn1);
		ndr_print_uint32(ndr, "device_id", r->in.device_id);
		ndr_print_uint32(ndr, "unkn2", r->in.unkn2);
		ndr_print_uint32(ndr, "unkn3", r->in.unkn3);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "mdssvc_close");
		ndr->depth++;
		ndr_print_ptr(ndr, "out_handle", r->out.out_handle);
		ndr->depth++;
		ndr_print_policy_handle(ndr, "out_handle", r->out.out_handle);
		ndr->depth--;
		ndr_print_ptr(ndr, "status", r->out.status);
		ndr->depth++;
		ndr_print_uint32(ndr, "status", *r->out.status);
		ndr->depth--;
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct ndr_interface_call mdssvc_calls[] = {
	{
		"mdssvc_open",
		sizeof(struct mdssvc_open),
		(ndr_push_flags_fn_t) ndr_push_mdssvc_open,
		(ndr_pull_flags_fn_t) ndr_pull_mdssvc_open,
		(ndr_print_function_t) ndr_print_mdssvc_open,
		{ 0, NULL },
		{ 0, NULL },
	},
	{
		"mdssvc_unknown1",
		sizeof(struct mdssvc_unknown1),
		(ndr_push_flags_fn_t) ndr_push_mdssvc_unknown1,
		(ndr_pull_flags_fn_t) ndr_pull_mdssvc_unknown1,
		(ndr_print_function_t) ndr_print_mdssvc_unknown1,
		{ 0, NULL },
		{ 0, NULL },
	},
	{
		"mdssvc_cmd",
		sizeof(struct mdssvc_cmd),
		(ndr_push_flags_fn_t) ndr_push_mdssvc_cmd,
		(ndr_pull_flags_fn_t) ndr_pull_mdssvc_cmd,
		(ndr_print_function_t) ndr_print_mdssvc_cmd,
		{ 0, NULL },
		{ 0, NULL },
	},
	{
		"mdssvc_close",
		sizeof(struct mdssvc_close),
		(ndr_push_flags_fn_t) ndr_push_mdssvc_close,
		(ndr_pull_flags_fn_t) ndr_pull_mdssvc_close,
		(ndr_print_function_t) ndr_print_mdssvc_close,
		{ 0, NULL },
		{ 0, NULL },
	},
	{ NULL, 0, NULL, NULL, NULL }
};

static const char * const mdssvc_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\mdssvc]", 
	"ncalrpc:", 
};

static const struct ndr_interface_string_array mdssvc_endpoints = {
	.count	= 2,
	.names	= mdssvc_endpoint_strings
};

static const char * const mdssvc_authservice_strings[] = {
	"host", 
};

static const struct ndr_interface_string_array mdssvc_authservices = {
	.count	= 1,
	.names	= mdssvc_authservice_strings
};


const struct ndr_interface_table ndr_table_mdssvc = {
	.name		= "mdssvc",
	.syntax_id	= {
		{0x885d85fb,0xc754,0x4062,{0xa0,0xe7},{0x68,0x72,0xce,0x00,0x64,0xf4}},
		NDR_MDSSVC_VERSION
	},
	.helpstring	= NDR_MDSSVC_HELPSTRING,
	.num_calls	= 4,
	.calls		= mdssvc_calls,
	.endpoints	= &mdssvc_endpoints,
	.authservices	= &mdssvc_authservices
};


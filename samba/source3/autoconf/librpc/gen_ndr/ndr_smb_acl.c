/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_smb_acl.h"

static enum ndr_err_code ndr_push_smb_acl_tag_t(struct ndr_push *ndr, int ndr_flags, enum smb_acl_tag_t r)
{
	NDR_CHECK(ndr_push_enum_uint1632(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_smb_acl_tag_t(struct ndr_pull *ndr, int ndr_flags, enum smb_acl_tag_t *r)
{
	uint16_t v;
	NDR_CHECK(ndr_pull_enum_uint1632(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb_acl_tag_t(struct ndr_print *ndr, const char *name, enum smb_acl_tag_t r)
{
	const char *val = NULL;

	switch (r) {
		case SMB_ACL_TAG_INVALID: val = "SMB_ACL_TAG_INVALID"; break;
		case SMB_ACL_USER: val = "SMB_ACL_USER"; break;
		case SMB_ACL_USER_OBJ: val = "SMB_ACL_USER_OBJ"; break;
		case SMB_ACL_GROUP: val = "SMB_ACL_GROUP"; break;
		case SMB_ACL_GROUP_OBJ: val = "SMB_ACL_GROUP_OBJ"; break;
		case SMB_ACL_OTHER: val = "SMB_ACL_OTHER"; break;
		case SMB_ACL_MASK: val = "SMB_ACL_MASK"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}

static enum ndr_err_code ndr_push_smb_acl_user(struct ndr_push *ndr, int ndr_flags, const struct smb_acl_user *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_uid_t(ndr, NDR_SCALARS, r->uid));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_smb_acl_user(struct ndr_pull *ndr, int ndr_flags, struct smb_acl_user *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_uid_t(ndr, NDR_SCALARS, &r->uid));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb_acl_user(struct ndr_print *ndr, const char *name, const struct smb_acl_user *r)
{
	ndr_print_struct(ndr, name, "smb_acl_user");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uid_t(ndr, "uid", r->uid);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_smb_acl_group(struct ndr_push *ndr, int ndr_flags, const struct smb_acl_group *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_gid_t(ndr, NDR_SCALARS, r->gid));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_smb_acl_group(struct ndr_pull *ndr, int ndr_flags, struct smb_acl_group *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_gid_t(ndr, NDR_SCALARS, &r->gid));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb_acl_group(struct ndr_print *ndr, const char *name, const struct smb_acl_group *r)
{
	ndr_print_struct(ndr, name, "smb_acl_group");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_gid_t(ndr, "gid", r->gid);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_smb_acl_entry_info(struct ndr_push *ndr, int ndr_flags, const union smb_acl_entry_info *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		NDR_CHECK(ndr_push_union_align(ndr, 8));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, level));
		NDR_CHECK(ndr_push_union_align(ndr, 8));
		switch (level) {
			case SMB_ACL_USER: {
				NDR_CHECK(ndr_push_smb_acl_user(ndr, NDR_SCALARS, &r->user));
			break; }

			case SMB_ACL_USER_OBJ: {
			break; }

			case SMB_ACL_GROUP: {
				NDR_CHECK(ndr_push_smb_acl_group(ndr, NDR_SCALARS, &r->group));
			break; }

			case SMB_ACL_GROUP_OBJ: {
			break; }

			case SMB_ACL_OTHER: {
			break; }

			case SMB_ACL_MASK: {
			break; }

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		switch (level) {
			case SMB_ACL_USER:
			break;

			case SMB_ACL_USER_OBJ:
			break;

			case SMB_ACL_GROUP:
			break;

			case SMB_ACL_GROUP_OBJ:
			break;

			case SMB_ACL_OTHER:
			break;

			case SMB_ACL_MASK:
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_smb_acl_entry_info(struct ndr_pull *ndr, int ndr_flags, union smb_acl_entry_info *r)
{
	uint32_t level;
	uint16_t _level;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		level = ndr_pull_get_switch_value(ndr, r);
		NDR_CHECK(ndr_pull_union_align(ndr, 8));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &_level));
		if (_level != level) {
			return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u for r at %s", _level, __location__);
		}
		NDR_CHECK(ndr_pull_union_align(ndr, 8));
		switch (level) {
			case SMB_ACL_USER: {
				NDR_CHECK(ndr_pull_smb_acl_user(ndr, NDR_SCALARS, &r->user));
			break; }

			case SMB_ACL_USER_OBJ: {
			break; }

			case SMB_ACL_GROUP: {
				NDR_CHECK(ndr_pull_smb_acl_group(ndr, NDR_SCALARS, &r->group));
			break; }

			case SMB_ACL_GROUP_OBJ: {
			break; }

			case SMB_ACL_OTHER: {
			break; }

			case SMB_ACL_MASK: {
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		/* The token is not needed after this. */
		level = ndr_pull_steal_switch_value(ndr, r);
		switch (level) {
			case SMB_ACL_USER:
			break;

			case SMB_ACL_USER_OBJ:
			break;

			case SMB_ACL_GROUP:
			break;

			case SMB_ACL_GROUP_OBJ:
			break;

			case SMB_ACL_OTHER:
			break;

			case SMB_ACL_MASK:
			break;

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb_acl_entry_info(struct ndr_print *ndr, const char *name, const union smb_acl_entry_info *r)
{
	uint32_t level;
	level = ndr_print_get_switch_value(ndr, r);
	ndr_print_union(ndr, name, level, "smb_acl_entry_info");
	switch (level) {
		case SMB_ACL_USER:
			ndr_print_smb_acl_user(ndr, "user", &r->user);
		break;

		case SMB_ACL_USER_OBJ:
		break;

		case SMB_ACL_GROUP:
			ndr_print_smb_acl_group(ndr, "group", &r->group);
		break;

		case SMB_ACL_GROUP_OBJ:
		break;

		case SMB_ACL_OTHER:
		break;

		case SMB_ACL_MASK:
		break;

		default:
			ndr_print_bad_level(ndr, name, level);
	}
}

static enum ndr_err_code ndr_push_smb_acl_entry(struct ndr_push *ndr, int ndr_flags, const struct smb_acl_entry *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_smb_acl_tag_t(ndr, NDR_SCALARS, r->a_type));
		NDR_CHECK(ndr_push_set_switch_value(ndr, &r->info, r->a_type));
		NDR_CHECK(ndr_push_smb_acl_entry_info(ndr, NDR_SCALARS, &r->info));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->a_perm));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_push_smb_acl_entry_info(ndr, NDR_BUFFERS, &r->info));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_smb_acl_entry(struct ndr_pull *ndr, int ndr_flags, struct smb_acl_entry *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_smb_acl_tag_t(ndr, NDR_SCALARS, &r->a_type));
		NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->info, r->a_type));
		NDR_CHECK(ndr_pull_smb_acl_entry_info(ndr, NDR_SCALARS, &r->info));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->a_perm));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_pull_smb_acl_entry_info(ndr, NDR_BUFFERS, &r->info));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb_acl_entry(struct ndr_print *ndr, const char *name, const struct smb_acl_entry *r)
{
	ndr_print_struct(ndr, name, "smb_acl_entry");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_smb_acl_tag_t(ndr, "a_type", r->a_type);
	ndr_print_set_switch_value(ndr, &r->info, r->a_type);
	ndr_print_smb_acl_entry_info(ndr, "info", &r->info);
	ndr_print_uint32(ndr, "a_perm", r->a_perm);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_smb_acl_t(struct ndr_push *ndr, int ndr_flags, const struct smb_acl_t *r)
{
	uint32_t cntr_acl_0;
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->count));
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_int32(ndr, NDR_SCALARS, r->count));
		NDR_CHECK(ndr_push_int32(ndr, NDR_SCALARS, 0));
		for (cntr_acl_0 = 0; cntr_acl_0 < (r->count); cntr_acl_0++) {
			NDR_CHECK(ndr_push_smb_acl_entry(ndr, NDR_SCALARS, &r->acl[cntr_acl_0]));
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		for (cntr_acl_0 = 0; cntr_acl_0 < (r->count); cntr_acl_0++) {
			NDR_CHECK(ndr_push_smb_acl_entry(ndr, NDR_BUFFERS, &r->acl[cntr_acl_0]));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_smb_acl_t(struct ndr_pull *ndr, int ndr_flags, struct smb_acl_t *r)
{
	uint32_t size_acl_0 = 0;
	uint32_t cntr_acl_0;
	TALLOC_CTX *_mem_save_acl_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_array_size(ndr, &r->acl));
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_int32(ndr, NDR_SCALARS, &r->count));
		NDR_CHECK(ndr_pull_int32(ndr, NDR_SCALARS, &r->next));
		size_acl_0 = ndr_get_array_size(ndr, &r->acl);
		NDR_PULL_ALLOC_N(ndr, r->acl, size_acl_0);
		_mem_save_acl_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->acl, 0);
		for (cntr_acl_0 = 0; cntr_acl_0 < (size_acl_0); cntr_acl_0++) {
			NDR_CHECK(ndr_pull_smb_acl_entry(ndr, NDR_SCALARS, &r->acl[cntr_acl_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_acl_0, 0);
		if (r->acl) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->acl, r->count));
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		size_acl_0 = ndr_get_array_size(ndr, &r->acl);
		_mem_save_acl_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->acl, 0);
		for (cntr_acl_0 = 0; cntr_acl_0 < (size_acl_0); cntr_acl_0++) {
			NDR_CHECK(ndr_pull_smb_acl_entry(ndr, NDR_BUFFERS, &r->acl[cntr_acl_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_acl_0, 0);
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb_acl_t(struct ndr_print *ndr, const char *name, const struct smb_acl_t *r)
{
	uint32_t cntr_acl_0;
	ndr_print_struct(ndr, name, "smb_acl_t");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_int32(ndr, "count", r->count);
	ndr_print_int32(ndr, "next", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?0:r->next);
	ndr->print(ndr, "%s: ARRAY(%d)", "acl", (int)r->count);
	ndr->depth++;
	for (cntr_acl_0 = 0; cntr_acl_0 < (r->count); cntr_acl_0++) {
		ndr_print_smb_acl_entry(ndr, "acl", &r->acl[cntr_acl_0]);
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_smb_acl_wrapper(struct ndr_push *ndr, int ndr_flags, const struct smb_acl_wrapper *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->access_acl));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->default_acl));
		NDR_CHECK(ndr_push_uid_t(ndr, NDR_SCALARS, r->owner));
		NDR_CHECK(ndr_push_gid_t(ndr, NDR_SCALARS, r->group));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->mode));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->access_acl) {
			NDR_CHECK(ndr_push_smb_acl_t(ndr, NDR_SCALARS|NDR_BUFFERS, r->access_acl));
		}
		if (r->default_acl) {
			NDR_CHECK(ndr_push_smb_acl_t(ndr, NDR_SCALARS|NDR_BUFFERS, r->default_acl));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_smb_acl_wrapper(struct ndr_pull *ndr, int ndr_flags, struct smb_acl_wrapper *r)
{
	uint32_t _ptr_access_acl;
	TALLOC_CTX *_mem_save_access_acl_0 = NULL;
	uint32_t _ptr_default_acl;
	TALLOC_CTX *_mem_save_default_acl_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_access_acl));
		if (_ptr_access_acl) {
			NDR_PULL_ALLOC(ndr, r->access_acl);
		} else {
			r->access_acl = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_default_acl));
		if (_ptr_default_acl) {
			NDR_PULL_ALLOC(ndr, r->default_acl);
		} else {
			r->default_acl = NULL;
		}
		NDR_CHECK(ndr_pull_uid_t(ndr, NDR_SCALARS, &r->owner));
		NDR_CHECK(ndr_pull_gid_t(ndr, NDR_SCALARS, &r->group));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->mode));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->access_acl) {
			_mem_save_access_acl_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->access_acl, 0);
			NDR_CHECK(ndr_pull_smb_acl_t(ndr, NDR_SCALARS|NDR_BUFFERS, r->access_acl));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_access_acl_0, 0);
		}
		if (r->default_acl) {
			_mem_save_default_acl_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->default_acl, 0);
			NDR_CHECK(ndr_pull_smb_acl_t(ndr, NDR_SCALARS|NDR_BUFFERS, r->default_acl));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_default_acl_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_smb_acl_wrapper(struct ndr_print *ndr, const char *name, const struct smb_acl_wrapper *r)
{
	ndr_print_struct(ndr, name, "smb_acl_wrapper");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_ptr(ndr, "access_acl", r->access_acl);
	ndr->depth++;
	if (r->access_acl) {
		ndr_print_smb_acl_t(ndr, "access_acl", r->access_acl);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "default_acl", r->default_acl);
	ndr->depth++;
	if (r->default_acl) {
		ndr_print_smb_acl_t(ndr, "default_acl", r->default_acl);
	}
	ndr->depth--;
	ndr_print_uid_t(ndr, "owner", r->owner);
	ndr_print_gid_t(ndr, "group", r->group);
	ndr_print_uint32(ndr, "mode", r->mode);
	ndr->depth--;
}


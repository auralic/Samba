/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_fsrvp_state.h"

_PUBLIC_ enum ndr_err_code ndr_push_fsrvp_state_smap(struct ndr_push *ndr, int ndr_flags, const struct fsrvp_state_smap *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->share_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->sc_share_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->sc_share_comment));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->is_exposed));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_fsrvp_state_smap(struct ndr_pull *ndr, int ndr_flags, struct fsrvp_state_smap *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->share_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->sc_share_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->sc_share_comment));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->is_exposed));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_fsrvp_state_smap(struct ndr_print *ndr, const char *name, const struct fsrvp_state_smap *r)
{
	ndr_print_struct(ndr, name, "fsrvp_state_smap");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	{
		uint32_t _flags_save_string = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
		ndr_print_string(ndr, "share_name", r->share_name);
		ndr->flags = _flags_save_string;
	}
	{
		uint32_t _flags_save_string = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
		ndr_print_string(ndr, "sc_share_name", r->sc_share_name);
		ndr->flags = _flags_save_string;
	}
	{
		uint32_t _flags_save_string = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
		ndr_print_string(ndr, "sc_share_comment", r->sc_share_comment);
		ndr->flags = _flags_save_string;
	}
	ndr_print_uint32(ndr, "is_exposed", r->is_exposed);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_fsrvp_state_sc(struct ndr_push *ndr, int ndr_flags, const struct fsrvp_state_sc *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->id_str));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->volume_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->sc_path));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_time_t(ndr, NDR_SCALARS, r->create_ts));
		NDR_CHECK(ndr_push_int32(ndr, NDR_SCALARS, r->smaps_count));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_fsrvp_state_sc(struct ndr_pull *ndr, int ndr_flags, struct fsrvp_state_sc *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->id_str));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->volume_name));
			ndr->flags = _flags_save_string;
		}
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->sc_path));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_time_t(ndr, NDR_SCALARS, &r->create_ts));
		NDR_CHECK(ndr_pull_int32(ndr, NDR_SCALARS, &r->smaps_count));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_fsrvp_state_sc(struct ndr_print *ndr, const char *name, const struct fsrvp_state_sc *r)
{
	ndr_print_struct(ndr, name, "fsrvp_state_sc");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	{
		uint32_t _flags_save_string = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
		ndr_print_string(ndr, "id_str", r->id_str);
		ndr->flags = _flags_save_string;
	}
	{
		uint32_t _flags_save_string = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
		ndr_print_string(ndr, "volume_name", r->volume_name);
		ndr->flags = _flags_save_string;
	}
	{
		uint32_t _flags_save_string = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
		ndr_print_string(ndr, "sc_path", r->sc_path);
		ndr->flags = _flags_save_string;
	}
	ndr_print_time_t(ndr, "create_ts", r->create_ts);
	ndr_print_int32(ndr, "smaps_count", r->smaps_count);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_fsrvp_state_sc_set(struct ndr_push *ndr, int ndr_flags, const struct fsrvp_state_sc_set *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->id_str));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_int32(ndr, NDR_SCALARS, r->state));
		NDR_CHECK(ndr_push_int32(ndr, NDR_SCALARS, r->context));
		NDR_CHECK(ndr_push_int32(ndr, NDR_SCALARS, r->scs_count));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_fsrvp_state_sc_set(struct ndr_pull *ndr, int ndr_flags, struct fsrvp_state_sc_set *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->id_str));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_int32(ndr, NDR_SCALARS, &r->state));
		NDR_CHECK(ndr_pull_int32(ndr, NDR_SCALARS, &r->context));
		NDR_CHECK(ndr_pull_int32(ndr, NDR_SCALARS, &r->scs_count));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_fsrvp_state_sc_set(struct ndr_print *ndr, const char *name, const struct fsrvp_state_sc_set *r)
{
	ndr_print_struct(ndr, name, "fsrvp_state_sc_set");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	{
		uint32_t _flags_save_string = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
		ndr_print_string(ndr, "id_str", r->id_str);
		ndr->flags = _flags_save_string;
	}
	ndr_print_int32(ndr, "state", r->state);
	ndr_print_int32(ndr, "context", r->context);
	ndr_print_int32(ndr, "scs_count", r->scs_count);
	ndr->depth--;
}

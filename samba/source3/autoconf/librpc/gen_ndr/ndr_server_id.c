/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_server_id.h"

_PUBLIC_ enum ndr_err_code ndr_push_server_id(struct ndr_push *ndr, int ndr_flags, const struct server_id *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->pid));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->task_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->vnn));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->unique_id));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_server_id(struct ndr_pull *ndr, int ndr_flags, struct server_id *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->pid));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->task_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->vnn));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->unique_id));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_server_id(struct ndr_print *ndr, const char *name, const struct server_id *r)
{
	ndr_print_struct(ndr, name, "server_id");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_hyper(ndr, "pid", r->pid);
	ndr_print_uint32(ndr, "task_id", r->task_id);
	ndr_print_uint32(ndr, "vnn", r->vnn);
	ndr_print_hyper(ndr, "unique_id", r->unique_id);
	ndr->depth--;
}


/*
 * Unix SMB/CIFS implementation.
 * server auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "ntdomain.h"
#include "autoconf/librpc/gen_ndr/srv_cab.h"

static bool api_decode_cab_file(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct decode_cab_file *r;

	call = &ndr_table_cab.calls[NDR_DECODE_CAB_FILE];

	r = talloc(talloc_tos(), struct decode_cab_file);
	if (r == NULL) {
		return false;
	}

	pull = ndr_pull_init_blob(&p->in_data.data, r);
	if (pull == NULL) {
		talloc_free(r);
		return false;
	}

	pull->flags |= LIBNDR_FLAG_REF_ALLOC;
	if (p->endian) {
		pull->flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	ndr_err = call->ndr_pull(pull, NDR_IN, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		talloc_free(r);
		return false;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(decode_cab_file, NDR_IN, r);
	}

	_decode_cab_file(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(decode_cab_file, NDR_OUT | NDR_SET_VALUES, r);
	}

	push = ndr_push_init_ctx(r);
	if (push == NULL) {
		talloc_free(r);
		return false;
	}

	/*
	 * carry over the pointer count to the reply in case we are
	 * using full pointer. See NDR specification for full pointers
	 */
	push->ptr_count = pull->ptr_count;

	ndr_err = call->ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		talloc_free(r);
		return false;
	}

	p->out_data.rdata = ndr_push_blob(push);
	talloc_steal(p->mem_ctx, p->out_data.rdata.data);

	talloc_free(r);

	return true;
}


/* Tables */
static const struct api_struct api_cab_cmds[] = 
{
	{"DECODE_CAB_FILE", NDR_DECODE_CAB_FILE, api_decode_cab_file},
};

const struct api_struct *cab_get_pipe_fns(int *n_fns)
{
	*n_fns = sizeof(api_cab_cmds) / sizeof(struct api_struct);
	return api_cab_cmds;
}

NTSTATUS rpc_cab_init(const struct rpc_srv_callbacks *rpc_srv_cb)
{
	return rpc_srv_register(SMB_RPC_INTERFACE_VERSION, "cab", "cab", &ndr_table_cab, api_cab_cmds, sizeof(api_cab_cmds) / sizeof(struct api_struct), rpc_srv_cb);
}

NTSTATUS rpc_cab_shutdown(void)
{
	return rpc_srv_unregister(&ndr_table_cab);
}
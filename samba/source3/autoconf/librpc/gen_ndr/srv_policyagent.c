/*
 * Unix SMB/CIFS implementation.
 * server auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "ntdomain.h"
#include "librpc/gen_ndr/srv_policyagent.h"

static bool api_policyagent_Dummy(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct policyagent_Dummy *r;

	call = &ndr_table_policyagent.calls[NDR_POLICYAGENT_DUMMY];

	r = talloc(talloc_tos(), struct policyagent_Dummy);
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
		NDR_PRINT_FUNCTION_DEBUG(policyagent_Dummy, NDR_IN, r);
	}

	r->out.result = _policyagent_Dummy(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(policyagent_Dummy, NDR_OUT | NDR_SET_VALUES, r);
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
static const struct api_struct api_policyagent_cmds[] = 
{
	{"POLICYAGENT_DUMMY", NDR_POLICYAGENT_DUMMY, api_policyagent_Dummy},
};

const struct api_struct *policyagent_get_pipe_fns(int *n_fns)
{
	*n_fns = sizeof(api_policyagent_cmds) / sizeof(struct api_struct);
	return api_policyagent_cmds;
}

NTSTATUS rpc_policyagent_init(const struct rpc_srv_callbacks *rpc_srv_cb)
{
	return rpc_srv_register(SMB_RPC_INTERFACE_VERSION, "policyagent", "policyagent", &ndr_table_policyagent, api_policyagent_cmds, sizeof(api_policyagent_cmds) / sizeof(struct api_struct), rpc_srv_cb);
}

NTSTATUS rpc_policyagent_shutdown(void)
{
	return rpc_srv_unregister(&ndr_table_policyagent);
}

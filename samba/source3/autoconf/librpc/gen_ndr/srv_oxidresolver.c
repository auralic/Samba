/*
 * Unix SMB/CIFS implementation.
 * server auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "ntdomain.h"
#include "librpc/gen_ndr/srv_oxidresolver.h"

static bool api_ResolveOxid(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct ResolveOxid *r;

	call = &ndr_table_IOXIDResolver.calls[NDR_RESOLVEOXID];

	r = talloc(talloc_tos(), struct ResolveOxid);
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
		NDR_PRINT_FUNCTION_DEBUG(ResolveOxid, NDR_IN, r);
	}

	ZERO_STRUCT(r->out);
	r->out.ppdsaOxidBindings = talloc_zero(r, struct DUALSTRINGARRAY *);
	if (r->out.ppdsaOxidBindings == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.pipidRemUnknown = talloc_zero(r, struct GUID);
	if (r->out.pipidRemUnknown == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.pAuthnHint = talloc_zero(r, uint32_t);
	if (r->out.pAuthnHint == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.result = _ResolveOxid(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(ResolveOxid, NDR_OUT | NDR_SET_VALUES, r);
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

static bool api_SimplePing(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct SimplePing *r;

	call = &ndr_table_IOXIDResolver.calls[NDR_SIMPLEPING];

	r = talloc(talloc_tos(), struct SimplePing);
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
		NDR_PRINT_FUNCTION_DEBUG(SimplePing, NDR_IN, r);
	}

	r->out.result = _SimplePing(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(SimplePing, NDR_OUT | NDR_SET_VALUES, r);
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

static bool api_ComplexPing(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct ComplexPing *r;

	call = &ndr_table_IOXIDResolver.calls[NDR_COMPLEXPING];

	r = talloc(talloc_tos(), struct ComplexPing);
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
		NDR_PRINT_FUNCTION_DEBUG(ComplexPing, NDR_IN, r);
	}

	ZERO_STRUCT(r->out);
	r->out.SetId = r->in.SetId;
	r->out.PingBackoffFactor = talloc_zero(r, uint16_t);
	if (r->out.PingBackoffFactor == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.result = _ComplexPing(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(ComplexPing, NDR_OUT | NDR_SET_VALUES, r);
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

static bool api_ServerAlive(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct ServerAlive *r;

	call = &ndr_table_IOXIDResolver.calls[NDR_SERVERALIVE];

	r = talloc(talloc_tos(), struct ServerAlive);
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
		NDR_PRINT_FUNCTION_DEBUG(ServerAlive, NDR_IN, r);
	}

	r->out.result = _ServerAlive(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(ServerAlive, NDR_OUT | NDR_SET_VALUES, r);
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

static bool api_ResolveOxid2(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct ResolveOxid2 *r;

	call = &ndr_table_IOXIDResolver.calls[NDR_RESOLVEOXID2];

	r = talloc(talloc_tos(), struct ResolveOxid2);
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
		NDR_PRINT_FUNCTION_DEBUG(ResolveOxid2, NDR_IN, r);
	}

	ZERO_STRUCT(r->out);
	r->out.pdsaOxidBindings = talloc_zero(r, struct DUALSTRINGARRAY *);
	if (r->out.pdsaOxidBindings == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.ipidRemUnknown = talloc_zero(r, struct GUID);
	if (r->out.ipidRemUnknown == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.AuthnHint = talloc_zero(r, uint32_t);
	if (r->out.AuthnHint == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.ComVersion = talloc_zero(r, struct COMVERSION);
	if (r->out.ComVersion == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.result = _ResolveOxid2(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(ResolveOxid2, NDR_OUT | NDR_SET_VALUES, r);
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

static bool api_ServerAlive2(struct pipes_struct *p)
{
	const struct ndr_interface_call *call;
	struct ndr_pull *pull;
	struct ndr_push *push;
	enum ndr_err_code ndr_err;
	struct ServerAlive2 *r;

	call = &ndr_table_IOXIDResolver.calls[NDR_SERVERALIVE2];

	r = talloc(talloc_tos(), struct ServerAlive2);
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
		NDR_PRINT_FUNCTION_DEBUG(ServerAlive2, NDR_IN, r);
	}

	ZERO_STRUCT(r->out);
	r->out.info = talloc_zero(r, struct COMINFO);
	if (r->out.info == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.dualstring = talloc_zero(r, struct DUALSTRINGARRAY *);
	if (r->out.dualstring == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.pReserved = talloc_zero(r, uint8_t);
	if (r->out.pReserved == NULL) {
		talloc_free(r);
		return false;
	}

	r->out.result = _ServerAlive2(p, r);

	if (p->fault_state) {
		talloc_free(r);
		/* Return true here, srv_pipe_hnd.c will take care */
		return true;
	}

	if (DEBUGLEVEL >= 10) {
		NDR_PRINT_FUNCTION_DEBUG(ServerAlive2, NDR_OUT | NDR_SET_VALUES, r);
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
static const struct api_struct api_IOXIDResolver_cmds[] = 
{
	{"RESOLVEOXID", NDR_RESOLVEOXID, api_ResolveOxid},
	{"SIMPLEPING", NDR_SIMPLEPING, api_SimplePing},
	{"COMPLEXPING", NDR_COMPLEXPING, api_ComplexPing},
	{"SERVERALIVE", NDR_SERVERALIVE, api_ServerAlive},
	{"RESOLVEOXID2", NDR_RESOLVEOXID2, api_ResolveOxid2},
	{"SERVERALIVE2", NDR_SERVERALIVE2, api_ServerAlive2},
};

const struct api_struct *IOXIDResolver_get_pipe_fns(int *n_fns)
{
	*n_fns = sizeof(api_IOXIDResolver_cmds) / sizeof(struct api_struct);
	return api_IOXIDResolver_cmds;
}

NTSTATUS rpc_IOXIDResolver_init(const struct rpc_srv_callbacks *rpc_srv_cb)
{
	return rpc_srv_register(SMB_RPC_INTERFACE_VERSION, "IOXIDResolver", "IOXIDResolver", &ndr_table_IOXIDResolver, api_IOXIDResolver_cmds, sizeof(api_IOXIDResolver_cmds) / sizeof(struct api_struct), rpc_srv_cb);
}

NTSTATUS rpc_IOXIDResolver_shutdown(void)
{
	return rpc_srv_unregister(&ndr_table_IOXIDResolver);
}

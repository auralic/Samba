/*
 * Unix SMB/CIFS implementation.
 * server auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "ntdomain.h"
#include "autoconf/librpc/gen_ndr/srv_leases_db.h"


/* Tables */
static const struct api_struct api_leases_db_cmds[] = 
{
};

const struct api_struct *leases_db_get_pipe_fns(int *n_fns)
{
	*n_fns = sizeof(api_leases_db_cmds) / sizeof(struct api_struct);
	return api_leases_db_cmds;
}

NTSTATUS rpc_leases_db_init(const struct rpc_srv_callbacks *rpc_srv_cb)
{
	return rpc_srv_register(SMB_RPC_INTERFACE_VERSION, "leases_db", "leases_db", &ndr_table_leases_db, api_leases_db_cmds, sizeof(api_leases_db_cmds) / sizeof(struct api_struct), rpc_srv_cb);
}

NTSTATUS rpc_leases_db_shutdown(void)
{
	return rpc_srv_unregister(&ndr_table_leases_db);
}

#include "autoconf/librpc/gen_ndr/ndr_leases_db.h"
#ifndef __SRV_LEASES_DB__
#define __SRV_LEASES_DB__
const struct api_struct *leases_db_get_pipe_fns(int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_leases_db_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_leases_db_shutdown(void);
#endif /* __SRV_LEASES_DB__ */

#include "autoconf/librpc/gen_ndr/ndr_secrets.h"
#ifndef __SRV_SECRETS__
#define __SRV_SECRETS__
const struct api_struct *secrets_get_pipe_fns(int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_secrets_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_secrets_shutdown(void);
#endif /* __SRV_SECRETS__ */

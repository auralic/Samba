#include "autoconf/librpc/gen_ndr/ndr_libnet_join.h"
#ifndef __SRV_LIBNETJOIN__
#define __SRV_LIBNETJOIN__
const struct api_struct *libnetjoin_get_pipe_fns(int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_libnetjoin_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_libnetjoin_shutdown(void);
#endif /* __SRV_LIBNETJOIN__ */

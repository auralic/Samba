#include "autoconf/librpc/gen_ndr/ndr_cab.h"
#ifndef __SRV_CAB__
#define __SRV_CAB__
void _decode_cab_file(struct pipes_struct *p, struct decode_cab_file *r);
const struct api_struct *cab_get_pipe_fns(int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_cab_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_cab_shutdown(void);
#endif /* __SRV_CAB__ */

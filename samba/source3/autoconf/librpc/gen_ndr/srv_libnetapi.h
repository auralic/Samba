#include "autoconf/librpc/gen_ndr/ndr_libnetapi.h"
#ifndef __SRV_LIBNETAPI__
#define __SRV_LIBNETAPI__
enum NET_API_STATUS _NetJoinDomain(struct pipes_struct *p, struct NetJoinDomain *r);
enum NET_API_STATUS _NetUnjoinDomain(struct pipes_struct *p, struct NetUnjoinDomain *r);
enum NET_API_STATUS _NetGetJoinInformation(struct pipes_struct *p, struct NetGetJoinInformation *r);
enum NET_API_STATUS _NetGetJoinableOUs(struct pipes_struct *p, struct NetGetJoinableOUs *r);
enum NET_API_STATUS _NetRenameMachineInDomain(struct pipes_struct *p, struct NetRenameMachineInDomain *r);
enum NET_API_STATUS _NetServerGetInfo(struct pipes_struct *p, struct NetServerGetInfo *r);
enum NET_API_STATUS _NetServerSetInfo(struct pipes_struct *p, struct NetServerSetInfo *r);
enum NET_API_STATUS _NetWkstaGetInfo(struct pipes_struct *p, struct NetWkstaGetInfo *r);
enum NET_API_STATUS _NetGetDCName(struct pipes_struct *p, struct NetGetDCName *r);
enum NET_API_STATUS _NetGetAnyDCName(struct pipes_struct *p, struct NetGetAnyDCName *r);
enum NET_API_STATUS _DsGetDcName(struct pipes_struct *p, struct DsGetDcName *r);
enum NET_API_STATUS _NetUserAdd(struct pipes_struct *p, struct NetUserAdd *r);
enum NET_API_STATUS _NetUserDel(struct pipes_struct *p, struct NetUserDel *r);
enum NET_API_STATUS _NetUserEnum(struct pipes_struct *p, struct NetUserEnum *r);
enum NET_API_STATUS _NetUserChangePassword(struct pipes_struct *p, struct NetUserChangePassword *r);
enum NET_API_STATUS _NetUserGetInfo(struct pipes_struct *p, struct NetUserGetInfo *r);
enum NET_API_STATUS _NetUserSetInfo(struct pipes_struct *p, struct NetUserSetInfo *r);
enum NET_API_STATUS _NetUserGetGroups(struct pipes_struct *p, struct NetUserGetGroups *r);
enum NET_API_STATUS _NetUserSetGroups(struct pipes_struct *p, struct NetUserSetGroups *r);
enum NET_API_STATUS _NetUserGetLocalGroups(struct pipes_struct *p, struct NetUserGetLocalGroups *r);
enum NET_API_STATUS _NetUserModalsGet(struct pipes_struct *p, struct NetUserModalsGet *r);
enum NET_API_STATUS _NetUserModalsSet(struct pipes_struct *p, struct NetUserModalsSet *r);
enum NET_API_STATUS _NetQueryDisplayInformation(struct pipes_struct *p, struct NetQueryDisplayInformation *r);
enum NET_API_STATUS _NetGroupAdd(struct pipes_struct *p, struct NetGroupAdd *r);
enum NET_API_STATUS _NetGroupDel(struct pipes_struct *p, struct NetGroupDel *r);
enum NET_API_STATUS _NetGroupEnum(struct pipes_struct *p, struct NetGroupEnum *r);
enum NET_API_STATUS _NetGroupSetInfo(struct pipes_struct *p, struct NetGroupSetInfo *r);
enum NET_API_STATUS _NetGroupGetInfo(struct pipes_struct *p, struct NetGroupGetInfo *r);
enum NET_API_STATUS _NetGroupAddUser(struct pipes_struct *p, struct NetGroupAddUser *r);
enum NET_API_STATUS _NetGroupDelUser(struct pipes_struct *p, struct NetGroupDelUser *r);
enum NET_API_STATUS _NetGroupGetUsers(struct pipes_struct *p, struct NetGroupGetUsers *r);
enum NET_API_STATUS _NetGroupSetUsers(struct pipes_struct *p, struct NetGroupSetUsers *r);
enum NET_API_STATUS _NetLocalGroupAdd(struct pipes_struct *p, struct NetLocalGroupAdd *r);
enum NET_API_STATUS _NetLocalGroupDel(struct pipes_struct *p, struct NetLocalGroupDel *r);
enum NET_API_STATUS _NetLocalGroupGetInfo(struct pipes_struct *p, struct NetLocalGroupGetInfo *r);
enum NET_API_STATUS _NetLocalGroupSetInfo(struct pipes_struct *p, struct NetLocalGroupSetInfo *r);
enum NET_API_STATUS _NetLocalGroupEnum(struct pipes_struct *p, struct NetLocalGroupEnum *r);
enum NET_API_STATUS _NetLocalGroupAddMembers(struct pipes_struct *p, struct NetLocalGroupAddMembers *r);
enum NET_API_STATUS _NetLocalGroupDelMembers(struct pipes_struct *p, struct NetLocalGroupDelMembers *r);
enum NET_API_STATUS _NetLocalGroupGetMembers(struct pipes_struct *p, struct NetLocalGroupGetMembers *r);
enum NET_API_STATUS _NetLocalGroupSetMembers(struct pipes_struct *p, struct NetLocalGroupSetMembers *r);
enum NET_API_STATUS _NetRemoteTOD(struct pipes_struct *p, struct NetRemoteTOD *r);
enum NET_API_STATUS _NetShareAdd(struct pipes_struct *p, struct NetShareAdd *r);
enum NET_API_STATUS _NetShareDel(struct pipes_struct *p, struct NetShareDel *r);
enum NET_API_STATUS _NetShareEnum(struct pipes_struct *p, struct NetShareEnum *r);
enum NET_API_STATUS _NetShareGetInfo(struct pipes_struct *p, struct NetShareGetInfo *r);
enum NET_API_STATUS _NetShareSetInfo(struct pipes_struct *p, struct NetShareSetInfo *r);
enum NET_API_STATUS _NetFileClose(struct pipes_struct *p, struct NetFileClose *r);
enum NET_API_STATUS _NetFileGetInfo(struct pipes_struct *p, struct NetFileGetInfo *r);
enum NET_API_STATUS _NetFileEnum(struct pipes_struct *p, struct NetFileEnum *r);
enum NET_API_STATUS _NetShutdownInit(struct pipes_struct *p, struct NetShutdownInit *r);
enum NET_API_STATUS _NetShutdownAbort(struct pipes_struct *p, struct NetShutdownAbort *r);
enum NET_API_STATUS _I_NetLogonControl(struct pipes_struct *p, struct I_NetLogonControl *r);
enum NET_API_STATUS _I_NetLogonControl2(struct pipes_struct *p, struct I_NetLogonControl2 *r);
const struct api_struct *libnetapi_get_pipe_fns(int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_libnetapi_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_libnetapi_shutdown(void);
#endif /* __SRV_LIBNETAPI__ */
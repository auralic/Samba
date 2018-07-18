/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_winbind
#define _PIDL_HEADER_winbind

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/lsa.h"
#include "librpc/gen_ndr/netlogon.h"
#include "librpc/gen_ndr/misc.h"
#include "librpc/gen_ndr/security.h"
#include "librpc/gen_ndr/idmap.h"
#ifndef _HEADER_winbind
#define _HEADER_winbind

struct wbint_TransID {
	enum id_type type;
	uint32_t domain_index;
	uint32_t rid;
	struct unixid xid;
};

struct wbint_TransIDArray {
	uint32_t num_ids;
	struct wbint_TransID *ids;/* [size_is(num_ids)] */
};

struct wbint_userinfo {
	const char *domain_name;/* [charset(UTF8),unique] */
	const char *acct_name;/* [charset(UTF8),unique] */
	const char *full_name;/* [charset(UTF8),unique] */
	const char *homedir;/* [charset(UTF8),unique] */
	const char *shell;/* [charset(UTF8),unique] */
	uint64_t uid;
	uint64_t primary_gid;
	const char *primary_group_name;/* [charset(UTF8),unique] */
	struct dom_sid user_sid;
	struct dom_sid group_sid;
}/* [public] */;

struct wbint_SidArray {
	uint32_t num_sids;
	struct dom_sid *sids;/* [size_is(num_sids)] */
}/* [public] */;

struct wbint_RidArray {
	uint32_t num_rids;
	uint32_t *rids;/* [size_is(num_rids)] */
}/* [public] */;

struct wbint_Principal {
	struct dom_sid sid;
	enum lsa_SidType type;
	const char *name;/* [charset(UTF8),unique] */
}/* [public] */;

struct wbint_Principals {
	int32_t num_principals;
	struct wbint_Principal *principals;/* [size_is(num_principals)] */
}/* [public] */;

struct wbint_userinfos {
	uint32_t num_userinfos;
	struct wbint_userinfo *userinfos;/* [size_is(num_userinfos)] */
}/* [public] */;

union netr_LogonLevel;

union netr_Validation;

union netr_CONTROL_DATA_INFORMATION;

union netr_CONTROL_QUERY_INFORMATION;


struct wbint_Ping {
	struct {
		uint32_t in_data;
	} in;

	struct {
		uint32_t *out_data;/* [ref] */
	} out;

};


struct wbint_LookupSid {
	struct {
		struct dom_sid *sid;/* [ref] */
	} in;

	struct {
		enum lsa_SidType *type;/* [ref] */
		const char **domain;/* [charset(UTF8),ref] */
		const char **name;/* [charset(UTF8),ref] */
		NTSTATUS result;
	} out;

};


struct wbint_LookupSids {
	struct {
		struct lsa_SidArray *sids;/* [ref] */
	} in;

	struct {
		struct lsa_RefDomainList *domains;/* [ref] */
		struct lsa_TransNameArray *names;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_LookupName {
	struct {
		const char *domain;/* [charset(UTF8),ref] */
		const char *name;/* [charset(UTF8),ref] */
		uint32_t flags;
	} in;

	struct {
		enum lsa_SidType *type;/* [ref] */
		struct dom_sid *sid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_Sids2UnixIDs {
	struct {
		struct lsa_RefDomainList *domains;/* [ref] */
		struct wbint_TransIDArray *ids;/* [ref] */
	} in;

	struct {
		struct wbint_TransIDArray *ids;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_UnixIDs2Sids {
	struct {
		const char *domain_name;/* [charset(UTF8),ref] */
		struct dom_sid domain_sid;
		uint32_t num_ids;
		struct unixid *xids;
	} in;

	struct {
		struct dom_sid *sids;
		struct unixid *xids;
		NTSTATUS result;
	} out;

};


struct wbint_AllocateUid {
	struct {
		uint64_t *uid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_AllocateGid {
	struct {
		uint64_t *gid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_GetNssInfo {
	struct {
		struct wbint_userinfo *info;/* [ref] */
	} in;

	struct {
		struct wbint_userinfo *info;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_LookupUserAliases {
	struct {
		struct wbint_SidArray *sids;/* [ref] */
	} in;

	struct {
		struct wbint_RidArray *rids;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_LookupUserGroups {
	struct {
		struct dom_sid *sid;/* [ref] */
	} in;

	struct {
		struct wbint_SidArray *sids;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_QuerySequenceNumber {
	struct {
		uint32_t *sequence;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_LookupGroupMembers {
	struct {
		struct dom_sid *sid;/* [ref] */
		enum lsa_SidType type;
	} in;

	struct {
		struct wbint_Principals *members;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_QueryGroupList {
	struct {
		struct wbint_Principals *groups;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_QueryUserRidList {
	struct {
		struct wbint_RidArray *rids;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_DsGetDcName {
	struct {
		const char *domain_name;/* [charset(UTF8),ref] */
		struct GUID *domain_guid;/* [unique] */
		const char *site_name;/* [charset(UTF8),unique] */
		uint32_t flags;
	} in;

	struct {
		struct netr_DsRGetDCNameInfo **dc_info;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_LookupRids {
	struct {
		struct dom_sid *domain_sid;/* [ref] */
		struct wbint_RidArray *rids;/* [ref] */
	} in;

	struct {
		const char **domain_name;/* [charset(UTF8),ref] */
		struct wbint_Principals *names;/* [ref] */
		NTSTATUS result;
	} out;

};


struct wbint_CheckMachineAccount {
	struct {
		NTSTATUS result;
	} out;

};


struct wbint_ChangeMachineAccount {
	struct {
		NTSTATUS result;
	} out;

};


struct wbint_PingDc {
	struct {
		const char **dcname;/* [charset(UTF8),ref] */
		NTSTATUS result;
	} out;

};


struct winbind_SamLogon {
	struct {
		uint16_t logon_level;
		union netr_LogonLevel logon;/* [switch_is(logon_level)] */
		uint16_t validation_level;
	} in;

	struct {
		union netr_Validation validation;/* [switch_is(validation_level)] */
		uint8_t authoritative;
		NTSTATUS result;
	} out;

};


struct winbind_DsrUpdateReadOnlyServerDnsRecords {
	struct {
		const char *site_name;/* [charset(UTF16),unique] */
		uint32_t dns_ttl;
		struct NL_DNS_NAME_INFO_ARRAY *dns_names;/* [ref] */
	} in;

	struct {
		struct NL_DNS_NAME_INFO_ARRAY *dns_names;/* [ref] */
		NTSTATUS result;
	} out;

};


struct winbind_LogonControl {
	struct {
		enum netr_LogonControlCode function_code;
		uint32_t level;
		union netr_CONTROL_DATA_INFORMATION *data;/* [ref,switch_is(function_code)] */
	} in;

	struct {
		union netr_CONTROL_QUERY_INFORMATION *query;/* [ref,switch_is(level)] */
		WERROR result;
	} out;

};


struct winbind_GetForestTrustInformation {
	struct {
		const char *trusted_domain_name;/* [charset(UTF16),unique] */
		uint32_t flags;
	} in;

	struct {
		struct lsa_ForestTrustInformation **forest_trust_info;/* [ref] */
		WERROR result;
	} out;

};


struct winbind_SendToSam {
	struct {
		struct netr_SendToSamBase message;
	} in;

	struct {
		NTSTATUS result;
	} out;

};

#endif /* _HEADER_winbind */
#endif /* _PIDL_HEADER_winbind */

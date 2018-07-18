/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_libnetjoin
#define _PIDL_HEADER_libnetjoin

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/wkssvc.h"
#include "librpc/gen_ndr/security.h"
#include "librpc/gen_ndr/misc.h"
#ifndef _HEADER_libnetjoin
#define _HEADER_libnetjoin

enum libnetjoin_JoinDomNameType
#ifndef USE_UINT_ENUMS
 {
	JoinDomNameTypeUnknown=(int)(0),
	JoinDomNameTypeDNS=(int)(1),
	JoinDomNameTypeNBT=(int)(2)
}
#else
 { __do_not_use_enum_libnetjoin_JoinDomNameType=0x7FFFFFFF}
#define JoinDomNameTypeUnknown ( 0 )
#define JoinDomNameTypeDNS ( 1 )
#define JoinDomNameTypeNBT ( 2 )
#endif
;


struct libnet_JoinCtx {
	struct {
		const char * dc_name;
		const char * machine_name;
		const char * domain_name;/* [ref] */
		enum libnetjoin_JoinDomNameType domain_name_type;
		const char * account_ou;
		const char * admin_account;
		const char * admin_domain;
		const char * admin_password;/* [noprint] */
		const char * machine_password;
		uint32_t join_flags;
		const char * os_version;
		const char * os_name;
		const char * os_servicepack;
		uint8_t create_upn;
		const char * upn;
		uint8_t modify_config;
		struct ads_struct *ads;/* [unique] */
		uint8_t debug;
		uint8_t use_kerberos;
		enum netr_SchannelType secure_channel_type;
		struct messaging_context *msg_ctx;/* [noprint,ref] */
		uint32_t desired_encryption_types;
	} in;

	struct {
		const char * account_name;
		const char * netbios_domain_name;
		const char * dns_domain_name;
		const char * forest_name;
		const char * dn;
		struct GUID domain_guid;
		struct dom_sid *domain_sid;/* [ref] */
		uint8_t modified_config;
		const char * error_string;
		uint8_t domain_is_ad;
		uint32_t set_encryption_types;
		const char * krb5_salt;
		WERROR result;
	} out;

};


struct libnet_UnjoinCtx {
	struct {
		const char * dc_name;
		const char * machine_name;
		const char * domain_name;
		const char * account_ou;
		const char * admin_account;
		const char * admin_domain;
		const char * admin_password;/* [noprint] */
		const char * machine_password;
		uint32_t unjoin_flags;
		uint8_t delete_machine_account;
		uint8_t modify_config;
		struct dom_sid *domain_sid;/* [ref] */
		struct ads_struct *ads;/* [unique] */
		uint8_t debug;
		uint8_t use_kerberos;
		struct messaging_context *msg_ctx;/* [noprint,ref] */
	} in;

	struct {
		const char * netbios_domain_name;
		const char * dns_domain_name;
		const char * forest_name;
		uint8_t modified_config;
		const char * error_string;
		uint8_t disabled_machine_account;
		uint8_t deleted_machine_account;
		WERROR result;
	} out;

};

#endif /* _HEADER_libnetjoin */
#endif /* _PIDL_HEADER_libnetjoin */

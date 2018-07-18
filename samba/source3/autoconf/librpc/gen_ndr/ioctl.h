/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_copychunk
#define _PIDL_HEADER_copychunk

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#ifndef _HEADER_copychunk
#define _HEADER_copychunk

#define COPYCHUNK_MAX_CHUNKS	( 256 )
#define COPYCHUNK_MAX_CHUNK_LEN	( 1048576 )
#define COPYCHUNK_MAX_TOTAL_LEN	( 16777216 )
#define STORAGE_OFFLOAD_TOKEN_TYPE_ZERO_DATA	( 0xffff0001 )
struct req_resume_key_rsp {
	uint8_t resume_key[24];
	uint32_t context_len;
	uint8_t context[4];
}/* [public] */;

struct srv_copychunk {
	uint64_t source_off;
	uint64_t target_off;
	uint32_t length;
	uint32_t reserved;
};

struct srv_copychunk_copy {
	uint8_t source_key[24];
	uint32_t chunk_count;
	uint32_t reserved;
	struct srv_copychunk *chunks;
}/* [public] */;

struct srv_copychunk_rsp {
	uint32_t chunks_written;
	uint32_t chunk_bytes_written;
	uint32_t total_bytes_written;
}/* [public] */;

struct device_copy_offload_descriptor {
	uint32_t version;
	uint32_t size;
	uint32_t maximum_token_lifetime;
	uint32_t default_token_lifetime;
	uint64_t maximum_xfer_size;
	uint64_t optimal_xfer_count;
	uint32_t maximum_data_descriptors;
	uint32_t maximum_xfer_length_per_descriptor;
	uint32_t optimal_xfer_length_per_descriptor;
	uint16_t optimal_xfer_length_granularity;
	uint8_t reserved[2];
}/* [public] */;

struct storage_offload_token {
	uint32_t token_type;
	uint8_t reserved[2];
	uint16_t token_id_len;
	uint8_t *token;/* [size_is(token_id_len)] */
}/* [public] */;

struct fsctl_offload_read_input {
	uint32_t size;
	uint32_t flags;
	uint32_t token_time_to_live;
	uint32_t reserved;
	uint64_t file_offset;
	uint64_t length;
}/* [public] */;

/* bitmap offload_flags */
#define OFFLOAD_READ_FLAG_FILE_TOO_SMALL ( 0x01 )
#define OFFLOAD_READ_FLAG_ALL_ZERO_BEYOND_RANGE ( 0x02 )
#define OFFLOAD_READ_FLAG_CANNOT_OFFLOAD_BEYOND_RANGE ( 0x04 )

struct fsctl_offload_read_output {
	uint32_t size;
	uint32_t flags;
	uint64_t xfer_length;
	struct storage_offload_token token;
}/* [public] */;

struct fsctl_offload_write_input {
	uint32_t size;
	uint32_t flags;
	uint64_t file_offset;
	uint64_t copy_length;
	uint64_t xfer_offset;
	struct storage_offload_token token;
}/* [public] */;

struct fsctl_offload_write_output {
	uint32_t size;
	uint32_t flags;
	uint64_t length_written;
}/* [public] */;

struct fsctl_dup_extents_to_file {
	uint8_t source_fid[16];
	uint64_t source_off;
	uint64_t target_off;
	uint64_t byte_count;
}/* [public] */;

#endif /* _HEADER_copychunk */
#ifndef _HEADER_compression
#define _HEADER_compression

#define COMPRESSION_FORMAT_NONE	( 0x0000 )
#define COMPRESSION_FORMAT_DEFAULT	( 0x0001 )
#define COMPRESSION_FORMAT_LZNT1	( 0x0002 )
struct compression_state {
	uint16_t format;
}/* [public] */;

#endif /* _HEADER_compression */
#ifndef _HEADER_netinterface
#define _HEADER_netinterface

/* bitmap fsctl_net_iface_capability */
#define FSCTL_NET_IFACE_NONE_CAPABLE ( 0x00000000 )
#define FSCTL_NET_IFACE_RSS_CAPABLE ( 0x00000001 )
#define FSCTL_NET_IFACE_RDMA_CAPABLE ( 0x00000002 )

enum fsctl_sockaddr_af
#ifndef USE_UINT_ENUMS
 {
	FSCTL_NET_IFACE_AF_INET=(int)(0x0002),
	FSCTL_NET_IFACE_AF_INET6=(int)(0x0017)
}
#else
 { __do_not_use_enum_fsctl_sockaddr_af=0x7FFFFFFF}
#define FSCTL_NET_IFACE_AF_INET ( 0x0002 )
#define FSCTL_NET_IFACE_AF_INET6 ( 0x0017 )
#endif
;

struct fsctl_sockaddr_in {
	uint16_t port;/* [value(0)] */
	const char * ipv4;/* [flag(LIBNDR_FLAG_BIGENDIAN)] */
	uint64_t reserved;/* [value(0)] */
}/* [flag(LIBNDR_FLAG_NOALIGN)] */;

struct fsctl_sockaddr_in6 {
	uint16_t port;/* [value(0)] */
	uint32_t flowinfo;/* [value(0)] */
	const char * ipv6;/* [flag(LIBNDR_FLAG_BIGENDIAN)] */
	uint32_t scopeid;/* [value(0)] */
}/* [flag(LIBNDR_FLAG_NOALIGN)] */;

union fsctl_sockaddr_union {
	struct fsctl_sockaddr_in saddr_in;/* [case(FSCTL_NET_IFACE_AF_INET)] */
	struct fsctl_sockaddr_in6 saddr_in6;/* [case(FSCTL_NET_IFACE_AF_INET6)] */
}/* [flag(LIBNDR_FLAG_NOALIGN),nodiscriminant] */;

struct fsctl_sockaddr_storage {
	enum fsctl_sockaddr_af family;
	union fsctl_sockaddr_union saddr;/* [subcontext(0),subcontext_size(126),switch_is(family)] */
}/* [flag(LIBNDR_FLAG_NOALIGN)] */;

struct fsctl_net_iface_info {
	struct fsctl_net_iface_info *next;/* [relative] */
	uint32_t ifindex;
	uint32_t capability;
	uint32_t reserved;/* [value(0)] */
	uint64_t linkspeed;
	struct fsctl_sockaddr_storage sockaddr;
}/* [noprint,public,relative_base] */;

#endif /* _HEADER_netinterface */
#ifndef _HEADER_sparse
#define _HEADER_sparse

struct file_alloced_range_buf {
	uint64_t file_off;
	uint64_t len;
}/* [public] */;

struct fsctl_query_alloced_ranges_req {
	struct file_alloced_range_buf buf;
}/* [public] */;

struct fsctl_query_alloced_ranges_rsp {
	DATA_BLOB far_buf_array;/* [flag(LIBNDR_FLAG_REMAINING)] */
}/* [public] */;

struct file_zero_data_info {
	uint64_t file_off;
	uint64_t beyond_final_zero;
}/* [public] */;

struct fsctl_set_zero_data_req {
	struct file_zero_data_info info;
}/* [public] */;

#endif /* _HEADER_sparse */
#ifndef _HEADER_resiliency
#define _HEADER_resiliency

struct network_resiliency_request {
	uint32_t timeout;
	uint32_t reserved;
}/* [public] */;

#endif /* _HEADER_resiliency */
#ifndef _HEADER_trim
#define _HEADER_trim

struct file_level_trim_range {
	uint64_t off;
	uint64_t len;
}/* [public] */;

struct fsctl_file_level_trim_req {
	uint32_t key;
	uint32_t num_ranges;
	struct file_level_trim_range *ranges;
}/* [public] */;

struct fsctl_file_level_trim_rsp {
	uint32_t num_ranges_processed;
}/* [public] */;

#endif /* _HEADER_trim */
#endif /* _PIDL_HEADER_copychunk */

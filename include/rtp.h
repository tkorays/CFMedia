#ifndef __CF_RTP_H__
#define __CF_RTP_H__

#include <cf/types.h>

CF_DECLS_BEGIN

#pragma pack(1)
/**
 * Rtp packet header
 */
typedef struct {
#if defined(CF_BIG_ENDIAN) && (CF_BIG_ENDIAN!=0)
    cf_uint16_t v:2;
    cf_uint16_t p:1;
    cf_uint16_t x:1;
    cf_uint16_t cc:4;
    cf_uint16_t m:1;
    cf_uint16_t pt:7;
#else
    cf_uint16_t cc:4;
    cf_uint16_t x:1;
    cf_uint16_t p:1;
    cf_uint16_t v:2;
    cf_uint16_t pt:7;
    cf_uint16_t m:1;
#endif
    cf_uint16_t seq;
    cf_uint32_t ts;
    cf_uint32_t ssrc;
} cf_rtp_hdr_t;

/**
 * Rtp extension header.
 */
typedef struct {
    cf_uint16_t profile;
    cf_uint16_t length;
} cf_rtp_ext_hdr_t;
#pragma pack()


/**
 * Rtp session
 */
typedef struct {

} cf_rtp_sess_t;


CF_DECLARE(cf_errno_t) cf_rtp_sess_init(cf_rtp_sess_t* sess);
CF_DECLARE(cf_errno_t) cf_rtp_encode(cf_rtp_sess_t* sess);
CF_DECLARE(cf_errno_t) cf_rtp_decode(cf_rtp_sess_t* sess);

CF_DECLS_END


#endif /* __CF_RTP_H__ */

#ifndef __CF_RTCP_H__
#define __CF_RTCP_H__

/**
 * RTCP payload type
 */
typedef enum {
    CF_RTCP_PT_SR   = 200,
    CF_RTCP_PT_RR   = 201,
    CF_RTCP_PT_SDES = 202,
    CF_RTCP_PT_BYE  = 203,
    CF_RTCP_PT_APP  = 204,
    CF_RTCP_PT_FB   = 205,
    CF_RTCP_PT_PSFB = 206,
    CF_RTCP_PT_XR   = 207
} CF_RTCP_PT;

/**
 * SDES type
 */
typedef enum {

} CF_RTCP_SDES_TYPE;

/**
 * RTCP feedback format defined by RFC4585 and RFC5104
 */
typedef enum {

} CF_RTCP_FB_FMT;

/**
* RTCP payload-specific feedback format defined by RFC4585 and RFC5104
*/
typedef enum {

} CF_RTCP_PSFB_FMT;

/**
 * RTCP public header, used for all payload types.
 */
typedef struct {

} cf_rtcp_pub_hdr_t;

/**
 * RTCP SR/RR header.
 */
typedef struct {

} cf_rtcp_sr_hdr_t, cf_rtcp_rr_hdr_t;

/**
* RTCP SDES header.
*/
typedef struct {

} cf_rtcp_sdes_hdr_t;

/**
* RTCP BYE header.
*/
typedef struct {

} cf_rtcp_bye_hdr_t;

/**
* RTCP APP header.
*/
typedef struct {

} cf_rtcp_app_hdr_t;

/**
* RTCP FB/PSFB header.
*/
typedef struct {

} cf_rtcp_fb_hdr_t, cf_rtcp_psfb_hdr_t;

#endif /* __CF_RTCP_H__ */

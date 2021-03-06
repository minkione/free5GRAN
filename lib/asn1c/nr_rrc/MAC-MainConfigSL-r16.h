/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MAC_MainConfigSL_r16_H_
#define	_MAC_MainConfigSL_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BSR_Config;

/* MAC-MainConfigSL-r16 */
typedef struct MAC_MainConfigSL_r16 {
	struct BSR_Config	*sl_BSR_Config_r16	/* OPTIONAL */;
	long	*ul_PrioritizationThres_r16	/* OPTIONAL */;
	long	*sl_PrioritizationThres_r16	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_MainConfigSL_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_MainConfigSL_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfigSL_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_MainConfigSL_r16_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BSR-Config.h"

#endif	/* _MAC_MainConfigSL_r16_H_ */
#include "asn_internal.h"

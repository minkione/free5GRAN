/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_AffectedCarrierFreqComb_r16_H_
#define	_AffectedCarrierFreqComb_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VictimSystemType-r16.h"
#include "ARFCN-ValueNR.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AffectedCarrierFreqComb-r16 */
typedef struct AffectedCarrierFreqComb_r16 {
	struct AffectedCarrierFreqComb_r16__affectedCarrierFreqComb_r16 {
		A_SEQUENCE_OF(ARFCN_ValueNR_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *affectedCarrierFreqComb_r16;
	VictimSystemType_r16_t	 victimSystemType_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AffectedCarrierFreqComb_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AffectedCarrierFreqComb_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_AffectedCarrierFreqComb_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_AffectedCarrierFreqComb_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AffectedCarrierFreqComb_r16_H_ */
#include "asn_internal.h"

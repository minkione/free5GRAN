/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_RRCSystemInfoRequest_H_
#define	_RRCSystemInfoRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRCSystemInfoRequest-IEs.h"
#include "RRC-PosSystemInfoRequest-r16-IEs.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSystemInfoRequest__criticalExtensions_PR {
	RRCSystemInfoRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCSystemInfoRequest__criticalExtensions_PR_rrcSystemInfoRequest,
	RRCSystemInfoRequest__criticalExtensions_PR_criticalExtensionsFuture_r16
} RRCSystemInfoRequest__criticalExtensions_PR;
typedef enum RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR {
	RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR_NOTHING,	/* No components present */
	RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR_rrcPosSystemInfoRequest_r16,
	RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR_criticalExtensionsFuture
} RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR;

/* RRCSystemInfoRequest */
typedef struct RRCSystemInfoRequest {
	struct RRCSystemInfoRequest__criticalExtensions {
		RRCSystemInfoRequest__criticalExtensions_PR present;
		union RRCSystemInfoRequest__criticalExtensions_u {
			RRCSystemInfoRequest_IEs_t	 rrcSystemInfoRequest;
			struct RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16 {
				RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_PR present;
				union RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16_u {
					RRC_PosSystemInfoRequest_r16_IEs_t	 rrcPosSystemInfoRequest_r16;
					struct RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture_r16__criticalExtensionsFuture {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} criticalExtensionsFuture;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSystemInfoRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCSystemInfoRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCSystemInfoRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCSystemInfoRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCSystemInfoRequest_H_ */
#include "asn_internal.h"
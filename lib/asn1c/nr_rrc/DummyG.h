/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_DummyG_H_
#define	_DummyG_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DummyG__maxNumberSSB_CSI_RS_ResourceOneTx {
	DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n8	= 0,
	DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n16	= 1,
	DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n32	= 2,
	DummyG__maxNumberSSB_CSI_RS_ResourceOneTx_n64	= 3
} e_DummyG__maxNumberSSB_CSI_RS_ResourceOneTx;
typedef enum DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx {
	DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n0	= 0,
	DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n4	= 1,
	DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n8	= 2,
	DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n16	= 3,
	DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n32	= 4,
	DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx_n64	= 5
} e_DummyG__maxNumberSSB_CSI_RS_ResourceTwoTx;
typedef enum DummyG__supportedCSI_RS_Density {
	DummyG__supportedCSI_RS_Density_one	= 0,
	DummyG__supportedCSI_RS_Density_three	= 1,
	DummyG__supportedCSI_RS_Density_oneAndThree	= 2
} e_DummyG__supportedCSI_RS_Density;

/* DummyG */
typedef struct DummyG {
	long	 maxNumberSSB_CSI_RS_ResourceOneTx;
	long	 maxNumberSSB_CSI_RS_ResourceTwoTx;
	long	 supportedCSI_RS_Density;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DummyG_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSSB_CSI_RS_ResourceOneTx_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSSB_CSI_RS_ResourceTwoTx_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedCSI_RS_Density_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DummyG;
extern asn_SEQUENCE_specifics_t asn_SPC_DummyG_specs_1;
extern asn_TYPE_member_t asn_MBR_DummyG_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DummyG_H_ */
#include "asn_internal.h"
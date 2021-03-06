/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_CellGroupConfig_H_
#define	_CellGroupConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CellGroupId.h"
#include "NativeEnumerated.h"
#include "BIT_STRING.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "LogicalChannelIdentity.h"
#include "SCellIndex.h"
#include "BH-RLC-ChannelID-r16.h"
#include "ServCellIndex.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellGroupConfig__reportUplinkTxDirectCurrent {
	CellGroupConfig__reportUplinkTxDirectCurrent_true	= 0
} e_CellGroupConfig__reportUplinkTxDirectCurrent;
typedef enum CellGroupConfig__f1c_TransferPath_r16 {
	CellGroupConfig__f1c_TransferPath_r16_lte	= 0,
	CellGroupConfig__f1c_TransferPath_r16_nr	= 1,
	CellGroupConfig__f1c_TransferPath_r16_both	= 2
} e_CellGroupConfig__f1c_TransferPath_r16;
typedef enum CellGroupConfig__uplinkTxSwitchingOption_r16 {
	CellGroupConfig__uplinkTxSwitchingOption_r16_switchedUL	= 0,
	CellGroupConfig__uplinkTxSwitchingOption_r16_dualUL	= 1
} e_CellGroupConfig__uplinkTxSwitchingOption_r16;
typedef enum CellGroupConfig__uplinkTxSwitchingPowerBoosting_r16 {
	CellGroupConfig__uplinkTxSwitchingPowerBoosting_r16_enabled	= 0
} e_CellGroupConfig__uplinkTxSwitchingPowerBoosting_r16;

/* Forward declarations */
struct MAC_CellGroupConfig;
struct PhysicalCellGroupConfig;
struct SpCellConfig;
struct RLC_BearerConfig;
struct SCellConfig;
struct BH_RLC_ChannelConfig_r16;

/* CellGroupConfig */
typedef struct CellGroupConfig {
	CellGroupId_t	 cellGroupId;
	struct CellGroupConfig__rlc_BearerToAddModList {
		A_SEQUENCE_OF(struct RLC_BearerConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToAddModList;
	struct CellGroupConfig__rlc_BearerToReleaseList {
		A_SEQUENCE_OF(LogicalChannelIdentity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToReleaseList;
	struct MAC_CellGroupConfig	*mac_CellGroupConfig	/* OPTIONAL */;
	struct PhysicalCellGroupConfig	*physicalCellGroupConfig	/* OPTIONAL */;
	struct SpCellConfig	*spCellConfig	/* OPTIONAL */;
	struct CellGroupConfig__sCellToAddModList {
		A_SEQUENCE_OF(struct SCellConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToAddModList;
	struct CellGroupConfig__sCellToReleaseList {
		A_SEQUENCE_OF(SCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToReleaseList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*reportUplinkTxDirectCurrent	/* OPTIONAL */;
	BIT_STRING_t	*bap_Address_r16	/* OPTIONAL */;
	struct CellGroupConfig__bh_RLC_ChannelToAddModList_r16 {
		A_SEQUENCE_OF(struct BH_RLC_ChannelConfig_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bh_RLC_ChannelToAddModList_r16;
	struct CellGroupConfig__bh_RLC_ChannelToReleaseList_r16 {
		A_SEQUENCE_OF(BH_RLC_ChannelID_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bh_RLC_ChannelToReleaseList_r16;
	long	*f1c_TransferPath_r16	/* OPTIONAL */;
	struct CellGroupConfig__simultaneousTCI_UpdateList1_r16 {
		A_SEQUENCE_OF(ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *simultaneousTCI_UpdateList1_r16;
	struct CellGroupConfig__simultaneousTCI_UpdateList2_r16 {
		A_SEQUENCE_OF(ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *simultaneousTCI_UpdateList2_r16;
	struct CellGroupConfig__simultaneousSpatial_UpdatedList1_r16 {
		A_SEQUENCE_OF(ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *simultaneousSpatial_UpdatedList1_r16;
	struct CellGroupConfig__simultaneousSpatial_UpdatedList2_r16 {
		A_SEQUENCE_OF(ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *simultaneousSpatial_UpdatedList2_r16;
	long	*uplinkTxSwitchingOption_r16	/* OPTIONAL */;
	long	*uplinkTxSwitchingPowerBoosting_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellGroupConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportUplinkTxDirectCurrent_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_f1c_TransferPath_r16_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uplinkTxSwitchingOption_r16_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uplinkTxSwitchingPowerBoosting_r16_37;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellGroupConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAC-CellGroupConfig.h"
#include "PhysicalCellGroupConfig.h"
#include "SpCellConfig.h"
#include "RLC-BearerConfig.h"
#include "SCellConfig.h"
#include "BH-RLC-ChannelConfig-r16.h"

#endif	/* _CellGroupConfig_H_ */
#include "asn_internal.h"

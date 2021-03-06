/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_Phy_ParametersCommon_H_
#define	_Phy_ParametersCommon_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Phy_ParametersCommon__csi_RS_CFRA_ForHO {
	Phy_ParametersCommon__csi_RS_CFRA_ForHO_supported	= 0
} e_Phy_ParametersCommon__csi_RS_CFRA_ForHO;
typedef enum Phy_ParametersCommon__dynamicPRB_BundlingDL {
	Phy_ParametersCommon__dynamicPRB_BundlingDL_supported	= 0
} e_Phy_ParametersCommon__dynamicPRB_BundlingDL;
typedef enum Phy_ParametersCommon__sp_CSI_ReportPUCCH {
	Phy_ParametersCommon__sp_CSI_ReportPUCCH_supported	= 0
} e_Phy_ParametersCommon__sp_CSI_ReportPUCCH;
typedef enum Phy_ParametersCommon__sp_CSI_ReportPUSCH {
	Phy_ParametersCommon__sp_CSI_ReportPUSCH_supported	= 0
} e_Phy_ParametersCommon__sp_CSI_ReportPUSCH;
typedef enum Phy_ParametersCommon__nzp_CSI_RS_IntefMgmt {
	Phy_ParametersCommon__nzp_CSI_RS_IntefMgmt_supported	= 0
} e_Phy_ParametersCommon__nzp_CSI_RS_IntefMgmt;
typedef enum Phy_ParametersCommon__type2_SP_CSI_Feedback_LongPUCCH {
	Phy_ParametersCommon__type2_SP_CSI_Feedback_LongPUCCH_supported	= 0
} e_Phy_ParametersCommon__type2_SP_CSI_Feedback_LongPUCCH;
typedef enum Phy_ParametersCommon__precoderGranularityCORESET {
	Phy_ParametersCommon__precoderGranularityCORESET_supported	= 0
} e_Phy_ParametersCommon__precoderGranularityCORESET;
typedef enum Phy_ParametersCommon__dynamicHARQ_ACK_Codebook {
	Phy_ParametersCommon__dynamicHARQ_ACK_Codebook_supported	= 0
} e_Phy_ParametersCommon__dynamicHARQ_ACK_Codebook;
typedef enum Phy_ParametersCommon__semiStaticHARQ_ACK_Codebook {
	Phy_ParametersCommon__semiStaticHARQ_ACK_Codebook_supported	= 0
} e_Phy_ParametersCommon__semiStaticHARQ_ACK_Codebook;
typedef enum Phy_ParametersCommon__spatialBundlingHARQ_ACK {
	Phy_ParametersCommon__spatialBundlingHARQ_ACK_supported	= 0
} e_Phy_ParametersCommon__spatialBundlingHARQ_ACK;
typedef enum Phy_ParametersCommon__dynamicBetaOffsetInd_HARQ_ACK_CSI {
	Phy_ParametersCommon__dynamicBetaOffsetInd_HARQ_ACK_CSI_supported	= 0
} e_Phy_ParametersCommon__dynamicBetaOffsetInd_HARQ_ACK_CSI;
typedef enum Phy_ParametersCommon__pucch_Repetition_F1_3_4 {
	Phy_ParametersCommon__pucch_Repetition_F1_3_4_supported	= 0
} e_Phy_ParametersCommon__pucch_Repetition_F1_3_4;
typedef enum Phy_ParametersCommon__ra_Type0_PUSCH {
	Phy_ParametersCommon__ra_Type0_PUSCH_supported	= 0
} e_Phy_ParametersCommon__ra_Type0_PUSCH;
typedef enum Phy_ParametersCommon__dynamicSwitchRA_Type0_1_PDSCH {
	Phy_ParametersCommon__dynamicSwitchRA_Type0_1_PDSCH_supported	= 0
} e_Phy_ParametersCommon__dynamicSwitchRA_Type0_1_PDSCH;
typedef enum Phy_ParametersCommon__dynamicSwitchRA_Type0_1_PUSCH {
	Phy_ParametersCommon__dynamicSwitchRA_Type0_1_PUSCH_supported	= 0
} e_Phy_ParametersCommon__dynamicSwitchRA_Type0_1_PUSCH;
typedef enum Phy_ParametersCommon__pdsch_MappingTypeA {
	Phy_ParametersCommon__pdsch_MappingTypeA_supported	= 0
} e_Phy_ParametersCommon__pdsch_MappingTypeA;
typedef enum Phy_ParametersCommon__pdsch_MappingTypeB {
	Phy_ParametersCommon__pdsch_MappingTypeB_supported	= 0
} e_Phy_ParametersCommon__pdsch_MappingTypeB;
typedef enum Phy_ParametersCommon__interleavingVRB_ToPRB_PDSCH {
	Phy_ParametersCommon__interleavingVRB_ToPRB_PDSCH_supported	= 0
} e_Phy_ParametersCommon__interleavingVRB_ToPRB_PDSCH;
typedef enum Phy_ParametersCommon__interSlotFreqHopping_PUSCH {
	Phy_ParametersCommon__interSlotFreqHopping_PUSCH_supported	= 0
} e_Phy_ParametersCommon__interSlotFreqHopping_PUSCH;
typedef enum Phy_ParametersCommon__type1_PUSCH_RepetitionMultiSlots {
	Phy_ParametersCommon__type1_PUSCH_RepetitionMultiSlots_supported	= 0
} e_Phy_ParametersCommon__type1_PUSCH_RepetitionMultiSlots;
typedef enum Phy_ParametersCommon__type2_PUSCH_RepetitionMultiSlots {
	Phy_ParametersCommon__type2_PUSCH_RepetitionMultiSlots_supported	= 0
} e_Phy_ParametersCommon__type2_PUSCH_RepetitionMultiSlots;
typedef enum Phy_ParametersCommon__pusch_RepetitionMultiSlots {
	Phy_ParametersCommon__pusch_RepetitionMultiSlots_supported	= 0
} e_Phy_ParametersCommon__pusch_RepetitionMultiSlots;
typedef enum Phy_ParametersCommon__pdsch_RepetitionMultiSlots {
	Phy_ParametersCommon__pdsch_RepetitionMultiSlots_supported	= 0
} e_Phy_ParametersCommon__pdsch_RepetitionMultiSlots;
typedef enum Phy_ParametersCommon__downlinkSPS {
	Phy_ParametersCommon__downlinkSPS_supported	= 0
} e_Phy_ParametersCommon__downlinkSPS;
typedef enum Phy_ParametersCommon__configuredUL_GrantType1 {
	Phy_ParametersCommon__configuredUL_GrantType1_supported	= 0
} e_Phy_ParametersCommon__configuredUL_GrantType1;
typedef enum Phy_ParametersCommon__configuredUL_GrantType2 {
	Phy_ParametersCommon__configuredUL_GrantType2_supported	= 0
} e_Phy_ParametersCommon__configuredUL_GrantType2;
typedef enum Phy_ParametersCommon__pre_EmptIndication_DL {
	Phy_ParametersCommon__pre_EmptIndication_DL_supported	= 0
} e_Phy_ParametersCommon__pre_EmptIndication_DL;
typedef enum Phy_ParametersCommon__cbg_TransIndication_DL {
	Phy_ParametersCommon__cbg_TransIndication_DL_supported	= 0
} e_Phy_ParametersCommon__cbg_TransIndication_DL;
typedef enum Phy_ParametersCommon__cbg_TransIndication_UL {
	Phy_ParametersCommon__cbg_TransIndication_UL_supported	= 0
} e_Phy_ParametersCommon__cbg_TransIndication_UL;
typedef enum Phy_ParametersCommon__cbg_FlushIndication_DL {
	Phy_ParametersCommon__cbg_FlushIndication_DL_supported	= 0
} e_Phy_ParametersCommon__cbg_FlushIndication_DL;
typedef enum Phy_ParametersCommon__dynamicHARQ_ACK_CodeB_CBG_Retx_DL {
	Phy_ParametersCommon__dynamicHARQ_ACK_CodeB_CBG_Retx_DL_supported	= 0
} e_Phy_ParametersCommon__dynamicHARQ_ACK_CodeB_CBG_Retx_DL;
typedef enum Phy_ParametersCommon__rateMatchingResrcSetSemi_Static {
	Phy_ParametersCommon__rateMatchingResrcSetSemi_Static_supported	= 0
} e_Phy_ParametersCommon__rateMatchingResrcSetSemi_Static;
typedef enum Phy_ParametersCommon__rateMatchingResrcSetDynamic {
	Phy_ParametersCommon__rateMatchingResrcSetDynamic_supported	= 0
} e_Phy_ParametersCommon__rateMatchingResrcSetDynamic;
typedef enum Phy_ParametersCommon__bwp_SwitchingDelay {
	Phy_ParametersCommon__bwp_SwitchingDelay_type1	= 0,
	Phy_ParametersCommon__bwp_SwitchingDelay_type2	= 1
} e_Phy_ParametersCommon__bwp_SwitchingDelay;
typedef enum Phy_ParametersCommon__dummy {
	Phy_ParametersCommon__dummy_supported	= 0
} e_Phy_ParametersCommon__dummy;
typedef enum Phy_ParametersCommon__maxNumberSearchSpaces {
	Phy_ParametersCommon__maxNumberSearchSpaces_n10	= 0
} e_Phy_ParametersCommon__maxNumberSearchSpaces;
typedef enum Phy_ParametersCommon__rateMatchingCtrlResrcSetDynamic {
	Phy_ParametersCommon__rateMatchingCtrlResrcSetDynamic_supported	= 0
} e_Phy_ParametersCommon__rateMatchingCtrlResrcSetDynamic;
typedef enum Phy_ParametersCommon__maxLayersMIMO_Indication {
	Phy_ParametersCommon__maxLayersMIMO_Indication_supported	= 0
} e_Phy_ParametersCommon__maxLayersMIMO_Indication;
typedef enum Phy_ParametersCommon__twoStepRACH_r16 {
	Phy_ParametersCommon__twoStepRACH_r16_supported	= 0
} e_Phy_ParametersCommon__twoStepRACH_r16;
typedef enum Phy_ParametersCommon__dci_Format1_2And0_2_r16 {
	Phy_ParametersCommon__dci_Format1_2And0_2_r16_supported	= 0
} e_Phy_ParametersCommon__dci_Format1_2And0_2_r16;
typedef enum Phy_ParametersCommon__monitoringDCI_SameSearchSpace_r16 {
	Phy_ParametersCommon__monitoringDCI_SameSearchSpace_r16_supported	= 0
} e_Phy_ParametersCommon__monitoringDCI_SameSearchSpace_r16;
typedef enum Phy_ParametersCommon__type2_CG_ReleaseDCI_0_1_r16 {
	Phy_ParametersCommon__type2_CG_ReleaseDCI_0_1_r16_supported	= 0
} e_Phy_ParametersCommon__type2_CG_ReleaseDCI_0_1_r16;
typedef enum Phy_ParametersCommon__type2_CG_ReleaseDCI_0_2_r16 {
	Phy_ParametersCommon__type2_CG_ReleaseDCI_0_2_r16_supported	= 0
} e_Phy_ParametersCommon__type2_CG_ReleaseDCI_0_2_r16;
typedef enum Phy_ParametersCommon__sps_ReleaseDCI_1_1_r16 {
	Phy_ParametersCommon__sps_ReleaseDCI_1_1_r16_supported	= 0
} e_Phy_ParametersCommon__sps_ReleaseDCI_1_1_r16;
typedef enum Phy_ParametersCommon__sps_ReleaseDCI_1_2_r16 {
	Phy_ParametersCommon__sps_ReleaseDCI_1_2_r16_supported	= 0
} e_Phy_ParametersCommon__sps_ReleaseDCI_1_2_r16;
typedef enum Phy_ParametersCommon__csi_TriggerStateNon_ActiveBWP_r16 {
	Phy_ParametersCommon__csi_TriggerStateNon_ActiveBWP_r16_supported	= 0
} e_Phy_ParametersCommon__csi_TriggerStateNon_ActiveBWP_r16;
typedef enum Phy_ParametersCommon__seperateSMTC_InterIAB_Support_r16 {
	Phy_ParametersCommon__seperateSMTC_InterIAB_Support_r16_supported	= 0
} e_Phy_ParametersCommon__seperateSMTC_InterIAB_Support_r16;
typedef enum Phy_ParametersCommon__seperateRACH_IAB_Support_r16 {
	Phy_ParametersCommon__seperateRACH_IAB_Support_r16_supported	= 0
} e_Phy_ParametersCommon__seperateRACH_IAB_Support_r16;
typedef enum Phy_ParametersCommon__ul_flexibleDL_SlotFormatSemiStatic_IAB_r16 {
	Phy_ParametersCommon__ul_flexibleDL_SlotFormatSemiStatic_IAB_r16_supported	= 0
} e_Phy_ParametersCommon__ul_flexibleDL_SlotFormatSemiStatic_IAB_r16;
typedef enum Phy_ParametersCommon__ul_flexibleDL_SlotFormatDynamics_IAB_r16 {
	Phy_ParametersCommon__ul_flexibleDL_SlotFormatDynamics_IAB_r16_supported	= 0
} e_Phy_ParametersCommon__ul_flexibleDL_SlotFormatDynamics_IAB_r16;
typedef enum Phy_ParametersCommon__dft_S_OFDM_WaveformUL_IAB_r16 {
	Phy_ParametersCommon__dft_S_OFDM_WaveformUL_IAB_r16_supported	= 0
} e_Phy_ParametersCommon__dft_S_OFDM_WaveformUL_IAB_r16;
typedef enum Phy_ParametersCommon__dci_25_AI_RNTI_Support_IAB_r16 {
	Phy_ParametersCommon__dci_25_AI_RNTI_Support_IAB_r16_supported	= 0
} e_Phy_ParametersCommon__dci_25_AI_RNTI_Support_IAB_r16;
typedef enum Phy_ParametersCommon__t_DeltaReceptionSupport_IAB_r16 {
	Phy_ParametersCommon__t_DeltaReceptionSupport_IAB_r16_supported	= 0
} e_Phy_ParametersCommon__t_DeltaReceptionSupport_IAB_r16;
typedef enum Phy_ParametersCommon__guardSymbolReportReception_IAB_r16 {
	Phy_ParametersCommon__guardSymbolReportReception_IAB_r16_supported	= 0
} e_Phy_ParametersCommon__guardSymbolReportReception_IAB_r16;
typedef enum Phy_ParametersCommon__harqACK_CB_SpatialBundlingPUCCH_Group_r16 {
	Phy_ParametersCommon__harqACK_CB_SpatialBundlingPUCCH_Group_r16_supported	= 0
} e_Phy_ParametersCommon__harqACK_CB_SpatialBundlingPUCCH_Group_r16;
typedef enum Phy_ParametersCommon__crossSlotScheduling_r16__non_SharedSpectrumChAccess_r16 {
	Phy_ParametersCommon__crossSlotScheduling_r16__non_SharedSpectrumChAccess_r16_supported	= 0
} e_Phy_ParametersCommon__crossSlotScheduling_r16__non_SharedSpectrumChAccess_r16;
typedef enum Phy_ParametersCommon__crossSlotScheduling_r16__sharedSpectrumChAccess_r16 {
	Phy_ParametersCommon__crossSlotScheduling_r16__sharedSpectrumChAccess_r16_supported	= 0
} e_Phy_ParametersCommon__crossSlotScheduling_r16__sharedSpectrumChAccess_r16;
typedef enum Phy_ParametersCommon__maxNumberSRS_PosPathLossEstimateAllServingCells_r16 {
	Phy_ParametersCommon__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n1	= 0,
	Phy_ParametersCommon__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n4	= 1,
	Phy_ParametersCommon__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n8	= 2,
	Phy_ParametersCommon__maxNumberSRS_PosPathLossEstimateAllServingCells_r16_n16	= 3
} e_Phy_ParametersCommon__maxNumberSRS_PosPathLossEstimateAllServingCells_r16;
typedef enum Phy_ParametersCommon__extendedCG_Periodicities_r16 {
	Phy_ParametersCommon__extendedCG_Periodicities_r16_supported	= 0
} e_Phy_ParametersCommon__extendedCG_Periodicities_r16;
typedef enum Phy_ParametersCommon__extendedSPS_Periodicities_r16 {
	Phy_ParametersCommon__extendedSPS_Periodicities_r16_supported	= 0
} e_Phy_ParametersCommon__extendedSPS_Periodicities_r16;
typedef enum Phy_ParametersCommon__pusch_RepetitionTypeA_r16__sharedSpectrumChAccess_r16 {
	Phy_ParametersCommon__pusch_RepetitionTypeA_r16__sharedSpectrumChAccess_r16_supported	= 0
} e_Phy_ParametersCommon__pusch_RepetitionTypeA_r16__sharedSpectrumChAccess_r16;
typedef enum Phy_ParametersCommon__pusch_RepetitionTypeA_r16__non_SharedSpectrumChAccess_r16 {
	Phy_ParametersCommon__pusch_RepetitionTypeA_r16__non_SharedSpectrumChAccess_r16_supported	= 0
} e_Phy_ParametersCommon__pusch_RepetitionTypeA_r16__non_SharedSpectrumChAccess_r16;
typedef enum Phy_ParametersCommon__dci_DL_PriorityIndicator_r16 {
	Phy_ParametersCommon__dci_DL_PriorityIndicator_r16_supported	= 0
} e_Phy_ParametersCommon__dci_DL_PriorityIndicator_r16;
typedef enum Phy_ParametersCommon__dci_UL_PriorityIndicator_r16 {
	Phy_ParametersCommon__dci_UL_PriorityIndicator_r16_supported	= 0
} e_Phy_ParametersCommon__dci_UL_PriorityIndicator_r16;
typedef enum Phy_ParametersCommon__maxNumberPathlossRS_Update_r16 {
	Phy_ParametersCommon__maxNumberPathlossRS_Update_r16_n4	= 0,
	Phy_ParametersCommon__maxNumberPathlossRS_Update_r16_n8	= 1,
	Phy_ParametersCommon__maxNumberPathlossRS_Update_r16_n16	= 2,
	Phy_ParametersCommon__maxNumberPathlossRS_Update_r16_n32	= 3,
	Phy_ParametersCommon__maxNumberPathlossRS_Update_r16_n64	= 4
} e_Phy_ParametersCommon__maxNumberPathlossRS_Update_r16;
typedef enum Phy_ParametersCommon__type2_HARQ_ACK_Codebook_r16 {
	Phy_ParametersCommon__type2_HARQ_ACK_Codebook_r16_supported	= 0
} e_Phy_ParametersCommon__type2_HARQ_ACK_Codebook_r16;
typedef enum Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16 {
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n2	= 0,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n4	= 1,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n8	= 2,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n12	= 3,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n16	= 4,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n32	= 5,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n64	= 6,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16_n128	= 7
} e_Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResWithinSlotAcrossCC_AcrossFR_r16;
typedef enum Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16 {
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n2	= 0,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n4	= 1,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n8	= 2,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n12	= 3,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n16	= 4,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n32	= 5,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n40	= 6,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n48	= 7,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n64	= 8,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n72	= 9,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n80	= 10,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n96	= 11,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n128	= 12,
	Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16_n256	= 13
} e_Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16__maxNumberResAcrossCC_AcrossFR_r16;
typedef enum Phy_ParametersCommon__harqACK_separateMultiDCI_MultiTRP_r16__maxNumberLongPUCCHs_r16 {
	Phy_ParametersCommon__harqACK_separateMultiDCI_MultiTRP_r16__maxNumberLongPUCCHs_r16_longAndLong	= 0,
	Phy_ParametersCommon__harqACK_separateMultiDCI_MultiTRP_r16__maxNumberLongPUCCHs_r16_longAndShort	= 1,
	Phy_ParametersCommon__harqACK_separateMultiDCI_MultiTRP_r16__maxNumberLongPUCCHs_r16_shortAndShort	= 2
} e_Phy_ParametersCommon__harqACK_separateMultiDCI_MultiTRP_r16__maxNumberLongPUCCHs_r16;
typedef enum Phy_ParametersCommon__harqACK_jointMultiDCI_MultiTRP_r16 {
	Phy_ParametersCommon__harqACK_jointMultiDCI_MultiTRP_r16_supported	= 0
} e_Phy_ParametersCommon__harqACK_jointMultiDCI_MultiTRP_r16;
typedef enum Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16_PR {
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16_PR_NOTHING,	/* No components present */
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16_PR_type1_r16,
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16_PR_type2_r16
} Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16_PR;
typedef enum Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type1_r16 {
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type1_r16_us100	= 0,
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type1_r16_us200	= 1
} e_Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type1_r16;
typedef enum Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type2_r16 {
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type2_r16_us200	= 0,
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type2_r16_us400	= 1,
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type2_r16_us800	= 2,
	Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type2_r16_us1000	= 3
} e_Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16__type2_r16;

/* Forward declarations */
struct CarrierAggregationVariant;
struct CodebookVariantsList_r16;

/* Phy-ParametersCommon */
typedef struct Phy_ParametersCommon {
	long	*csi_RS_CFRA_ForHO	/* OPTIONAL */;
	long	*dynamicPRB_BundlingDL	/* OPTIONAL */;
	long	*sp_CSI_ReportPUCCH	/* OPTIONAL */;
	long	*sp_CSI_ReportPUSCH	/* OPTIONAL */;
	long	*nzp_CSI_RS_IntefMgmt	/* OPTIONAL */;
	long	*type2_SP_CSI_Feedback_LongPUCCH	/* OPTIONAL */;
	long	*precoderGranularityCORESET	/* OPTIONAL */;
	long	*dynamicHARQ_ACK_Codebook	/* OPTIONAL */;
	long	*semiStaticHARQ_ACK_Codebook	/* OPTIONAL */;
	long	*spatialBundlingHARQ_ACK	/* OPTIONAL */;
	long	*dynamicBetaOffsetInd_HARQ_ACK_CSI	/* OPTIONAL */;
	long	*pucch_Repetition_F1_3_4	/* OPTIONAL */;
	long	*ra_Type0_PUSCH	/* OPTIONAL */;
	long	*dynamicSwitchRA_Type0_1_PDSCH	/* OPTIONAL */;
	long	*dynamicSwitchRA_Type0_1_PUSCH	/* OPTIONAL */;
	long	*pdsch_MappingTypeA	/* OPTIONAL */;
	long	*pdsch_MappingTypeB	/* OPTIONAL */;
	long	*interleavingVRB_ToPRB_PDSCH	/* OPTIONAL */;
	long	*interSlotFreqHopping_PUSCH	/* OPTIONAL */;
	long	*type1_PUSCH_RepetitionMultiSlots	/* OPTIONAL */;
	long	*type2_PUSCH_RepetitionMultiSlots	/* OPTIONAL */;
	long	*pusch_RepetitionMultiSlots	/* OPTIONAL */;
	long	*pdsch_RepetitionMultiSlots	/* OPTIONAL */;
	long	*downlinkSPS	/* OPTIONAL */;
	long	*configuredUL_GrantType1	/* OPTIONAL */;
	long	*configuredUL_GrantType2	/* OPTIONAL */;
	long	*pre_EmptIndication_DL	/* OPTIONAL */;
	long	*cbg_TransIndication_DL	/* OPTIONAL */;
	long	*cbg_TransIndication_UL	/* OPTIONAL */;
	long	*cbg_FlushIndication_DL	/* OPTIONAL */;
	long	*dynamicHARQ_ACK_CodeB_CBG_Retx_DL	/* OPTIONAL */;
	long	*rateMatchingResrcSetSemi_Static	/* OPTIONAL */;
	long	*rateMatchingResrcSetDynamic	/* OPTIONAL */;
	long	*bwp_SwitchingDelay	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*dummy	/* OPTIONAL */;
	long	*maxNumberSearchSpaces	/* OPTIONAL */;
	long	*rateMatchingCtrlResrcSetDynamic	/* OPTIONAL */;
	long	*maxLayersMIMO_Indication	/* OPTIONAL */;
	struct CarrierAggregationVariant	*spCellPlacement	/* OPTIONAL */;
	long	*twoStepRACH_r16	/* OPTIONAL */;
	long	*dci_Format1_2And0_2_r16	/* OPTIONAL */;
	long	*monitoringDCI_SameSearchSpace_r16	/* OPTIONAL */;
	long	*type2_CG_ReleaseDCI_0_1_r16	/* OPTIONAL */;
	long	*type2_CG_ReleaseDCI_0_2_r16	/* OPTIONAL */;
	long	*sps_ReleaseDCI_1_1_r16	/* OPTIONAL */;
	long	*sps_ReleaseDCI_1_2_r16	/* OPTIONAL */;
	long	*csi_TriggerStateNon_ActiveBWP_r16	/* OPTIONAL */;
	long	*seperateSMTC_InterIAB_Support_r16	/* OPTIONAL */;
	long	*seperateRACH_IAB_Support_r16	/* OPTIONAL */;
	long	*ul_flexibleDL_SlotFormatSemiStatic_IAB_r16	/* OPTIONAL */;
	long	*ul_flexibleDL_SlotFormatDynamics_IAB_r16	/* OPTIONAL */;
	long	*dft_S_OFDM_WaveformUL_IAB_r16	/* OPTIONAL */;
	long	*dci_25_AI_RNTI_Support_IAB_r16	/* OPTIONAL */;
	long	*t_DeltaReceptionSupport_IAB_r16	/* OPTIONAL */;
	long	*guardSymbolReportReception_IAB_r16	/* OPTIONAL */;
	long	*harqACK_CB_SpatialBundlingPUCCH_Group_r16	/* OPTIONAL */;
	struct Phy_ParametersCommon__crossSlotScheduling_r16 {
		long	*non_SharedSpectrumChAccess_r16	/* OPTIONAL */;
		long	*sharedSpectrumChAccess_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *crossSlotScheduling_r16;
	long	*maxNumberSRS_PosPathLossEstimateAllServingCells_r16	/* OPTIONAL */;
	long	*extendedCG_Periodicities_r16	/* OPTIONAL */;
	long	*extendedSPS_Periodicities_r16	/* OPTIONAL */;
	struct CodebookVariantsList_r16	*codebookVariantsList_r16	/* OPTIONAL */;
	struct Phy_ParametersCommon__pusch_RepetitionTypeA_r16 {
		long	*sharedSpectrumChAccess_r16	/* OPTIONAL */;
		long	*non_SharedSpectrumChAccess_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_RepetitionTypeA_r16;
	long	*dci_DL_PriorityIndicator_r16	/* OPTIONAL */;
	long	*dci_UL_PriorityIndicator_r16	/* OPTIONAL */;
	long	*maxNumberPathlossRS_Update_r16	/* OPTIONAL */;
	long	*type2_HARQ_ACK_Codebook_r16	/* OPTIONAL */;
	struct Phy_ParametersCommon__maxTotalResourcesForAcrossFreqRanges_r16 {
		long	*maxNumberResWithinSlotAcrossCC_AcrossFR_r16	/* OPTIONAL */;
		long	*maxNumberResAcrossCC_AcrossFR_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *maxTotalResourcesForAcrossFreqRanges_r16;
	struct Phy_ParametersCommon__harqACK_separateMultiDCI_MultiTRP_r16 {
		long	*maxNumberLongPUCCHs_r16	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *harqACK_separateMultiDCI_MultiTRP_r16;
	long	*harqACK_jointMultiDCI_MultiTRP_r16	/* OPTIONAL */;
	struct Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16 {
		Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16_PR present;
		union Phy_ParametersCommon__bwp_SwitchingMultiCCs_r16_u {
			long	 type1_r16;
			long	 type2_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bwp_SwitchingMultiCCs_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Phy_ParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_RS_CFRA_ForHO_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dynamicPRB_BundlingDL_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sp_CSI_ReportPUCCH_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sp_CSI_ReportPUSCH_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nzp_CSI_RS_IntefMgmt_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type2_SP_CSI_Feedback_LongPUCCH_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_precoderGranularityCORESET_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dynamicHARQ_ACK_Codebook_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_semiStaticHARQ_ACK_Codebook_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_spatialBundlingHARQ_ACK_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dynamicBetaOffsetInd_HARQ_ACK_CSI_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_Repetition_F1_3_4_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ra_Type0_PUSCH_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dynamicSwitchRA_Type0_1_PDSCH_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dynamicSwitchRA_Type0_1_PUSCH_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_MappingTypeA_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_MappingTypeB_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interleavingVRB_ToPRB_PDSCH_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interSlotFreqHopping_PUSCH_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type1_PUSCH_RepetitionMultiSlots_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type2_PUSCH_RepetitionMultiSlots_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_RepetitionMultiSlots_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_RepetitionMultiSlots_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_downlinkSPS_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_configuredUL_GrantType1_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_configuredUL_GrantType2_52;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pre_EmptIndication_DL_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cbg_TransIndication_DL_56;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cbg_TransIndication_UL_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cbg_FlushIndication_DL_60;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dynamicHARQ_ACK_CodeB_CBG_Retx_DL_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rateMatchingResrcSetSemi_Static_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rateMatchingResrcSetDynamic_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bwp_SwitchingDelay_68;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSearchSpaces_74;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rateMatchingCtrlResrcSetDynamic_76;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxLayersMIMO_Indication_78;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoStepRACH_r16_81;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dci_Format1_2And0_2_r16_83;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_monitoringDCI_SameSearchSpace_r16_85;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type2_CG_ReleaseDCI_0_1_r16_87;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type2_CG_ReleaseDCI_0_2_r16_89;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sps_ReleaseDCI_1_1_r16_91;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sps_ReleaseDCI_1_2_r16_93;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_TriggerStateNon_ActiveBWP_r16_95;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_seperateSMTC_InterIAB_Support_r16_97;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_seperateRACH_IAB_Support_r16_99;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_flexibleDL_SlotFormatSemiStatic_IAB_r16_101;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_flexibleDL_SlotFormatDynamics_IAB_r16_103;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dft_S_OFDM_WaveformUL_IAB_r16_105;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dci_25_AI_RNTI_Support_IAB_r16_107;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t_DeltaReceptionSupport_IAB_r16_109;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_guardSymbolReportReception_IAB_r16_111;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_harqACK_CB_SpatialBundlingPUCCH_Group_r16_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_non_SharedSpectrumChAccess_r16_116;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sharedSpectrumChAccess_r16_118;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSRS_PosPathLossEstimateAllServingCells_r16_120;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedCG_Periodicities_r16_125;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedSPS_Periodicities_r16_127;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sharedSpectrumChAccess_r16_131;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_non_SharedSpectrumChAccess_r16_133;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dci_DL_PriorityIndicator_r16_135;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dci_UL_PriorityIndicator_r16_137;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberPathlossRS_Update_r16_139;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type2_HARQ_ACK_Codebook_r16_145;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberResWithinSlotAcrossCC_AcrossFR_r16_148;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberResAcrossCC_AcrossFR_r16_157;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberLongPUCCHs_r16_173;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_harqACK_jointMultiDCI_MultiTRP_r16_177;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type1_r16_180;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type2_r16_183;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Phy_ParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_Phy_ParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_Phy_ParametersCommon_1[70];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierAggregationVariant.h"
#include "CodebookVariantsList-r16.h"

#endif	/* _Phy_ParametersCommon_H_ */
#include "asn_internal.h"

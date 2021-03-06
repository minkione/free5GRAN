/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SL-ScheduledConfig-r16.h"

static int
memb_NativeInteger_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sl_PSFCH_ToPUCCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_Member_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sl_PSFCH_ToPUCCH_r16_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_sl_PSFCH_ToPUCCH_r16_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sl_PSFCH_ToPUCCH_r16_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_sl_PSFCH_ToPUCCH_r16_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sl_PSFCH_ToPUCCH_r16_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_6, &asn_PER_memb_Member_constr_6,  memb_NativeInteger_constraint_5 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_PSFCH_ToPUCCH_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_PSFCH_ToPUCCH_r16_specs_5 = {
	sizeof(struct SL_ScheduledConfig_r16__sl_PSFCH_ToPUCCH_r16),
	offsetof(struct SL_ScheduledConfig_r16__sl_PSFCH_ToPUCCH_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_PSFCH_ToPUCCH_r16_5 = {
	"sl-PSFCH-ToPUCCH-r16",
	"sl-PSFCH-ToPUCCH-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_PSFCH_ToPUCCH_r16_tags_5,
	sizeof(asn_DEF_sl_PSFCH_ToPUCCH_r16_tags_5)
		/sizeof(asn_DEF_sl_PSFCH_ToPUCCH_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_PSFCH_ToPUCCH_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_PSFCH_ToPUCCH_r16_tags_5)
		/sizeof(asn_DEF_sl_PSFCH_ToPUCCH_r16_tags_5[0]), /* 2 */
	{ &asn_OER_type_sl_PSFCH_ToPUCCH_r16_constr_5, &asn_PER_type_sl_PSFCH_ToPUCCH_r16_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_sl_PSFCH_ToPUCCH_r16_5,
	1,	/* Single element */
	&asn_SPC_sl_PSFCH_ToPUCCH_r16_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_ScheduledConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_ScheduledConfig_r16, sl_RNTI_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-RNTI-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_ScheduledConfig_r16, mac_MainConfigSL_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_MainConfigSL_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-MainConfigSL-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_ScheduledConfig_r16, sl_CS_RNTI_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-CS-RNTI-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_ScheduledConfig_r16, sl_PSFCH_ToPUCCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_sl_PSFCH_ToPUCCH_r16_5,
		0,
		{ &asn_OER_memb_sl_PSFCH_ToPUCCH_r16_constr_5, &asn_PER_memb_sl_PSFCH_ToPUCCH_r16_constr_5,  memb_sl_PSFCH_ToPUCCH_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-PSFCH-ToPUCCH-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_ScheduledConfig_r16, sl_ConfiguredGrantConfigList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_ConfiguredGrantConfigList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ConfiguredGrantConfigList-r16"
		},
};
static const int asn_MAP_SL_ScheduledConfig_r16_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SL_ScheduledConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_ScheduledConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-RNTI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-MainConfigSL-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-CS-RNTI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-PSFCH-ToPUCCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sl-ConfiguredGrantConfigList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_ScheduledConfig_r16_specs_1 = {
	sizeof(struct SL_ScheduledConfig_r16),
	offsetof(struct SL_ScheduledConfig_r16, _asn_ctx),
	asn_MAP_SL_ScheduledConfig_r16_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SL_ScheduledConfig_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_ScheduledConfig_r16 = {
	"SL-ScheduledConfig-r16",
	"SL-ScheduledConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_ScheduledConfig_r16_tags_1,
	sizeof(asn_DEF_SL_ScheduledConfig_r16_tags_1)
		/sizeof(asn_DEF_SL_ScheduledConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_ScheduledConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_ScheduledConfig_r16_tags_1)
		/sizeof(asn_DEF_SL_ScheduledConfig_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_ScheduledConfig_r16_1,
	5,	/* Elements count */
	&asn_SPC_SL_ScheduledConfig_r16_specs_1	/* Additional specs */
};


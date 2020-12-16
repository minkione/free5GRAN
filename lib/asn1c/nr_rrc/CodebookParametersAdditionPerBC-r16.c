/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "CodebookParametersAdditionPerBC-r16.h"

static int
memb_NativeInteger_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_NativeInteger_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_NativeInteger_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_NativeInteger_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_etype2R1_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_etype2R2_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_etype2R1_PortSelection_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_etype2R2_PortSelection_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_Member_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..511) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_etype2R1_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_etype2R1_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (0..511) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_etype2R2_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_etype2R2_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_7 CC_NOTUSED = {
	{ 2, 1 }	/* (0..511) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_etype2R1_PortSelection_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_etype2R1_PortSelection_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_9 CC_NOTUSED = {
	{ 2, 1 }	/* (0..511) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_etype2R2_PortSelection_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_etype2R2_PortSelection_r16_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_etype2R1_r16_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_etype2R1_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_etype2R2_r16_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_etype2R2_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_etype2R1_PortSelection_r16_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_etype2R1_PortSelection_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_etype2R2_PortSelection_r16_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_etype2R2_PortSelection_r16_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_etype2R1_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_3, &asn_PER_memb_Member_constr_3,  memb_NativeInteger_constraint_2 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_etype2R1_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_etype2R1_r16_specs_2 = {
	sizeof(struct CodebookParametersAdditionPerBC_r16__etype2R1_r16),
	offsetof(struct CodebookParametersAdditionPerBC_r16__etype2R1_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_etype2R1_r16_2 = {
	"etype2R1-r16",
	"etype2R1-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_etype2R1_r16_tags_2,
	sizeof(asn_DEF_etype2R1_r16_tags_2)
		/sizeof(asn_DEF_etype2R1_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_etype2R1_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_etype2R1_r16_tags_2)
		/sizeof(asn_DEF_etype2R1_r16_tags_2[0]), /* 2 */
	{ &asn_OER_type_etype2R1_r16_constr_2, &asn_PER_type_etype2R1_r16_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_etype2R1_r16_2,
	1,	/* Single element */
	&asn_SPC_etype2R1_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_etype2R2_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_5, &asn_PER_memb_Member_constr_5,  memb_NativeInteger_constraint_4 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_etype2R2_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_etype2R2_r16_specs_4 = {
	sizeof(struct CodebookParametersAdditionPerBC_r16__etype2R2_r16),
	offsetof(struct CodebookParametersAdditionPerBC_r16__etype2R2_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_etype2R2_r16_4 = {
	"etype2R2-r16",
	"etype2R2-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_etype2R2_r16_tags_4,
	sizeof(asn_DEF_etype2R2_r16_tags_4)
		/sizeof(asn_DEF_etype2R2_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_etype2R2_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_etype2R2_r16_tags_4)
		/sizeof(asn_DEF_etype2R2_r16_tags_4[0]), /* 2 */
	{ &asn_OER_type_etype2R2_r16_constr_4, &asn_PER_type_etype2R2_r16_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_etype2R2_r16_4,
	1,	/* Single element */
	&asn_SPC_etype2R2_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_etype2R1_PortSelection_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_7, &asn_PER_memb_Member_constr_7,  memb_NativeInteger_constraint_6 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_etype2R1_PortSelection_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_etype2R1_PortSelection_r16_specs_6 = {
	sizeof(struct CodebookParametersAdditionPerBC_r16__etype2R1_PortSelection_r16),
	offsetof(struct CodebookParametersAdditionPerBC_r16__etype2R1_PortSelection_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_etype2R1_PortSelection_r16_6 = {
	"etype2R1-PortSelection-r16",
	"etype2R1-PortSelection-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_etype2R1_PortSelection_r16_tags_6,
	sizeof(asn_DEF_etype2R1_PortSelection_r16_tags_6)
		/sizeof(asn_DEF_etype2R1_PortSelection_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_etype2R1_PortSelection_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_etype2R1_PortSelection_r16_tags_6)
		/sizeof(asn_DEF_etype2R1_PortSelection_r16_tags_6[0]), /* 2 */
	{ &asn_OER_type_etype2R1_PortSelection_r16_constr_6, &asn_PER_type_etype2R1_PortSelection_r16_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_etype2R1_PortSelection_r16_6,
	1,	/* Single element */
	&asn_SPC_etype2R1_PortSelection_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_etype2R2_PortSelection_r16_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_9, &asn_PER_memb_Member_constr_9,  memb_NativeInteger_constraint_8 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_etype2R2_PortSelection_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_etype2R2_PortSelection_r16_specs_8 = {
	sizeof(struct CodebookParametersAdditionPerBC_r16__etype2R2_PortSelection_r16),
	offsetof(struct CodebookParametersAdditionPerBC_r16__etype2R2_PortSelection_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_etype2R2_PortSelection_r16_8 = {
	"etype2R2-PortSelection-r16",
	"etype2R2-PortSelection-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_etype2R2_PortSelection_r16_tags_8,
	sizeof(asn_DEF_etype2R2_PortSelection_r16_tags_8)
		/sizeof(asn_DEF_etype2R2_PortSelection_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_etype2R2_PortSelection_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_etype2R2_PortSelection_r16_tags_8)
		/sizeof(asn_DEF_etype2R2_PortSelection_r16_tags_8[0]), /* 2 */
	{ &asn_OER_type_etype2R2_PortSelection_r16_constr_8, &asn_PER_type_etype2R2_PortSelection_r16_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_etype2R2_PortSelection_r16_8,
	1,	/* Single element */
	&asn_SPC_etype2R2_PortSelection_r16_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CodebookParametersAdditionPerBC_r16_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CodebookParametersAdditionPerBC_r16, etype2R1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_etype2R1_r16_2,
		0,
		{ &asn_OER_memb_etype2R1_r16_constr_2, &asn_PER_memb_etype2R1_r16_constr_2,  memb_etype2R1_r16_constraint_1 },
		0, 0, /* No default value */
		"etype2R1-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct CodebookParametersAdditionPerBC_r16, etype2R2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_etype2R2_r16_4,
		0,
		{ &asn_OER_memb_etype2R2_r16_constr_4, &asn_PER_memb_etype2R2_r16_constr_4,  memb_etype2R2_r16_constraint_1 },
		0, 0, /* No default value */
		"etype2R2-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct CodebookParametersAdditionPerBC_r16, etype2R1_PortSelection_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_etype2R1_PortSelection_r16_6,
		0,
		{ &asn_OER_memb_etype2R1_PortSelection_r16_constr_6, &asn_PER_memb_etype2R1_PortSelection_r16_constr_6,  memb_etype2R1_PortSelection_r16_constraint_1 },
		0, 0, /* No default value */
		"etype2R1-PortSelection-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct CodebookParametersAdditionPerBC_r16, etype2R2_PortSelection_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_etype2R2_PortSelection_r16_8,
		0,
		{ &asn_OER_memb_etype2R2_PortSelection_r16_constr_8, &asn_PER_memb_etype2R2_PortSelection_r16_constr_8,  memb_etype2R2_PortSelection_r16_constraint_1 },
		0, 0, /* No default value */
		"etype2R2-PortSelection-r16"
		},
};
static const int asn_MAP_CodebookParametersAdditionPerBC_r16_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CodebookParametersAdditionPerBC_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CodebookParametersAdditionPerBC_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* etype2R1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* etype2R2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* etype2R1-PortSelection-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* etype2R2-PortSelection-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_CodebookParametersAdditionPerBC_r16_specs_1 = {
	sizeof(struct CodebookParametersAdditionPerBC_r16),
	offsetof(struct CodebookParametersAdditionPerBC_r16, _asn_ctx),
	asn_MAP_CodebookParametersAdditionPerBC_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CodebookParametersAdditionPerBC_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CodebookParametersAdditionPerBC_r16 = {
	"CodebookParametersAdditionPerBC-r16",
	"CodebookParametersAdditionPerBC-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_CodebookParametersAdditionPerBC_r16_tags_1,
	sizeof(asn_DEF_CodebookParametersAdditionPerBC_r16_tags_1)
		/sizeof(asn_DEF_CodebookParametersAdditionPerBC_r16_tags_1[0]), /* 1 */
	asn_DEF_CodebookParametersAdditionPerBC_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_CodebookParametersAdditionPerBC_r16_tags_1)
		/sizeof(asn_DEF_CodebookParametersAdditionPerBC_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CodebookParametersAdditionPerBC_r16_1,
	4,	/* Elements count */
	&asn_SPC_CodebookParametersAdditionPerBC_r16_specs_1	/* Additional specs */
};

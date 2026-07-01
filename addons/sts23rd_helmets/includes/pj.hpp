
/////////AMP/////////

class OPSCORE(pj_amp_weight) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT PJ [AMP/Counterweight]";
    model = MODEL(opscore1);
    hiddenSelections[]={
        "camo1",
        "_cover",
        "_patch",
        "_patch2",
        "_peltor",
        "_peltor2",
        "_HelmetCam",
        "_pvs31Batt",
        "_Switch"
    };
    hiddenSelectionsTextures[]={
        "121_75th_helmet\data\highcut_ops_core_rails_co.paa",
        "121_75th_helmet\data\price_helmet2_mc_co.paa",
        PATCH(unit),
        PATCH(pj),
        "",
        "",
        "",
        "",
        ""
    };
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1);
        hiddenSelections[]={
            "camo1",
            "_cover",
            "_patch",
            "_patch2",
            "_peltor",
            "_peltor2",
            "_HelmetCam",
            "_pvs31Batt",
            "_Switch"
        };
    };
};
class OPSCORE(pj_amp_weight_off) : OPSCORE(pj_amp_weight) {
    displayName = "Ops-Core MT PJ Folded [AMP/Counterweight]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(pj_amp_weight));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

class OPSCORE(pj_amp_battery) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT PJ [AMP/Battery Pack]";
    model = MODEL(opscore1);
    hiddenSelections[]={
		"camo1",
		"_cover",
		"_patch",
		"_patch2",
		"_peltor",
		"_peltor2",
		"_HelmetCam",
		"_counterWeight",
		"_Switch"
    };
    hiddenSelectionsTextures[]={
        "121_75th_helmet\data\highcut_ops_core_rails_co.paa",
        "121_75th_helmet\data\price_helmet2_mc_co.paa",
        PATCH(unit),
        PATCH(pj),
        "",
        "",
        "",
        "",
        ""
    };
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1);
        hiddenSelections[]={
            "camo1",
            "_cover",
            "_patch",
            "_patch2",
            "_peltor",
            "_peltor2",
            "_HelmetCam",
            "_counterWeight",
            "_Switch"
        };
    };
};
class OPSCORE(pj_amp_battery_off) : OPSCORE(pj_amp_battery) {
    displayName = "Ops-Core MT PJ Folded [AMP/Battery Pack]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(pj_amp_battery));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

/////////Peltor/////////

class OPSCORE(pj_peltor_weight) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT PJ [Peltor/Counterweight]";
    model = MODEL(opscore1);
    hiddenSelections[]={
		"camo1",
		"_cover",
		"_patch",
		"_patch2",
		"_headsetRacs",
		"_peltor2",
		"_HelmetCam",
		"_pvs31Batt",
		"_Switch"
    };
    hiddenSelectionsTextures[]={
        "121_75th_helmet\data\highcut_ops_core_rails_co.paa",
        "121_75th_helmet\data\price_helmet2_mc_co.paa",
        PATCH(unit),
        PATCH(pj),
        "",
        "",
        "",
        "",
        ""
    };
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1);
        hiddenSelections[]={
            "camo1",
            "_cover",
            "_patch",
            "_patch2",
            "_headsetRacs",
            "_peltor2",
            "_HelmetCam",
            "_pvs31Batt",
            "_Switch"
        };
    };
};
class OPSCORE(pj_peltor_weight_off) : OPSCORE(pj_peltor_weight) {
    displayName = "Ops-Core MT PJ Folded [Peltor/Counterweight]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(pj_peltor_weight));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

class OPSCORE(pj_peltor_battery) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT PJ [Peltor/Battery Pack]";
    model = MODEL(opscore1);
    hiddenSelections[]={
		"camo1",
		"_cover",
		"_patch",
		"_patch2",
		"_headsetRacs",
		"_peltor2",
		"_HelmetCam",
		"_counterWeight",
		"_Switch"
    };
    hiddenSelectionsTextures[]={
        "121_75th_helmet\data\highcut_ops_core_rails_co.paa",
        "121_75th_helmet\data\price_helmet2_mc_co.paa",
        PATCH(unit),
        PATCH(pj),
        "",
        "",
        "",
        "",
        ""
    };
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1);
        hiddenSelections[]={
            "camo1",
            "_cover",
            "_patch",
            "_patch2",
            "_headsetRacs",
            "_peltor2",
            "_HelmetCam",
            "_counterWeight",
            "_Switch"
        };
    };
};
class OPSCORE(pj_peltor_battery_off) : OPSCORE(pj_peltor_battery) {
    displayName = "Ops-Core MT PJ Folded [Peltor/Battery Pack]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(pj_peltor_battery));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

/////////Peltor ARC/////////

class OPSCORE(pj_arc_battery) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT PJ [Peltor ARC/Battery Pack]";
    model = MODEL(opscore1);
    hiddenSelections[]={
		"camo1",
		"_cover",
		"_patch",
		"_patch2",
		"_headsetRacs",
		"_peltor",
		"_HelmetCam",
		"_counterWeight",
		"_ChargePro"
    };
    hiddenSelectionsTextures[]={
		"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
		"121_75th_helmet\data\price_helmet2_mc_co.paa",
		PATCH(unit),
		PATCH(pj),
		"",
		"",
		"",
		"",
		""
    };
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1);
        hiddenSelections[]={
            "camo1",
            "_cover",
            "_patch",
            "_patch2",
            "_headsetRacs",
            "_peltor",
            "_HelmetCam",
            "_counterWeight",
            "_ChargePro"
        };
    };
};
class OPSCORE(pj_arc_battery_off) : OPSCORE(pj_arc_battery) {
    displayName = "Ops-Core MT PJ Folded [Peltor ARC/Battery Pack]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(pj_arc_battery));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};


class OPSCORE(pj_arc_weight) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT PJ [Peltor ARC/Counterweight]";
    model = MODEL(opscore_peltor2);

    hiddenSelections[]={
		"camo1",
		"_cover",
		"_patch",
		"_patch2",
		"_headsetRacs",
		"_peltor",
		"_HelmetCam",
		"_pvs31Batt"
    };
    hiddenSelectionsTextures[]={
        "121_75th_helmet\data\highcut_ops_core_rails_co.paa",
        "121_75th_helmet\data\price_helmet2_mc_co.paa",
        PATCH(unit),
        PATCH(pj_rev), //rev
        "",
        "",
        "",
        ""
    };
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore_peltor2);
        hiddenSelections[]={
            "camo1",
            "_cover",
            "_patch",
            "_patch2",
            "_headsetRacs",
            "_peltor",
            "_HelmetCam",
            "_pvs31Batt"
        };
    };
};
class OPSCORE(pj_arc_weight_off) : OPSCORE(pj_arc_weight) {
    displayName = "Ops-Core MT PJ Folded [Peltor ARC/Counterweight]";
    model = MODEL(opscore_peltor2_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(pj_arc_weight));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore_peltor2_off);
    };
};

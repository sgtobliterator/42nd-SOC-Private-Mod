
/////////AMP/////////

class OPSCORE(amp_weight) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT [AMP/Counterweight]";
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
        "",
        "",
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
class OPSCORE(amp_weight_off) : OPSCORE(amp_weight) {
    displayName = "Ops-Core MT Folded [AMP/Counterweight]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(amp_weight));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

class OPSCORE(amp_battery) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT [AMP/Battery Pack]";
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
        "",
        "",
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
class OPSCORE(amp_battery_off) : OPSCORE(amp_battery) {
    displayName = "Ops-Core MT Folded [AMP/Battery Pack]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(amp_battery));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

/////////Peltor/////////

class OPSCORE(peltor_weight) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT [Peltor/Counterweight]";
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
        "",
        "",
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
class OPSCORE(peltor_weight_off) : OPSCORE(peltor_weight) {
    displayName = "Ops-Core MT Folded [Peltor/Counterweight]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(peltor_weight));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

class OPSCORE(peltor_battery) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT [Peltor/Battery Pack]";
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
        "",
        "",
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
class OPSCORE(peltor_battery_off) : OPSCORE(peltor_battery) {
    displayName = "Ops-Core MT Folded [Peltor/Battery Pack]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(peltor_battery));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};

/////////Peltor ARC/////////

class OPSCORE(arc_battery) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT [Peltor ARC/Battery Pack]";
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
		"",
		"",
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
class OPSCORE(arc_battery_off) : OPSCORE(arc_battery) {
    displayName = "Ops-Core MT Folded [Peltor ARC/Battery Pack]";
    model = MODEL(opscore1_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(arc_battery));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore1_off);
    };
};


class OPSCORE(arc_weight) : TAG(core) {
    scope = 2;
    displayName = "Ops-Core MT [Peltor ARC/Counterweight]";
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
        "",
        "",
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
class OPSCORE(arc_weight_off) : OPSCORE(arc_weight) {
    displayName = "Ops-Core MT Folded [Peltor ARC/Counterweight]";
    model = MODEL(opscore_peltor2_off);
    EHP_OFF;
    ACE_HIDE;
    ace_arsenal_uniqueBase = Q(OPSCORE(arc_weight));
    class ItemInfo : ItemInfo {
        uniformModel = MODEL(opscore_peltor2_off);
    };
};

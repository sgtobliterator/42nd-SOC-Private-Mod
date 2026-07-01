class STY_CamoNet: Building {
    class EventHandlers {
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    };

    author = "Styles2304";
    scope = 0;
    mapsize = 15;
    cost = 0;
    armor = 0;
    placement = vertical;
    icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    model = "\sty_equipment\vehicles\camoNet\sty_camoNet.p3d";
    editorCategory = "STY_Cat_SniperTools";
    editorSubcategory = "STY_SubCat_Structures";
    vehicleClass = "Structures_Military";

    class ACE_Actions {
        class ACE_MainActions {
            selection = "";
            distance = 5;
            condition = "(true)";

            class STY_camoNet_pickup {
                selection = "";
                displayName = "Pickup";
                condition = "(true)";
                statement = "[_target, _player] spawn STY_fnc_camoNet_pickup";
            };

            class STY_camoNet_move {
                selection = "";
                displayName = "Move";
                condition = "(true)";
                statement = "[_target, _player] spawn STY_fnc_camoNet_move";
            };
        };
    };
};

class STY_CamoNet_BLUFOR: STY_CamoNet {
    scope = 2;
    scopeCurator = 2;
    displayName = "CamoNet BLUFOR";
    descriptionShort = "Two man hide made from camo netting";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = {
        "\sty_equipment\vehicles\camoNet\data\camoNet_small_blufor_ca.paa"
    };
};

class STY_CamoNet_OPFOR: STY_CamoNet {
    scope = 2;
    scopeCurator = 2;
    displayName = "CamoNet OPFOR";
    descriptionShort = "Two man hide made from camo netting";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = {
        "\sty_equipment\vehicles\camoNet\data\camoNet_small_opfor_ca.paa"
    };
};

class STY_CamoNet_INDP: STY_CamoNet {
    scope = 2;
    scopeCurator = 2;
    displayName = "CamoNet INDP";
    descriptionShort = "Two man hide made from camo netting";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = {
        "\sty_equipment\vehicles\camoNet\data\camoNet_small_indp_ca.paa"
    };
};
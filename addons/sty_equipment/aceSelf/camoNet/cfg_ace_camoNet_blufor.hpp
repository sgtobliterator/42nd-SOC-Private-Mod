class STY_camoNet_BLUFOR_deploy {
    displayName = "CamoNet (BLUFOR)";
    condition = "['STY_Item_CamoNet_BLUFOR'] call STY_fnc_camoNet_canDeploy";
    statement = "['STY_CamoNet_BLUFOR', ACE_player] spawn STY_fnc_camoNet_deploy";
    icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    exceptions[] = { "notOnMap", "isNotInside", "isNotSitting" };
};

class STY_camoNet_OPFOR_deploy {
    displayName = "CamoNet (OPFOR)";
    condition = "['STY_Item_CamoNet_OPFOR'] call STY_fnc_camoNet_canDeploy";
    statement = "['STY_CamoNet_OPFOR', ACE_player] spawn STY_fnc_camoNet_deploy";
    icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    exceptions[] = { "notOnMap", "isNotInside", "isNotSitting" };
};

class STY_camoNet_INDP_deploy {
    displayName = "CamoNet (INDP)";
    condition = "['STY_Item_CamoNet_INDP'] call STY_fnc_camoNet_canDeploy";
    statement = "['STY_CamoNet_INDP', ACE_player] spawn STY_fnc_camoNet_deploy";
    icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    exceptions[] = { "notOnMap", "isNotInside", "isNotSitting" };
};

class STY_camoNet_drop {
    displayName = "Drop CamoNet";
    condition = "(ACE_player getVariable ['STY_camoNet_carrying', false])";
    statement = "[ACE_player] spawn STY_fnc_camoNet_drop";
    icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    execeptions[] = { "notOnMap" };
};
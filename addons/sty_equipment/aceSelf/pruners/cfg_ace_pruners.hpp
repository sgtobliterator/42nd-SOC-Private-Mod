class STY_pruners_use {
    displayName = "Trim Grass";
    condition = "([] call STY_fnc_pruners_canTrim)";
    statement = "[] spawn STY_fnc_pruners";
    icon = "\sty_equipment\weapons\pruners\ui\pruners_icon.paa";
    exections[] = {"notOnMap", "isNotInside"};
};
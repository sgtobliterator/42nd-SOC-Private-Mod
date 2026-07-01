class STY_ghillieSuit_ghillieUp {
    displayName = "Ghillie Up";
    condition = "([] call STY_fnc_ghillieSuit_carryingGhillie)";
    statement = "[] spawn STY_fnc_ghillieSuit_ghillieUp";
    icon = "\sty_equipment\weapons\ghillieSuit\ui\ghillieSuit_icon.paa";
    exections[] = {"notOnMap", "isNotInside"};
};

class STY_ghillieSuit_ghillieDown {
    displayName = "Remove Ghillie";
    condition = "([] call STY_fnc_ghillieSuit_wearingGhillie)";
    statement = "[] spawn STY_fnc_ghillieSuit_ghillieDown";
    icon = "\sty_equipment\weapons\ghillieSuit\ui\ghillieSuit_icon.paa";
    exections[] = {"notOnMap", "isNotInside"};
};
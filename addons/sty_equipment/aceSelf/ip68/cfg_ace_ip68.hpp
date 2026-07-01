class STY_IP68_Open {
    displayName = "Open IP68";
    condition = "([] call STY_fnc_ip68_canShow && !([] call STY_fnc_ip68_isShowing))";
    statement = "[] spawn STY_fnc_ip68";
    icon = "\sty_equipment\weapons\ip68\ui\IP68_icon.paa";
    exceptions[] = {"notOnMap", "isNotInside"};
};

class STY_IP68_Close {
    displayName = "Close IP68";
    condition = "[] call STY_fnc_ip68_isShowing";
    statement = "cutText ['', 'PLAIN'];";
    icon = "\sty_equipment\weapons\ip68\ui\IP68_icon.paa";
    exceptions[] = {"notOnMap", "isNotInside"};
};
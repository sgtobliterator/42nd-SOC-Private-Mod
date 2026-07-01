[
    QSETTING(enable),
    "CHECKBOX",
    ["Enable","If enabled IR Strobe will be available"],
    [QPRETTY],
    true,
    1,
    {[EVENT(debug)] call CBA_fnc_globalEvent;},
    false
] call CBA_fnc_addSetting;

[
    QSETTING(showDuringDaytime),
    "CHECKBOX",
    ["Show during day","If enabled turn-on action will be available during daytime"],
    [QPRETTY],
    true,
    0,
    {},
    false
] call CBA_fnc_addSetting;

[
    QSETTING(requireItem),
    "CHECKBOX",
    ["Require Item","If enabled you will need to have the Helstar 6 strobe item in your inventory to use the strobe"],
    [QPRETTY],
    false,
    1,
    {[EVENT(debug)] call CBA_fnc_globalEvent;},
    false
] call CBA_fnc_addSetting;

[
    QSETTING(flash),
    "SLIDER",
    ["Flash length","Amount of time a flash lasts in seconds"],
    [QPRETTY],
    [0.01,0.5,0.05,2],
    1,
    {},
    false
] call CBA_fnc_addSetting;

[
    QSETTING(frequency),
    "SLIDER",
    ["Flash frequency","Time in seconds between each flash"],
    [QPRETTY],
    [0.5,5,1,1],
    1,
    {},
    false
] call CBA_fnc_addSetting;

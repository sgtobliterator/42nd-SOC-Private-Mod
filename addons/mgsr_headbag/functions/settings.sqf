[
    "aa_headbag_requireHeadbag",
    "CHECKBOX",
    ["Require Headbag","If enabled you will need a headbag in inventory and it will be consumed when bagging."],
    ["Arma Addicts","Headbag"],
    true,
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    "aa_headbag_enabled",
    "CHECKBOX",
    ["Enable Headbag","If disabled, you won't be able to headbag."],
    ["Arma Addicts","Headbag"],
    true,
    1,
    {},
    false
] call CBA_fnc_addSetting;

[
    "aa_headbag_forceOn",
    "CHECKBOX",
    ["Force Headbag","If enabled, any headgear, facewear or nightvision will be removed when placing headbag."],
    ["Arma Addicts","Headbag"],
    false,
    1,
    {},
    false
] call CBA_fnc_addSetting;

["aa_headbag_dummy", "aa_headbag"] call ace_common_fnc_registerItemReplacement;
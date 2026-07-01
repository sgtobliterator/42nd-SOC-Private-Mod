["Sniper Tools", "showIP68_key", "Toggle IP68",
{
    // Conditions: canInteract
    if !([] call STY_fnc_ip68_canShow && !([] call STY_fnc_ip68_isShowing)) exitWith {false};

    // Statement
    [] spawn STY_fnc_ip68;
    false
},
{ false },
[0, [true, false, false]], false, 0] call CBA_fnc_addKeybind;
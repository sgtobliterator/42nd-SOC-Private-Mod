#include "define.hpp"

PREP(canFold);
PREP(canToggleHeadset);
PREP(canUnfold);
PREP(replace);
PREP(switchHeadset);

if hasInterface then {
    ["ace_arsenal_loadoutsDisplayOpened",{
        0 call FNC(replace);
    }] call CBA_fnc_addEventHandler;
};

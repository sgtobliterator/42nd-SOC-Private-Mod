#include "define.hpp"

#include "settings.inc"

PREP(canDisable);
PREP(canEnable);
PREP(disable);
PREP(enable);
PREP(localDisable);
PREP(localEnable);

if isServer then {
    allAdmins = (getServerInfo get "admins");
    publicVariable "allAdmins";
};

if hasInterface then {
    ace_player addEventHandler ["Killed", {
        [{[EVENT(disable), _this] call CBA_fnc_globalEvent;}, _this select 0, 300] call CBA_fnc_waitAndExecute;
    }];
    ace_player addEventHandler ["SlotItemChanged", {
        params ["_unit", "_name", "_slot", "_assigned", "_weapon"];
        if (_slot == 605 && !_assigned && (call FNC(canDisable))) exitWith {
            [EVENT(disable), ace_player] call CBA_fnc_globalEvent;
        };
    }];

    [EVENT(disable), {[_this] call FNC(localDisable);}] call CBA_fnc_addEventHandler;
    [EVENT(enable), {[_this] call FNC(localEnable);}] call CBA_fnc_addEventHandler;
    [EVENT(debug), {[EVENT(disable), ace_player] call CBA_fnc_globalEvent;}] call CBA_fnc_addEventHandler;

    ["fixhelstar", {
        if (getPlayerUID player in allAdmins || serverCommandAvailable "#debug") then {[EVENT(debug)] call CBA_fnc_globalEvent;};
    }, "all"] call CBA_fnc_registerChatCommand;
};

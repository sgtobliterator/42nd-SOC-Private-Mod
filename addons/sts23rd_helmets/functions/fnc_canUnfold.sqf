#include "..\define.hpp"

private _helmet = headgear ace_player;
private _count = count _helmet;

(([configFile >> "CfgWeapons" >> (headgear ace_player), true] call BIS_fnc_returnParents) find Q(TAG(core)) != -1)
&& ((_helmet select [_count - 4]) == "_off");

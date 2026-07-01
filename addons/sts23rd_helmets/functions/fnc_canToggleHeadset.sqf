#include "..\define.hpp"

([configFile >> "CfgWeapons" >> (headgear ace_player), true] call BIS_fnc_returnParents) find Q(TAG(core)) != -1;

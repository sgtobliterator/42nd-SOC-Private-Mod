/*
* Author: Styles2304
* Confirms dropping the camonet after moving
* 
* Arguments:
* 	1: _player <PLAYER>
* 
* Return Value:
* 	None
* 
* Example:
* 	[ ACE_player ] call STY_fnc_camoNet_drop
*/

private [ "_player", "_camoNet", "_id" ];
params [ "_player" ];

_camoNet = _player getVariable "STY_camoNet_camoNet";
_id = _player getVariable "STY_camoNet_actionID";

detach _camoNet;
_camoNet setPosATL [(getPos _camoNet) select 0, (getPos _camoNet) select 1, 0];
_camoNet setVectorUp surfaceNormal position _camoNet;

[_player, "forceWalk", "STY_CamoNet", false] call ace_common_fnc_statusEffect_set;
[_player, "blockThrow", "STY_CamoNet", false] call ace_common_fnc_statusEffect_set;

[] call ace_interaction_fnc_hideMouseHint;
[_player, "DefaultAction", _id] call ace_common_fnc_removeActionEventHandler;

_player setVariable ["STY_camoNet_camoNet", nil];
_player setVariable ["STY_camoNet_actionID", nil];
_player setVariable ["STY_camoNet_carrying", nil]
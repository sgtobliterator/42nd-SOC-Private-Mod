/*
* Author: Styles2304
* Allows the camonet to be moved after deployment
* 
* Arguments:
* 	0: _camoNet <OBJECT>
* 	1: _player <PLAYER>
* 
* Return Value:
* 	None
* 
* Example:
* 	[ camoNet, ACE_player ] spawn STY_fnc_camoNet_move
*/

private [ "_camoNet", "_player", "_id" ];
params [ "_camoNet", "_player" ];

_player setVariable ["STY_camoNet_camoNet", _camoNet, true];
_player setVariable ["STY_camoNet_carrying", true, true];

_camoNet attachTo [_player];

[_player, "forceWalk", "STY_CamoNet", true] call ace_common_fnc_statusEffect_set;
[_player, "blockThrow", "STY_CamoNet", true] call ace_common_fnc_statusEffect_set;

["Place CamoNet", ""] call ace_interaction_fnc_showMouseHint;

_id = [_player, "DefaultAction", { true }, { [_this select 0] call STY_fnc_camoNet_drop }] call ace_common_fnc_addActionEventHandler;
_player setVariable ["STY_CamoNet_actionID", _id, true];
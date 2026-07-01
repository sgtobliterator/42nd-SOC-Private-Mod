/*
* Author: Styles2304
* Picks up the camonet and places it in the player's inventory
* 
* Arguments:
* 	0: _camoNet <OBJECT>
* 	1: _player <PLAYER>
* 
* Return Value:
* 	None
* 
* Example:
* 	[ camoNet, ACE_player ] spawn STY_fnc_camoNet_pickup
*/

private [ "_camoNet", "_player", "_camoType", "_addItem" ];
params [ "_camoNet", "_player" ];

_camoType = typeOf _camoNet;
_addItem = "";

switch (_camoType) do {
	case "STY_CamoNet_BLUFOR": { _addItem = "STY_Item_CamoNet_BLUFOR"; };
	case "STY_CamoNet_OPFOR": { _addItem = "STY_Item_CamoNet_OPFOR"; };
	case "STY_CamoNet_INDP": { _addItem = "STY_Item_CamoNet_INDP"; };
};

[10, [_player, _addItem, _camoNet], {
	(_this select 0) params [ "_player", "_addItem", "_camoNet" ];
	_player addItem _addItem;
	deleteVehicle _camoNet;
}, {}, "Packing up CamoNet"] call ace_common_fnc_progressBar;
/*
* Author: Styles2304
* Deploys camonet
* 
* Arguments:
* 	0: _camoNet <OBJECT>
* 	1: _player <PLAYER>
* 
* Return Value:
* 	None
* 
* Example:
* 	[ camoNet, ACE_player ] spawn STY_fnc_camoNet_deploy
*/

private [ "_type", "_player", "_removeItem" ];
params [ "_type", "_player" ];

_removeItem = "";

switch (_type) do {
	case "STY_CamoNet_BLUFOR": { _removeItem = "STY_Item_CamoNet_BLUFOR"; };
	case "STY_CamoNet_OPFOR": { _removeItem = "STY_Item_CamoNet_OPFOR"; };
	case "STY_CamoNet_INDP": { _removeItem = "STY_Item_CamoNet_INDP"; };
};

[10, [_player, _type, _removeItem], {
	(_this select 0) params [ "_player", "_type", "_removeItem" ];
	_net = _type createVehicle [0,0,0];
	_net setPos (getPos player);
	_net setDir ((getDir player) - 180);
	_net setVectorUp surfaceNormal position _net;

	_player removeItem _removeItem;
}, {}, "Deploying CamoNet"] call ace_common_fnc_progressBar;
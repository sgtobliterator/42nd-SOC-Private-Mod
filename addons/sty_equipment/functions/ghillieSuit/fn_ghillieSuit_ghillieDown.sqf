/*
* Author: Styles2304
* Removes player's ghillie suit, puts on uniform, and transfers items
* 
* Arguments:
* 	<NONE>
* 
* Return Value:
* 	<NONE>
* 
* Example:
* 	[] call STY_fnc_ghillieSuit_ghillieDown
*/

private [
	"_ghillie",
	"_uniform",
	"_uniformItems",
	"_backpack",
	"_backpackItems",
	"_relPos",
	"_tempPackHolder"
];

disableUserInput true;

[12, [], {}, {}, "Removing Ghillie Suit"] call ace_common_fnc_progressBar;

_ghillie = uniform ACE_player;
_uniform = ACE_player getVariable "sty_ghillieSuit_uniform";
_uniformItems = uniformItems ACE_player;
_backpack = backpack ACE_player;
_backpackItems = backpackItems ACE_player;
_relPos = ACE_player getRelPos [0.8, 359];

ACE_player setVariable ["sty_ghillieSuit_carriedGhillie", _ghillie, true];

_tempPackHolder = "groundWeaponHolder" createVehicle [0,0,0];
_tempPackHolder setPos _relPos;
_tempPackHolder addBackpackCargoGlobal [_backpack, 1];

removeBackpack ACE_player;

ACE_player playMove "AinvPknlMstpSnonWnonDnon_medic4";

sleep 6;

removeUniform ACE_player;
ACE_player forceAddUniform _uniform;
{ ACE_player addItemToUniform _x; } forEach _uniformItems;

sleep 6;
deleteVehicle _tempPackHolder;

ACE_player addBackpack _backpack;
{ ACE_player addItemToBackpack _x; } forEach _backpackItems;
ACE_player addItemToBackpack _ghillie;

disableUserInput false;
/*
* Author: Styles2304
* Determines whether or not a player has a ghillie suit in their inventory
* 
* Arguments:
* 	<NONE>
* 
* Return Value:
* 	<BOOL>
* 
* Example:
* 	[] call STY_fnc_ghillieSuit_carryingGhillie
*/

private [ "_carryingGhillie", "_items" ];

_carryingGhillie = false;

{ _ghillie = _x;
	if (_ghillie in items ACE_player) then {
		_carryingGhillie = true;
		ACE_player setVariable["sty_ghillieSuit_carriedGhillie", _ghillie, true];
	};
} forEach sty_sniperTools_ghillieSuits;

_carryingGhillie;
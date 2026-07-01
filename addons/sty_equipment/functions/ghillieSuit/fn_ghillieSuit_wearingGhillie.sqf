/*
* Author: Styles2304
* Determines whether or not a player has is wearing a ghillie suit
* 
* Arguments:
* 	<NONE>
* 
* Return Value:
* 	<BOOL>
* 
* Example:
* 	[] call STY_fnc_ghillieSuit_wearingGhillie
*/

private [ "_wearingGhillie"];

_wearingGhillie = false;

{ _ghillie = _x;
	if (uniform ACE_player == _ghillie) then {
		_wearingGhillie = true;
		ACE_player setVariable["sty_ghillieSuit_wornGhillie", _ghillie, true];
	};
} forEach sty_sniperTools_ghillieSuits;

_wearingGhillie;
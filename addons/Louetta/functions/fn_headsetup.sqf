/*
 * Author: Louetta
 * Description: Puts Comtacs Down
 *
 * Arguments:
 * None
 *
 * Return value:
 * None
 *
 * Public: No
 */
 
_curplayer = _this select 0;
	
	if(headgear _curplayer == "Louetta_SF") then {
		removeHeadgear _curplayer;
		_curplayer addHeadgear "Louetta_sf_up";
};
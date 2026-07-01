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
	
	if(headgear _curplayer == "Louetta_SF_up") then {
		removeHeadgear _curplayer;
		_curplayer addHeadgear "Louetta_SF";
};

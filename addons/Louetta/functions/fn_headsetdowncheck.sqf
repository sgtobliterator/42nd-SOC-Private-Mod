/*
 * Author: Louetta
 * Description: checks to see if player is wearing correct hat
 *
 * Arguments:
 * None
 *
 * Return value:
 * <BOOL>
 *
 * Public: No
 */

 _curplayer = _this select 0;

if(headgear _curplayer == "Louetta_SF") exitWith {true;};

false;
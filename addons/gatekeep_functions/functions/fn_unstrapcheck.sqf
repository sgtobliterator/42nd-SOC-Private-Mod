/*
 * Author: Louetta
 * Description: checks to see if player is wearing correct helmet
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


if(headgear _curplayer == "GateKeep_XP_Y02_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y15_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_2_Y15_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y16_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y19_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y25_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y26_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y42_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y48_2") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y57_2") exitWith {true;};


false;
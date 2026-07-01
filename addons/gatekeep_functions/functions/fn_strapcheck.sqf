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

if(headgear _curplayer == "GateKeep_XP_Y02") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y15") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_2_Y15") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y16") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y19") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y25") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y26") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y42") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y48") exitWith {true;};
if(headgear _curplayer == "GateKeep_XP_Y57") exitWith {true;};

false;
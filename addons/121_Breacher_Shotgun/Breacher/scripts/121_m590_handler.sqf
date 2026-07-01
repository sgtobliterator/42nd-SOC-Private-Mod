/*
simple pump action handling

a: reyhard
*/

private _p =(call rhsusf_fnc_findPlayer);

if(not(isNil "serbu_pump_eh"))exitWith{};
//systemChat "adding EH";

serbu_pump_eh =  _p addEventHandler ["fired",
{
	params["_u","_w"];
	if( _w in ["121_serbu_breacher"])then{
		if(_u ammo _w == 0)exitWith{};

		_this spawn {
			params["_u","","_m"];

			waitUntil {_u setWeaponReloadingTime [_u,_m,1];(inputAction "DefaultAction" == 0)};
			_u playAction '121_GestureRechamberM590';
			sleep 0.5;
			playSound3D ["rhsusf\addons\rhsusf_c_weapons\sounds\m590_pump.ogg", player, false,ATLToASL ( _u modelToWorldVisual (_u selectionPosition "leftHand")), 0.9, 1, 20];
		};
	}else{
		// fix for grenade throwing
		if((currentWeapon _u) isKindOf ['121_serbu_breacher',configFile >> "CfgWeapons"])exitWith{};
		//removing event handlers, doing it instatly prevents from firing EH hence there is delay
		_u spawn {
			sleep 0.01;
			_this removeEventHandler ["fired",serbu_pump_eh];
			serbu_pump_eh = nil;
			//systemChat "removing EH";
		};
	};
}];
/***********************************************************************************************
 * Copyright (C) 2016-2018 {Iván Expósito - "By-Jokese"} <{byjokese@gmail.com}> - Rights Reserved
 *
 * This file is part of {FSG Medic Bag} Addon.
 *
 * FSG Medic Bag Addon can not be copied and/or distributed without the express
 * permission of Iván Expósito - "By-Jokese"
 ***********************************************************************************************/

params [
	"_unit",
	"_item",
	"_object",
	"_isMedicalfacility"
];

_pos = getPosATL _unit;
_azimuth = getDir _unit;
_far = 1; //Distance from the player to the _object

_x = (_pos select 0) + (_far * (sin _azimuth));
_y = (_pos select 1) + (_far * (cos _azimuth));

_obj = createVehicle [_object, [_x, _y, (_pos select 2)], [], 0, 'CAN_COLLIDE'];

_unit removeItem _item;

if(_isMedicalfacility) then {_obj setvariable ["ace_medical_isMedicalFacility", true, true];};
//[_unit, _obj] call ace_dragging_fnc_startCarry;*/

true

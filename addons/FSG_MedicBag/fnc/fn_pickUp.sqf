/*
 * Copyright (C) 2016-2018 {Iván Expósito - "By-Jokese"} <{byjokese@gmail.com}> - Rights Reserved
 *
 * This file is part of {Frontside Gaming Oficial} Addon.
 *
 * FSG Medic Bag Addon can not be copied and/or distributed without the express
 * permission of Iván Expósito - "By-Jokese"
 */

params ["_unit", "_obj", "_item"];

if(_unit canAddItemToBackpack [_item, 1]) then {
	_unit addItemToBackpack _item;
	deleteVehicle _obj;
	hint "Medic Bag saved inside backpack.";
	_return = true;
}else{
	hint "Medic Bag won't fit inside backpack, clear space.";
	_return = false;
};

true

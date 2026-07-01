//attach dummy logic (wpnholder) and call zen module.

params ["_target"];
private _logic = createVehicle ["Weapon_Empty", getPosATL _target, [], 0, "CAN_COLLIDE"];
_logic attachTo [_target, [0, 0, 0]];
[_logic] call zen_modules_fnc_moduleAttachFlag;
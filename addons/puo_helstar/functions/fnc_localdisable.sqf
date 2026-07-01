#include "..\define.hpp"

params ["_unit"];

private _obj = _unit getVariable [QTAG(obj), objNull];
private _pfh = _unit getVariable QTAG(pfh);
if not isNil str _pfh then {[_pfh] call CBA_fnc_removePerFrameHandler;};
if not isNull _obj then {deleteVehicle _obj;};

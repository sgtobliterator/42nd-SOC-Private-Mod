#include "..\define.hpp"

params ["_unit"];
(_unit getVariable [QTAG(program),
[true, [1,1,1], 0.6, true, 1000000000, 50000000, 0.1, 3]
]) params
["_ir", "_color", "_flare", "_flash", "_intensity", "_attenuation", "_min", "_max"];

[_unit] call FNC(localDisable);
private _obj = "#lightreflector" createVehicleLocal getPos _unit;
_unit setVariable [QTAG(obj), _obj];
_obj attachTo [_unit, [-0.05, -0.15, 0.25], "head", true];
_obj setVectorDirAndUp [[0,-1,1], [0,0,1]];
_obj setLightConePars [255, 245, 1];
_obj setLightIR _ir;
_obj setLightDayLight true;
_obj setLightUseFlare true;
_obj setLightFlareMaxDistance 100000;
_obj setLightIntensity _intensity;
_obj setLightAttenuation [0, 0, _attenuation, 0, _min, _max];
_obj setLightFlareSize _flare;
_obj setLightColor _color;

if _flash then {
    private _pfh = [{
        params ["_args", "_handle"];
        _args params [ "_unit", "_obj", "_color"];
        if isNull _unit exitWith {
            deleteVehicle _obj;
            [_handle] call CBA_fnc_removePerFrameHandler;
        };
        _obj setLightColor _color;
        [{_this setLightColor [0, 0, 0];}, _obj, SETTING(flash)] call CBA_fnc_waitAndExecute;
    }, SETTING(frequency), [_unit, _obj, _color]] call CBA_fnc_addPerFrameHandler;
    _unit setVariable [QTAG(pfh), _pfh];
};

#include "..\define.hpp"

playSound 'ace_map_flashlightClick';
private _unit = ace_player;
private _mode = ["A","B"] select (_unit getVariable [QTAG(mode), true]);
private _function = _unit getVariable [QTAG(function), 1];
private _program = _mode + str _function;

switch (_program) do {
    case "A1": {_unit setVariable [QTAG(program), [false, [0,1,0], 0.6, false, 50, 0, 0.1, 0.35], true];};
	case "A2": {_unit setVariable [QTAG(program), [false, [1,1,1], 0.6, true, 1000000000, 50000000, 0.1, 3], true];};
    case "B1": {_unit setVariable [QTAG(program), [true, [1,1,1], 0.4, true, 10000000, 50000000, 0.1, 0.4], true];};
    case "B2": {_unit setVariable [QTAG(program), [true, [1,1,1], 0.6, true, 1000000000, 50000000, 0.1, 3], true];};
};

[EVENT(enable), _unit] call CBA_fnc_globalEvent;

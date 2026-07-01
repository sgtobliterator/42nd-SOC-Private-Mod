if (!hasInterface) exitWith {};

WORM_IZLID_laserPerFrameHandler = -1;
WORM_IZLID_laserPerFrameList = [];

{
    if (_x getVariable ["WORM_IZLID_hasLaserOn", false]) then {
        WORM_IZLID_laserPerFrameList pushBack _x;
    };
} forEach allUnits;

WORM_IZLID_OFFSET = [0.05, 0.1, 0.02];

WORM_IZLID_MODE_LOW = "Low";
WORM_IZLID_MODE_HI = "High";
WORM_IZLID_MODE_PULSE = "Pulse";

WORM_IZLID_laserPerFrameHandler = addMissionEventHandler ["Draw3D", {
	{
		_unit = _x;
		_currentWeapon = (currentWeapon _unit);
		_izlidInHand = _currentWeapon == "WORM_IZLIDB";
		_isIzlidOn = (_unit getVariable ['WORM_IZLID_hasLaserOn', false]);
		if (alive _unit && _izlidInHand && _isIzlidOn) then {
            _currentMode = (currentWeaponMode _unit);
            _skipFrame = false;
            if (_currentMode == WORM_IZLID_MODE_PULSE) then {
                _startTime = _unit getVariable ['WORM_IZLID_laserStartTime', -1];
                if (_startTime == -1) then {
                    _unit setVariable ["WORM_IZLID_laserStartTime", if (isMultiplayer) then { serverTime } else { time }];
                };

                _time = if (isMultiplayer) then { serverTime } else { time };
                _diff = _time - _startTime;
                // full cycle is 1.5 seconds
                _phase = _diff mod 1.5;

                // laser is on for 1 second, and then of for 0.5
                if (_phase >= 1.0) then {
                    _skipFrame = true;
                }
            };

            if (!_skipFrame) then {
                _gunPos = _unit selectionPosition ['proxy:\a3\characters_f\proxies\pistol.001', 1];
                _gunPosWorld = (_unit modelToWorldVisualWorld _gunPos);

                _gunDir = (_unit weaponDirection _currentWeapon);
                _normalizedGunDir = vectorNormalized _gunDir;

                _rightVector = (vectorNormalized (_normalizedGunDir vectorCrossProduct [0,0,-1]));
                _upVector =(vectorNormalized (_rightVector vectorCrossProduct _normalizedGunDir));
                _offset = (_rightVector vectorMultiply (WORM_IZLID_OFFSET # 0)) vectorAdd (_normalizedGunDir vectorMultiply (WORM_IZLID_OFFSET # 1)) vectorAdd (_upVector vectorMultiply (WORM_IZLID_OFFSET # 2));

                _laserPos = _gunPosWorld vectorAdd _offset;
                _laserThickness = 0.58;
                _laserSplashSize = 2;

                if ((currentWeaponMode _unit) == WORM_IZLID_MODE_LOW) then {
                    _laserThickness = 0.05;
                    _laserSplashSize = 1;
                };

                drawLaser [
                    _laserPos,
                    _gunDir,
                    [1000, 1000, 1000],
                    [],
                    _laserSplashSize,
                    _laserThickness,
                    -1,
                    true
                ];
            };
		} else {
			WORM_IZLID_laserPerFrameList deleteAt _forEachIndex;
		};
	} forEach WORM_IZLID_laserPerFrameList;
}];


/** 
	************** KEYBINDS **************
*/
["IZLID", 'WORM_IZLID_toggleIzlid', 'Toggle Izlid', {
    // toggle illuminator on/off
	[player] call WORM_IZLID_fnc_toggleIzlid;
	true;
}, {false}, [0xF0, [false, false, false]], false] call CBA_fnc_addKeybind;

["IZLID", 'WORM_IZLID_toggleIzlidMomentary', 'Toggle Izlid (momentary)', {
    // toggle illuminator on/off
	[player] call WORM_IZLID_fnc_toggleIzlid;
	true;
}, {
    [player] call WORM_IZLID_fnc_toggleIzlid;
	true;
}] call CBA_fnc_addKeybind;

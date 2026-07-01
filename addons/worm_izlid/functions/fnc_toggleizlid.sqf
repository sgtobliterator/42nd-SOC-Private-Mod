params ['_unit'];
if ((currentWeapon _unit) != "WORM_IZLIDB") exitWith {};
_isLaserOn = _unit getVariable ['WORM_IZLID_hasLaserOn', false];
_isLaserOn = !_isLaserOn;
_unit setVariable ['WORM_IZLID_hasLaserOn', _isLaserOn, true];
if (_isLaserOn) then {
	_unit setVariable ['WORM_IZLID_laserStartTime', if (isMultiplayer) then { serverTime } else { time }, true];
};

[_unit] remoteExecCall ['WORM_IZLID_fnc_handleIzlidToggled', 0, false];

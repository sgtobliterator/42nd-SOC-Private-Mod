//***********************************************/
// STY_IP68_Open		: bool
// STY_IP68_windMax		: int
// STY_IP68_tempMax		: int
// STY_IP68_humMax		: int
// STY_IP68_barMax		: int
//***********************************************/
disableSerialization;

cutRsc ["STY_IP68", "PLAIN"];

private _fontColor = "";
private _bgImage = "";
private _playerAltitude = (getPosASL ACE_player) select 2;
private _display = uiNamespace getVariable "STY_IP68_idd";
private _windCur = 0;
private _windMax = 0;
private _tempCur = 0;
private _tempMax = 0;
private _humCur = 0;
private _humMax = 0;
private _barCur = 0;
private _barMax = 0;
private _hour = floor daytime;
private _minute = floor ((daytime - _hour) * 60);
private _doCalc = false;

while { true } do {
	if (!([] call STY_fnc_ip68_canShow)) exitWith {
		// ACE_player setVariable ["STY_IP68_Open", nil, true];
		cutText ["", "PLAIN"];
	};

	_hour = floor daytime;
	_minute = floor ((daytime - _hour) * 60);

	if (_hour < 10) then {
		_hour = format ["0%1", _hour];
	};

	if (_minute < 10) then {
		_minute = format ["0%1", _minute];
	};

	if ("STY_Item_BL500" in items ACE_player) then {
		if (!_doCalc) then {
			_windCur = 0;
			_windMax = 0;
			_tempCur = 0;
			_tempMax = 0;
			_humCur = 0;
			_humMax = 0;
			_barCur = 0;
			_barMax = 0;
		};
		_doCalc = true;
	} else {
		_doCalc = false;
	};

	if (_doCalc) then {
		_windCur = parseNumber ([eyePos ACE_player, true, true, true] call ace_weather_fnc_calculateWindSpeed toFixed 1);
		_tempCur = parseNumber (_playerAltitude call ace_weather_fnc_calculateTemperatureAtHeight toFixed 1);
		_humCur = [(ace_weather_currentHumidity * 100), 0] call BIS_fnc_cutDecimals;
		_barCur = parseNumber (_playerAltitude call ace_weather_fnc_calculateBarometricPressure toFixed 1);

		if (_windCur > _windMax) then {
			_windMax = _windCur;
		};

		if (_tempCur > _tempMax) then {
			_tempMax = _tempCur;
		};

		if (_humCur > _humMax) then {
			_humMax = _humCur;
		};

		if (_barCur > _barMax) then {
			_barMax = _barCur;
		};
	} else {
		_windCur = "!";
		_windMax = "!";
		_tempCur = "!";
		_tempMax = "!";
		_humCur = "!";
		_humMax = "!";
		_barCur = "!";
		_barMax = "!";
	};
	
	// Background
		// day		: IP68_d
		// night	: IP68_n
		// nvg		: IP68_nvg
		// thermal	: IP68_thrm
	// Text
		// day		: e0e0e0
		// night	: 6e6e6e
		// nvg		: 1fbd63
	
	switch (currentVisionMode ACE_player) do {
			case 0: {
				if (SunOrMoon < 0.2) then {		// Night
					_fontColor = "6e6e6e";
					_bgImage = "IP68_n";
				} else {						// Day
					_fontColor = "e0e0e0";
					_bgImage = "IP68_d";
				};
			};

			case 1: {
				if (SunOrMoon < 0.2) then {		// Night
					_fontColor = "1fbd63";
					_bgImage = "IP68_nvg";
				} else {						// Day
					_fontColor = "bcbcbc";
					_bgImage = "IP68_thrm";
				};
			};

			case 2: {
				_fontColor = "bcbcbc";
				_bgImage = "IP68_thrm";
			};
	};

	_display displayCtrl 1200 ctrlSetText format ["\sty_equipment\weapons\ip68\ui\%1.paa", _bgImage];
	
	_display displayCtrl 1100 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _windCur];
	// _display displayCtrl 1101 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _windMax];

	_display displayCtrl 1103 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _tempCur];
	// _display displayCtrl 1104 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _tempMax];
	
	_display displayCtrl 1106 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _humCur];
	// _display displayCtrl 1107 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _humMax];
	
	_display displayCtrl 1109 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _barCur];
	// _display displayCtrl 1110 ctrlSetStructuredText parseText format ["<t align='center' color='#%1'>%2</t>", _fontColor, _barMax];

	_display displayCtrl 1112 ctrlSetStructuredText parseText format ["<t size='.75' align='center' color='#%1'>%2:%3</t>", _fontColor, _hour, _minute];
	
	sleep 0.1;
};
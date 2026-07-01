params ['_unit'];

if (!hasInterface) exitWith {};
if (isNil '_unit') exitWith {};
if (!alive _unit) exitWith {};

if ((WORM_IZLID_laserPerFrameList find _unit) == -1) then {
	WORM_IZLID_laserPerFrameList pushBack _unit;
};

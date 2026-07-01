if (!aa_headbag_forceOn && {headgear _target != "" || goggles _target != "" || hmd _target != ""}) exitWith {
	["Target still has headgear, facewear or nightvision on him.", 2.5, _player] spawn ace_common_fnc_displayTextStructured;
};

_target unassignItem (headgear _target);
_target unassignItem (goggles _target);
removeHeadgear _target;
removeGoggles _target;
_target unassignItem (hmd _target);

_player playActionNow "PutDown";
_target addGoggles "aa_headbag_goggles";

if (!aa_headbag_requireHeadbag || {"aa_headbag" in items _player}) exitWith {
	_player removeItem "mgsr_headbag";
};

if (!aa_headbag_requireHeadbag || {"aa_headbag_goggles" in items _player}) exitWith {
	_player removeItem "mgsr_headbag_goggles";
};

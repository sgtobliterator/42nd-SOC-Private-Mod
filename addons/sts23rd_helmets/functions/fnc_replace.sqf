private _uniqueBase = getText (configFile >> "CfgWeapons" >> (headgear ace_player) >> "ace_arsenal_uniqueBase");
if (_uniqueBase != "") then {
    ace_player addHeadgear _uniqueBase;
}

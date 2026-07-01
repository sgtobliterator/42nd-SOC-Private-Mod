/*
  Server-side cutter for the circular saw.
  Called via:  [_unit,_weapon,_projectile] remoteExec ["RB1_SAW_fnc_sawCut", 2];

  - 5s cutting time (scheduled-safe)
  - Fells terrain vegetation (TREE/SMALL TREE/BUSH)
  - Breaks fences/walls whether they are terrain objects or CfgVehicles
  - Unlocks & opens building doors
*/
if (!isServer) exitWith {};
params ["_unit","_weapon","_projectile"];

// Short ray from eyes to ~1m ahead
private _from = eyePos _unit;
private _to   = _from vectorAdd (eyeDirection _unit vectorMultiply 1);

private _hit = lineIntersectsSurfaces [_from, _to, _unit, objNull, true, 1, "FIRE", "NONE"];
private _posHit = if (_hit isEqualTo []) then {_to} else {(_hit select 0) select 0};
private _objHit = if (_hit isEqualTo []) then {cursorObject} else {(_hit select 0) select 2};

// Sound at cut point
playSound3D ["26th_USMC_SAW\sound\saw.wss", _unit, false, _posHit, 2, 1, 20];

// Simple on-client message (avoid BIS_fnc_showSubtitle param issues)
["Cutting..."] remoteExec ["hintSilent", _unit];

// 2-second cutting delay
sleep 10;

// Clear the message
[""] remoteExec ["hintSilent", _unit];

// -------------------- VEGETATION (terrain objects) --------------------
private _terrVeg = nearestTerrainObjects [
    _posHit,
    ["TREE","SMALL TREE","BUSH"],
    2,            // radius
    false, true
];
{ _x setDamage 1; } forEach _terrVeg;

// -------------------- FENCES/WALLS (terrain objects) --------------------
private _terrBarriers = nearestTerrainObjects [
    _posHit,
    ["FENCE","WALL"],   // terrain categories
    2,
    false, true
];
{
    // Many terrain fences/walls accept damage
    if (isDamageAllowed _x) then { _x setDamage 1; } else { hideObjectGlobal _x; };
} forEach _terrBarriers;

// -------------------- FENCES/WALLS (CfgVehicles) --------------------
private _vehBarrierClasses = [
    // broad bases that cover many map pieces
    "Wall_F","Fence_F","HBarrier_base_F","BagFence_base_F","Barrier_Base_F",
    // common specific bases used by BI/CUP
    "Concrete_Wall_F","Land_ConcreteWall_01_base_F","Land_Wall_01_base_F",
    "Land_Fence_01_base_F","Land_Razorwire_F","Land_New_WiredFence_5m_F"
];

private _vehBarriers = nearestObjects [_posHit, _vehBarrierClasses, 2];
{
    if (isNull _x) then { continue };
    if (isDamageAllowed _x) then {
        _x setDamage 1;
    } else {
        hideObjectGlobal _x;   // fallback for simpleObjects or no-damage assets
    };
} forEach _vehBarriers;

// -------------------- DOORS on buildings --------------------
if (!isNull _objHit && { _objHit isKindOf "House" }) then
{
    for "_i" from 1 to 12 do
    {
        private _lockVar = format ["bis_disabled_Door_%1", _i];
        if (!isNil { _objHit getVariable _lockVar }) then {
            _objHit setVariable [_lockVar, 0, true];   // unlock if mission-locked
        };

        private _src = format ["Door_%1_source", _i];
        if (!isNil { _objHit animationSourcePhase _src }) then {
            _objHit animateSource [_src, 1, true];
        };

        private _rot = format ["Door_%1_rot", _i];
        _objHit animate [_rot, 1, true];
    };
};
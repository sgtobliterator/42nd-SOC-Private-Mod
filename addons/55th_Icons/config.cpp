#include "CfgVehicles.hpp"

class CfgPatches
{
    class SOR_55th_Icons
    {
        name = "55th_SOR_Icons";
        author = "55th SOR";
        requiredVersion = 2.12;
        units[] = {"SOR_55th_Flagpole", "SOC_42nd_Flagpole"};
        weapons[] = {};
        requiredAddons[] = {};
    };
};

class CfgUnitInsignia
{
    class 55th_SOR_Patch
    {
        displayName = "55th SOR Patch";
        author = "55th SOR";
        texture = "x\BFSQN_PrivateMod\addons\55th_Icons\images\55th_SOR_Patch.paa";
        material = "\A3\UI_F\Data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
        scope = 2;
    };
};
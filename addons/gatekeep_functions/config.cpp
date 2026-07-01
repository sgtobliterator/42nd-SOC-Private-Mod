#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class GateKeep_Functions
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Weapons_F_Ammoboxes",
			"gatekeep_Headgear",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"Extended_EventHandlers",
			"ACE_Common"
		};
	};
};
class CfgFunctions
{
	class GateKeep
	{
		tag="GateKeep";
		file="\GateKeep_Functions\functions";
		class functions
		{
			class strapCheck
			{
			};
			class unstrap
			{
			};
			class unstrapCheck
			{
			};
			class strap
			{
			};
		};
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class GateKeep_headsetdown
				{
					displayName="Unstrap Helmet";
					condition="[_player] call GateKeep_fnc_strapCheck";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[_player] call GateKeep_fnc_unstrap";
					showDisabled=0;
					priority=2.5;
				};
				class GateKeep_headsetup
				{
					displayName="Strap Helmet";
					condition="[_player] call GateKeep_fnc_unstrapCheck";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[_player] call GateKeep_fnc_strap";
					showDisabled=0;
					priority=2.5;
				};
			};
		};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1628042655";
};

#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class AttachFlag
	{
		units[]={};
		weapons[]={};
        name = "Attach Flag";
        author = "55th SOR";
        requiredVersion = 2.12;
		requiredAddons[]=
		{
			"ace_common",
			"zen_common",
		};
	};
};
class CfgFunctions
{
	class APR
	{
		class functions
		{
			file="APR_AttachFlag\functions";
			class AttachFlag
			{
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class APR_AttachFlag
				{
					displayName="$STR_APR_AttachFlag_displayName";
					condition="alive _target";
					exceptions[]={};
					statement="[_target] call APR_fnc_AttachFlag";
					icon="APR_AttachFlag\ui\ui_flag.paa";
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class APR_AttachFlag
				{
					displayName="$STR_APR_AttachFlag_displayName";
					condition="alive _target";
					exceptions[]={};
					statement="[_target] call APR_fnc_AttachFlag";
					icon="APR_AttachFlag\ui\ui_flag.paa";
				};
			};
		};
	};
	class Motorcycle: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class APR_AttachFlag
				{
					displayName="$STR_APR_AttachFlag_displayName";
					condition="alive _target";
					exceptions[]={};
					statement="[_target] call APR_fnc_AttachFlag";
					icon="APR_AttachFlag\ui\ui_flag.paa";
				};
			};
		};
	};
	class Ship;
	class Ship_F: Ship
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class APR_AttachFlag
				{
					displayName="$STR_APR_AttachFlag_displayName";
					condition="alive _target";
					exceptions[]={};
					statement="[_target] call APR_fnc_AttachFlag";
					icon="APR_AttachFlag\ui\ui_flag.paa";
				};
			};
		};
	};
};
class cfgMods
{
	author="Apricot_ale";
	timepacked="1696548722";
};

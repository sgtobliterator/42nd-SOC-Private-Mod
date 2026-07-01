class CfgPatches
{
	class aceax_compat_tfl_m9
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers",
			"TFL_M9Backpack"
		};
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgVehicles
	{
		class tfl_m9
		{
			label="[TFL] M9 Medic Bag";
			author="BLACKOUT";
			options[]=
			{
				"camo"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"mcb",
					"aor1",
					"aor2"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class Backpack_Base_1: Bag_Base
	{
	};
	class TFL_M9Backpack_MC: Backpack_Base_1
	{
		class XtdGearInfo
		{
			model="tfl_m9";
			camo="mc";
		};
	};
	class TFL_M9Backpack_AOR1: Backpack_Base_1
	{
		class XtdGearInfo
		{
			model="tfl_m9";
			camo="aor1";
		};
	};
	class TFL_M9Backpack_AOR2: Backpack_Base_1
	{
		class XtdGearInfo
		{
			model="tfl_m9";
			camo="aor2";
		};
	};
	class TFL_M9Backpack_MCB: Backpack_Base_1
	{
		class XtdGearInfo
		{
			model="tfl_m9";
			camo="mcb";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631734016";
};

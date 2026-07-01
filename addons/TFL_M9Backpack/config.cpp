class CfgPatches
{
	class TFL_M9Backpack
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers"
		};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class Backpack_Base_1: Bag_Base
	{
		scope=1;
		scopeCurator=0;
		author="BLACKOUT";
		DLC="SOCOM";
		displayName="[TFL] M9 Backpack (AOR1)";
		picture="";
		isbackpack=1;
		model="TFL_M9Backpack\M9_Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_M9Backpack\data\M9Backpack_AOR1_co.paa"
		};
		maximumLoad=500;
		mass=30;
	};
	class TFL_M9Backpack_MC: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[TFL] M9 Backpack (MC)";
		model="TFL_M9Backpack\M9_Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_M9Backpack\data\M9Backpack_MC_co.paa"
		};
		DLC="SOCOM";
	};
	class TFL_M9Backpack_AOR1: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[TFL] M9 Backpack (AOR1)";
		model="TFL_M9Backpack\M9_Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_M9Backpack\data\M9Backpack_AOR1_co.paa"
		};
		DLC="SOCOM";
	};
	class TFL_M9Backpack_AOR2: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[TFL] M9 Backpack (AOR2)";
		model="TFL_M9Backpack\M9_Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_M9Backpack\data\M9Backpack_AOR2_co.paa"
		};
		DLC="SOCOM";
	};
	class TFL_M9Backpack_MCB: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[TFL] M9 Backpack (MCB)";
		model="TFL_M9Backpack\M9_Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_M9Backpack\data\M9Backpack_MCB_co.paa"
		};
		DLC="SOCOM";
	};
};
class cfgMods
{
	author="BLACKOUT";
	timepacked="1604346499";
};

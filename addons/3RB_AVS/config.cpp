class CfgPatches
{
	class 3RB_AVS
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
		author="S-4 Logistics";
		DLC="3RB";
		displayName="[42nd SOC] Medic Alpha (556)";
		picture="\TFN_Vests\Data\UI\3RB.paa";
		isbackpack=1;
		model="3RB_AVS\Models\Medic_556_A.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=500;
		mass=30;
	};
	class Medic_556_A: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[42nd SOC] Medic Alpha (556)";
		model="3RB_AVS\Models\Medic_556_A.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		DLC="3RB";
	};
	class Medic_556_B: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[42nd SOC] Medic Bravo (556)";
		model="3RB_AVS\Models\Medic_556_B.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		DLC="3RB";
	};
	class Medic_556_C: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[42nd SOC] Medic Charlie (556)";
		model="3RB_AVS\Models\Medic_556_C.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3RB_AVS\data\M9_Backpack_mc_co.paa"
		};
		DLC="3RB";
	};
	class Medic_556_D: Backpack_Base_1
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[42nd SOC] Medic Delta (556)";
		model="3RB_AVS\Models\Medic_556_D.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3RB_AVS\data\M9_Backpack_mc_co.paa"
		};
		DLC="3RB";
	};
};
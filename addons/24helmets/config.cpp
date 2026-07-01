class CfgPatches
{
	class DEV_Helm
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
class CfgWeapons
{
	class Default;
	class ItemCore: Default
	{
	};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
	class Uniform_Base;
	class VestItem;
	class NVGoggles;
	class STS1: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="STS 1";
		picture="tfl_headgear\textures\logo.paa";
		model="24helmets\Clericsts.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="24helmets\Clericsts.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]={};
		};
	};
};
class cfgMods
{
	author="Evan";
	timepacked="1634999001";
};

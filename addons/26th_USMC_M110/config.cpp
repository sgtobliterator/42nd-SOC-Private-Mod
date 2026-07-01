class CfgPatches
{
	class CIUSMC_M110
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"cba_common",
			"ace_common"
		};
		author="Coal";
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class rhs_western_rifle_gripod_slot;
class asdg_MuzzleSlot_762;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class rhs_western_rifle_underbarrel_slot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class ItemCore;
	class rhs_weap_sr25;
	class 26th_CIUSMC_M110: rhs_weap_sr25
	{
		scope=2;
		model="\26th_USMC_M110\M110.p3d";
		author="Coal";
		displayName="[USMC] M110 SASS";
		picture="\26th_USMC_M110\UI\M110.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M110\Anim\416_VFG.rtm"
		};
		baseWeapon="CIUSMC_M110";
		magazines[]=
		{
			"CIUSMC_M110_PMAG_20rnd",
			"CIUSMC_M110_PMAG_Tan_20rnd"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class WeaponSlotsInfo
		{
			mass=65;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777909230";
};

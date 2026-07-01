class CfgPatches
{
	class CIUSMC_M4A1
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
class asdg_MuzzleSlot_556;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class rhs_western_rifle_underbarrel_slot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class ItemCore;
	class rhs_weap_mk18;
	class 26th_CIUSMC_M4A1: rhs_weap_mk18
	{
		scope=2;
		model="\26th_USMC_M4A1\M4A1.p3d";
		author="Coal";
		displayName="[USMC] M4A1";
		picture="\26th_USMC_M4A1\UI\M4.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M4A1\Anim\M4_PiP.rtm"
		};
		baseWeapon="CIUSMC_M4A1";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class WeaponSlotsInfo
		{
			mass=65;
			class MuzzleSlot: asdg_MuzzleSlot_556
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
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777909145";
};

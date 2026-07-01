class CfgPatches
{
	class CIUSMC_M240L
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
class asdg_MuzzleSlot;
class asdg_UnderSlot;
class rhs_western_mg_gripod_slot;
class rhs_western_rifle_underbarrel_slot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class ItemCore;
	class rhs_weap_m240B;
	class 26th_CIUSMC_M240L: rhs_weap_m240B
	{
		scope=2;
		model="\26th_USMC_M240L\M240L.p3d";
		author="Coal";
		displayName="[USMC] M240L";
		picture="\26th_USMC_M240L\UI\M240.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M240L\Anim\M240L.rtm"
		};
		baseWeapon="26th_CIUSMC_M240L";
		magazines[]=
		{
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_100Rnd_762x51_m80a1epr"
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
	timepacked="1778168475";
};

class CfgPatches
{
	class CIUSMC_M45
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"cba_common"
		};
		author="Coal";
	};
};
class CfgMagazines
{
	class 9Rnd_45ACP_Mag;
	class 11Rnd_M45_45ACP: 9Rnd_45ACP_Mag
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayNameShort=".45 ACP";
		descriptionShort=".45 ACP";
		displayName="[USMC] M45 45. ACP Mag";
		picture="\26th_USMC_M45\UI\M45_Mag.paa";
		model="26th_USMC_M45\Model\M45_Mag.p3d";
		ammo="rhs_ammo_45ACP_MHP";
		count=11;
		mass=6;
	};
};
class CfgMagazineWells
{
	class CIUSMC_M45_Well
	{
		CIUSMC_Magazines[]=
		{
			"11Rnd_M45_45ACP"
		};
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_PistolUnderRail;
class acc_flashlight_pistol;
class asdg_MuzzleSlot;
class asdg_OpticRail1913;
class CfgWeapons
{
	class hgun_ACPC2_F;
	class CIUSMC_M45: hgun_ACPC2_F
	{
		author="Coal";
		scope=2;
		displayName="[USMC] M45 MEUSOC";
		picture="\26th_USMC_M45\UI\M45.paa";
		model="26th_USMC_M45\Model\M45.p3d";
		magazines[]=
		{
			"11Rnd_M45_45ACP"
		};
		magazineWell[]=
		{
			"CIUSMC_M45_Well"
		};
		class WeaponSlotsInfo
		{
			mass=27.1;
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]={};
			};
			class MuzzleSlot: asdg_MuzzleSlot
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
				compatibleItems[]={};
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"CIUSMC_SureFire_X300B"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CIUSMC_SureFire_X300B";
			};
		};
		baseWeapon="CIUSMC_M45";
	};
	class CIUSMC_SureFire_X300B: acc_flashlight_pistol
	{
		scope=2;
		picture="26th_USMC_M45\UI\X300.paa";
		author="Coal";
		displayName="[USMC] Surefire X300B";
		model="26th_USMC_M45\model\X300B.p3d";
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777909212";
};

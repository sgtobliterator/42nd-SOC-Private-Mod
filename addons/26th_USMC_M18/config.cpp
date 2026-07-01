class CfgPatches
{
	class CIUSMC_M18
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
	class 11Rnd_45ACP_Mag;
	class 18Rnd_M18_9x19_FMJ: 11Rnd_45ACP_Mag
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayNameShort="9mm FMJ";
		descriptionShort="9mm FMJ";
		displayName="[USMC] M18 9x19 FMJ Mag";
		picture="\26th_USMC_M18\UI\P320_Mag.paa";
		model="26th_USMC_M18\Model\P320_Mag.p3d";
		ammo="rhs_ammo_9x19_FMJ";
		count=18;
		mass=6;
	};
	class 18Rnd_M18_9x19_JHP: 18Rnd_M18_9x19_FMJ
	{
		displayNameShort="9mm JHP";
		descriptionShort="9mm JHP";
		displayName="[USMC] M18 9x19 JHP Mag";
		picture="\26th_USMC_M18\UI\P320_Mag.paa";
		model="26th_USMC_M18\Model\P320_Mag.p3d";
		ammo="rhs_ammo_9x19_JHP";
		count=18;
		mass=6;
	};
};
class CfgMagazineWells
{
	class CIUSMC_M18_Well
	{
		CIUSMC_Magazines[]=
		{
			"18Rnd_M18_9x19_FMJ",
			"18Rnd_M18_9x19_JHP"
		};
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class acc_flashlight_pistol;
class asdg_PistolUnderRail;
class asdg_MuzzleSlot;
class asdg_OpticRail1913;
class CfgWeapons
{
	class hgun_P07_F;
	class CIUSMC_M18: hgun_P07_F
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Sig M18";
		picture="\26th_USMC_M18\UI\M18.paa";
		model="26th_USMC_M18\Model\P320.p3d";
		magazines[]=
		{
			"18Rnd_M18_9x19_FMJ"
		};
		magazineWell[]=
		{
			"CIUSMC_M18_Well"
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
					"CIUSMC_SIG_Foxtrot_2"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CIUSMC_SIG_Foxtrot_2";
			};
		};
		baseWeapon="CIUSMC_M18";
	};
	class CIUSMC_SIG_Foxtrot_2: acc_flashlight_pistol
	{
		scope=2;
		picture="\26th_USMC_M18\UI\Foxtrot2.paa";
		author="Coal";
		displayName="[USMC] SIG Foxtrot 2";
		model="26th_USMC_M18\model\Foxtrot_2.p3d";
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777957206";
};

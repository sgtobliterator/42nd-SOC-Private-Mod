class CfgPatches
{
	class CIUSMC_M27
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
class asdg_UnderSlot;
class rhs_western_rifle_underbarrel_slot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class ItemCore;
	class arifle_SPAR_01_khk_F;
	class arifle_SPAR_02_khk_F;
	class arifle_SPAR_03_khk_F;
	class CIUSMC_M27_RWK_BLK: arifle_SPAR_01_khk_F
	{
		scope=2;
		model="\26th_USMC_M27\M27_RWK.p3d";
		author="Coal";
		displayName="[USMC] M27 RWK/BCM (Blk)";
		picture="\26th_USMC_M27\UI\RWK.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M27\Anim\416_GWOT.rtm"
		};
		baseWeapon="CIUSMC_M27_RWK_BLK";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262",
			"26th_CIUSMC_PMAG_RAN_556x45_MK262"
		};
		hiddenSelections[]=
		{
			"_ctr",
			"_afg",
			"_bcm"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_M27\data\stock_ctr_blk_co.paa",
			"",
			"26th_USMC_M27\data\mod3_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_M27\data\stock_ctr.rvmat",
			"",
			"26th_USMC_M27\data\BCM.rvmat"
		};
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
		class XtdGearInfo
		{
			model="M27_RWK";
			Stock="BLK";
			Grip="BCM";
		};
	};
	class CIUSMC_M27_RWK_BLK_GRIP: CIUSMC_M27_RWK_BLK
	{
		scope=2;
		model="\26th_USMC_M27\M27_RWK.p3d";
		author="Coal";
		displayName="[USMC] M27 RWK/AFG (Blk)";
		picture="\26th_USMC_M27\UI\RWK.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M27\Anim\416_AFG.rtm"
		};
		baseWeapon="CIUSMC_M27_RWK_BLK_GRIP";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262",
			"26th_CIUSMC_PMAG_RAN_556x45_MK262"
		};
		hiddenSelections[]=
		{
			"_ctr",
			"_afg",
			"_bcm"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_M27\data\stock_ctr_blk_co.paa",
			"26th_USMC_M27\data\afg1_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_M27\data\stock_ctr.rvmat",
			"26th_USMC_M27\data\afg1.rvmat",
			""
		};
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
		class XtdGearInfo
		{
			model="M27_RWK";
			Stock="BLK";
			Grip="AFG";
		};
	};
	class CIUSMC_M27_RWK_TAN: arifle_SPAR_01_khk_F
	{
		scope=2;
		model="\26th_USMC_M27\M27_RWK.p3d";
		author="Coal";
		displayName="[USMC] M27 RWK/BCM (Tan)";
		picture="\26th_USMC_M27\UI\RWK.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M27\Anim\416_GWOT.rtm"
		};
		baseWeapon="CIUSMC_M27_RWK_TAN";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262",
			"26th_CIUSMC_PMAG_RAN_556x45_MK262"
		};
		hiddenSelections[]=
		{
			"_ctr",
			"_afg",
			"_bcm"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_M27\data\stock_ctr_tan_co.paa",
			"",
			"26th_USMC_M27\data\bcm_fde.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_M27\data\stock_ctr.rvmat",
			"",
			"26th_USMC_M27\data\BCM.rvmat"
		};
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
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
			};
		};
		class XtdGearInfo
		{
			model="M27_RWK";
			Stock="Tan";
			Grip="BCM";
		};
	};
	class CIUSMC_M27_RWK_TAN_GRIP: CIUSMC_M27_RWK_BLK
	{
		scope=2;
		model="\26th_USMC_M27\M27_RWK.p3d";
		author="Coal";
		displayName="[USMC] M27 RWK/AFG (Tan)";
		picture="\26th_USMC_M27\UI\RWK.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M27\Anim\416_AFG.rtm"
		};
		baseWeapon="CIUSMC_M27_RWK_TAN_GRIP";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262",
			"26th_CIUSMC_PMAG_RAN_556x45_MK262"
		};
		hiddenSelections[]=
		{
			"_ctr",
			"_afg",
			"_bcm"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_M27\data\stock_ctr_tan_co.paa",
			"26th_USMC_M27\data\afg1_Tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_M27\data\stock_ctr.rvmat",
			"26th_USMC_M27\data\afg1.rvmat",
			""
		};
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
		class XtdGearInfo
		{
			model="M27_RWK";
			Stock="Tan";
			Grip="AFG";
		};
	};
	class CIUSMC_M27_IAR_AFG: arifle_SPAR_02_khk_F
	{
		scope=2;
		model="\26th_USMC_M27\M27_IAR.p3d";
		author="Coal";
		displayName="[USMC] M27 IAR/AFG";
		picture="\26th_USMC_M27\UI\M27.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M27\Anim\416_AFG.rtm"
		};
		baseWeapon="CIUSMC_M27_IAR_AFG";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262",
			"26th_CIUSMC_PMAG_RAN_556x45_MK262"
		};
		hiddenSelections[]=
		{
			"_afg",
			"_vfg"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_M27\data\afg1_Tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_M27\data\afg1.rvmat",
			""
		};
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
		class XtdGearInfo
		{
			model="M27_IAR";
			Grip="AFG";
		};
	};
	class CIUSMC_M27_IAR_VFG: CIUSMC_M27_IAR_AFG
	{
		scope=2;
		model="\26th_USMC_M27\M27_IAR.p3d";
		author="Coal";
		displayName="[USMC] M27 IAR/VFG";
		picture="\26th_USMC_M27\UI\M27.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M27\Anim\416_VFG.rtm"
		};
		baseWeapon="CIUSMC_M27_IAR_VFG";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262",
			"26th_CIUSMC_PMAG_RAN_556x45_MK262"
		};
		hiddenSelections[]=
		{
			"_afg"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
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
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
			};
		};
		class XtdGearInfo
		{
			model="M27_IAR";
			Grip="VFG";
		};
	};
	class 26th_CIUSMC_M38_DMR: arifle_SPAR_02_khk_F
	{
		scope=2;
		model="\26th_USMC_M27\M38.p3d";
		author="Coal";
		displayName="[USMC] M38 DMR";
		picture="\26th_USMC_M27\UI\M38.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_M27\Anim\M4_PiP.rtm"
		};
		baseWeapon="26th_CIUSMC_M38_DMR";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262",
			"26th_CIUSMC_PMAG_RAN_556x45_MK262"
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
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class M27_RWK
		{
			label="M27 RWK";
			author="Coal";
			options[]=
			{
				"Stock",
				"Grip"
			};
			class Stock
			{
				label="Stock";
				values[]=
				{
					"BLK",
					"Tan"
				};
				changeingame=0;
				class BLK
				{
					label="BLK";
				};
				class Tan
				{
					label="Tan";
				};
			};
			class Grip
			{
				label="Grip";
				values[]=
				{
					"AFG",
					"BCM"
				};
				changeingame=0;
				class AFG
				{
					label="AFG";
				};
				class BCM
				{
					label="BCM";
				};
			};
		};
		class M27_IAR
		{
			label="M27 IAR";
			author="Coal";
			options[]=
			{
				"Grip"
			};
			class Grip
			{
				label="Grip";
				values[]=
				{
					"AFG",
					"VFG"
				};
				changeingame=0;
				class AFG
				{
					label="AFG";
				};
				class VFG
				{
					label="VFG";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777909180";
};

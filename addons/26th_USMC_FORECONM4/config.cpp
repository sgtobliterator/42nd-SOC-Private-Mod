class CfgPatches
{
	class CIUSMC_FORECONM4
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
	class CIUSMC_FORECONM4_BLK: rhs_weap_mk18
	{
		scope=2;
		model="\26th_USMC_FORECONM4\Forecon.p3d";
		author="Coal";
		displayName="[USMC] FORECON M4 (Blk)";
		picture="\26th_USMC_FORECONM4\UI\4CON.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_FORECONM4\Anim\FORECON.rtm"
		};
		baseWeapon="CIUSMC_FORECONM4_BLK";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1"
		};
		hiddenSelections[]=
		{
			"_sopmod",
			"_tango"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane_blk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane.rvmat",
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
			model="CIUSMC_FORECON";
			Stock="BLK";
			Grip="Off";
		};
	};
	class CIUSMC_FORECONM4_BLK_GRIP: CIUSMC_FORECONM4_BLK
	{
		scope=2;
		model="\26th_USMC_FORECONM4\Forecon.p3d";
		author="Coal";
		displayName="[USMC] FORECON M4/Grip (Blk)";
		picture="\26th_USMC_FORECONM4\UI\4CON.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_FORECONM4\Anim\FORECON_2.rtm"
		};
		baseWeapon="CIUSMC_FORECONM4_BLK_GRIP";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1"
		};
		hiddenSelections[]=
		{
			"_sopmod",
			"_tango"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane_blk_co.paa",
			"26th_USMC_FORECONM4\data\tangodownstubby_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane.rvmat",
			"26th_USMC_FORECONM4\data\tango.rvmat"
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
			model="CIUSMC_FORECON";
			Stock="BLK";
			Grip="On";
		};
	};
	class CIUSMC_FORECONM4_TAN: rhs_weap_mk18
	{
		scope=2;
		model="\26th_USMC_FORECONM4\Forecon.p3d";
		author="Coal";
		displayName="[USMC] FORECON M4 (Tan)";
		picture="\26th_USMC_FORECONM4\UI\4CON.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_FORECONM4\Anim\FORECON.rtm"
		};
		baseWeapon="CIUSMC_FORECONM4_TAN";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1"
		};
		hiddenSelections[]=
		{
			"_sopmod",
			"_tango"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane_tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane.rvmat",
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
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
				compatibleItems[]={};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_FORECON";
			Stock="Tan";
			Grip="Off";
		};
	};
	class CIUSMC_FORECONM4_TAN_GRIP: CIUSMC_FORECONM4_BLK
	{
		scope=2;
		model="\26th_USMC_FORECONM4\Forecon.p3d";
		author="Coal";
		displayName="[USMC] FORECON M4/Grip (Tan)";
		picture="\26th_USMC_FORECONM4\UI\4CON.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"26th_USMC_FORECONM4\Anim\FORECON_2.rtm"
		};
		baseWeapon="CIUSMC_FORECONM4_TAN_GRIP";
		magazines[]=
		{
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1"
		};
		hiddenSelections[]=
		{
			"_sopmod",
			"_tango"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane_tan_co.paa",
			"26th_USMC_FORECONM4\data\tangodownstubbytan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_FORECONM4\data\stock_crane.rvmat",
			"26th_USMC_FORECONM4\data\tango.rvmat"
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
			model="CIUSMC_FORECON";
			Stock="Tan";
			Grip="On";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class CIUSMC_FORECON
		{
			label="FORECON M4";
			author="Coal";
			options[]=
			{
				"Stock",
				"Grip"
			};
			class Stock
			{
				label="Accessories";
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
					"Off",
					"On"
				};
				changeingame=0;
				class Off
				{
					label="Off";
				};
				class On
				{
					label="On";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777909072";
};

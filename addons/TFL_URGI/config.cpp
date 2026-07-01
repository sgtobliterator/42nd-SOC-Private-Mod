#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class URGI
	{
		requiredaddons[] = {"seven"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class rhs_western_rifle_underbarrel_slot;
class rhs_western_rifle_gripod_slot;
class nia_charms_slot;
class asdg_MuzzleSlot_556;
class cfgWeapons
{
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class GrenadeLauncher;
	class UGL_F;
	class ItemCore;
	class Default{};
	class RifleCore: Default{};
	class Rifle: RifleCore{};
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_mk18_bk: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 57.2;
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
				access = 0;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				access = 0;
			};
		};
	};
	class rhs_weap_m4a1_blockII: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 57.2;
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
				access = 0;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				access = 0;
			};
		};
	};
	class A_URGI_93_01: rhs_weap_mk18_bk
	{
		scope = 2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 419.1;
		model = "\TFL_URGI\URGI_93.p3d";
		dexterity = 1.62;
		displayName = "[10th LI] URGI 9.3";
		picture = "\seven\mk16\data\ui.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class PointerSlot: asdg_FrontSideRail{};
			class CowsSlot: asdg_OpticRail1913_short{};
			class UnderBarrelSlot
			{
				access = 1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				class compatibleItems
				{
					rhsusf_acc_tdstubby_blk = 1;
					rhsusf_acc_tdstubby_tan = 1;
					rhsusf_acc_kac_grip = 1;
					rhsusf_acc_grip1 = 1;
					rhsusf_acc_grip3 = 1;
					rhsusf_acc_grip3_tan = 1;
					rhsusf_acc_rvg_blk = 1;
					rhsusf_acc_rvg_de = 1;
					rhs_acc_grip_ffg2 = 1;
					rhs_acc_grip_rk6 = 1;
					rhs_acc_grip_rk2 = 1;
					rhsusf_acc_grip2 = 1;
					rhsusf_acc_grip2_tan = 1;
					rhsusf_acc_grip2_wd = 1;
				};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o.rtm"};
		reloadAction = "GestureReloadSPAR_01";
		rhs_grip1_change = "A_URGI_93_01_grip";
		rhs_grip2_change = "A_URGI_93_01_grip2";
		rhs_grip3_change = "A_URGI_93_01_grip3";
		baseWeapon = "A_URGI_93_01";
	};
	class A_URGI_93_01_grip: A_URGI_93_01
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_fg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip1";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_93_01_grip2: A_URGI_93_01_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_93_01_grip3: A_URGI_93_01_grip2
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_fg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_105_01: rhs_weap_mk18_bk
	{
		scope = 2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 419.1;
		model = "\TFL_URGI\URGI_105.p3d";
		dexterity = 1.62;
		displayName = "[10th LI] URGI 10.5";
		picture = "\seven\mk16\data\ui.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class PointerSlot: asdg_FrontSideRail{};
			class CowsSlot: asdg_OpticRail1913_short{};
			class UnderBarrelSlot
			{
				access = 1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				class compatibleItems
				{
					rhsusf_acc_tdstubby_blk = 1;
					rhsusf_acc_tdstubby_tan = 1;
					rhsusf_acc_kac_grip = 1;
					rhsusf_acc_grip1 = 1;
					rhsusf_acc_grip3 = 1;
					rhsusf_acc_grip3_tan = 1;
					rhsusf_acc_rvg_blk = 1;
					rhsusf_acc_rvg_de = 1;
					rhs_acc_grip_ffg2 = 1;
					rhs_acc_grip_rk6 = 1;
					rhs_acc_grip_rk2 = 1;
					rhsusf_acc_grip2 = 1;
					rhsusf_acc_grip2_tan = 1;
					rhsusf_acc_grip2_wd = 1;
				};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o.rtm"};
		reloadAction = "GestureReloadSPAR_01";
		rhs_grip1_change = "A_URGI_105_01_grip";
		rhs_grip2_change = "A_URGI_105_01_grip2";
		rhs_grip3_change = "A_URGI_105_01_grip3";
		baseWeapon = "A_URGI_105_01";
	};
	class A_URGI_105_01_grip: A_URGI_105_01
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_fg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip1";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_105_01_grip2: A_URGI_105_01_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_105_01_grip3: A_URGI_105_01_grip2
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_fg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_135_01: rhs_weap_m4a1_blockII
	{
		scope = 2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 419.1;
		model = "\TFL_URGI\URGI_135.p3d";
		dexterity = 1.62;
		displayName = "[10th LI] URGI 13.5";
		picture = "\seven\mk16\data\ui.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class PointerSlot: asdg_FrontSideRail{};
			class CowsSlot: asdg_OpticRail1913_short{};
			class UnderBarrelSlot
			{
				access = 1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				class compatibleItems
				{
					rhsusf_acc_tdstubby_blk = 1;
					rhsusf_acc_tdstubby_tan = 1;
					rhsusf_acc_kac_grip = 1;
					rhsusf_acc_grip1 = 1;
					rhsusf_acc_grip3 = 1;
					rhsusf_acc_grip3_tan = 1;
					rhsusf_acc_rvg_blk = 1;
					rhsusf_acc_rvg_de = 1;
					rhs_acc_grip_ffg2 = 1;
					rhs_acc_grip_rk6 = 1;
					rhs_acc_grip_rk2 = 1;
					rhsusf_acc_grip2 = 1;
					rhsusf_acc_grip2_tan = 1;
					rhsusf_acc_grip2_wd = 1;
				};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		handAnim[] = {"OFP2_ManSkeleton","seven\mk16\anim\urgi.rtm"};
		reloadAction = "GestureReloadSPAR_01";
		rhs_grip1_change = "A_URGI_135_01_grip";
		rhs_grip2_change = "A_URGI_135_01_grip2";
		rhs_grip3_change = "A_URGI_135_01_grip3";
		baseWeapon = "A_URGI_135_01";
	};
	class A_URGI_135_01_grip: A_URGI_135_01
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_fg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip1";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_135_01_grip2: A_URGI_135_01_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "GripodSlot";
			};
		};
	};
	class A_URGI_135_01_grip3: A_URGI_135_01_grip2
	{
		handAnim[] = {"OFP2_ManSkeleton","TFL_URGI\anim\anim_416o_fg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "GripodSlot";
			};
		};
	};
};
class cfgMods
{
	author = "";
	timepacked = "1588680291";
};

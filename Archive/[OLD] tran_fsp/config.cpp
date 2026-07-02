#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class Tran_FSP
	{
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails","cba_main","Louetta_seven","Louetta_two"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class InventoryOpticsItem_Base_F;
class InventoryMuzzleItem_Base_F;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_UnderSlot;
class asdg_OpticRail1913_short;
class asdg_OpticRail;
class ItemCore;
class acc_flashlight;
class ACE_acc_pointer_red;
class acc_pointer_IR;
class rhs_western_rifle_underbarrel_slot;
class rhs_western_rifle_scopes_slot_long;
class rhs_western_rifle_laser_slot_top;
class rhs_UnderSlot_m249_ris;
class rhs_western_762rifle_muzzle_slot;
class rhs_western_mg_gripod_slot;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems{};
};
class asdg_FrontSideRail;
class rhs_western_rifle_gripod_slot;
class optic_SOS;
class InventoryFlashLightItem_Base_F;
class asdg_MuzzleSlot_762
{
	class compatibleItems{};
};
class asdg_MuzzleSlot_556
{
	class compatibleItems{};
};
class Louetta_ANPEQ15_TAN;
class Louetta_ANPEQ15_TAN_MIX: ACE_acc_pointer_red{};
class Louetta_SFLIGHT_TOP;
class rhsusf_acc_grip1
{
	class Iteminfo;
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class rhs_weap_m4a1_blockII;
	class rhs_weap_mk18_bk: rhs_weap_m4a1_blockII
	{
		class WeaponSlotsInfo;
	};
	class Louetta_tran_foregrip: rhsusf_acc_grip1
	{
		picture = "";
		UiPicture = "";
		author = "Louetta";
		displayName = "[2nd Batt 75th Rangers] BCM Foregrip";
		descriptionShort = "";
		model = "tran_fsp\grip\bcm.p3d";
		weaponInfoType = "RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod = 1;
		};
		inertia = -0.2;
		rhs_grip_type = "rhs_grip1_change";
	};
	class Louetta_tran_foregrip_fde: rhsusf_acc_grip1
	{
		picture = "";
		UiPicture = "";
		author = "Louetta";
		displayName = "[2nd Batt 75th Rangers] BCM Foregrip FDE";
		descriptionShort = "";
		model = "tran_fsp\grip\bcm_fde.p3d";
		weaponInfoType = "RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod = 1;
		};
		inertia = -0.2;
		rhs_grip_type = "rhs_grip2_change";
	};
	class Louetta_tran_foregrip_02: rhsusf_acc_grip1
	{
		picture = "";
		UiPicture = "";
		author = "Louetta | Euclid";
		displayName = "[2nd Batt 75th Rangers] BCM Foregrip";
		descriptionShort = "";
		model = "tran_fsp\midwest\bcm.p3d";
		weaponInfoType = "RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod = 1;
		};
		inertia = -0.2;
		rhs_grip_type = "rhs_grip2_change";
	};
	class Louetta_ANPEQ15_TAN_Laser: acc_pointer_IR
	{
		ACE_laserpointer = 1;
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] ";
		model = "";
		author = "";
		picture = "";
		UiPicture = "";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class Pointer
			{
				irLaserPos = "laser_pos";
				irLaserEnd = "laser_dir";
				irdistance = 5;
			};
			class FlashLight
			{
				color[] = {0,0,0};
				ambient[] = {0,0,0};
				intensity = 0;
				size = 0;
				innerAngle = 0;
				outerAngle = 0;
				coneFadeCoef = 5;
				position = "flash dir";
				direction = "flash";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
				scale[] = {0};
			};
		};
	};
	class Louetta_sidefsp_LASER: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "[2nd Batt 75th Rangers] LA-5 + M600U";
		model = "tran_fsp\side\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidefsp_FLASH";
		MRT_SwitchItemNextClass = "Louetta_side_fsp_Vis_Laser";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_fsp_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] LA-5 + M600U";
		model = "tran_fsp\side\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidefsp_LASER";
		MRT_SwitchItemNextClass = "Louetta_sidefsp_FLASH";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidefsp_FLASH: Louetta_SFLIGHT_TOP
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] LA-5 + M600U";
		model = "tran_fsp\side\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_fsp_Vis_Laser";
		MRT_SwitchItemNextClass = "Louetta_sidefsp_LASER";
		MRT_switchItemHintText = "Flash light";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidefsp2_LASER: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "[2nd Batt 75th Rangers] AN/PEQ-15 + M600U";
		model = "tran_fsp\side\side_2.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidefsp2_FLASH";
		MRT_SwitchItemNextClass = "Louetta_side_fsp2_Vis_Laser";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_fsp2_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] AN/PEQ-15 + M600U";
		model = "tran_fsp\side\side_2.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidefsp2_LASER";
		MRT_SwitchItemNextClass = "Louetta_sidefsp2_FLASH";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidefsp2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] AN/PEQ-15 + M600U";
		model = "tran_fsp\side\side_2.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_fsp2_Vis_Laser";
		MRT_SwitchItemNextClass = "Louetta_sidefsp2_LASER";
		MRT_switchItemHintText = "Flash light";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidetroy_LASER: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600U";
		model = "tran_fsp\troy\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidetroy_FLASH";
		MRT_SwitchItemNextClass = "Louetta_side_troy_Vis_Laser";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_troy_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600U";
		model = "tran_fsp\troy\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidetroy_LASER";
		MRT_SwitchItemNextClass = "Louetta_sidetroy_FLASH";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidetroy_FLASH: Louetta_SFLIGHT_TOP
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600U";
		model = "tran_fsp\troy\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_troy_Vis_Laser";
		MRT_SwitchItemNextClass = "Louetta_sidetroy_LASER";
		MRT_switchItemHintText = "Flash light";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemidwest_LASER: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600U";
		model = "tran_fsp\midwest\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemidwest_FLASH";
		MRT_SwitchItemNextClass = "Louetta_sidemidwest_Vis_Laser";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemidwest_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600U";
		model = "tran_fsp\midwest\side_1.p3d";
		author = "Louetta | Euclid";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemidwest_LASER";
		MRT_SwitchItemNextClass = "Louetta_sidemidwest_FLASH";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemidwest_FLASH: Louetta_SFLIGHT_TOP
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600U";
		model = "tran_fsp\midwest\side_1.p3d";
		author = "Louetta | Euclid";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemidwest_Vis_Laser";
		MRT_SwitchItemNextClass = "Louetta_sidemidwest_LASER";
		MRT_switchItemHintText = "Flash light";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemidwest2_LASER: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600";
		model = "tran_fsp\midwest\side_2.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemidwest2_FLASH";
		MRT_SwitchItemNextClass = "Louetta_sidemidwest2_Vis_Laser";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemidwest2_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600";
		model = "tran_fsp\midwest\side_2.p3d";
		author = "Louetta | Euclid";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemidwest2_LASER";
		MRT_SwitchItemNextClass = "Louetta_sidemidwest2_FLASH";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemidwest2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope = 1;
		displayName = "[2nd Batt 75th Rangers] DBAL + M600";
		model = "tran_fsp\midwest\side_2.p3d";
		author = "Louetta | Euclid";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemidwest2_Vis_Laser";
		MRT_SwitchItemNextClass = "Louetta_sidemidwest2_LASER";
		MRT_switchItemHintText = "Flash light";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_tran_troy: rhs_weap_mk18_bk
	{
		scope = 2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		model = "tran_fsp\troy.p3d";
		dexterity = 1.62;
		author = "Louetta";
		displayName = "[2nd Batt 75th Rangers] M4A1 Troy TRX 10.5";
		picture = "\seven\mk16\data\ui.paa";
		overviewPicture = "";
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[] = {"Louetta_sidetroy_LASER","Louetta_side_troy_Vis_Laser","Louetta_sidetroy_FLASH"};
			};
			class CowsSlot: asdg_OpticRail1913_short{};
			class UnderBarrelSlot
			{
				access = 1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[] = {};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		handAnim[] = {"OFP2_ManSkeleton","tran_fsp\anim\Troy.rtm"};
		reloadAction = "GestureReloadSPAR_01";
		rhs_grip1_change = "Louetta_tran_fsp_grip";
		rhs_grip2_change = "Louetta_tran_fsp_grip2";
		baseWeapon = "Louetta_tran_fsp";
	};
	class Louetta_tran_midwest: rhs_weap_mk18_bk
	{
		scope = 2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		model = "tran_fsp\midwest.p3d";
		dexterity = 1.62;
		author = "Louetta | Euclid";
		displayName = "[2nd Batt 75th Rangers] M4A1 Midwest 13.5";
		picture = "\seven\mk16\data\ui.paa";
		overviewPicture = "";
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[] = {"Louetta_sidemidwest_LASER","Louetta_sidemidwest_Vis_Laser","Louetta_sidemidwest_FLASH","Louetta_sidemidwest2_LASER","Louetta_sidemidwest2_Vis_Laser","Louetta_sidemidwest2_FLASH"};
			};
			class CowsSlot: asdg_OpticRail1913_short{};
			class UnderBarrelSlot
			{
				access = 1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[] = {"Louetta_tran_foregrip","Louetta_tran_foregrip_02"};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		handAnim[] = {"OFP2_ManSkeleton","tran_fsp\anim\Midwest_0.rtm"};
		reloadAction = "GestureReloadSPAR_01";
		rhs_grip1_change = "Louetta_tran_midwest_grip";
		rhs_grip2_change = "Louetta_tran_midwest_grip_02";
		baseWeapon = "Louetta_tran_midwest";
	};
	class Louetta_tran_fsp_base: rhs_weap_mk18_bk
	{
		scope = 2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		model = "tran_fsp\fsp.p3d";
		dexterity = 1.62;
		author = "Louetta";
		displayName = "[2nd Batt 75th Rangers] M4A1 Block II FSP 14.5";
		picture = "\seven\mk16\data\ui.paa";
		overviewPicture = "";
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[] = {"Louetta_sidefsp_LASER","Louetta_side_fsp_Vis_Laser","Louetta_sidefsp_FLASH","Louetta_sidefsp2_LASER","Louetta_side_fsp2_Vis_Laser","Louetta_sidefsp2_FLASH"};
			};
			class CowsSlot: asdg_OpticRail1913_short{};
			class UnderBarrelSlot
			{
				access = 1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[] = {"Louetta_tran_foregrip","Louetta_tran_foregrip_fde"};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		handAnim[] = {"OFP2_ManSkeleton","tran_fsp\anim\fsp.rtm"};
		reloadAction = "GestureReloadSPAR_01";
		rhs_grip1_change = "Louetta_tran_fsp_grip";
		rhs_grip2_change = "Louetta_tran_fsp_grip2";
		baseWeapon = "Louetta_tran_fsp";
	};
	class Louetta_tran_fsp_grip: Louetta_tran_fsp_base
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","tran_fsp\anim\fsp_1.rtm"};
		inertia = 0.81;
	};
	class Louetta_tran_fsp_grip2: Louetta_tran_fsp_base
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","tran_fsp\anim\fsp_2.rtm"};
		inertia = 0.81;
	};
	class Louetta_tran_midwest_grip: Louetta_tran_midwest
	{
		scopeArsenal = 0;
		handanim[] = {"OFP2_ManSkeleton","tran_fsp\anim\Midwest_1.rtm"};
		inertia = 0.81;
		baseWeapon = "Louetta_tran_midwest_grip";
	};
	class Louetta_tran_midwest_grip_02: Louetta_tran_midwest
	{
		scopeArsenal = 0;
		handanim[] = {"OFP2_ManSkeleton","tran_fsp\anim\Midwest_2.rtm"};
		inertia = 0.81;
		baseWeapon = "Louetta_tran_midwest_grip_02";
	};
};
class cfgMods
{
	author = "Ming Tan Chink Man";
	timepacked = "1627345092";
};

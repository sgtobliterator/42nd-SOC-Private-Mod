#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class GateKeep_MK12
	{
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails","cba_main","Louetta_seven","Louetta_two"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 20Rnd_762x51_Mag;
	class 16Rnd_9x21_Mag;
	class GateKeep_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname = "5.56mm 30rnd Stanag";
		initspeed = 974.8;
		mass = 11.6;
		lastroundstracer = 4;
		scope = 2;
		eden = 2;
		tracersevery = 0;
		displaynameshort = "M855A1 EPR";
		picture = "";
		model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_n_30rnd";
		modelSpecialIsProxy = 1;
	};
	class GateKeep_556x45_T_Stanag: GateKeep_556x45_Stanag
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer";
		displayName = "5.56mm 30rnd (T) Stanag";
		tracersEvery = 1;
		lastRoundsTracer = 1;
		picture = "";
	};
	class GateKeep_556x45_TM_Stanag: GateKeep_556x45_T_Stanag
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer";
		displayName = "5.56mm 30rnd (TM) Stanag";
		tracersEvery = 3;
		lastRoundsTracer = 3;
		picture = "";
	};
	class GateKeep_556x45_IRT_Stanag: GateKeep_556x45_Stanag
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer_IR";
		displayName = "5.56mm 30rnd (IRT) Stanag";
		tracersEvery = 1;
		lastRoundsTracer = 1;
		picture = "";
	};
	class GateKeep_556x45_IRTM_Stanag: GateKeep_556x45_IRT_Stanag
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer_IR";
		displayName = "5.56mm 30rnd (IRTM) Stanag";
		tracersEvery = 3;
		lastRoundsTracer = 3;
		picture = "";
	};
	class GateKeep_556x45_Stanag_20: GateKeep_556x45_Stanag
	{
		count = 20;
		descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
		displayname = "5.56mm 20rnd Stanag";
		mass = 7.6;
		model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
		modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
		modelSpecialIsProxy = 1;
	};
	class GateKeep_556x45_T_Stanag_20: GateKeep_556x45_Stanag_20
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer";
		displayName = "5.56mm 20rnd (T) Stanag";
		tracersEvery = 1;
		lastRoundsTracer = 1;
		picture = "";
	};
	class GateKeep_556x45_TM_Stanag_20: GateKeep_556x45_T_Stanag_20
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer";
		displayName = "5.56mm 20rnd (TM) Stanag";
		tracersEvery = 3;
		lastRoundsTracer = 3;
		picture = "";
	};
	class GateKeep_556x45_IRT_Stanag_20: GateKeep_556x45_Stanag_20
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer_IR";
		displayName = "5.56mm 20rnd (IRT) Stanag";
		tracersEvery = 1;
		lastRoundsTracer = 1;
		picture = "";
	};
	class GateKeep_556x45_IRTM_Stanag_20: GateKeep_556x45_IRT_Stanag_20
	{
		author = "Louetta";
		ammo = "Louetta_556x45_Ball_Tracer_IR";
		displayName = "5.56mm 20rnd (IRTM) Stanag";
		tracersEvery = 3;
		lastRoundsTracer = 3;
		picture = "";
	};
};
class CfgMagazineWells
{
	class STANAG_556x45
	{
		GateKeep_Magazines[] = {"GateKeep_556x45_Stanag","GateKeep_556x45_T_Stanag","GateKeep_556x45_TM_Stanag","GateKeep_556x45_IRT_Stanag","GateKeep_556x45_IRTM_Stanag","GateKeep_556x45_Stanag_20","GateKeep_556x45_T_Stanag_20","GateKeep_556x45_TM_Stanag_20","GateKeep_556x45_IRT_Stanag_20","GateKeep_556x45_IRTM_Stanag_20"};
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
	class compatibleItems
	{
		GK_LeupoldMK4_Docter = 1;
		GK_LeupoldMK4_Docter_Matty_desert = 1;
		GK_LeupoldMK4_Docter_Matty_urban = 1;
		GK_LeupoldMK4_Docter_lopez_woodland = 1;
	};
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
	class compatibleItems
	{
		louettaaem5_blk = 1;
		louettaaem5_matty_desert = 1;
		louettaaem5_matty_urban = 1;
		louettaaem5_lopez_woodland = 1;
	};
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
	class GK_LeupoldMK4_Docter: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Louetta";
		inertia = 0.05;
		displayname = "MK4 Docter Black";
		picture = "";
		model = "\gatekeep_mk12\model\Scope\mk4.p3d";
		descriptionshort = "Leupold MK4 <br />Magnification: 10x";
		ACE_ScopeHeightAboveRail = 4.8;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		hiddenSelections[] = {"mk4","docter","mount"};
		hiddenSelectionsTextures[] = {"gatekeep_mk12\data\black\leupoldmk4_co.paa","gatekeep_mk12\data\black\docter_co.paa","gatekeep_mk12\data\black\mount_co.paa"};
		hiddenSelectionsMaterials[] = {"gatekeep_mk12\data\black\mk4.rvmat","gatekeep_mk12\data\black\docter.rvmat","gatekeep_mk12\data\black\mount.rvmat"};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 4;
			RMBhint = "Optical Sniper Sight";
			optics = 1;
			modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					opticsZoomMax = "0.35/3.5";
					opticsZoomMin = "0.35/10";
					opticsZoomInit = "0.35/3.5";
					discretefov[] = {"0.35/3.5","0.35/10"};
					discreteInitIndex = 0;
					modelOptics[] = {"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot3_5","\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot10"};
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					cameraDir = "";
				};
				class T2
				{
					opticsID = 2;
					opticsDisplayName = "Optical Sight";
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.45;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.7;
					memoryPointCamera = "eye2";
					visionMode[] = {};
					discreteDistance[] = {50};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
				};
			};
		};
		tmr_optics_enhanced = 0;
	};
	class GK_LeupoldMK4_Docter_Matty_desert: GK_LeupoldMK4_Docter
	{
		displayname = "MK4 Docter Desert";
		model = "\gatekeep_mk12\model\Scope\mk4_matty_desert.p3d";
	};
	class GK_LeupoldMK4_Docter_Matty_urban: GK_LeupoldMK4_Docter
	{
		displayname = "MK4 Docter Urban";
		model = "\gatekeep_mk12\model\Scope\mk4_matty_urban.p3d";
	};
	class GK_LeupoldMK4_Docter_Lopez_woodland: GK_LeupoldMK4_Docter
	{
		displayname = "MK4 Docter Woodland";
		model = "\gatekeep_mk12\model\Scope\mk4_lopez_woodland.p3d";
	};
	class louettaaem5_blk: ItemCore
	{
		scope = 2;
		displayName = "AEM5 Black";
		author = "Louetta";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "gatekeep_mk12\model\aem5\aem5.p3d";
		vehicleClass = "WeaponsPrimary";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 5;
			class MagazineCoef
			{
				initSpeed = 0.9;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.01;
				audibleFire = 0.01;
				visibleFireTime = 0.01;
				audibleFireTime = 0.01;
				cost = 1;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
			muzzleEnd = "zaslehpoint";
			alternativeFire = "Zasleh2";
			soundTypeIndex = 1;
		};
	};
	class louettaaem5_matty_desert: louettaaem5_blk
	{
		scope = 2;
		displayName = "AEM5 Desert";
		model = "gatekeep_mk12\model\aem5\aem5_matty_desert.p3d";
	};
	class louettaaem5_matty_urban: louettaaem5_blk
	{
		scope = 2;
		displayName = "AEM5 Urban";
		model = "gatekeep_mk12\model\aem5\aem5_matty_urban.p3d";
	};
	class louettaaem5_lopez_woodland: louettaaem5_blk
	{
		scope = 2;
		displayName = "AEM5 Woodland";
		model = "gatekeep_mk12\model\aem5\aem5_lopez_woodland.p3d";
	};
	class Louetta_harris_foregrip: rhsusf_acc_grip1
	{
		picture = "";
		UiPicture = "";
		author = "Louetta";
		displayName = "Harris Foregrip";
		descriptionShort = "";
		model = "gatekeep_mk12\model\grip\harris.p3d";
		weaponInfoType = "RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod = 1;
		};
		inertia = -0.2;
		rhs_grip_type = "rhs_grip1_change";
	};
	class Louetta_harris_foregrip_matty_desert: Louetta_harris_foregrip
	{
		displayName = "Harris Foregrip Desert";
		model = "gatekeep_mk12\model\grip\harris_matty_desert.p3d";
	};
	class Louetta_harris_foregrip_matty_urban: Louetta_harris_foregrip
	{
		displayName = "Harris Foregrip Urban";
		model = "gatekeep_mk12\model\grip\harris_matty_urban.p3d";
	};
	class Louetta_harris_foregrip_lopez_woodland: Louetta_harris_foregrip
	{
		displayName = "Harris Foregrip Woodland";
		model = "gatekeep_mk12\model\grip\harris_lopez_woodland.p3d";
	};
	class Louetta_ANPEQ15_TAN_Laser: acc_pointer_IR
	{
		ACE_laserpointer = 1;
		scope = 1;
		displayName = "";
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
	class Louetta_sidemk12_LASER: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "PEQ15";
		model = "gatekeep_mk12\model\side\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_mk12_Vis_Laser";
		MRT_SwitchItemNextClass = "Louetta_side_mk12_Vis_Laser";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_mk12_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "PEQ15";
		model = "gatekeep_mk12\model\side\side_1.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemk12_LASER";
		MRT_SwitchItemNextClass = "Louetta_sidemk12_LASER";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemk12_LASER_matty_desert: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "PEQ15 Desert";
		model = "gatekeep_mk12\model\side\side_1_matty_desert.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_mk12_Vis_Laser_matty_desert";
		MRT_SwitchItemNextClass = "Louetta_side_mk12_Vis_Laser_matty_desert";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_mk12_Vis_Laser_matty_desert: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "PEQ15 Desert";
		model = "gatekeep_mk12\model\side\side_1_matty_desert.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemk12_LASER_matty_desert";
		MRT_SwitchItemNextClass = "Louetta_sidemk12_LASER_matty_desert";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemk12_LASER_matty_urban: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "PEQ15 Urban";
		model = "gatekeep_mk12\model\side\side_1_matty_urban.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_mk12_Vis_Laser_matty_urban";
		MRT_SwitchItemNextClass = "Louetta_side_mk12_Vis_Laser_matty_urban";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_mk12_Vis_Laser_matty_urban: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "PEQ15 Urban";
		model = "gatekeep_mk12\model\side\side_1_matty_urban.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemk12_LASER_matty_urban";
		MRT_SwitchItemNextClass = "Louetta_sidemk12_LASER_matty_urban";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemk12_LASER_2: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "LA-5";
		model = "gatekeep_mk12\model\side\side_2.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_mk12_Vis_Laser_2";
		MRT_SwitchItemNextClass = "Louetta_side_mk12_Vis_Laser_2";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_mk12_Vis_Laser_2: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "LA-5";
		model = "gatekeep_mk12\model\side\side_2.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemk12_LASER_2";
		MRT_SwitchItemNextClass = "Louetta_sidemk12_LASER_2";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_sidemk12_LASER_2_lopez_woodland: Louetta_ANPEQ15_TAN
	{
		scope = 2;
		displayName = "LA-5 Woodland";
		model = "gatekeep_mk12\model\side\side_2_lopez_woodland.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_side_mk12_Vis_Laser_2_lopez_woodland";
		MRT_SwitchItemNextClass = "Louetta_side_mk12_Vis_Laser_2_lopez_woodland";
		MRT_switchItemHintText = "IR Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_side_mk12_Vis_Laser_2_lopez_woodland: Louetta_ANPEQ15_TAN_Laser
	{
		scope = 1;
		displayName = "LA-5 Woodland";
		model = "gatekeep_mk12\model\side\side_2_lopez_woodland.p3d";
		author = "Louetta";
		picture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture = "\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass = "Louetta_sidemk12_LASER_2_lopez_woodland";
		MRT_SwitchItemNextClass = "Louetta_sidemk12_LASER_2_lopez_woodland";
		MRT_switchItemHintText = "Visible Laser";
		editorCategory = "tf136";
		editorSubcategory = "louetta";
	};
	class Louetta_mk12_base: rhs_weap_mk18_bk
	{
		scope = 2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 457.2;
		model = "gatekeep_mk12\model\mk12\mk12.p3d";
		dexterity = 1.62;
		author = "Louetta";
		displayName = "[2nd Batt 75th Rangers] MK12 Mod 1";
		picture = "\seven\mk16\data\ui.paa";
		overviewPicture = "";
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[] = {"Louetta_side_mk12_Vis_Laser","Louetta_sidemk12_LASER","Louetta_side_mk12_Vis_Laser_matty_desert","Louetta_sidemk12_LASER_matty_desert","Louetta_side_mk12_Vis_Laser_matty_urban","Louetta_sidemk12_LASER_matty_urban","Louetta_side_mk12_Vis_Laser_2","Louetta_sidemk12_LASER_2","Louetta_side_mk12_Vis_Laser_2_lopez_woodland","Louetta_sidemk12_LASER_2_lopez_woodland"};
			};
			class CowsSlot: asdg_OpticRail1913_short{};
			class UnderBarrelSlot
			{
				access = 1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[] = {"Louetta_harris_foregrip","Louetta_harris_foregrip_matty_desert","Louetta_harris_foregrip_matty_urban","Louetta_harris_foregrip_lopez_woodland"};
			};
		};
		hiddenSelections[] = {"A2","AEM5","buffertube","charge","lower","internals","misc","rail","railcover","stock","upper"};
		hiddenSelectionsTextures[] = {"gatekeep_mk12\data\black\a2_co.paa","gatekeep_mk12\data\black\aem5_co.paa","gatekeep_mk12\data\black\buffertube_co.paa","gatekeep_mk12\data\black\chargehandle_co.paa","gatekeep_mk12\data\black\mk12_lower_co.paa","gatekeep_mk12\data\black\internals_co.paa","gatekeep_mk12\data\black\mk12_misc_co.paa","gatekeep_mk12\data\black\mk12_rail_co.paa","gatekeep_mk12\data\black\rail_cover_co.paa","gatekeep_mk12\data\black\sopmod_co.paa","gatekeep_mk12\data\black\mk12_upper_co.paa"};
		hiddenSelectionsMaterials[] = {"gatekeep_mk12\data\black\a2.rvmat","gatekeep_mk12\data\black\aem5.rvmat","two\nsr\data\tube.rvmat","gatekeep_mk12\data\black\chargehandle.rvmat","gatekeep_mk12\data\black\mk12_lower.rvmat","two\nsr\data\colt_lower.rvmat","gatekeep_mk12\data\black\mk12_misc.rvmat","gatekeep_mk12\data\black\mk12_rail.rvmat","gatekeep_mk12\data\black\rail_cover.rvmat","gatekeep_mk12\data\black\sopmod.rvmat","gatekeep_mk12\data\black\mk12_upper.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12.rtm"};
		reloadAction = "GestureReloadSPAR_01";
		rhs_grip1_change = "Louetta_mk12_base_grip";
		rhs_grip2_change = "Louetta_mk12_base_grip2";
		baseWeapon = "Louetta_mk12_base";
	};
	class Louetta_mk12_base_grip: Louetta_mk12_base
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12_vfg.rtm"};
		inertia = 0.81;
	};
	class Louetta_mk12_base_grip2: Louetta_mk12_base
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12.rtm"};
		inertia = 0.81;
	};
	class Louetta_mk12_matty_desert: Louetta_mk12_base
	{
		displayName = "[2nd Batt 75th Rangers] MK12 Mod 1 Desert";
		hiddenSelections[] = {"A2","AEM5","buffertube","charge","lower","internals","misc","rail","railcover","stock","upper"};
		hiddenSelectionsTextures[] = {"gatekeep_mk12\data\matty_desert\a2_co.paa","gatekeep_mk12\data\matty_desert\aem5_co.paa","gatekeep_mk12\data\matty_desert\buffertube_co.paa","gatekeep_mk12\data\black\chargehandle_co.paa","gatekeep_mk12\data\matty_desert\mk12_lower_co.paa","gatekeep_mk12\data\black\internals_co.paa","gatekeep_mk12\data\matty_desert\mk12_misc_co.paa","gatekeep_mk12\data\matty_desert\mk12_rail_co.paa","gatekeep_mk12\data\matty_desert\rail_cover_co.paa","gatekeep_mk12\data\matty_desert\sopmod_co.paa","gatekeep_mk12\data\matty_desert\mk12_upper_co.paa"};
		hiddenSelectionsMaterials[] = {"gatekeep_mk12\data\matty_desert\a2.rvmat","gatekeep_mk12\data\matty_desert\aem5.rvmat","gatekeep_mk12\data\matty_desert\tube.rvmat","gatekeep_mk12\data\black\chargehandle.rvmat","gatekeep_mk12\data\matty_desert\mk12_lower.rvmat","gatekeep_mk12\data\matty_desert\colt_lower.rvmat","gatekeep_mk12\data\matty_desert\mk12_misc.rvmat","gatekeep_mk12\data\matty_desert\mk12_rail.rvmat","gatekeep_mk12\data\matty_desert\rail_cover.rvmat","gatekeep_mk12\data\matty_desert\sopmod.rvmat","gatekeep_mk12\data\matty_desert\mk12_upper.rvmat"};
		rhs_grip1_change = "Louetta_mk12_matty_desert_grip";
		rhs_grip2_change = "Louetta_mk12_matty_desert_grip2";
		baseWeapon = "Louetta_mk12_matty_desert";
	};
	class Louetta_mk12_matty_desert_grip: Louetta_mk12_matty_desert
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12_vfg.rtm"};
		inertia = 0.81;
	};
	class Louetta_mk12_matty_desert_grip2: Louetta_mk12_matty_desert
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12.rtm"};
		inertia = 0.81;
	};
	class Louetta_mk12_matty_urban: Louetta_mk12_base
	{
		displayName = "[2nd Batt 75th Rangers] MK12 Mod 1 Urban";
		hiddenSelections[] = {"A2","AEM5","buffertube","charge","lower","internals","misc","rail","railcover","stock","upper"};
		hiddenSelectionsTextures[] = {"gatekeep_mk12\data\matty_urban\a2_co.paa","gatekeep_mk12\data\matty_urban\aem5_co.paa","gatekeep_mk12\data\matty_urban\buffertube_co.paa","gatekeep_mk12\data\black\chargehandle_co.paa","gatekeep_mk12\data\matty_urban\mk12_lower_co.paa","gatekeep_mk12\data\black\internals_co.paa","gatekeep_mk12\data\matty_urban\mk12_misc_co.paa","gatekeep_mk12\data\matty_urban\mk12_rail_co.paa","gatekeep_mk12\data\matty_urban\rail_cover_co.paa","gatekeep_mk12\data\matty_urban\sopmod_co.paa","gatekeep_mk12\data\matty_urban\mk12_upper_co.paa"};
		hiddenSelectionsMaterials[] = {"gatekeep_mk12\data\matty_urban\a2.rvmat","gatekeep_mk12\data\matty_urban\aem5.rvmat","gatekeep_mk12\data\matty_urban\tube.rvmat","gatekeep_mk12\data\black\chargehandle.rvmat","gatekeep_mk12\data\matty_urban\mk12_lower.rvmat","gatekeep_mk12\data\matty_urban\colt_lower.rvmat","gatekeep_mk12\data\matty_urban\mk12_misc.rvmat","gatekeep_mk12\data\matty_urban\mk12_rail.rvmat","gatekeep_mk12\data\matty_urban\rail_cover.rvmat","gatekeep_mk12\data\matty_urban\sopmod.rvmat","gatekeep_mk12\data\matty_urban\mk12_upper.rvmat"};
		rhs_grip1_change = "Louetta_mk12_matty_urban_grip";
		rhs_grip2_change = "Louetta_mk12_matty_urban_grip2";
		baseWeapon = "Louetta_mk12_matty_urban";
	};
	class Louetta_mk12_matty_urban_grip: Louetta_mk12_matty_urban
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12_vfg.rtm"};
		inertia = 0.81;
	};
	class Louetta_mk12_matty_urban_grip2: Louetta_mk12_matty_urban
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12.rtm"};
		inertia = 0.81;
	};
	class Louetta_mk12_lopez_woodland: Louetta_mk12_base
	{
		displayName = "[2nd Batt 75th Rangers] MK12 Mod 1 Woodland";
		hiddenSelections[] = {"A2","AEM5","buffertube","charge","lower","internals","misc","rail","railcover","stock","upper"};
		hiddenSelectionsTextures[] = {"gatekeep_mk12\data\lopez_woodland\a2_co.paa","gatekeep_mk12\data\lopez_woodland\aem5_co.paa","gatekeep_mk12\data\lopez_woodland\buffertube_co.paa","gatekeep_mk12\data\lopez_woodland\chargehandle_co.paa","gatekeep_mk12\data\lopez_woodland\mk12_lower_co.paa","gatekeep_mk12\data\lopez_woodland\internals_co.paa","gatekeep_mk12\data\lopez_woodland\mk12_misc_co.paa","gatekeep_mk12\data\lopez_woodland\mk12_rail_co.paa","","gatekeep_mk12\data\lopez_woodland\sopmod_co.paa","gatekeep_mk12\data\lopez_woodland\mk12_upper_co.paa"};
		hiddenSelectionsMaterials[] = {"gatekeep_mk12\data\lopez_woodland\a2.rvmat","gatekeep_mk12\data\lopez_woodland\aem5.rvmat","gatekeep_mk12\data\lopez_woodland\tube.rvmat","gatekeep_mk12\data\lopez_woodland\chargehandle.rvmat","gatekeep_mk12\data\lopez_woodland\mk12_lower.rvmat","gatekeep_mk12\data\lopez_woodland\colt_lower.rvmat","gatekeep_mk12\data\lopez_woodland\mk12_misc.rvmat","gatekeep_mk12\data\lopez_woodland\mk12_rail.rvmat","","gatekeep_mk12\data\lopez_woodland\sopmod.rvmat","gatekeep_mk12\data\lopez_woodland\mk12_upper.rvmat"};
		rhs_grip1_change = "Louetta_mk12_lopez_woodland_grip";
		rhs_grip2_change = "Louetta_mk12_lopez_woodland_grip2";
		baseWeapon = "Louetta_mk12_lopez_woodland";
	};
	class Louetta_mk12_lopez_woodland_grip: Louetta_mk12_lopez_woodland
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12_vfg.rtm"};
		inertia = 0.81;
	};
	class Louetta_mk12_lopez_woodland_grip2: Louetta_mk12_lopez_woodland
	{
		scopeArsenal = 0;
		author = "Louetta";
		handanim[] = {"OFP2_ManSkeleton","gatekeep_mk12\anim\mk12.rtm"};
		inertia = 0.81;
	};
};
class cfgMods
{
	author = "MattyIce";
	timepacked = "1620457502";
};

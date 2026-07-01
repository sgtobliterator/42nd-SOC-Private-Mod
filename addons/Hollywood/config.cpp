#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Hollywood
	{
		addonRootClass="A3_Weapons_F";
		author[]=
		{
			"Louetta"
		};
		name="Hollywood's Shit";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Weapons_F_Mark",
			"TFL_Headgear_Functions",
			"Louetta_two"
		};
		requiredVersion=1.6799999;
		units[]={};
		url="";
		version="1.0.0";
		versionAr[]={1,0,0};
		versionStr="1.0.0";
		weapons[]=
		{
			"Hollywood_417_1"
		};
		magazines[]={};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		Louetta_LEU_MK8_LWTS=1;
		Louetta_LEU_MK8_LWTS_2=1;
		Louetta_LEU_MK8_STS=1;
		Louetta_M110_ATACR_LWTS=1;
		Louetta_M110_ATACR=1;
	};
};
class rhs_western_rifle_underbarrel_slot;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913_short;
class rhs_western_rifle_gripod_slot;
class rhs_western_rifle_scopes_slot_long;
class rhs_western_762rifle_muzzle_slot;
class asdg_MuzzleSlot_762
{
	class compatibleItems
	{
		louettasocom556_blk=1;
		louettasocom556_tan=1;
		louettasocom556_blue=1;
		louettasocom556_yellow=1;
		louettasandmans=1;
		louettasocom762=1;
		louetta_m110=1;
		louettasocom762_mini=1;
	};
};
class asdg_SlotInfo;
class asdg_UnderSlot: asdg_SlotInfo
{
	class compatibleItems
	{
		sps_atlas_bipod_l_sts=1;
		sps_atlas_bipod_m_sts=1;
		sps_atlas_bipod_h_sts=1;
	};
};
class SPS;
class acc_flashlight;
class ACE_acc_pointer_red;
class acc_pointer_IR;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryUnderItem_Base_F;
class Louetta_ANPEQ15_TAN;
class Louetta_ANPEQ15_TAN_MIX: ACE_acc_pointer_red
{
};
class Louetta_SFLIGHT_TOP;
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
		};
		class GunParticles;
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class GunParticles: GunParticles
		{
			class SecondEffect;
		};
		class WeaponSlotsInfo;
		class Single;
		class FullAuto;
		class fullauto_medium;
		class single_close_optics1;
		class single_medium_optics1;
		class single_far_optics1;
	};
	class ItemCore;
	class Louetta_ANPEQ15_TAN_Laser: acc_pointer_IR
	{
		ACE_laserpointer=1;
		scope=1;
		displayName="";
		model="";
		author="";
		picture="";
		UiPicture="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class Pointer
			{
				irLaserPos="laser_pos";
				irLaserEnd="laser_dir";
				irdistance=5;
			};
			class FlashLight
			{
				color[]={0,0,0};
				ambient[]={0,0,0};
				intensity=0;
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=5;
				position="flash dir";
				direction="flash";
				useFlare=0;
				flareSize=0;
				flareMaxDistance="100.0f";
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
				scale[]={0};
			};
		};
	};
	class Louetta_side417_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="hollywood\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side417_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_417_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_417_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U";
		model="hollywood\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side417_LASER";
		MRT_SwitchItemNextClass="Louetta_side417_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side417_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="hollywood\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_417_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_side417_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidests_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + WML";
		model="hollywood\416\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidests_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_sts_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_sts_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + WML";
		model="hollywood\416\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidests_LASER";
		MRT_SwitchItemNextClass="Louetta_sidests_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidests_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + WML";
		model="hollywood\416\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_sts_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidests_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidem110_1_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="RAPTAR + M600U";
		model="hollywood\m110\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidem110_1_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_m110_1_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_m110_1_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="RAPTAR + M600U";
		model="hollywood\m110\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidem110_1_LASER";
		MRT_SwitchItemNextClass="Louetta_sidem110_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidem110_1_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="RAPTAR + M600U";
		model="hollywood\m110\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_m110_1_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidem110_1_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidem110_2_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="RAPTAR + M600U";
		model="hollywood\bat\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidem110_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_m110_2_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_m110_2_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="RAPTAR + M600U";
		model="hollywood\bat\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidem110_2_LASER";
		MRT_SwitchItemNextClass="Louetta_sidem110_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidem110_2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="RAPTAR + M600U";
		model="hollywood\bat\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_m110_2_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidem110_2_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class louetta_m110: ItemCore
	{
		scope=2;
		displayName="KAC M110 Suppressor";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="hollywood\bat\muzzle\muzzle.p3d";
		editorCategory="tf136";
		editorSubcategory="louetta";
		vehicleClass="WeaponsPrimary";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=0.89999998;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.0099999998;
				audibleFire=0.0099999998;
				visibleFireTime=0.0099999998;
				audibleFireTime=0.0099999998;
				cost=1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			muzzleEnd="zaslehpoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
		};
	};
	class louettasocom762_mini: ItemCore
	{
		scope=2;
		displayName="SOCOM 762 RC2 Mini";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="hollywood\rc2.p3d";
		editorCategory="tf136";
		editorSubcategory="louetta";
		vehicleClass="WeaponsPrimary";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=0.89999998;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.0099999998;
				audibleFire=0.0099999998;
				visibleFireTime=0.0099999998;
				audibleFireTime=0.0099999998;
				cost=1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			muzzleEnd="zaslehpoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
		};
	};
	class louettasocom762: ItemCore
	{
		scope=2;
		displayName="SOCOM 762 RC2";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="hollywood\rc2_2.p3d";
		editorCategory="tf136";
		editorSubcategory="louetta";
		vehicleClass="WeaponsPrimary";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=0.89999998;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.0099999998;
				audibleFire=0.0099999998;
				visibleFireTime=0.0099999998;
				audibleFireTime=0.0099999998;
				cost=1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			muzzleEnd="zaslehpoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
		};
	};
	class InventoryOpticsItem_Base_F;
	class Louetta_LEU_MK8_STS: ItemCore
	{
		scope=2;
		displayName="Gambit - 24th STS CQBSS";
		author="Louetta";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Hollywood\416\CQBSS.p3d";
		descriptionShort="Leupold MK8 CQBSS 1-8x Magnification";
		weaponInfoType="RscWeaponZeroing";
		ACE_ScopeAdjust_Vertical[]={-25.5,25.5};
		ACE_ScopeAdjust_Horizontal[]={-25.5,25.5};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=14;
			RMBhint="1-8x24 Low Power Variable Optic";
			opticType=2;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.249/8";
					opticsZoomMax="0.249/1";
					opticsZoomInit="0.249/1";
					discretefov[]=
					{
						"0.249/1",
						"0.249/2",
						"0.249/3",
						"0.249/4",
						"0.249/5",
						"0.249/6",
						"0.249/7",
						"0.249/8"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"Hollywood_scope\reticle\LUE_MK8_1-8_1.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_2.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_3.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_4.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_5.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_6.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_7.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_8.p3d"
					};
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Louetta_LEU_MK8_LWTS: ItemCore
	{
		scope=2;
		displayName="GSM Leupold MK8 CQBSS LWTS Coozie (Hollywood x Matty)";
		author="Louetta";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Hollywood\LEU_CQBSS_LWTS.p3d";
		descriptionShort="Leupold MK8 CQBSS 1-8x Magnification";
		weaponInfoType="RscWeaponZeroing";
		ACE_ScopeAdjust_Vertical[]={-25.5,25.5};
		ACE_ScopeAdjust_Horizontal[]={-25.5,25.5};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=14;
			RMBhint="1-8x24 Low Power Variable Optic";
			opticType=2;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.249/8";
					opticsZoomMax="0.249/1";
					opticsZoomInit="0.249/1";
					discretefov[]=
					{
						"0.249/1",
						"0.249/2",
						"0.249/3",
						"0.249/4",
						"0.249/5",
						"0.249/6",
						"0.249/7",
						"0.249/8"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"Hollywood_scope\reticle\LUE_MK8_1-8_1.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_2.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_3.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_4.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_5.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_6.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_7.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_8.p3d"
					};
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Louetta_LEU_MK8_LWTS_2: ItemCore
	{
		scope=2;
		displayName="GSM Leupold MK8 CQBSS LWTS (Hollywood x Matty)";
		author="Louetta";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Hollywood\LEU_CQBSS_LWTS_2.p3d";
		descriptionShort="Leupold MK8 CQBSS 1-8x Magnification";
		weaponInfoType="RscWeaponZeroing";
		ACE_ScopeAdjust_Vertical[]={-25.5,25.5};
		ACE_ScopeAdjust_Horizontal[]={-25.5,25.5};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=14;
			RMBhint="1-8x24 Low Power Variable Optic";
			opticType=2;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.249/8";
					opticsZoomMax="0.249/1";
					opticsZoomInit="0.249/1";
					discretefov[]=
					{
						"0.249/1",
						"0.249/2",
						"0.249/3",
						"0.249/4",
						"0.249/5",
						"0.249/6",
						"0.249/7",
						"0.249/8"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"Hollywood_scope\reticle\LUE_MK8_1-8_1.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_2.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_3.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_4.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_5.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_6.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_7.p3d",
						"Hollywood_scope\reticle\LUE_MK8_1-8_8.p3d"
					};
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Louetta_M110_ATACR_LWTS: ItemCore
	{
		scope=2;
		displayName="NF ATACR 4-16x M110 LWTS";
		author="Louetta";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Hollywood\bat\top\ATACR_LWTS.p3d";
		descriptionShort="ATACR 4-16x Magnification";
		weaponInfoType="L_RAPTAR";
		ACE_ScopeAdjust_Vertical[]={-25.5,25.5};
		ACE_ScopeAdjust_Horizontal[]={-25.5,25.5};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=14;
			RMBhint="4-16x24 High Power Variable Optic";
			opticType=2;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.249/16";
					opticsZoomMax="0.249/4";
					opticsZoomInit="0.249/4";
					discretefov[]=
					{
						"0.249/4",
						"0.249/6",
						"0.249/8",
						"0.249/10",
						"0.249/13",
						"0.249/16"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"Hollywood_scope\reticle2\ATACR_4-16_4.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_6.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_8.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_10.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_13.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_16.p3d"
					};
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					thermalMode[]={0,1};
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Louetta_M110_ATACR: ItemCore
	{
		scope=2;
		displayName="NF ATACR 4-16x M110";
		author="Louetta";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Hollywood\bat\top\ATACR.p3d";
		descriptionShort="ATACR 4-16x Magnification";
		weaponInfoType="L_RAPTAR";
		ACE_ScopeAdjust_Vertical[]={-25.5,25.5};
		ACE_ScopeAdjust_Horizontal[]={-25.5,25.5};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=14;
			RMBhint="4-16x24 High Power Variable Optic";
			opticType=2;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.249/16";
					opticsZoomMax="0.249/4";
					opticsZoomInit="0.249/4";
					discretefov[]=
					{
						"0.249/4",
						"0.249/6",
						"0.249/8",
						"0.249/10",
						"0.249/13",
						"0.249/16"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"Hollywood_scope\reticle2\ATACR_4-16_4.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_6.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_8.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_10.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_13.p3d",
						"Hollywood_scope\reticle2\ATACR_4-16_16.p3d"
					};
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class rhs_weap_m14ebrri;
	class rhs_weap_sr25: rhs_weap_m14ebrri
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class rhs_weap_sr25_ec: rhs_weap_sr25
	{
	};
	class Louetta_M110_65: rhs_weap_sr25_ec
	{
		scope=0;
		author="Louetta";
		displayName="[Louetta] M110 6.5CM";
		picture="\Tier1_Weapons\SR25\data\ui_sr25_ec_ca.paa";
		baseWeapon="Louetta_M110_65";
		model="Hollywood\bat\m110.p3d";
		ACE_barrelTwist=203.2;
		ACE_barrelLength=508;
		ACE_RailHeightAboveBore=3.1368899;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"gatekeep_weapons\anim\sr25.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=84.919998;
			class CowsSlot: rhs_western_rifle_scopes_slot_long
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidem110_2_LASER",
					"Louetta_sidem110_2_FLASH",
					"Louetta_side_m110_2_Vis_Laser"
				};
			};
			class MuzzleSlot: rhs_western_762rifle_muzzle_slot
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
			};
			icon="\Tier1_Weapons\SR25\data\ui_sr25_ec_ca.paa";
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		magazineWell[]=
		{
			"CBA_65C_AR10"
		};
		magazines[]=
		{
			"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag"
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
	};
	class Louetta_M110_762: rhs_weap_sr25_ec
	{
		scope=0;
		author="Louetta";
		displayName="[Louetta] M110 7.62mm";
		picture="\Tier1_Weapons\SR25\data\ui_sr25_ec_ca.paa";
		baseWeapon="Louetta_M110_762";
		model="Hollywood\bat\m110.p3d";
		ACE_barrelTwist=285.75;
		ACE_barrelLength=508;
		ACE_RailHeightAboveBore=3.1368899;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"gatekeep_weapons\anim\sr25.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=84.919998;
			class CowsSlot: rhs_western_rifle_scopes_slot_long
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidem110_2_LASER",
					"Louetta_sidem110_2_FLASH",
					"Louetta_side_m110_2_Vis_Laser"
				};
			};
			class MuzzleSlot: rhs_western_762rifle_muzzle_slot
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
			};
			icon="\Tier1_Weapons\SR25\data\ui_sr25_ec_ca.paa";
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
	};
	class Louetta_M110K7: rhs_weap_sr25_ec
	{
		scope=0;
		author="Louetta";
		displayName="[Louetta] M110K7";
		picture="\Tier1_Weapons\SR25\data\ui_sr25_ec_ca.paa";
		baseWeapon="Louetta_M110K7";
		model="Hollywood\m110\m110k7.p3d";
		ACE_barrelTwist=286;
		ACE_barrelLength=406.39999;
		ACE_RailHeightAboveBore=3.1368899;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=84.919998;
			class CowsSlot: rhs_western_rifle_scopes_slot_long
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidem110_1_LASER",
					"Louetta_sidem110_1_FLASH",
					"Louetta_side_m110_1_Vis_Laser"
				};
			};
			class MuzzleSlot: rhs_western_762rifle_muzzle_slot
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
			};
			icon="\Tier1_Weapons\SR25\data\ui_sr25_ec_ca.paa";
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		magazineWell[]=
		{
			"CBA_65C_AR10"
		};
		magazines[]=
		{
			"Tier1_20Rnd_65x48_Creedmoor_SR25_Mag"
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
	};
	class SPS_hk417_base_f: EBR_base_F
	{
	};
	class Hollywood_417_1: SPS_hk417_base_f
	{
		author="Louetta";
		class Single: Single
		{
			dispersion=0.00041444;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00041444;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00041444;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00041444;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00041444;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00041444;
		};
		scope=0;
		ACE_barrelLength=330.20001;
		ACE_barrelTwist=279.39999;
		dexterity=1.6;
		displayName="[Louetta] The Hollywood Special";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"hollywood\anim\hollywood.rtm"
		};
		inertia=0.47;
		initSpeed=-0.9425;
		model="\Hollywood\417.p3d";
		picture="\SPS_hk417\ui\HK417A2_13inch_vfg_Black_ca.paa";
		UIpicture="\SPS_hk417\ui\HK417A2_13inch_vfg_Black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=93;
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_side417_LASER",
					"Louetta_side_417_Vis_Laser",
					"Louetta_side417_FLASH"
				};
			};
		};
	};
	class Louetta_416_14;
	class Louetta_416_STS: Louetta_416_14
	{
		scope=0;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\Hollywood\416\416_14.p3d";
		dexterity=1.62;
		author="Louetta/Palomar";
		displayName="[Louetta] Gambit - 24th STS 416";
		picture="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		class WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidests_LASER",
					"Louetta_side_sts_Vis_Laser",
					"Louetta_sidests_FLASH"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
				access=1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[]=
				{
					"Louetta_larue",
					"Louetta_bcm",
					"louetta_bcm_fde",
					"Louetta_gangsta"
				};
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_STS_grip";
		rhs_grip2_change="Louetta_416_STS_grip2";
		baseWeapon="Louetta_416_STS";
	};
	class Louetta_416_STS_grip: Louetta_416_STS
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_STS_grip2: Louetta_416_STS
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		inertia=0.81;
	};
	class bipod_01_F_snd;
	class sps_atlas_bipod_l_sts: bipod_01_F_snd
	{
		_generalMacro="acc_pointer_IR";
		author="SPS Team";
		DLC="SPS_equipment";
		scope=1;
		displayName="Atlas BT46-LW17 PSR STS";
		picture="\x\SPS\Equipment\sps_atlas_bipod\Data\UI\Atlas_BT46_LW17_CA.paa";
		model="hollywood\416\bipod\sps_BT_46_l.p3d";
		hiddenSelections[]=
		{
			"bipod"
		};
		hiddenSelectionsTextures[]=
		{
			"hollywood\416\data\bipod_low_sts_co.paa"
		};
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="bipod_l";
			hasBipod=1;
			mass=8.5;
			hiddenSelections[]=
			{
				"bipod"
			};
			hiddenSelectionsTextures[]=
			{
				"hollywood\416\data\bipod_low_sts_co.paa"
			};
			soundBipodDown[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",
				0.70794576,
				1,
				20
			};
			soundBipodUp[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",
				0.70794576,
				1,
				20
			};
		};
		inertia=0.1445;
		MRT_SwitchItemPrevClass="sps_atlas_bipod_h_sts";
		MRT_SwitchItemNextClass="sps_atlas_bipod_m_sts";
		MRT_switchItemHintText="Low Deployment";
	};
	class sps_atlas_bipod_m_sts: sps_atlas_bipod_l_sts
	{
		author="SPS Team";
		scope=2;
		displayName="Atlas BT46-LW17 PSR STS";
		model="hollywood\416\bipod\sps_BT_46_m.p3d";
		class ItemInfo: ItemInfo
		{
			deployedPivot="bipod_m";
		};
		MRT_SwitchItemPrevClass="sps_atlas_bipod_l_sts";
		MRT_SwitchItemNextClass="sps_atlas_bipod_h_sts";
		MRT_switchItemHintText="Mid Deployment";
	};
	class sps_atlas_bipod_h_sts: sps_atlas_bipod_l_sts
	{
		author="SPS Team";
		scope=1;
		displayName="Atlas BT46-LW17 PSR STS";
		model="hollywood\416\bipod\sps_BT_46_h.p3d";
		class ItemInfo: ItemInfo
		{
			deployedPivot="bipod_h";
		};
		MRT_SwitchItemPrevClass="sps_atlas_bipod_m_sts";
		MRT_SwitchItemNextClass="sps_atlas_bipod_l_sts";
		MRT_switchItemHintText="High Deployment";
	};
	class VestItem;
	class Louetta_y26_JPC: ItemCore
	{
		author="Louetta";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[AB] St. Clair's JPC";
		picture="";
		model="hollywood\gear2\jpc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="hollywood\gear2\jpc.p3d";
			containerClass="Supply500";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class Louetta_y26_JPC_NB: ItemCore
	{
		author="Louetta";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[AB] St. Clair's JPC (NB)";
		picture="";
		model="hollywood\gear2\jpc_nb.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="hollywood\gear2\jpc_nb.p3d";
			containerClass="Supply500";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class Louetta_y26_2_JPC: ItemCore
	{
		author="Louetta";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[AB] St. Clair's JPC SR25";
		picture="";
		model="hollywood\gear2\jpc_2.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="hollywood\gear2\jpc_2.p3d";
			containerClass="Supply500";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class Louetta_y26_JPC_2_NB: ItemCore
	{
		author="Louetta";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[AB] St. Clair's JPC SR25 (NB)";
		picture="";
		model="hollywood\gear2\jpc_2_nb.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="hollywood\gear2\jpc_2_nb.p3d";
			containerClass="Supply500";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class UniformItem;
	class Uniform_Base;
	class Louetta_Y26_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Louetta";
		displayName="[AB] St. Clair's Uniform";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniforMClass="Louetta_Y26";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
	class Louetta_Y26_Maritime: ItemCore
	{
		scope=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[Louetta] A. St. Clair's Helmet";
		picture="tfl_headgear\textures\logo.paa";
		model="hollywood\gear2\maritime.p3d";
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="hollywood\gear2\maritime.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
		};
	};
	class NVGoggles;
	class Louetta_PVS31A_Y26: NVGoggles
	{
		author="Louetta/Zahra/Palomar/Warden";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[AB] Grey's AN/PVS-31A";
		model="hollywood\gear2\31_up.p3d";
		picture="\tfl_nvg\ui\31.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="AN/PVS-31A";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="hollywood\gear2\31_Down.p3d";
			modelOff="hollywood\gear2\31_up.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			mass=1;
		};
		thermalMode[]={0};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_diver_F;
	class Louetta_Y26: B_Soldier_F
	{
		scope=2;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=2;
		faction="sof_rangers";
		author="Louetta";
		model="hollywood\gear2\Uniform.p3d";
		uniforMClass="Louetta_Y26_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class Bag_Base;
	class Lt_Backpack_Base: Bag_Base
	{
		scope=1;
		scopeCurator=0;
		author="Louetta";
		DLC="SOCOM";
		displayName="";
		picture="";
		isbackpack=1;
		model="";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		maximumLoad=500;
		mass=30;
	};
	class Louetta_Y26_Panel: Lt_Backpack_Base
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[AB] St. Clair's Panel";
		model="hollywood\gear2\panel.p3d";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		DLC="SOCOM";
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class Louetta_low_atlas_bipod
				{
					displayName="Bipod Low Position";
					condition="(count (['sps_atlas_bipod_m_sts', 'sps_atlas_bipod_h_sts'] arrayIntersect (primaryWeaponItems _player))) > 0";
					exceptions[]={};
					statement="_player addPrimaryWeaponItem 'sps_atlas_bipod_l_sts';if ('sps_atlas_bipod_l_sts' in primaryWeaponItems _player) then {hint 'Bipod Low Position'};";
				};
				class Louetta_mid_atlas_bipod
				{
					displayName="Bipod Mid Position";
					condition="(count (['sps_atlas_bipod_l_sts', 'sps_atlas_bipod_h_sts'] arrayIntersect (primaryWeaponItems _player))) > 0";
					exceptions[]={};
					statement="_player addPrimaryWeaponItem 'sps_atlas_bipod_m_sts';if ('sps_atlas_bipod_m_sts' in primaryWeaponItems _player) then {hint 'Bipod Mid Position'};";
				};
				class Louetta_high_atlas_bipod
				{
					displayName="Bipod high Position";
					condition="(count (['sps_atlas_bipod_l_sts', 'sps_atlas_bipod_m_sts'] arrayIntersect (primaryWeaponItems _player))) > 0";
					exceptions[]={};
					statement="_player addPrimaryWeaponItem 'sps_atlas_bipod_h_sts';if ('sps_atlas_bipod_h_sts' in primaryWeaponItems _player) then {hint 'Bipod High Position'};";
				};
			};
		};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default;
		class WhiteHead_15;
		class AfricanHead_01;
		class AsianHead_A3_01;
		class GreekHead_A3_01;
		class TanoanHead_A3_01;
		class kerry_A_F;
		class Louetta_Head_Y26: kerry_A_F
		{
			displayname="A. St. Clair";
			texture="hollywood\face\ryan.paa";
			head="KerryHead_A3";
			identityTypes[]=
			{
				"Head_Euro",
				"Head_NATO"
			};
			author="Spartan18X/Louetta";
			material="\hollywood\face\custom.rvmat";
			textureHL="hollywood\face\hl_sparta_bald_co";
			textureHL2="hollywood\face\hl_sparta_bald_co";
			disabled=0;
		};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1633599056";
};

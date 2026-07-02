#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Louetta_seven
	{
		addonRootClass="";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"cba_main"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgEditorCategories
{
	class tf136
	{
		displayName="TF-136";
	};
};

class ItemCore;
class acc_flashlight;
class ACE_acc_pointer_red;
class acc_pointer_IR;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;

class CfgWeapons {
	class louettasocom556: ItemCore
	{
		scope=2;
		displayName="SOCOM 556 RC2 Tano";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="seven\mk16\muzzle\rc2.p3d";
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
	class Louetta_ANPEQ15_TAN: acc_pointer_IR
	{
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
				RMBhint="Laser Pointer";
				irLaserPos="laser_pos";
				irLaserEnd="laser_dir";
				irdistance=5;
			};
		};
	};
	class Louetta_ANPEQ15_TAN_MIX: acc_pointer_IR
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
	class Louetta_SFLIGHT_TOP: acc_flashlight
	{
		scope=1;
		displayName="AN/PEQ-15 ATPIAL TOG 2";
		picture="";
		model="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class FlashLight
			{
				ambient[]={9,7.5,6};
				color[]={1200,1500,1800};
				conefadecoef=150;
				daylight=1;
				position="flash_dir";
				direction="flash_pos";
				flaremaxdistance=600;
				flaresize=1;
				innerangle=15;
				intensity=100;
				outerangle=120;
				scale[]={0};
				size=1;
				useflare=1;
				class Attenuation
				{
					constant=1;
					hardlimitend=200;
					hardlimitstart=100;
					linear=1;
					quadratic=0;
					start=0.1;
				};
			};
		};
	};
	class Louetta_sideURGI_1_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="AN/PEQ-15 + M600U";
		model="seven\mk16\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_1_FLASH";
		MRT_SwitchItemNextClass="Louetta_sideURGI_1_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_1_MIX: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="AN/PEQ-15 + M600U";
		model="seven\mk16\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_1_LASER";
		MRT_SwitchItemNextClass="Louetta_sideURGI_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_1_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="AN/PEQ-15 + M600U";
		model="seven\mk16\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_1_MIX";
		MRT_SwitchItemNextClass="Louetta_sideURGI_1_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_2_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="AN/PEQ-15 + BLK M600U";
		model="seven\mk16\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_sideURGI_2_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_2_MIX: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="AN/PEQ-15 + BLK M600U";
		model="seven\mk16\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_2_LASER";
		MRT_SwitchItemNextClass="Louetta_sideURGI_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="AN/PEQ-15 + BLK M600U";
		model="seven\mk16\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_2_MIX";
		MRT_SwitchItemNextClass="Louetta_sideURGI_2_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_3_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="MAWL + M600U";
		model="seven\mk16\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_3_FLASH";
		MRT_SwitchItemNextClass="Louetta_sideURGI_3_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_3_MIX: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="MAWL + M600U";
		model="seven\mk16\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_3_LASER";
		MRT_SwitchItemNextClass="Louetta_sideURGI_3_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_3_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="MAWL + M600U";
		model="seven\mk16\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_3_MIX";
		MRT_SwitchItemNextClass="Louetta_sideURGI_3_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_4_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="seven\mk16\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_4_FLASH";
		MRT_SwitchItemNextClass="Louetta_sideURGI_4_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_4_MIX: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="NGAL + M600U";
		model="seven\mk16\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_4_LASER";
		MRT_SwitchItemNextClass="Louetta_sideURGI_4_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sideURGI_4_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="seven\mk16\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sideURGI_4_MIX";
		MRT_SwitchItemNextClass="Louetta_sideURGI_4_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class rhsusf_acc_anpeq16a;
	class Louetta_peq15tan: rhsusf_acc_anpeq16a
	{
		scope=2;
		displayName="PEQ15 Tan";
		model="seven\m110\peq15.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\PEQ15tan.paa";
		UiPicture="\026Depot_acc\data\UI\PEQ15tan.paa";
		editorCategory="tf136";
		editorSubcategory="louetta";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class Pointer
			{
				irLaserPos="laser pos";
				irLaserEnd="laser dir";
				irdistance=5;
			};
			class FlashLight
			{
			};
		};
		inertia=0.2;
	};
	class Louetta_side_1_LASER: Louetta_sideURGI_1_LASER
	{
		scope=2;
		displayName="AN/PEQ-15 + M600U";
		model="seven\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_1_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_1_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_1_MIX: Louetta_sideURGI_1_MIX
	{
		scope=1;
		displayName="AN/PEQ-15 + M600U";
		model="seven\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_1_LASER";
		MRT_SwitchItemNextClass="Louetta_side_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_1_FLASH: Louetta_sideURGI_1_FLASH
	{
		scope=1;
		displayName="AN/PEQ-15 + M600U";
		model="seven\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_1_MIX";
		MRT_SwitchItemNextClass="Louetta_side_1_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_2_LASER: Louetta_side_1_LASER
	{
		scope=2;
		displayName="AN/PEQ-15 DBAL A2 + M300U";
		model="seven\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_2_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class Louetta_side_2_MIX: Louetta_side_1_MIX
	{
		scope=1;
		displayName="AN/PEQ-15 DBAL A2 + M300U";
		model="seven\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_2_LASER";
		MRT_SwitchItemNextClass="Louetta_side_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class Louetta_side_2_FLASH: Louetta_side_1_FLASH
	{
		scope=1;
		displayName="AN/PEQ-15 DBAL A2 + M300U";
		model="seven\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_2_MIX";
		MRT_SwitchItemNextClass="Louetta_side_2_LASER";
		MRT_switchItemHintText="Flash light";
	};
};
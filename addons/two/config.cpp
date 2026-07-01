class CfgPatches
{
	class Louetta_two
	{
		addonRootClass="";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"asdg_jointrails",
			"cba_main",
			"Louetta_seven"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
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
class asdg_MuzzleSlot_9MM_SMG
{
	class compatibleItems
	{
	};
};
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
	};
};
class asdg_FrontSideRail;
class rhs_western_rifle_gripod_slot;
class optic_SOS;
class InventoryFlashLightItem_Base_F;
class asdg_MuzzleSlot_762
{
	class compatibleItems
	{
	};
};
class asdg_MuzzleSlot_556
{
	class compatibleItems
	{
		louettasocom556_blk=1;
		louettasocom556_tan=1;
		louettasocom556_blue=1;
		louettasocom556_yellow=1;
		louettasandmans=1;
		louettasocom556_aem5=1;
	};
};
class Louetta_ANPEQ15_TAN;
class Louetta_ANPEQ15_TAN_MIX: ACE_acc_pointer_red
{
};
class Louetta_SFLIGHT_TOP;
class rhsusf_acc_grip1
{
	class Iteminfo;
};
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class louetta_matty_1_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Louetta";
		displayName="[GateKeep] Matty's Uniform";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="louetta_matty_1";
			containerClass="Supply150";
			mass=5;
			uniformType="Neopren";
		};
	};
	class louetta_matty_2_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Louetta";
		displayName="[GateKeep] Matty's Uniform 2";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="louetta_matty_2";
			containerClass="Supply150";
			mass=5;
			uniformType="Neopren";
		};
	};
	class louetta_matty_3_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Louetta";
		displayName="[GateKeep] Matty's Uniform 3";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="louetta_matty_3";
			containerClass="Supply150";
			mass=5;
			uniformType="Neopren";
		};
	};
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
	class louettasocom556_blk: ItemCore
	{
		scope=2;
		displayName="SOCOM 556 RC2 Black";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="two\416\muzzle\rc2.p3d";
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
	class louettasocom556_aem5: ItemCore
	{
		scope=2;
		displayName="AEM5 Recce";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="two\416\muzzle\aem5.p3d";
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
	class louettasocom556_tan: ItemCore
	{
		scope=2;
		displayName="SOCOM 556 RC2";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="two\416\muzzle\rc2_tan.p3d";
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
	class louettasocom556_blue: ItemCore
	{
		scope=2;
		displayName="Surefire Safety Muzzle Device Blue";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="two\416\muzzle\rc2_blue.p3d";
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
	class louettasocom556_yellow: ItemCore
	{
		scope=2;
		displayName="Surefire Safety Muzzle Device Yellow";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="two\416\muzzle\rc2_yellow.p3d";
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
	class louettasandmans: ItemCore
	{
		scope=2;
		displayName="Dead Air Sandman-S";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="two\nsr\muzzle\sandmans.p3d";
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
	class Louetta_larue: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta";
		displayName="LaRue Tactical Handstop";
		descriptionShort="Texas";
		model="two\416\grip\larue.p3d";
		weaponInfoType="RHS_Gripod2";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip2_change";
	};
	class Louetta_afg: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta";
		displayName="AFG";
		descriptionShort="Texas";
		model="two\416\grip\afg.p3d";
		weaponInfoType="RHS_Gripod2";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip2_change";
	};
	class Louetta_afg_fde: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta";
		displayName="AFG FDE";
		descriptionShort="Texas";
		model="two\416\grip\afg_fde.p3d";
		weaponInfoType="RHS_Gripod2";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip2_change";
	};
	class Louetta_rvg: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta";
		displayName="RVG";
		descriptionShort="";
		model="two\416\grip\rvg.p3d";
		weaponInfoType="RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip1_change";
	};
	class Louetta_rvg_fde: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta";
		displayName="RVG FDE";
		descriptionShort="";
		model="two\416\grip\rvg_fde.p3d";
		weaponInfoType="RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip1_change";
	};
	class Louetta_bcm: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta";
		displayName="BCM Gunfighter";
		descriptionShort="";
		model="two\416\grip\bcm.p3d";
		weaponInfoType="RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip1_change";
	};
	class Louetta_gangsta: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta/Palomar";
		displayName="Gangsta";
		descriptionShort="";
		model="two\416\grip\gangsta.p3d";
		weaponInfoType="RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip1_change";
	};
	class Louetta_bcm_fde: rhsusf_acc_grip1
	{
		picture="";
		UiPicture="";
		author="Louetta";
		displayName="BCM Gunfighter FDE";
		descriptionShort="";
		model="two\416\grip\bcm_fde.p3d";
		weaponInfoType="RHS_Gripod1";
		class ItemInfo: Iteminfo
		{
			hasBipod=1;
		};
		inertia=-0.2;
		rhs_grip_type="rhs_grip1_change";
	};
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
	class Louetta_sidesr_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="two\sr16\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidesr_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_sr_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_sr_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\sr16\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidesr_LASER";
		MRT_SwitchItemNextClass="Louetta_sidesr_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidesr_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\sr16\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_sr_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidesr_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidesr_LASER_2: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="DBAL + M600U";
		model="two\sr16\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidesr_FLASH_2";
		MRT_SwitchItemNextClass="Louetta_side_sr_Vis_Laser_2";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_sr_Vis_Laser_2: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="DBAL + M600U";
		model="two\sr16\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidesr_LASER_2";
		MRT_SwitchItemNextClass="Louetta_sidesr_FLASH_2";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidesr_FLASH_2: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="DBAL + M600U";
		model="two\sr16\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_sr_Vis_Laser_2";
		MRT_SwitchItemNextClass="Louetta_sidesr_LASER_2";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="two\416\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_416_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_416_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\416\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_LASER";
		MRT_SwitchItemNextClass="Louetta_side416_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\416\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_416_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_side416_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_2_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U Dual Pad";
		model="two\416\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_416_2_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_416_2_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U Dual Pad";
		model="two\416\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_2_LASER";
		MRT_SwitchItemNextClass="Louetta_side416_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U Dual Pad";
		model="two\416\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_416_2_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_side416_2_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_3_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="two\416\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_3_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_416_3_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_416_3_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\416\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_3_LASER";
		MRT_SwitchItemNextClass="Louetta_side416_3_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_3_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\416\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_416_3_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_side416_3_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_4_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="Rear NGAL + M600U";
		model="two\416\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_4_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_416_4_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_416_4_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="Rear NGAL + M600U";
		model="two\416\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_4_LASER";
		MRT_SwitchItemNextClass="Louetta_side416_4_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_4_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="Rear NGAL + M600U";
		model="two\416\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_416_4_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_side416_4_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_5_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA5 + M600U";
		model="two\416\side\side_5.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_5_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_416_5_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_416_5_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="LA5 + M600U";
		model="two\416\side\side_5.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side416_5_LASER";
		MRT_SwitchItemNextClass="Louetta_side416_5_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side416_5_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA5 + M600U";
		model="two\416\side\side_5.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_416_5_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_side416_5_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_1_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA5 + M600U";
		model="two\mcx\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_1_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_lvaw_1_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_lvaw_1_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="LA5 + M600U";
		model="two\mcx\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_1_LASER";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_1_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA5 + M600U";
		model="two\mcx\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_lvaw_1_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_1_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_2_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="two\mcx\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_lvaw_2_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_lvaw_2_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\mcx\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_2_LASER";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\mcx\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_lvaw_2_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_2_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_3_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA5 + M600U 2";
		model="two\mcx\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_3_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_lvaw_3_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_lvaw_3_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="LA5 + M600U 2";
		model="two\mcx\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_3_LASER";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_3_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_3_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA5 + M600U 2";
		model="two\mcx\side\side_3.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_lvaw_3_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_3_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_4_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U 2";
		model="two\mcx\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_4_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_lvaw_4_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_lvaw_4_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U 2";
		model="two\mcx\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_4_LASER";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_4_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_4_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U 2";
		model="two\mcx\side\side_4.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_lvaw_4_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_4_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_5_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="DBAL + M600U";
		model="two\mcx\side\side_5.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_5_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_lvaw_5_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_lvaw_5_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="DBAL + M600U";
		model="two\mcx\side\side_5.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidelvaw_5_LASER";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_5_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidelvaw_5_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="DBAL + M600U";
		model="two\mcx\side\side_5.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_lvaw_5_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidelvaw_5_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidensr_1_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="two\nsr\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidensr_1_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_nsr_1_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_nsr_1_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\nsr\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidensr_1_LASER";
		MRT_SwitchItemNextClass="Louetta_sidensr_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidensr_1_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\nsr\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_nsr_1_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidensr_1_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidensr_2_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U 45 Mount";
		model="two\nsr\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidensr_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_nsr_2_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_nsr_2_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U 45 Mount";
		model="two\nsr\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidensr_2_LASER";
		MRT_SwitchItemNextClass="Louetta_sidensr_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidensr_2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U 45 Mount";
		model="two\nsr\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_nsr_2_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidensr_2_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidedd_1_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="two\416\side\DD\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidedd_1_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_dd_1_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_dd_1_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\416\side\DD\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidedd_1_LASER";
		MRT_SwitchItemNextClass="Louetta_sidedd_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidedd_1_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="two\416\side\DD\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_dd_1_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidedd_1_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidedd_2_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U + CQD Sling Mount";
		model="two\416\side\DD\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidedd_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_side_dd_2_Vis_Laser";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_side_dd_2_Vis_Laser: Louetta_ANPEQ15_TAN_Laser
	{
		scope=1;
		displayName="NGAL + M600U + CQD Sling Mount";
		model="two\416\side\DD\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidedd_2_LASER";
		MRT_SwitchItemNextClass="Louetta_sidedd_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidedd_2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U + CQD Sling Mount";
		model="two\416\side\DD\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_side_dd_2_Vis_Laser";
		MRT_SwitchItemNextClass="Louetta_sidedd_2_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_SR16: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\sr16\sr16.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] SR-16";
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
					"Louetta_sidesr_LASER",
					"Louetta_sidesr_FLASH",
					"Louetta_side_sr_Vis_Laser",
					"Louetta_sidesr_LASER_2",
					"Louetta_sidesr_FLASH_2",
					"Louetta_side_sr_Vis_Laser_2"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot
			{
				compatibleItems[]={};
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\sr16\anim\sr16.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_SR16";
	};
	class Louetta_SR16_2: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\sr16\sr16_2.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] SR-16 2";
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
					"Louetta_sidesr_LASER",
					"Louetta_sidesr_FLASH",
					"Louetta_side_sr_Vis_Laser",
					"Louetta_sidesr_LASER_2",
					"Louetta_sidesr_FLASH_2",
					"Louetta_side_sr_Vis_Laser_2"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot
			{
				compatibleItems[]={};
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\sr16\anim\sr16.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_SR16_2";
	};
	class Louetta_SR16_3: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\sr16\sr16_3.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] SR-16 3";
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
					"Louetta_sidesr_LASER",
					"Louetta_sidesr_FLASH",
					"Louetta_side_sr_Vis_Laser",
					"Louetta_sidesr_LASER_2",
					"Louetta_sidesr_FLASH_2",
					"Louetta_side_sr_Vis_Laser_2"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot
			{
				compatibleItems[]={};
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\sr16\anim\sr16.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_SR16_3";
	};
	class Louetta_416_10: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_10.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 10.5 CTR Tanodized";
		picture="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_side416_LASER",
					"Louetta_side416_FLASH",
					"Louetta_side_416_Vis_Laser",
					"Louetta_side416_2_LASER",
					"Louetta_side416_2_FLASH",
					"Louetta_side_416_2_Vis_Laser",
					"Louetta_side416_5_LASER",
					"Louetta_side416_5_FLASH",
					"Louetta_side_416_5_Vis_Laser",
					"Louetta_side416_matty_LASER",
					"Louetta_side416_matty_FLASH",
					"Louetta_side_416_matty_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_10_grip";
		rhs_grip2_change="Louetta_416_10_grip2";
		baseWeapon="Louetta_416_10";
	};
	class Louetta_416_10_grip: Louetta_416_10
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
	class Louetta_416_10_grip2: Louetta_416_10
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
	class Louetta_416_10_2: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_10.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 10.5 CTR Two-Tone";
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
					"Louetta_side416_LASER",
					"Louetta_side416_FLASH",
					"Louetta_side_416_Vis_Laser",
					"Louetta_side416_2_LASER",
					"Louetta_side416_2_FLASH",
					"Louetta_side_416_2_Vis_Laser",
					"Louetta_side416_5_LASER",
					"Louetta_side416_5_FLASH",
					"Louetta_side_416_5_Vis_Laser",
					"Louetta_side416_matty_LASER",
					"Louetta_side416_matty_FLASH",
					"Louetta_side_416_matty_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo2",
			"camo3",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_10_2_grip";
		rhs_grip2_change="Louetta_416_10_2_grip2";
		baseWeapon="Louetta_416_10_2";
	};
	class Louetta_416_10_2_grip: Louetta_416_10_2
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
	class Louetta_416_10_2_grip2: Louetta_416_10_2
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
	class Louetta_416_10_3: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_10.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 10.5 CTR Black";
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
					"Louetta_side416_LASER",
					"Louetta_side416_FLASH",
					"Louetta_side_416_Vis_Laser",
					"Louetta_side416_2_LASER",
					"Louetta_side416_2_FLASH",
					"Louetta_side_416_2_Vis_Laser",
					"Louetta_side416_5_LASER",
					"Louetta_side416_5_FLASH",
					"Louetta_side_416_5_Vis_Laser",
					"Louetta_side416_matty_LASER",
					"Louetta_side416_matty_FLASH",
					"Louetta_side_416_matty_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\smr_105_blk_2_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\smr_105_blk.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_10_3_grip";
		rhs_grip2_change="Louetta_416_10_3_grip2";
		baseWeapon="Louetta_416_10_3";
	};
	class Louetta_416_10_3_grip: Louetta_416_10_3
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
	class Louetta_416_10_3_grip2: Louetta_416_10_3
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
	class Louetta_416_10_4: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_10.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 10.5 SOPMOD Tanodized";
		picture="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_side416_LASER",
					"Louetta_side416_FLASH",
					"Louetta_side_416_Vis_Laser",
					"Louetta_side416_2_LASER",
					"Louetta_side416_2_FLASH",
					"Louetta_side_416_2_Vis_Laser",
					"Louetta_side416_5_LASER",
					"Louetta_side416_5_FLASH",
					"Louetta_side_416_5_Vis_Laser",
					"Louetta_side416_matty_LASER",
					"Louetta_side416_matty_FLASH",
					"Louetta_side_416_matty_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_10_4_grip";
		rhs_grip2_change="Louetta_416_10_4_grip2";
		baseWeapon="Louetta_416_10_4";
	};
	class Louetta_416_10_4_grip: Louetta_416_10_4
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
	class Louetta_416_10_4_grip2: Louetta_416_10_4
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
	class Louetta_416_10_5: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_10.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 10.5 SOPMOD Two-Tone";
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
					"Louetta_side416_LASER",
					"Louetta_side416_FLASH",
					"Louetta_side_416_Vis_Laser",
					"Louetta_side416_2_LASER",
					"Louetta_side416_2_FLASH",
					"Louetta_side_416_2_Vis_Laser",
					"Louetta_side416_5_LASER",
					"Louetta_side416_5_FLASH",
					"Louetta_side_416_5_Vis_Laser",
					"Louetta_side416_matty_LASER",
					"Louetta_side416_matty_FLASH",
					"Louetta_side_416_matty_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo2",
			"camo3",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_10_5_grip";
		rhs_grip2_change="Louetta_416_10_5_grip2";
		baseWeapon="Louetta_416_10_5";
	};
	class Louetta_416_10_5_grip: Louetta_416_10_5
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
	class Louetta_416_10_5_grip2: Louetta_416_10_5
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
	class Louetta_416_10_6: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_10.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 10.5 SOPMOD Black";
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
					"Louetta_side416_LASER",
					"Louetta_side416_FLASH",
					"Louetta_side_416_Vis_Laser",
					"Louetta_side416_2_LASER",
					"Louetta_side416_2_FLASH",
					"Louetta_side_416_2_Vis_Laser",
					"Louetta_side416_5_LASER",
					"Louetta_side416_5_FLASH",
					"Louetta_side_416_5_Vis_Laser",
					"Louetta_side416_matty_LASER",
					"Louetta_side416_matty_FLASH",
					"Louetta_side_416_matty_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\smr_105_blk_2_co.paa",
			"seven\data\buttstockblk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\smr_105_blk.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_10_6_grip";
		rhs_grip2_change="Louetta_416_10_6_grip2";
		baseWeapon="Louetta_416_10_6";
	};
	class Louetta_416_10_6_grip: Louetta_416_10_6
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
	class Louetta_416_10_6_grip2: Louetta_416_10_6
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
	class Louetta_416_10_sof: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_10_soflete.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 10.5 SOFLETE";
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
					"Louetta_side416_LASER",
					"Louetta_side416_FLASH",
					"Louetta_side_416_Vis_Laser",
					"Louetta_side416_2_LASER",
					"Louetta_side416_2_FLASH",
					"Louetta_side_416_2_Vis_Laser",
					"Louetta_side416_5_LASER",
					"Louetta_side416_5_FLASH",
					"Louetta_side_416_5_Vis_Laser",
					"Louetta_side416_matty_LASER",
					"Louetta_side416_matty_FLASH",
					"Louetta_side_416_matty_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelectionsMaterials[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_10_sof_grip";
		rhs_grip2_change="Louetta_416_10_sof_grip2";
		baseWeapon="Louetta_416_10_sof";
	};
	class Louetta_416_10_sof_grip: Louetta_416_10_sof
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
	class Louetta_416_10_sof_grip2: Louetta_416_10_sof
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
	class Louetta_416_14: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_14.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 14.5 CTR Tanodized";
		picture="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_side416_3_LASER",
					"Louetta_side416_3_FLASH",
					"Louetta_side_416_3_Vis_Laser",
					"Louetta_side416_4_LASER",
					"Louetta_side416_4_FLASH",
					"Louetta_side_416_4_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_14_grip";
		rhs_grip2_change="Louetta_416_14_grip2";
		baseWeapon="Louetta_416_14";
	};
	class Louetta_416_14_grip: Louetta_416_14
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
	class Louetta_416_14_grip2: Louetta_416_14
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
	class Louetta_416_14_2: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_14.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 14.5 CTR Two-Tone";
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
					"Louetta_side416_3_LASER",
					"Louetta_side416_3_FLASH",
					"Louetta_side_416_3_Vis_Laser",
					"Louetta_side416_4_LASER",
					"Louetta_side416_4_FLASH",
					"Louetta_side_416_4_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo2",
			"camo3",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_14_2_grip";
		rhs_grip2_change="Louetta_416_14_2_grip2";
		baseWeapon="Louetta_416_14_2";
	};
	class Louetta_416_14_2_grip: Louetta_416_14_2
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
	class Louetta_416_14_2_grip2: Louetta_416_14_2
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
	class Louetta_416_14_3: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_14.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 14.5 CTR Black";
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
					"Louetta_side416_3_LASER",
					"Louetta_side416_3_FLASH",
					"Louetta_side_416_3_Vis_Laser",
					"Louetta_side416_4_LASER",
					"Louetta_side416_4_FLASH",
					"Louetta_side_416_4_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\smr_145_blk_2.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\smr_145_blk.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_14_3_grip";
		rhs_grip2_change="Louetta_416_14_3_grip2";
		baseWeapon="Louetta_416_14_3";
	};
	class Louetta_416_14_3_grip: Louetta_416_14_3
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
	class Louetta_416_14_3_grip2: Louetta_416_14_3
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
	class Louetta_416_14_4: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_14.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 14.5 SOPMOD Tanodized";
		picture="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_side416_3_LASER",
					"Louetta_side416_3_FLASH",
					"Louetta_side_416_3_Vis_Laser",
					"Louetta_side416_4_LASER",
					"Louetta_side416_4_FLASH",
					"Louetta_side_416_4_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_14_4_grip";
		rhs_grip2_change="Louetta_416_14_4_grip2";
		baseWeapon="Louetta_416_14_4";
	};
	class Louetta_416_14_4_grip: Louetta_416_14_4
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
	class Louetta_416_14_4_grip2: Louetta_416_14_4
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
	class Louetta_416_14_5: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_14.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 14.5 SOPMOD Two-Tone";
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
					"Louetta_side416_3_LASER",
					"Louetta_side416_3_FLASH",
					"Louetta_side_416_3_Vis_Laser",
					"Louetta_side416_4_LASER",
					"Louetta_side416_4_FLASH",
					"Louetta_side_416_4_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo2",
			"camo3",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_14_5_grip";
		rhs_grip2_change="Louetta_416_14_5_grip2";
		baseWeapon="Louetta_416_14_5";
	};
	class Louetta_416_14_5_grip: Louetta_416_14_5
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
	class Louetta_416_14_5_grip2: Louetta_416_14_5
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
	class Louetta_416_14_6: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_14.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D 14.5 SOPMOD Black";
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
					"Louetta_side416_3_LASER",
					"Louetta_side416_3_FLASH",
					"Louetta_side_416_3_Vis_Laser",
					"Louetta_side416_4_LASER",
					"Louetta_side416_4_FLASH",
					"Louetta_side_416_4_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
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
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\smr_145_blk_2.paa",
			"seven\data\buttstockblk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\smr_145_blk.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_14_6_grip";
		rhs_grip2_change="Louetta_416_14_6_grip2";
		baseWeapon="Louetta_416_14_6";
	};
	class Louetta_416_14_6_grip: Louetta_416_14_6
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
	class Louetta_416_14_6_grip2: Louetta_416_14_6
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
	class Louetta_416_midwest: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_midwest.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest SOPMOD Black/Tan";
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
				compatibleItems[]={};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[]=
				{
					"Louetta_rvg",
					"Louetta_rvg_fde",
					"louetta_afg_fde",
					"louetta_afg"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\midwest_co.paa",
			"seven\data\buttstock2_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\midwest.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_grip";
		rhs_grip2_change="Louetta_416_midwest_grip2";
		baseWeapon="Louetta_416_midwest";
	};
	class Louetta_416_midwest_grip: Louetta_416_midwest
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_grip2: Louetta_416_midwest
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_2: Louetta_416_midwest
	{
		model="\two\416\416_midwest.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest SOPMOD Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\midwest_co.paa",
			"seven\data\buttstockblk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\midwest.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_2_grip";
		rhs_grip2_change="Louetta_416_midwest_2_grip2";
		baseWeapon="Louetta_416_midwest_2";
	};
	class Louetta_416_midwest_2_grip: Louetta_416_midwest_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_2_grip2: Louetta_416_midwest_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_3: Louetta_416_midwest
	{
		model="\two\416\416_midwest.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest CTR Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\midwest_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\midwest.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_3_grip";
		rhs_grip2_change="Louetta_416_midwest_3_grip2";
		baseWeapon="Louetta_416_midwest_3";
	};
	class Louetta_416_midwest_3_grip: Louetta_416_midwest_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_3_grip2: Louetta_416_midwest_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_4: Louetta_416_midwest
	{
		model="\two\416\416_midwest.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest CTR Black/Tan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\midwest_co.paa",
			"two\416\data\magpulstock_tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\midwest.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_4_grip";
		rhs_grip2_change="Louetta_416_midwest_4_grip2";
		baseWeapon="Louetta_416_midwest_4";
	};
	class Louetta_416_midwest_4_grip: Louetta_416_midwest_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_4_grip2: Louetta_416_midwest_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_5: Louetta_416_midwest
	{
		model="\two\416\416_midwest.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest CTR Spray";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\camo\416_spray1_co.paa",
			"two\416\data\camo\416_spray1_co.paa",
			"two\416\data\camo\common_spray1_co.paa",
			"two\416\data\camo\midwest_camo1_co.paa",
			"two\416\data\magpulstock_tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\camo\wep_hk416d_spray1.rvmat",
			"two\416\data\camo\wep_hk416d_spray1.rvmat",
			"two\416\data\camo\416_common_camo_co.rvmat",
			"two\416\data\camo\midwest_camo1.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_5_grip";
		rhs_grip2_change="Louetta_416_midwest_5_grip2";
		baseWeapon="Louetta_416_midwest_5";
	};
	class Louetta_416_midwest_5_grip: Louetta_416_midwest_5
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_5_grip2: Louetta_416_midwest_5
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_6: Louetta_416_midwest
	{
		model="\two\416\416_midwest.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest SOPMOD Spray";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\camo\416_spray1_co.paa",
			"two\416\data\camo\416_spray1_co.paa",
			"two\416\data\camo\common_spray1_co.paa",
			"two\416\data\camo\midwest_camo1_co.paa",
			"seven\data\buttstock2_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\camo\wep_hk416d_spray1.rvmat",
			"two\416\data\camo\wep_hk416d_spray1.rvmat",
			"two\416\data\camo\416_common_camo_co.rvmat",
			"two\416\data\camo\midwest_camo1.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_6_grip";
		rhs_grip2_change="Louetta_416_midwest_6_grip2";
		baseWeapon="Louetta_416_midwest_6";
	};
	class Louetta_416_midwest_6_grip: Louetta_416_midwest_6
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_6_grip2: Louetta_416_midwest_6
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_7: Louetta_416_midwest
	{
		model="\two\416\416_midwest.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest CTR Dirtman";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\camo\416_dirtman_co.paa",
			"two\416\data\camo\416_dirtman_co.paa",
			"two\416\data\camo\common_spray1_co.paa",
			"two\416\data\camo\midwest_dirtman_co.paa",
			"two\416\data\magpulstock_tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\camo\wep_hk416d_dirtman.rvmat",
			"two\416\data\camo\wep_hk416d_dirtman.rvmat",
			"two\416\data\camo\416_common_camo_co.rvmat",
			"two\416\data\camo\midwest_dirtman.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_7_grip";
		rhs_grip2_change="Louetta_416_midwest_7_grip2";
		baseWeapon="Louetta_416_midwest_7";
	};
	class Louetta_416_midwest_7_grip: Louetta_416_midwest_7
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_7_grip2: Louetta_416_midwest_7
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_8: Louetta_416_midwest
	{
		model="\two\416\416_midwest.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D Midwest SOPMOD Dirtman";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\camo\416_dirtman_co.paa",
			"two\416\data\camo\416_dirtman_co.paa",
			"two\416\data\camo\common_spray1_co.paa",
			"two\416\data\camo\midwest_dirtman_co.paa",
			"seven\data\buttstock2_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\camo\wep_hk416d_dirtman.rvmat",
			"two\416\data\camo\wep_hk416d_dirtman.rvmat",
			"two\416\data\camo\416_common_camo_co.rvmat",
			"two\416\data\camo\midwest_dirtman.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_midwest_8_grip";
		rhs_grip2_change="Louetta_416_midwest_8_grip2";
		baseWeapon="Louetta_416_midwest_8";
	};
	class Louetta_416_midwest_8_grip: Louetta_416_midwest_8
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_midwest_8_grip2: Louetta_416_midwest_8
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_MCX;
	class Louetta_LVAW: Louetta_MCX
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\MCX\MCX.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] MCX LVAW Black";
		picture="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		magazines[]=
		{
			"Louetta_300_Blackout"
		};
		magazineWell[]=
		{
			"louetta_300"
		};
		class WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				compatibleItems[]={};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidelvaw_1_LASER",
					"Louetta_sidelvaw_1_FLASH",
					"Louetta_side_lvaw_1_Vis_Laser",
					"Louetta_sidelvaw_2_LASER",
					"Louetta_sidelvaw_2_FLASH",
					"Louetta_side_lvaw_2_Vis_Laser",
					"Louetta_sidelvaw_3_LASER",
					"Louetta_sidelvaw_3_FLASH",
					"Louetta_side_lvaw_3_Vis_Laser",
					"Louetta_sidelvaw_4_LASER",
					"Louetta_sidelvaw_4_FLASH",
					"Louetta_side_lvaw_4_Vis_Laser",
					"Louetta_sidelvaw_5_LASER",
					"Louetta_sidelvaw_5_FLASH",
					"Louetta_side_lvaw_5_Vis_Laser"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[]={};
			};
		};
		modes[]=
		{
			"Single",
			"Single_AI",
			"single_medium_optics1",
			"single_far_optics2",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class standardsound
			{
				soundsetshot[]=
				{
					"jsrs_spar_shot_silenced_soundset"
				};
			};
			reloadTime=0.075000003;
			dispersion="DISPERSION_MOA(1.8)";
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class Single_AI: Single
		{
			showToPlayer=0;
			burstRangeMax=3;
			minRange=200;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class standardsound
			{
				soundsetshot[]=
				{
					"jsrs_spar_shot_silenced_soundset"
				};
			};
			reloadTime=0.075000003;
			dispersion="DISPERSION_MOA(1.8)";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: Single
		{
			burstRangeMax=3;
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=3;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=2;
			burstRangeMax=6;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		hiddenSelections[]=
		{
			"stock2",
			"handle"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\two\mcx\anim\MCX.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_LVAW";
	};
	class Louetta_LVAW_2: Louetta_LVAW
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\MCX\MCX.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] MCX LVAW Black Retractable Stock";
		picture="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		hiddenSelections[]=
		{
			"stock",
			"charge"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\two\mcx\anim\MCX.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_LVAW_2";
	};
	class Louetta_NSR: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\NSR\Noveske.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] Noveske NSR";
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
					"Louetta_sidensr_1_LASER",
					"Louetta_side_nsr_1_Vis_Laser",
					"Louetta_sidensr_1_FLASH",
					"Louetta_sidensr_2_LASER",
					"Louetta_side_nsr_2_Vis_Laser",
					"Louetta_sidensr_2_FLASH"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[]=
				{
					"Louetta_rvg",
					"Louetta_rvg_fde"
				};
			};
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_NSR_grip";
		rhs_grip2_change="Louetta_NSR_grip2";
		baseWeapon="Louetta_NSR";
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
			reloadTime=0.07;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
			reloadTime=0.07;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
	};
	class Louetta_NSR_grip: Louetta_NSR
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_NSR_grip2: Louetta_NSR
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_quad.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D SOPMOD Black/Tan";
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
				compatibleItems[]={};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[]=
				{
					"Louetta_rvg",
					"Louetta_rvg_fde",
					"louetta_afg_fde",
					"louetta_afg"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\416_co.paa",
			"seven\data\buttstock2_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_std.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_quad_grip";
		rhs_grip2_change="Louetta_416_quad_grip2";
		baseWeapon="Louetta_416_quad";
	};
	class Louetta_416_quad_grip: Louetta_416_quad
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad_grip2: Louetta_416_quad
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad_2: Louetta_416_quad
	{
		displayName="[GateKeep] HK16D SOPMOD Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\416_co.paa",
			"seven\data\buttstockblk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		rhs_grip1_change="Louetta_416_quad_2_grip";
		rhs_grip2_change="Louetta_416_quad_2_grip2";
		baseWeapon="Louetta_416_quad_2";
	};
	class Louetta_416_quad_2_grip: Louetta_416_quad_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad_2_grip2: Louetta_416_quad_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad_3: Louetta_416_quad
	{
		displayName="[GateKeep] HK16D CTR Black/Tan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\magpulstock_tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		rhs_grip1_change="Louetta_416_quad_3_grip";
		rhs_grip2_change="Louetta_416_quad_3_grip2";
		baseWeapon="Louetta_416_quad_3";
	};
	class Louetta_416_quad_3_grip: Louetta_416_quad_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_handpose_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad_3_grip2: Louetta_416_quad_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad_4: Louetta_416_quad
	{
		displayName="[GateKeep] HK16D CTR Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\416_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		rhs_grip1_change="Louetta_416_quad_4_grip";
		rhs_grip2_change="Louetta_416_quad_4_grip2";
		baseWeapon="Louetta_416_quad_4";
	};
	class Louetta_416_quad_4_grip: Louetta_416_quad_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_quad_4_grip2: Louetta_416_quad_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\handpose_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_DD.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D DD SOPMOD Black/Tan";
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
					"Louetta_sidedd_1_LASER",
					"Louetta_side_dd_1_Vis_Laser",
					"Louetta_sidedd_1_FLASH",
					"Louetta_sidedd_2_LASER",
					"Louetta_side_dd_2_Vis_Laser",
					"Louetta_sidedd_2_FLASH"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot
			{
				access=1;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
				compatibleItems[]=
				{
					"Louetta_rvg",
					"Louetta_rvg_fde",
					"louetta_afg_fde",
					"louetta_afg"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"seven\data\buttstock2_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_grip";
		rhs_grip2_change="Louetta_416_DD_grip2";
		baseWeapon="Louetta_416_DD";
	};
	class Louetta_416_DD_grip: Louetta_416_DD
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_grip2: Louetta_416_DD
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_2: Louetta_416_DD
	{
		model="\two\416\416_DD.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D DD SOPMOD Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"seven\data\buttstockblk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_2_grip";
		rhs_grip2_change="Louetta_416_DD_2_grip2";
		baseWeapon="Louetta_416_DD_2";
	};
	class Louetta_416_DD_2_grip: Louetta_416_DD_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_2_grip2: Louetta_416_DD_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_3: Louetta_416_DD
	{
		model="\two\416\416_DD.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D DD CTR Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_3_grip";
		rhs_grip2_change="Louetta_416_DD_3_grip2";
		baseWeapon="Louetta_416_DD_3";
	};
	class Louetta_416_DD_3_grip: Louetta_416_DD_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_3_grip2: Louetta_416_DD_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_4: Louetta_416_DD
	{
		model="\two\416\416_DD.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D DD CTR Black/Tan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"two\416\data\magpulstock_tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_4_grip";
		rhs_grip2_change="Louetta_416_DD_4_grip2";
		baseWeapon="Louetta_416_DD_4";
	};
	class Louetta_416_DD_4_grip: Louetta_416_DD_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_4_grip2: Louetta_416_DD_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\two\416\416_DD_Recce.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[GateKeep] HK16D DD Recce SOPMOD Black/Tan";
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
					"Louetta_sidedd_1_LASER",
					"Louetta_side_dd_1_Vis_Laser",
					"Louetta_sidedd_1_FLASH",
					"Louetta_sidedd_2_LASER",
					"Louetta_side_dd_2_Vis_Laser",
					"Louetta_sidedd_2_FLASH"
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
					"Louetta_rvg",
					"Louetta_rvg_fde",
					"louetta_afg_fde",
					"louetta_afg"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"seven\data\buttstock2_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_Recce_grip";
		rhs_grip2_change="Louetta_416_DD_Recce_grip2";
		baseWeapon="Louetta_416_DD_Recce";
	};
	class Louetta_416_DD_Recce_grip: Louetta_416_DD_Recce
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce_grip2: Louetta_416_DD_Recce
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce_2: Louetta_416_DD_Recce
	{
		model="\two\416\416_DD_Recce.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D DD Recce SOPMOD Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo7",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"seven\data\buttstockblk_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_Recce_2_grip";
		rhs_grip2_change="Louetta_416_DD_Recce_2_grip2";
		baseWeapon="Louetta_416_DD_Recce_2";
	};
	class Louetta_416_DD_Recce_2_grip: Louetta_416_DD_Recce_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce_2_grip2: Louetta_416_DD_Recce_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce_3: Louetta_416_DD_Recce
	{
		model="\two\416\416_DD_Recce.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D DD Recce CTR Black";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_Recce_3_grip";
		rhs_grip2_change="Louetta_416_DD_Recce_3_grip2";
		baseWeapon="Louetta_416_DD_Recce_3";
	};
	class Louetta_416_DD_Recce_3_grip: Louetta_416_DD_Recce_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce_3_grip2: Louetta_416_DD_Recce_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce_4: Louetta_416_DD_Recce
	{
		model="\two\416\416_DD_Recce.p3d";
		author="Louetta";
		displayName="[GateKeep] HK16D DD Recce CTR Black/Tan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"two\416\data\416_co.paa",
			"two\416\data\416_co.paa",
			"two\416\data\416_common_blk_co.paa",
			"two\416\data\DD_co.paa",
			"two\416\data\magpulstock_tan_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\wep_hk416d_3.rvmat",
			"two\416\data\416_common.rvmat",
			"two\416\data\DD.rvmat",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_2.rtm"
		};
		reloadAction="NIA_GestureReload416";
		rhs_grip1_change="Louetta_416_DD_Recce_4_grip";
		rhs_grip2_change="Louetta_416_DD_Recce_4_grip2";
		baseWeapon="Louetta_416_DD_Recce_4";
	};
	class Louetta_416_DD_Recce_4_grip: Louetta_416_DD_Recce_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\416_vfg.rtm"
		};
		inertia=0.81;
	};
	class Louetta_416_DD_Recce_4_grip2: Louetta_416_DD_Recce_4
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"two\416\anim\midwest_afg.rtm"
		};
		inertia=0.81;
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_diver_F;
	class louetta_matty_1: B_Soldier_F
	{
		scope=1;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Louetta";
		model="two\FSP\cargo.p3d";
		_generalMacro="louetta_matty_1";
		uniformClass="louetta_matty_1_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class louetta_matty_2: B_Soldier_F
	{
		scope=1;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Louetta";
		model="two\FSP\jean.p3d";
		_generalMacro="louetta_matty_2";
		uniformClass="louetta_matty_2_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class louetta_matty_3: B_Soldier_F
	{
		scope=1;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=0;
		faction="sof_rangers";
		author="Louetta";
		model="two\FSP\jean_2.p3d";
		_generalMacro="louetta_matty_3";
		uniformClass="louetta_matty_3_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1627099962";
};

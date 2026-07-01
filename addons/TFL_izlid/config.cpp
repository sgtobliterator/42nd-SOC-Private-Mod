class CfgPatches
{
	class TFL_izlid
	{
		addonRootClass="";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"asdg_jointrails",
			"cba_main"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"TFL_izlid"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class InventoryOpticsItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913_short;
class asdg_OpticRail;
class ItemCore;
class rhs_UnderSlot_m249_ris;
class rhs_western_mg_gripod_slot;
class asdg_FrontSideRail;
class rhs_western_rifle_gripod_slot;
class optic_SOS;
class CfgWeapons
{
	class acc_pointer_IR;
	class TFL_IZLID_Laser: acc_pointer_IR
	{
		scope=2;
		displayName="Laser";
		model="tfl_izlid\laser.p3d";
		author="TFL";
		picture="\026Depot_acc\data\UI\PEQ15tan.paa";
		UiPicture="\026Depot_acc\data\UI\PEQ15tan.paa";
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
			};
		};
		inertia=0.2;
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
	};
	class TFL_izlid: arifle_MX_Base_F
	{
		author="TFL";
		scope=2;
		displayName="[TFL] IZLID";
		descriptionShort="";
		DLC="SOCOM";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		model="\tfl_izlid\izlid_open.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"TFL_izlid\anim\laser.rtm"
		};
		magazines[]={};
		magazineWell[]={};
		hasBipod=0;
		magazineReloadSwitchPhase=0.47999999;
		htMin=8;
		htMax=920;
		inertia=0.5;
		aimTransitionSpeed=1.1;
		dexterity=1.5;
		laser="true";
		initSpeed=800;
		maxZeroing=0;
		mass=1;
		drySound[]=
		{
			"",
			0
		};
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				compatibleItems[]={};
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"TFL_IZLID_Laser"
				};
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=90;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
		};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1596163517";
};

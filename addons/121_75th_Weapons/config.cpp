class CfgPatches
{
	class 121_75th_weapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.2;
		requiredAddons[]=
		{
			"cba_main",
			"asdg_jointrails",
			"rhsusf_c_weapons"
		};
		author="Visco";
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		121_75th_GestureReloadM249="121_75th_GestureReloadM249";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			121_75th_GestureReloadM249[]=
			{
				"121_75th_GestureReloadM249",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			121_75th_GestureReloadM249[]=
			{
				"121_75th_GestureReloadM249_Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			121_75th_GestureReloadM249[]=
			{
				"121_75th_GestureReloadM249_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			121_75th_GestureReloadM249[]=
			{
				"121_75th_GestureReloadM249_Context",
				"Gesture"
			};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				121_75th_GestureReloadM249[]=
				{
					"121_75th_GestureReloadM249_Context",
					"Gesture"
				};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class 121_75th_GestureReloadM249: Default
		{
			file="121_75th_Weapons\MK48\anim\m249_reload_stand.rtm";
			speed=0.098684214;
			looped="false";
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.016000001,0,0.28799999,0,0.30759999,1};
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			leftHandIKCurve[]={0.098679997,1,0.1118421,0,0.92105001,0,0.94736803,1};
		};
		class 121_75th_GestureReloadM249_Crouch: Default
		{
			file="121_75th_Weapons\MK48\anim\m249_reload_crouch.rtm";
			speed=0.098684214;
			looped="false";
			mask="handsWeapon";
			headBobStrength=0.44999999;
			headBobMode=2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			leftHandIKCurve[]={0,1,0.0098599996,0,0.92105001,0,0.94736803,1};
		};
		class 121_75th_GestureReloadM249_Prone: Default
		{
			file="121_75th_Weapons\MK48\anim\m249_reload_prone.rtm";
			speed=0.098684214;
			looped="false";
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.016000001,0,0.28799999,0,0.30759999,1};
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			leftHandIKCurve[]={0.098679997,1,0.1118421,0,0.92105001,0,0.94736803,1};
		};
		class 121_75th_GestureReloadM249_Context: 121_75th_GestureReloadM249
		{
			mask="handsWeapon_context";
		};
	};
};
class SlotInfo;
class rhs_UnderSlot_m240;
class asdg_PistolUnderRail;
class asdg_MuzzleSlot_556
{
	class compatibleItems
	{
		75th_Ranger_SOCOM1=1;
	};
};
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913_short_MG;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		75th_Eotech_553=1;
		75th_Eotech_553_up=1;
		75th_Eotech_553_down=1;
		75th_SU230A=1;
		75th_SU230A_MRDS=1;
		75th_SU230B=1;
		75th_Vortex_Gen2=1;
		75th_Vortex_Gen2_2=1;
		75th_Eotech_EXPS3_down=1;
		75th_Eotech_EXPS3_up=1;
		75th_Eotech_EXPS3=1;
		75th_unity_t1=1;
	};
};
class rhs_western_rifle_scopes_slot_long;
class rhs_western_rifle_underbarrel_slot;
class CfgMagazines
{
	class rhsusf_50Rnd_762x51;
	class rhsusf_50Rnd_762x51_m61_ap;
	class rhsusf_50Rnd_762x51_m62_tracer;
	class rhsusf_50Rnd_762x51_m80a1epr;
	class ACE_30Rnd_556x45_Stanag_M995_AP_Mag;
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class rhsusf_5Rnd_300winmag_xm2010;
	class ranger_200Rnd_762x51: rhsusf_50Rnd_762x51
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_ca.paa";
		displayname="200rnd M240 Box M80";
		displayNameShort="M80 Ball";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag.p3d";
		count=200;
		initSpeed=838;
		mass=55;
		lastroundstracer=0;
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd.p3d";
	};
	class ranger_200Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51_m61_ap
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m61_ap_ca.paa";
		displayname="200rnd M240 Box M61 AP";
		displayNameShort="M61 AP";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=200;
		mass=55;
		lastroundstracer=0;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag.p3d";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd.p3d";
	};
	class ranger_200Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m62_tracer_ca.paa";
		displayname="200rnd M240 Box M62 (Tracer)";
		displayNameShort="M62 Tracer";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=200;
		mass=55;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag.p3d";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd.p3d";
	};
	class ranger_200Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51_m80a1epr
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m80a1epr_ca.paa";
		displayname="200rnd M240 Box M80A1 EPR";
		displayNameShort="M80A1 EPR";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=200;
		mass=55;
		lastroundstracer=0;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag.p3d";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd.p3d";
	};
	class ranger_30Rnd_556_M995_AP_Tan: ACE_30Rnd_556x45_Stanag_M995_AP_Mag
	{
		author="Visco";
		picture="\121_75th_Weapons\UI\pmag_30_tan_ca.paa";
		displayname="PMAG 30Rnd 5.56 Tan [M995 AP]";
		model="121_75th_Weapons\Mags\pmag_tan_30_ground.p3d";
		modelSpecial="121_75th_Weapons\Mags\pmag_tan_30.p3d";
	};
	class ranger_30Rnd_556_M995_AP_Blk: ACE_30Rnd_556x45_Stanag_M995_AP_Mag
	{
		author="Visco";
		picture="\121_75th_Weapons\UI\pmag_30_ca.paa";
		displayname="PMAG 30Rnd 5.56 Black [M995 AP]";
		model="121_75th_Weapons\Mags\pmag_30_ground.p3d";
		modelSpecial="121_75th_Weapons\Mags\pmag_30.p3d";
	};
	class ranger_30Rnd_556_M855A1_Tan: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="Visco";
		picture="\121_75th_Weapons\UI\pmag_30_tan_ca.paa";
		displayname="PMAG 30Rnd 5.56 Tan [M855A1 EPR]";
		model="121_75th_Weapons\Mags\pmag_tan_30_ground.p3d";
		modelSpecial="121_75th_Weapons\Mags\pmag_tan_30.p3d";
	};
	class ranger_30Rnd_556_M855A1_AP_Blk: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="Visco";
		picture="\121_75th_Weapons\UI\pmag_30_ca.paa";
		displayname="PMAG 30Rnd 5.56 Black [M855A1 EPR]";
		model="121_75th_Weapons\Mags\pmag_30_ground.p3d";
		modelSpecial="121_75th_Weapons\Mags\pmag_30.p3d";
	};
	class ranger_10Rnd_300winmag_xm2010: rhsusf_5Rnd_300winmag_xm2010
	{
		displayName="10rnd .300WM Mk248 MOD 1";
		count=10;
		mass=3.2;
	};
	class 200Rnd_556x45_Box_F;
	class ranger_KAC_LAMG_150rnd_Box: 200Rnd_556x45_Box_F
	{
		ammo="rhs_ammo_556x45_M855A1_Ball";
		author="Visco";
		scope=2;
		scopeCurator=2;
		count=150;
		displayName="150Rnd 5.56 Tan [M855A1 EPR]";
		tracersEvery=0;
		mass=33;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial="121_75th_Weapons\LAMG\lamg_mag_box.p3d";
		modelSpecialIsProxy=1;
		picture="\121_75th_Weapons\UI\lamg_150_tan_ca.paa";
	};
	class ranger_KAC_LAMG_150rnd_Box_Tracer: ranger_KAC_LAMG_150rnd_Box
	{
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		displayName="150Rnd 5.56 Tan [M856A1 Tracer]";
		tracersEvery=1;
	};
	class ranger_KAC_LAMG_150rnd_Box_Mixed: ranger_KAC_LAMG_150rnd_Box
	{
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		displayName="150Rnd 5.56 Tan [M855A1 Mixed]";
		tracersEvery=5;
		lastRoundsTracer=5;
	};
	class 30Rnd_556x45_Stanag;
	class ranger_100rnd_762_M80: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_762x51_M80_Ball";
		count=100;
		displayname="100Rnd 7.62 Tan [M80]";
		author="Visco";
		initspeed=841.20001;
		lastroundstracer=0;
		modelSpecial="121_75th_Weapons\MK48\Mk48_100Rnd.p3d";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\121_75th_Weapons\UI\mk48_100_tan_ca.paa";
		modelSpecialIsProxy=1;
		scope=2;
		tracersevery=0;
		mass=27.5;
	};
	class ranger_100rnd_762_M61: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_762x51_M61_AP";
		count=100;
		displayname="100Rnd 7.62 Tan [M61]";
		author="Visco";
		initspeed=841.20001;
		lastroundstracer=0;
		modelSpecial="121_75th_Weapons\MK48\Mk48_100Rnd.p3d";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\121_75th_Weapons\UI\mk48_100_tan_ca.paa";
		modelSpecialIsProxy=1;
		scope=2;
		tracersevery=0;
		mass=27.5;
	};
	class ranger_100rnd_762_M62: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_762x51_M62_tracer";
		count=100;
		displayname="100Rnd 7.62 Tan [M62 Mixed]";
		author="Visco";
		initspeed=841.20001;
		lastroundstracer=0;
		modelSpecial="121_75th_Weapons\MK48\Mk48_100Rnd.p3d";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\121_75th_Weapons\UI\mk48_100_tan_ca.paa";
		modelSpecialIsProxy=1;
		scope=2;
		tracersevery=3;
		mass=27.5;
	};
	class ranger_100rnd_762_EPR: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		count=100;
		displayname="100Rnd 7.62 Tan EPR [M80]";
		author="Visco";
		initspeed=841.20001;
		lastroundstracer=0;
		modelSpecial="121_75th_Weapons\MK48\Mk48_100Rnd.p3d";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\121_75th_Weapons\UI\mk48_100_tan_ca.paa";
		modelSpecialIsProxy=1;
		scope=2;
		tracersevery=0;
		mass=27.5;
	};
};
class CfgMagazineWells
{
	class M240_762x51
	{
		121_75th_Magazines[]=
		{
			"ranger_200Rnd_762x51",
			"ranger_200Rnd_762x51_m61_ap",
			"ranger_200Rnd_762x51_m62_tracer",
			"ranger_200Rnd_762x51_m80a1epr"
		};
	};
	class STANAG_556x45
	{
		121_75th_Magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan",
			"ranger_30Rnd_556_M995_AP_Blk",
			"ranger_30Rnd_556_M855A1_Tan",
			"ranger_30Rnd_556_M855A1_AP_Blk"
		};
	};
	class CBA_300WM_AICS
	{
		121_75th_Magazines[]=
		{
			"ranger_10Rnd_300winmag_xm2010"
		};
	};
	class ranger_LAMG_556x45
	{
		121_75th_Magazines[]=
		{
			"ranger_KAC_LAMG_150rnd_Box",
			"ranger_KAC_LAMG_150rnd_Box_Tracer",
			"ranger_KAC_LAMG_150rnd_Box_Mixed"
		};
	};
	class ranger_mk48_762x51
	{
		121_75th_Magazines[]=
		{
			"ranger_100rnd_762_M80",
			"ranger_100rnd_762_M61",
			"ranger_100rnd_762_M62",
			"ranger_100rnd_762_EPR"
		};
	};
};
class CfgWeapons
{
	class rhs_weap_mk18_bk;
	class rhs_weap_m4a1_blockII;
	class rhs_weap_m4;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class acc_pointer_IR;
	class acc_flashlight;
	class ItemCore;
	class optic_Holosight;
	class 75th_glock_rmr: ItemCore
	{
		scope=2;
		author="Visco";
		displayName="RMR (1.0 MOA)";
		picture="\121_75th_Weapons\UI\glock19_rmr.paa";
		model="121_75th_Weapons\G19\RMR\rmr_pistol.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_glock_rmr_Optics
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
	};
	class 75th_glock_rmr_3moa: ItemCore
	{
		scope=2;
		author="Visco";
		displayName="RMR (3.25 MOA)";
		picture="\121_75th_Weapons\UI\glock19_rmr.paa";
		model="121_75th_Weapons\G19\RMR\rmr_pistol_3moa.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_glock_rmr_Optics
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
	};
	class 75th_glock_rmr_6moa: ItemCore
	{
		scope=2;
		author="Visco";
		displayName="RMR (6.5 MOA)";
		picture="\121_75th_Weapons\UI\glock19_rmr.paa";
		model="121_75th_Weapons\G19\RMR\rmr_pistol_6moa.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_glock_rmr_Optics
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
	};
	class 75th_unity_t1: ItemCore
	{
		scope=2;
		author="Visco";
		displayName="SU-278/PVS";
		picture="\121_75th_Weapons\UI\unity_t1_ca.paa";
		model="121_75th_Weapons\Unity\Unity_blk.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_unity_t1_Optics
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0.1;
	};
	class 75th_Vortex_Gen2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-300/PVS";
		picture="\121_75th_Weapons\UI\vortex_razor_ca.paa";
		model="\121_75th_Weapons\RazorGen2_model\Razor_Gen2_16_Geissele.p3d";
		weaponInfoType="RscWeaponZeroing";
		ACE_ScopeAdjust_Vertical[]={-0.15000001,15};
		ACE_ScopeAdjust_Horizontal[]={-15,15};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=15;
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3.p3d";
			class OpticsModes
			{
				class 75th_Vortex_1_6
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_su230_Blur"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.041666668;
					opticsZoomMax=0.64999998;
					opticsZoomInit=0.64999998;
					discretefov[]={0.64999998,0.125,0.0625,0.041666668};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3.p3d",
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6.p3d",
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9.p3d",
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class Elcan_iron
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.27500001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
			};
		};
	};
	class 75th_Vortex_Gen2_2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-300/PVS, Lens Cap";
		picture="\121_75th_Weapons\UI\vortex_razor_cap_ca.paa";
		model="\121_75th_Weapons\RazorGen2_model\Razor_Gen2_16_Geissele_2.p3d";
		weaponInfoType="RscWeaponZeroing";
		ACE_ScopeAdjust_Vertical[]={-0.15000001,15};
		ACE_ScopeAdjust_Horizontal[]={-15,15};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=15;
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3.p3d";
			class OpticsModes
			{
				class 75th_Vortex_1_6
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_su230_Blur"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.041666668;
					opticsZoomMax=0.64999998;
					opticsZoomInit=0.64999998;
					discretefov[]={0.64999998,0.125,0.0625,0.041666668};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3.p3d",
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6.p3d",
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9.p3d",
						"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class Elcan_iron
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.27500001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
			};
		};
	};
	class 75th_SU230B: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-230B/PVS";
		picture="\121_75th_Weapons\UI\su230b_ca.paa";
		model="\121_75th_Weapons\SU230B_model\Elcan_156_FDE_2D.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=15.5;
			RMBhint="Dual role Combat Sight";
			optics=15;
			modelOptics="\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230A.p3d";
			class OpticsModes
			{
				class Elcan_15_6
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_su230_Blur"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.041666668;
					opticsZoomMax=0.34999999;
					opticsZoomInit=0.34999999;
					discretefov[]={0.34999999,0.041666668};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\121_75th_Weapons\SU230B_model\Optics\optic_SU230B_1x.p3d",
						"\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230A.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class Elcan_iron2
				{
					opticsID=2;
					opticsPPEffects[]=
					{
						"Default"
					};
					useModelOptics=0;
					opticsZoomMin=0.44999999;
					opticsZoomMax=1.1;
					opticsZoomInit=0.69999999;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
				};
			};
		};
	};
	class 75th_SU230A: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-230A/PVS";
		picture="\121_75th_Weapons\UI\su230a_ca.paa";
		model="\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_c";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=13;
			RMBhint="Dual role Combat Sight";
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230";
			class OpticsModes
			{
				class Elcan_1_4
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_su230_Blur"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.0625;
					opticsZoomMax=0.64999998;
					opticsZoomInit=0.64999998;
					discretefov[]={0.64999998,0.0625};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\121_75th_Weapons\SU230B_model\Optics\optic_SU230_1x.p3d",
						"\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230"
					};
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class Elcan_iron
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.27500001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
			};
		};
	};
	class 75th_SU230A_MRDS: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-230A/PVS, MRDS";
		picture="\121_75th_Weapons\UI\su230a_mrd_ca.paa";
		model="\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds_c";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=14;
			RMBhint="Dual role Combat Sight";
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230";
			class OpticsModes
			{
				class Elcan_1_4
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_su230_Blur"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.0625;
					opticsZoomMax=0.64999998;
					opticsZoomInit=0.64999998;
					discretefov[]={0.64999998,0.0625};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\121_75th_Weapons\SU230B_model\Optics\optic_SU230_1x.p3d",
						"\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230"
					};
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class Elcan_mrds
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.27500001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
			};
		};
	};
	class 75th_SU230A_CNVDT: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0.69999999;
		displayName="SU-232/PAS, SU-230A/PVS";
		picture="\121_75th_Weapons\UI\su232_ca.paa";
		model="\121_75th_Weapons\CNVDT\cnvdt_su230.p3d";
		weaponInfoType="rhs_gui_optic_pas13";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=27;
			RMBhint="Dual role Combat Sight";
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_optic";
			class OpticsModes
			{
				class Elcan_1_4
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_su230_Blur"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.0625;
					opticsZoomMax=0.64999998;
					opticsZoomInit=0.64999998;
					discretefov[]={0.64999998,0.0625};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_optic",
						"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_optic"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Ti"
					};
					thermalMode[]={0,1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
				class Elcan_mrds
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.27500001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
			};
		};
	};
	class 75th_SU278_SKEETIR: ItemCore
	{
		scope=2;
		author="Visco";
		displayName="SkeetIR, SU-278/PVS";
		picture="\121_75th_Weapons\UI\skeetir_ca.paa";
		model="121_75th_Weapons\CNVDT\skeetir_unity.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=10;
			optics=1;
			modelOptics="\121_75th_Weapons\CNVDT\optics\optic_skeetir.p3d";
			class OpticsModes
			{
				class skeetir_1
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_su230_Blur"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.0625;
					opticsZoomMax=0.64999998;
					opticsZoomInit=0.64999998;
					discretefov[]={0.64999998};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\121_75th_Weapons\CNVDT\optics\optic_skeetir.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Ti"
					};
					thermalMode[]={0,1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class 75th_Eotech_553: optic_Holosight
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-231/PEQ";
		picture="\121_75th_Weapons\UI\su231_ca.paa";
		model="\121_75th_Weapons\Eotech553_model\RH_eotech553mag_tan.p3d";
		descriptionShort="Eotech 553, 3x Magnifier";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_eotech_553_Optics
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
	};
	class 75th_Eotech_553_up: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-231/PEQ, 3x Magnifier";
		picture="\121_75th_Weapons\UI\su231_mag_ca.paa";
		model="\121_75th_Weapons\Eotech553_model\RH_eotech553mag_tan_up.p3d";
		descriptionShort="Eotech 553, 3x Magnifier";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=6;
			RMBhint="Optical Sight";
			modelOptics="\121_75th_Weapons\Eotech553_model\Optics\RH_eot_2D.p3d";
			optics=1;
			class OpticsModes
			{
				class 75th_eotech553_mag
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomInit=0.1;
					opticsZoomMin=0.1;
					opticsZoomMax=0.1;
					discreteDistance[]={200,300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=300;
					memoryPointCamera="eye";
					visionMode[]={};
					cameraDir="";
				};
			};
		};
		MRT_SwitchItemNextClass="75th_Eotech_553_down";
		MRT_SwitchItemPrevClass="75th_Eotech_553_down";
		MRT_switchItemHintText="";
	};
	class 75th_Eotech_553_down: optic_Holosight
	{
		scope=1;
		scopeArsenal=1;
		author="Visco";
		inertia=0;
		displayName="SU-231/PEQ, 3x Magnifier off";
		picture="\121_75th_Weapons\UI\su231_mag_ca.paa";
		model="\121_75th_Weapons\Eotech553_model\RH_eotech553mag_tan_down.p3d";
		descriptionShort="Eotech 553, 3x Magnifier";
		weaponInfoType="RscWeaponZeroing";
		MRT_SwitchItemNextClass="75th_Eotech_553_up";
		MRT_SwitchItemPrevClass="75th_Eotech_553_up";
		MRT_switchItemHintText="";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_ranger_553_off
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
	};
	class 75th_Eotech_EXPS3: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-231A/PEQ";
		picture="\121_75th_Weapons\UI\su231a_ca.paa";
		model="\121_75th_Weapons\EXPS3_model\EXPS_2.p3d";
		descriptionShort="Eotech EXPS-3";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=6;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_ranger_EXPS3
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
	};
	class 75th_Eotech_EXPS3_down: ItemCore
	{
		scope=1;
		scopeArsenal=1;
		author="Visco";
		inertia=0;
		displayName="SU-231A/PEQ, 3x Magnifier off";
		picture="\121_75th_Weapons\UI\su231a_mag_ca.paa";
		model="\121_75th_Weapons\EXPS3_model\EXPS_2_Riser_Down.p3d";
		descriptionShort="Eotech EXPS-3, 3x Magnifier";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=6;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class 75th_ranger_EXPS3_off
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		MRT_SwitchItemNextClass="75th_Eotech_EXPS3_up";
		MRT_SwitchItemPrevClass="75th_Eotech_EXPS3_up";
		MRT_switchItemHintText="";
	};
	class 75th_Eotech_EXPS3_up: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		inertia=0;
		displayName="SU-231A/PEQ, 3x Magnifier";
		picture="\121_75th_Weapons\UI\su231a_mag_ca.paa";
		model="\121_75th_Weapons\EXPS3_model\EXPS_2_Riser_Up.p3d";
		descriptionShort="Eotech EXPS-3, 3x Magnifier";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=6;
			RMBhint="Optical Sight";
			modelOptics="\121_75th_Weapons\Eotech553_model\Optics\RH_eot_2D.p3d";
			optics=1;
			class OpticsModes
			{
				class 75th_eotech_exps_mag
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomInit=0.1;
					opticsZoomMin=0.1;
					opticsZoomMax=0.1;
					discreteDistance[]={200,300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=300;
					memoryPointCamera="eye";
					visionMode[]={};
					cameraDir="";
				};
			};
		};
		MRT_SwitchItemNextClass="75th_Eotech_EXPS3_down";
		MRT_SwitchItemPrevClass="75th_Eotech_EXPS3_down";
		MRT_switchItemHintText="";
	};
	class 75th_Ranger_ANPEQ15_TAN: acc_pointer_IR
	{
		scope=1;
		displayName="";
		model="";
		author="";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		UiPicture="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=9;
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_pos";
				irLaserEnd="laser_dir";
				irdistance=5;
			};
		};
	};
	class 75th_Ranger_ANPEQ15_TAN_MIX: acc_pointer_IR
	{
		ACE_laserpointer=1;
		scope=1;
		displayName="";
		model="";
		author="";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		UiPicture="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=9;
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
	class 75th_Ranger_SFLIGHT_TOP: acc_flashlight
	{
		scope=1;
		displayName="AN/PEQ-15 ATPIAL TOG 2";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		model="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=9;
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
	class 75th_Ranger_SOCOM1: ItemCore
	{
		scope=2;
		displayName="Surefire SOCOM 5.56 RC2";
		author="Visco";
		picture="\121_75th_Weapons\UI\socom_rc2_ca.paa";
		model="\121_75th_Weapons\SOCOM_model\rc2.p3d";
		vehicleClass="WeaponsPrimary";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10.6;
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
	class 75th_Ranger_sideURGI_1_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX, 1";
		model="121_75th_Weapons\ACC_model\side_2_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_1_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_1_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideURGI_1_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 1 [Mix]";
		model="121_75th_Weapons\ACC_model\side_2_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_1_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideURGI_1_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 1 [Visible]";
		model="121_75th_Weapons\ACC_model\side_2_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_1_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_1_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideURGI_2_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX, 2";
		model="121_75th_Weapons\ACC_model\side_1_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_2_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_2_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideURGI_2_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 2 [Mix]";
		model="121_75th_Weapons\ACC_model\side_1_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_2_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideURGI_2_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 2 [Visible]";
		model="121_75th_Weapons\ACC_model\side_1_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_2_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_2_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideURGI_3_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, SU-233/PVS";
		model="121_75th_Weapons\ACC_model\side_3_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_3_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_3_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideURGI_3_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Mix]";
		model="121_75th_Weapons\ACC_model\side_3_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_3_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_3_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideURGI_3_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Visible]";
		model="121_75th_Weapons\ACC_model\side_3_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideURGI_3_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideURGI_3_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideFSP_1_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX, 1";
		model="121_75th_Weapons\ACC_model\side_1_fsp.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideFSP_1_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideFSP_1_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideFSP_1_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 1 [Mix]";
		model="121_75th_Weapons\ACC_model\side_1_fsp.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideFSP_1_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideFSP_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideFSP_1_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 1 [Visible]";
		model="121_75th_Weapons\ACC_model\side_1_fsp.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideFSP_1_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideFSP_1_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideFSP_2_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX, 2";
		model="121_75th_Weapons\ACC_model\side_2_fsp.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideFSP_2_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideFSP_2_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideFSP_2_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 2 [Mix]";
		model="121_75th_Weapons\ACC_model\side_2_fsp.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideFSP_2_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideFSP_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideFSP_2_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX, 2 [Visible]";
		model="121_75th_Weapons\ACC_model\side_2_fsp.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideFSP_2_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideFSP_2_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideRIS2_1_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX";
		model="121_75th_Weapons\ACC_model\side_1_ris2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideRIS2_1_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideRIS2_1_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideRIS2_1_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Mix]";
		model="121_75th_Weapons\ACC_model\side_1_ris2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideRIS2_1_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideRIS2_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideRIS2_1_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Visible]";
		model="121_75th_Weapons\ACC_model\side_1_ris2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideRIS2_1_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideRIS2_1_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideRIS2_2_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, SU-233/PVS";
		model="121_75th_Weapons\ACC_model\side_2_ris2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideRIS2_2_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideRIS2_2_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideRIS2_2_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Mix]";
		model="121_75th_Weapons\ACC_model\side_2_ris2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideRIS2_2_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideRIS2_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideRIS2_2_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Visible]";
		model="121_75th_Weapons\ACC_model\side_2_ris2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideRIS2_2_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideRIS2_2_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideMK16_1_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX";
		model="121_75th_Weapons\ACC_model\side_1_mk16.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK16_1_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK16_1_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideMK16_1_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Mix]";
		model="121_75th_Weapons\ACC_model\side_1_mk16.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK16_1_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK16_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideMK16_1_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Visible]";
		model="121_75th_Weapons\ACC_model\side_1_mk16.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK16_1_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK16_1_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideMK16_2_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, SU-233/PVS";
		model="121_75th_Weapons\ACC_model\side_2_mk16.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK16_2_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK16_2_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideMK16_2_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Mix]";
		model="121_75th_Weapons\ACC_model\side_2_mk16.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK16_2_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK16_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideMK16_2_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Visible]";
		model="121_75th_Weapons\ACC_model\side_2_mk16.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK16_2_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK16_2_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideM240L_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX";
		model="121_75th_Weapons\ACC_model\side_m240.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideM240L_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideM240L_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideM240L_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Mix]";
		model="121_75th_Weapons\ACC_model\side_m240.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideM240L_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideM240L_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideM240L_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Visible]";
		model="121_75th_Weapons\ACC_model\side_m240.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideM240L_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideM240L_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideM240L_2_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, SU-233/PVS";
		model="121_75th_Weapons\ACC_model\side_m240_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideM240L_2_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideM240L_2_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideM240L_2_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Mix]";
		model="121_75th_Weapons\ACC_model\side_m240_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideM240L_2_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideM240L_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideM240L_2_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, SU-233/PVS [Visible]";
		model="121_75th_Weapons\ACC_model\side_m240_2.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_m3x_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideM240L_2_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideM240L_2_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideMK48_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX";
		model="121_75th_Weapons\ACC_model\side_mk48.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK48_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK48_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideMK48_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Mix]";
		model="121_75th_Weapons\ACC_model\side_mk48.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK48_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK48_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideMK48_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Visible]";
		model="121_75th_Weapons\ACC_model\side_mk48.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideMK48_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideMK48_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_sideXM2010_1_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ";
		model="121_75th_Weapons\ACC_model\side_xm2010.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_ca.paa";
	};
	class 75th_Ranger_sideLAMG_1_LASER: 75th_Ranger_ANPEQ15_TAN
	{
		scope=2;
		displayName="LA-5A/PEQ, Insight WMX";
		model="121_75th_Weapons\ACC_model\side_1_lamg.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideLAMG_1_FLASH";
		MRT_SwitchItemNextClass="75th_Ranger_sideLAMG_1_MIX";
		MRT_switchItemHintText="IR Laser";
	};
	class 75th_Ranger_sideLAMG_1_MIX: 75th_Ranger_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Mix]";
		model="121_75th_Weapons\ACC_model\side_1_lamg.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideLAMG_1_LASER";
		MRT_SwitchItemNextClass="75th_Ranger_sideLAMG_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
	};
	class 75th_Ranger_sideLAMG_1_FLASH: 75th_Ranger_SFLIGHT_TOP
	{
		scope=1;
		displayName="LA-5A/PEQ, Insight WMX [Visible]";
		model="121_75th_Weapons\ACC_model\side_1_lamg.p3d";
		author="Visco";
		picture="\121_75th_Weapons\UI\peq15_wmx_ca.paa";
		MRT_SwitchItemPrevClass="75th_Ranger_sideLAMG_1_MIX";
		MRT_SwitchItemNextClass="75th_Ranger_sideLAMG_1_LASER";
		MRT_switchItemHintText="Flash light";
	};
	class 75th_Ranger_x300u_1: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Visco";
		displayName="Surefire X300U";
		picture="\121_75th_Weapons\UI\surefire_x300u_ca.paa";
		model="121_75th_Weapons\ACC_model\side_x300u.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=7;
			class FlashLight
			{
				position="flash";
				direction="flash dir";
				color[]={25,22,20};
				ambient[]={0.001,0.001,0.001};
				size=1;
				innerAngle=50;
				outerAngle=120;
				coneFadeCoef=10;
				intensity=450;
				useFlare=1;
				dayLight=1;
				FlareSize=0.69999999;
				onlyInNvg=0;
				class Attenuation
				{
					start=0;
					constant=2;
					linear=1;
					quadratic=75;
				};
				scale[]={0};
			};
		};
		inertia=0.050000001;
	};
	class 75th_Ranger_URGI_1: rhs_weap_m4a1_blockII
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		model="\121_75th_Weapons\URGI_model\URGI.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_urgi_recoil";
		author="Visco";
		displayName="M4A1 URG-I Magpul Black";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_urgi_1.paa";
		class WeaponSlotsInfo
		{
			mass=54.700001;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"_gripTango",
			"_gripAVG",
			"_stockCAR",
			"_stockKAC"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\URGI_model\hand_anim\noGrip.rtm"
		};
		baseWeapon="75th_Ranger_URGI";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block3";
			type="stock1";
		};
	};
	class 75th_Ranger_URGI_2: rhs_weap_m4a1_blockII
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		model="\121_75th_Weapons\URGI_model\URGI.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_urgi_recoil";
		author="Visco";
		displayName="M4A1 URG-I Magpul Tan";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_urgi_1.paa";
		class WeaponSlotsInfo
		{
			mass=54.700001;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6",
			"_gripAVG",
			"_gripTango",
			"_stockCAR",
			"_stockKAC"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower2.paa",
			"121_75th_Weapons\URGI_model\Data\magpulstock_tan_co.paa",
			"",
			"",
			"",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\URGI_model\hand_anim\noGrip.rtm"
		};
		baseWeapon="75th_Ranger_URGI2";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block3";
			type="stock2";
		};
	};
	class 75th_Ranger_URGI_3: rhs_weap_m4a1_blockII
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		model="\121_75th_Weapons\URGI_model\URGI.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_urgi_recoil";
		author="Visco";
		displayName="M4A1 URG-I";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_urgi_1.paa";
		class WeaponSlotsInfo
		{
			mass=54.700001;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"camo1",
			"_gripAVG",
			"_gripTango",
			"_stockCTR",
			"_stockKAC"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower.paa",
			"",
			"",
			"",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\URGI_model\hand_anim\noGrip.rtm"
		};
		baseWeapon="75th_Ranger_URGI3";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block3";
			type="stock3";
		};
	};
	class 75th_Ranger_URGI_4: rhs_weap_m4a1_blockII
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		model="\121_75th_Weapons\URGI_model\URGI.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_urgi_recoil";
		author="Visco";
		displayName="M4A1 URG-I SOPMOD";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_urgi_1.paa";
		class WeaponSlotsInfo
		{
			mass=54.700001;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"camo1",
			"_gripAVG",
			"_gripTango",
			"_stockCTR",
			"_stockCAR"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower2.paa",
			"",
			"",
			"",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\URGI_model\hand_anim\noGrip.rtm"
		};
		baseWeapon="75th_Ranger_URGI4";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block3";
			type="stock4";
		};
	};
	class 75th_Ranger_URGI_5: 75th_Ranger_URGI_4
	{
		ACE_barrelTwist=177.8;
		ACE_barrelLength=261.60001;
		model="\121_75th_Weapons\URGI_CQBR\URGI_CQBR.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_urgi_recoil";
		author="Visco";
		displayName="M4A1 URG-I 10.3";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_urgi_2.paa";
		class WeaponSlotsInfo
		{
			mass=54.700001;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"camo1",
			"_gripAVG",
			"_gripTango",
			"_stockCTR",
			"_stockKAC"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower.paa",
			"",
			"",
			"",
			""
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\URGI_CQBR\hand_anim\noGrip_9.rtm"
		};
		baseWeapon="75th_Ranger_URGI5";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block3";
			type="green";
		};
	};
	class 75th_Ranger_FSP_1: rhs_weap_m4a1_blockII
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		model="\121_75th_Weapons\FSP_model\FSP.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_block2_145_recoil";
		author="Visco";
		displayName="M4A1 Block II FSP";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_block2_1.paa";
		class WeaponSlotsInfo
		{
			mass=68.5;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower3.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\FSP_model\hand_anim\FSP2.rtm"
		};
		baseWeapon="75th_Ranger_FSP1";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block2";
			type="fsp";
		};
	};
	class 75th_Ranger_FSP_2: rhs_weap_m4a1_blockII
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		model="\121_75th_Weapons\DDM4\DDM4.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_block2_145_recoil";
		author="Visco";
		displayName="M4A1 Block II";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_block2_2.paa";
		class WeaponSlotsInfo
		{
			mass=65.5;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower3.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\FSP_model\hand_anim\FSP2.rtm"
		};
		baseWeapon="75th_Ranger_FSP2";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block2";
			type="ris2_1";
		};
	};
	class 75th_Ranger_FSP_3: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=261.60001;
		model="\121_75th_Weapons\DDM4_CQBR\DDM4_CQBR.p3d";
		dexterity=3.0999999;
		recoil="121_ranger_block2_103_recoil";
		author="Visco";
		displayName="Mk 18 Mod 1";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_block2_3.paa";
		class WeaponSlotsInfo
		{
			mass=57.099998;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower2.paa",
			"121_75th_Weapons\URGI_model\Data\magpulstock_tan_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\DDM4_CQBR\hand_anim\DDM4_CQBR.rtm"
		};
		baseWeapon="75th_Ranger_FSP3";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_block2";
			type="ris2_2";
		};
	};
	class 75th_Ranger_m4_m320: rhs_weap_m4
	{
		scope=1;
		author="Visco";
		picture="\121_75th_Weapons\UI\75th_block1_m320.paa";
		displayName="M4A1 Block I M320";
		model="\rhsusf\addons\rhsusf_weapons\M4\m4_ris_m320.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_m320.rtm"
		};
		muzzles[]=
		{
			"this",
			"M320_GL",
			"SAFE"
		};
		class WeaponSlotsInfo
		{
			mass=106.04;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class UnderBarrelSlot
			{
			};
			class GripodSlot
			{
			};
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Weapons\URGI_model\Data\lower.paa"
		};
		baseWeapon="75th_Ranger_m4_m320_1";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
	};
	class rhs_weap_m240_base;
	class 75th_Ranger_m240L: rhs_weap_m240_base
	{
		author="Visco";
		picture="\121_75th_Weapons\UI\75th_m240L_1.paa";
		scope=2;
		displayName="M240L Machine Gun";
		model="\121_75th_Weapons\M240L_model\M240L.p3d";
		weaponInfoType="rhs_m240b_handler";
		class WeaponSlotsInfo
		{
			mass=223;
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"75th_Ranger_sideM240L_LASER",
					"75th_Ranger_sideM240L_MIX",
					"75th_Ranger_sideM240L_FLASH",
					"75th_Ranger_sideM240L_2_LASER",
					"75th_Ranger_sideM240L_2_MIX",
					"75th_Ranger_sideM240L_2_FLASH"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class UnderBarrelSlot: rhs_UnderSlot_m240
			{
			};
			class GripodSlot
			{
				compatibleItems[]={};
			};
		};
		magazines[]=
		{
			"ranger_200Rnd_762x51_m61_ap"
		};
		baseWeapon="75th_Ranger_M240L";
		dzn_MG_Tripod_deployedGesture[]=
		{
			"",
			"",
			""
		};
	};
	class rhs_weap_m240B;
	class 75th_ranger_mk48: rhs_weap_m240B
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\121_75th_Weapons\MK48\Mk48_B.p3d";
		magazines[]=
		{
			"ranger_100rnd_762_M80",
			"ranger_100rnd_762_M61",
			"ranger_100rnd_762_M62",
			"ranger_100rnd_762_EPR"
		};
		magazineWell[]=
		{
			"ranger_mk48_762x51"
		};
		picture="\121_75th_Weapons\UI\75th_mk48_1.paa";
		displayName="Mk48 Mod 0 Machine Gun";
		author="Visco";
		discreteDistance[]={300};
		discreteDistanceCameraPoint[]=
		{
			"eye"
		};
		cameraDir="eye_look";
		recoil="recoil_mk200";
		inertia=0.80000001;
		dexterity=2.4000001;
		class WeaponSlotsInfo
		{
			mass=180;
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"75th_Ranger_sideMK48_LASER",
					"75th_Ranger_sideMK48_MIX",
					"75th_Ranger_sideMK48_FLASH"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\121_75th_Weapons\MK48\anim\gesture_m249.rtm"
		};
		reloadAction="121_75th_GestureReloadM249";
		baseWeapon="75th_ranger_mk48";
	};
	class rhs_weap_SCAR_L_Base;
	class 75th_Ranger_mk16_1: rhs_weap_SCAR_L_Base
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=355;
		model="\121_75th_Weapons\MK16\Mk16.p3d";
		dexterity=3.0999999;
		author="Visco";
		displayName="Mk16 Mod 0 SCAR-L";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		picture="\121_75th_Weapons\UI\75th_mk16_1.paa";
		class WeaponSlotsInfo
		{
			mass=68.900002;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"75th_Ranger_sideMK16_1_LASER",
					"75th_Ranger_sideMK16_1_MIX",
					"75th_Ranger_sideMK16_1_FLASH",
					"75th_Ranger_sideMK16_2_LASER",
					"75th_Ranger_sideMK16_2_MIX",
					"75th_Ranger_sideMK16_2_FLASH"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
		rhs_fold="75th_Ranger_mk16_1";
		baseWeapon="75th_Ranger_MK16_1";
		magazines[]=
		{
			"ranger_30Rnd_556_M995_AP_Tan"
		};
		class XtdGearInfo
		{
			model="ranger_scarl";
			type="standard";
		};
	};
	class 75th_Ranger_mk16_2: 75th_Ranger_mk16_1
	{
		ACE_barrelLength=254;
		model="\121_75th_Weapons\MK16_CQC\Mk16_CQC.p3d";
		displayName="Mk16 Mod 0 SCAR-L CQB";
		picture="\121_75th_Weapons\UI\75th_mk16_2.paa";
		rhs_fold="75th_Ranger_mk16_2";
		baseWeapon="75th_Ranger_MK16_2";
		class XtdGearInfo
		{
			model="ranger_scarl";
			type="cqc";
		};
	};
	class rhsusf_acc_M2010S;
	class 75th_Ranger_M2010S: rhsusf_acc_M2010S
	{
		picture="\121_75th_Weapons\UI\titan_ca.paa";
		author="Visco";
		scope=2;
		displayName="AAC TiTan-QD Suppressor";
		model="\121_75th_Weapons\Remington_MSR\Data\Titan.p3d";
	};
	class rhs_weap_XM2010;
	class 75th_Ranger_XM2010: rhs_weap_XM2010
	{
		author="Visco";
		scope=2;
		picture="\121_75th_Weapons\UI\75th_xm2010.paa";
		displayName="Mk21 Precision Sniper Rifle";
		model="\121_75th_Weapons\Remington_MSR\xm2010.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_75th_Weapons\Remington_MSR\Data\XM2010_co.paa"
		};
		class WeaponSlotsInfo
		{
			mass=121;
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"75th_Ranger_M2010S"
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"75th_Ranger_sideXM2010_1_LASER"
				};
			};
			class CowsSlot: rhs_western_rifle_scopes_slot_long
			{
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				compatibleItems[]=
				{
					"rhsusf_acc_harris_bipod",
					"rhsusf_acc_harris_swivel"
				};
			};
		};
		baseWeapon="ranger_XM2010";
		magazines[]=
		{
			"ranger_10Rnd_300winmag_xm2010"
		};
	};
	class hgun_P07_F;
	class 75th_Ranger_G19: hgun_P07_F
	{
		author="Visco";
		scope=2;
		displayName="Glock 19 (Mk27 Mod 2)";
		picture="\121_75th_Weapons\UI\75th_mk27_1.paa";
		model="\121_75th_Weapons\G19\glock19_gen4.p3d";
		modelOptics="-";
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_FMJ"
		};
		magazineWell[]=
		{
			"CBA_9x19_Glock_Full"
		};
		weaponInfoType="rhs_rscOptics_pistol_usf";
		minRange=5;
		minRangeProbab=0.30000001;
		midRange=25;
		midRangeProbab=0.60000002;
		maxRange=50;
		maxRangeProbab=0.1;
		aiRateOfFire=2;
		aiRateOfFireDistance=25;
		optics=1;
		distanceZoomMin=50;
		distanceZoomMax=50;
		inertia=0.2;
		dexterity=1.8;
		initSpeed=-0.89999998;
		dispersion=0.02;
		reloadTime=0.13;
		class WeaponSlotsInfo
		{
			mass=13.75;
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"75th_glock_rmr",
					"75th_glock_rmr_3moa",
					"75th_glock_rmr_6moa"
				};
			};
			class MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"75th_Ranger_x300u_1"
				};
			};
		};
		baseWeapon="75th_Ranger_G19_1";
		class XtdGearInfo
		{
			model="ranger_glock1";
			type="standard";
		};
	};
	class 75th_Ranger_G19_KKM: hgun_P07_F
	{
		author="Visco";
		scope=2;
		displayName="Glock 19 KKM (Mk27 Mod 2)";
		picture="\121_75th_Weapons\UI\75th_mk27_2.paa";
		model="\121_75th_Weapons\G19\kkm\glock19_gen4_kkm.p3d";
		modelOptics="-";
		magazines[]=
		{
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_FMJ"
		};
		magazineWell[]=
		{
			"CBA_9x19_Glock_Full"
		};
		weaponInfoType="rhs_rscOptics_pistol_usf";
		minRange=5;
		minRangeProbab=0.30000001;
		midRange=25;
		midRangeProbab=0.60000002;
		maxRange=50;
		maxRangeProbab=0.1;
		aiRateOfFire=2;
		aiRateOfFireDistance=25;
		optics=1;
		distanceZoomMin=50;
		distanceZoomMax=50;
		inertia=0.2;
		dexterity=1.8;
		initSpeed=-0.89999998;
		dispersion=0.0099999998;
		reloadTime=0.13;
		class WeaponSlotsInfo
		{
			mass=13.75;
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"75th_glock_rmr",
					"75th_glock_rmr_3moa",
					"75th_glock_rmr_6moa"
				};
			};
			class MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"75th_Ranger_x300u_1"
				};
			};
		};
		baseWeapon="75th_Ranger_G19_2";
		class XtdGearInfo
		{
			model="ranger_glock1";
			type="kkm";
		};
	};
	class rhs_weap_saw_base;
	class 75th_LAMG_1: rhs_weap_saw_base
	{
		scope=2;
		author="Visco";
		displayName="KAC LAMG";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		model="\121_75th_Weapons\LAMG\kac_LAMG_NHG.p3d";
		picture="\121_75th_Weapons\UI\75th_lamg_1.paa";
		ACE_barrelLength=381;
		ACE_barrelTwist=177.8;
		ACE_overheating_mrbs=15000;
		ACE_Overheating_Dispersion[]={0,0.00079999998,0.0012000001,0.0024000001};
		ACE_Overheating_SlowdownFactor[]={1,1,1,0.89999998};
		ACE_Overheating_JamChance[]={0,0.00015000001,0.00075000001,0.0037499999};
		reloadaction="rhs_GestureReloadM249STANAG";
		drysound[]=
		{
			"\rhsusf\addons\rhsusf_weapons2\M249\snd\empty_machineguns",
			1,
			1,
			10
		};
		reloadmagazinesound[]=
		{
			"\rhsusf\addons\rhsusf_weapons2\M249\snd\saw_reload",
			0.5,
			1,
			20
		};
		discreteDistance[]={200,300,400,500,600};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		cameraDir="eye_look";
		class WeaponSlotsInfo
		{
			mass=112.4;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"75th_Ranger_sideLAMG_1_LASER",
					"75th_Ranger_sideLAMG_1_MIX",
					"75th_Ranger_sideLAMG_1_FLASH"
				};
			};
			class CowsSlot: asdg_OpticRail1913_short_MG
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
				linkProxy="\a3\data_f_mark\proxies\weapon_slots\underbarrel";
				compatibleItems[]=
				{
					"rhsusf_acc_harris_bipod",
					"rhsusf_acc_harris_swivel"
				};
			};
			class GripodSlot
			{
				compatibleItems[]={};
			};
		};
		magazines[]=
		{
			"ranger_KAC_LAMG_150rnd_Box"
		};
		magazineWell[]=
		{
			"ranger_LAMG_556x45"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"121_75th_Weapons\LAMG\Anim\LAMG_v1_1_HG.rtm"
		};
		baseWeapon="75th_LAMG_1";
	};
};
class CfgRecoils
{
	class recoil_default;
	class 121_ranger_urgi_recoil: recoil_default
	{
		muzzleOuter[]={0.25,0.69999999,0.30000001,0.2};
		kickBack[]={0.02,0.029999999};
		temporary=0.0070000002;
	};
	class 121_ranger_block2_145_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,0.80000001,0.40000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.0099999998;
	};
	class 121_ranger_block2_103_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,1.2,0.40000001,0.30000001};
		kickBack[]={0.02,0.059999999};
		temporary=0.0080000004;
	};
};
class BettIR_Config
{
	class CompatibleAttachments
	{
		class 75th_Ranger_sideURGI_1_LASER
		{
			offset[]={-0.027000001,0.28,0.15000001};
		};
		class 75th_Ranger_sideURGI_1_MIX: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideURGI_1_FLASH: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideURGI_2_LASER: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideURGI_2_MIX: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideURGI_2_FLASH: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideFSP_1_LASER: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideFSP_1_MIX: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideFSP_1_FLASH: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideFSP_2_LASER: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideFSP_2_MIX: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideFSP_2_FLASH: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideRIS2_1_LASER: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideRIS2_1_MIX: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideRIS2_1_FLASH: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideMK16_1_LASER: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideMK16_1_MIX: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideMK16_1_FLASH: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideM240L_LASER: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideM240L_MIX: 75th_Ranger_sideURGI_1_LASER
		{
		};
		class 75th_Ranger_sideM240L_FLASH: 75th_Ranger_sideURGI_1_LASER
		{
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class ranger_block3
		{
			label="M4A1 Block III";
			author="Visco";
			options[]=
			{
				"type"
			};
			class type
			{
				label="Stock";
				values[]=
				{
					"stock1",
					"stock2",
					"stock3",
					"stock4",
					"green"
				};
				changeingame=0;
				class stock1
				{
					label="CTR Blk";
				};
				class stock2
				{
					label="CTR Tan";
				};
				class stock3
				{
					label="Stock";
				};
				class stock4
				{
					label="Sopmod";
				};
				class green
				{
					label="Green Team";
				};
			};
		};
		class ranger_block2
		{
			label="M4A1 Block II";
			author="Visco";
			options[]=
			{
				"type"
			};
			class type
			{
				label="Type";
				values[]=
				{
					"fsp",
					"ris2_1",
					"ris2_2"
				};
				changeingame=0;
				class fsp
				{
					label="FSP";
				};
				class ris2_1
				{
					label="14.5in";
				};
				class ris2_2
				{
					label="10.3in";
				};
			};
		};
		class ranger_scarl
		{
			label="Mk16 Mod 0";
			author="Visco";
			options[]=
			{
				"type"
			};
			class type
			{
				label="Type";
				values[]=
				{
					"standard",
					"cqc"
				};
				changeingame=0;
				class standard
				{
					label="14in";
				};
				class cqc
				{
					label="10in";
				};
			};
		};
		class ranger_glock1
		{
			label="Glock 19";
			author="Visco";
			options[]=
			{
				"type"
			};
			class type
			{
				label="Type";
				values[]=
				{
					"standard",
					"kkm"
				};
				changeingame=0;
				class standard
				{
					label="Default";
				};
				class kkm
				{
					label="KKM Comp";
				};
			};
		};
	};
};
class cfgMods
{
	author="Visco";
	timepacked="1662762936";
};

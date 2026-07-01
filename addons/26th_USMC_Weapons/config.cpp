class CfgPatches
{
	class CIUSMC_Weapons
	{
		units[]={};
		weapons[]=
		{
			"CIUSMC_CNVDT",
			"26th_CIUSMC_416_DEVICE_1_LASER",
			"26th_CIUSMC_416_DEVICE_2_LASER",
			"26th_CIUSMC_416_DEVICE_3_LASER",
			"26th_CIUSMC_4CON_DEVICE_1_LASER",
			"26th_CIUSMC_4CON_DEVICE_2_LASER",
			"26th_CIUSMC_4CON_DEVICE_3_LASER",
			"26th_CIUSMC_4CON_DEVICE_4_LASER",
			"26th_CIUSMC_4CON_DEVICE_5_LASER",
			"26th_CIUSMC_4CON_DEVICE_6_LASER",
			"26th_CIUSMC_M110_DEVICE_1_LASER",
			"26th_CIUSMC_M240L_DEVICE_1_LASER",
			"26th_CIUSMC_M110_DEVICE_2_LASER",
			"26th_CIUSMC_M38_DEVICE_1_LASER",
			"CIUSMC_HARRIS",
			"CIUSMC_SU230B",
			"CIUSMC_Leupold_MK4",
			"CIUSMC_Leupold_MK4_CNVDT",
			"CIUSMC_Optic_TS30A2",
			"CIUSMC_Optic_TS30A2_CNVDT",
			"CIUSMC_optic_VCOG",
			"CIUSMC_EXPS",
			"CIUSMC_G33_EXPS_UP",
			"26th_CIUSMC_RC_WRAPPED_TAN",
			"26th_CIUSMC_RC_WRAPPED_MC",
			"26th_CIUSMC_SOCOM_RC2_TAN",
			"26th_CIUSMC_SOCOM_RC2_BLK",
			"26th_CIUSMC_M110_SUPPRESSOR"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Mark",
			"cba_common",
			"ace_common",
			"cba_optics",
			"cba_main"
		};
		author="Coal";
	};
};
class CfgMagazines
{
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class rhsusf_20Rnd_762x51_SR25_m118_special_Mag;
	class rhsusf_100Rnd_762x51_m80a1epr;
	class rhsusf_100Rnd_762x51_m62_tracer;
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
	class rhs_mag_30Rnd_556x45_MK262_Stanag;
	class CIUSMC_M110_PMAG_20rnd: rhsusf_20Rnd_762x51_SR25_m118_special_Mag
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		model="26th_USMC_Weapons\Magazines\Ground_Model\M110_PMAG_Ground.p3d";
		modelSpecialIsProxy=1;
		picture="\26th_USMC_Weapons\UI\762_BLK.paa";
		displayNameShort="762x51";
		descriptionShort="762x51";
		displayName="[USMC] 20rnd PMAG Black 762x51 M118LR";
		modelSpecial="26th_USMC_Weapons\Magazines\M110_PMAG.p3d";
		ammo="rhs_ammo_762x51_M118_Special_Ball";
		count=20;
		mass=10;
	};
	class CIUSMC_M110_PMAG_Tan_20rnd: CIUSMC_M110_PMAG_20rnd
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		model="26th_USMC_Weapons\Magazines\Ground_Model\M110_PMAG_Tan_Ground.p3d";
		modelSpecialIsProxy=1;
		picture="\26th_USMC_Weapons\UI\762_TAN.paa";
		displayNameShort="762x51";
		descriptionShort="762x51";
		displayName="[USMC] 20rnd PMAG Tan 762x51 M118LR";
		modelSpecial="26th_USMC_Weapons\Magazines\M110_PMAG_Tan.p3d";
		ammo="rhs_ammo_762x51_M118_Special_Ball";
		count=20;
		mass=10;
	};
	class 26th_CIUSMC_PMAG_BLK_556x45_M855A1: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayName="[USMC] 30rnd PMAG M855A1 (Black)";
		model="26th_USMC_Weapons\Magazines\Ground_Model\USMC_PMAG_556_BLK_GROUND.p3d";
		modelSpecial="26th_USMC_Weapons\Magazines\USMC_PMAG_556.p3d";
		picture="\26th_USMC_Weapons\UI\PMAG_BLK.paa";
		displayNameShort="M855A1 EPR";
		descriptionShort="M855A1 EPR";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556_blk_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556.rvmat"
		};
	};
	class 26th_CIUSMC_PMAG_TAN_556x45_M855A1: 26th_CIUSMC_PMAG_BLK_556x45_M855A1
	{
		displayName="[USMC] 30rnd PMAG M855A1 (Tan)";
		picture="\26th_USMC_Weapons\UI\PMAG_TAN.paa";
		model="26th_USMC_Weapons\Magazines\Ground_Model\USMC_PMAG_556_TAN_GROUND.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556.rvmat"
		};
	};
	class 26th_CIUSMC_PMAG_BLK_556x45_M856A1: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayName="[USMC] 30rnd PMAG M856A1 Tracer (Black)";
		model="26th_USMC_Weapons\Magazines\Ground_Model\USMC_PMAG_556_BLK_GROUND.p3d";
		modelSpecial="26th_USMC_Weapons\Magazines\USMC_PMAG_556.p3d";
		picture="\26th_USMC_Weapons\UI\PMAG_BLK.paa";
		displayNameShort="M856A1 Tracer";
		descriptionShort="M856A1 Tracer";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556_blk_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556.rvmat"
		};
	};
	class 26th_CIUSMC_PMAG_TAN_556x45_M856A1: 26th_CIUSMC_PMAG_BLK_556x45_M856A1
	{
		displayName="[USMC] 30rnd PMAG M856A1 Tracer (Tan)";
		picture="\26th_USMC_Weapons\UI\PMAG_TAN.paa";
		model="26th_USMC_Weapons\Magazines\Ground_Model\USMC_PMAG_556_TAN_GROUND.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556.rvmat"
		};
	};
	class 26th_CIUSMC_PMAG_BLK_556x45_MK262: rhs_mag_30Rnd_556x45_MK262_Stanag
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayName="[USMC] 30rnd PMAG MK262 LR (Black)";
		model="26th_USMC_Weapons\Magazines\Ground_Model\USMC_PMAG_556_BLK_GROUND.p3d";
		modelSpecial="26th_USMC_Weapons\Magazines\USMC_PMAG_556.p3d";
		picture="\26th_USMC_Weapons\UI\PMAG_BLK.paa";
		displayNameShort="M262 LR";
		descriptionShort="M262 LR";
		lastroundstracer=0;
		tracersevery=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556_blk_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556.rvmat"
		};
	};
	class 26th_CIUSMC_PMAG_TAN_556x45_MK262: 26th_CIUSMC_PMAG_BLK_556x45_MK262
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayName="[USMC] 30rnd PMAG MK262 LR (Tan)";
		picture="\26th_USMC_Weapons\UI\PMAG_TAN.paa";
		model="26th_USMC_Weapons\Magazines\Ground_Model\USMC_PMAG_556_TAN_GROUND.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"26th_USMC_Weapons\Magazines\Data\pmag_556.rvmat"
		};
	};
	class 26th_CIUSMC_PMAG_40_BLK_556x45_M856A1: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayName="[USMC] 40rnd PMAG M856A1 Tracer (Black)";
		count=40;
		model="26th_USMC_Weapons\Magazines\Ground_Model\PMAG_40_Ground.p3d";
		modelSpecial="26th_USMC_Weapons\Magazines\PMAG_40.p3d";
		picture="\26th_USMC_Weapons\UI\40_BLK.paa";
		displayNameShort="M856A1 Tracer";
		descriptionShort="M856A1 Tracer";
	};
	class 26th_CIUSMC_PMAG_40_Tan_556x45_M856A1: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		modelSpecialIsProxy=1;
		displayName="[USMC] 40rnd PMAG M856A1 Tracer (Tan)";
		count=40;
		model="26th_USMC_Weapons\Magazines\Ground_Model\PMAG_40_Tan_Ground.p3d";
		modelSpecial="26th_USMC_Weapons\Magazines\PMAG_40_Tan.p3d";
		picture="\26th_USMC_Weapons\UI\40_TAN.paa";
		displayNameShort="M856A1 Tracer";
		descriptionShort="M856A1 Tracer";
	};
};
class CfgMagazineWells
{
	class STANAG_556x45
	{
		26th_CIUSMC_Magazines[]=
		{
			"26th_CIUSMC_PMAG_BLK_556x45_M855A1",
			"26th_CIUSMC_PMAG_TAN_556x45_M855A1",
			"26th_CIUSMC_PMAG_BLK_556x45_M856A1",
			"26th_CIUSMC_PMAG_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_40_TAN_556x45_M856A1",
			"26th_CIUSMC_PMAG_40_BLK_556x45_M856A1",
			"26th_CIUSMC_PMAG_TAN_556x45_MK262",
			"26th_CIUSMC_PMAG_BLK_556x45_MK262"
		};
	};
	class STANAG_762x51
	{
		26th_CIUSMC_Magazines[]=
		{
			"CIUSMC_M110_PMAG_20rnd",
			"CIUSMC_M110_PMAG_Tan_20rnd"
		};
	};
};
class CfgVehicles
{
	class Man;
	class ContainerSupply;
	class Supply400: ContainerSupply
	{
		maximumLoad=400;
	};
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class USMC_Interactions
				{
					displayName="Misc Changes";
					icon="";
					class Remove_CNVDT_M110
					{
						displayName="Remove CNVD-T";
						condition="'CIUSMC_Leupold_MK4_CNVDT' in primaryWeaponItems _player";
						exceptions[]={};
						statement="if (_player canAdd 'CIUSMC_CNVDT') then {_player addPrimaryWeaponItem 'CIUSMC_Leupold_MK4'; _player additem 'CIUSMC_CNVDT';hint 'CNVD-T Removed';} else {hint 'Not enough space in inventory for CNVD-T';};";
					};
					class Attach_CNVDT_M110
					{
						displayName="Attach CNVD-T";
						condition="('CIUSMC_CNVDT' in items _player) && ('CIUSMC_Leupold_MK4' in primaryWeaponItems _player)";
						statement="_player addPrimaryWeaponItem 'CIUSMC_Leupold_MK4_CNVDT'; _player removeItem 'CIUSMC_Leupold_MK4';if ('CIUSMC_Leupold_MK4_CNVDT' in primaryWeaponItems _player) then {hint 'CNVD-T Attached'};";
						exceptions[]={};
					};
					class Remove_CNVDT_M38
					{
						displayName="Remove CNVD-T";
						condition="'CIUSMC_Optic_TS30A2_CNVDT' in primaryWeaponItems _player";
						exceptions[]={};
						statement="if (_player canAdd 'CIUSMC_CNVDT') then {_player addPrimaryWeaponItem 'CIUSMC_Optic_TS30A2'; _player additem 'CIUSMC_CNVDT';hint 'CNVD-T Removed';} else {hint 'Not enough space in inventory for CNVD-T';};";
					};
					class Attach_CNVDT_M38
					{
						displayName="Attach CNVD-T";
						condition="('CIUSMC_CNVDT' in items _player) && ('CIUSMC_Optic_TS30A2' in primaryWeaponItems _player)";
						statement="_player addPrimaryWeaponItem 'CIUSMC_Optic_TS30A2_CNVDT'; _player removeItem 'CIUSMC_Optic_TS30A2';if ('CIUSMC_Optic_TS30A2_CNVDT' in primaryWeaponItems _player) then {hint 'CNVD-T Attached'};";
						exceptions[]={};
					};
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acc_pointer_IR;
	class acc_flashlight;
	class Iteminfo;
	class Optic_arco;
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class CIUSMC_CNVDT: CBA_MiscItem
	{
		scope=2;
		author="Coal";
		displayName="CNVD-T";
		scopeArsenal=2;
		model="26th_USMC_Weapons\Scopes\CNVDT.p3d";
		picture="\26th_USMC_Weapons\UI\CNVDT.paa";
		descriptionShort="CNVD-T";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=2;
			allowedSlots[]={801,701,901};
			type=302;
		};
	};
	class 26th_CIUSMC_BASE_LASER: acc_pointer_IR
	{
		scope=1;
		displayName="[USMC] Base IR Laser";
		model="";
		author="Coal";
		UiPicture="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			type=301;
			mass=6;
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_pos";
				irLaserEnd="laser_dir";
				irdistance=5;
			};
		};
	};
	class 26th_CIUSMC_BASE_IR_DUAL_LOW: acc_flashlight
	{
		scope=1;
		displayName="[USMC] Base IR Illuminator + IR Laser";
		model="";
		author="Coal";
		UiPicture="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			type=301;
			mass=6;
			class Flashlight
			{
				position="laser_pos";
				direction="laser_dir";
				color[]={1,1,1};
				ambient[]={0.001,0.001,0.001};
				size=1;
				innerAngle=30;
				outerAngle=40;
				coneFadeCoef=10;
				intensity=750;
				irLight=1;
				useFlare=1;
				FlareSize=0.69999999;
				volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
				scale[]={0.25,0.25,1};
				class Attenuation
				{
					constant=1;
					linear=0;
					quadratic=2;
					start=1;
					hardLimitStart=80;
					hardLimitEnd=100;
				};
			};
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_pos";
				irLaserEnd="laser_dir";
				irdistance=5;
			};
		};
	};
	class 26th_CIUSMC_BASE_IR_DUAL_HIGH: acc_flashlight
	{
		scope=1;
		displayName="[USMC] Base IR Illuminator + IR Laser";
		model="";
		author="Coal";
		UiPicture="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			type=301;
			mass=6;
			class Flashlight
			{
				color[]={1,1,1};
				ambient[]={1,1,1};
				size=1;
				innerAngle=10;
				outerAngle=12;
				position="laser_pos";
				direction="laser_dir";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=200;
				coneFadeCoef=6;
				intensity=60;
				irLight=1;
				volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
				scale[]={0.25,0.25,1};
				class Attenuation
				{
					constant=1;
					linear=0;
					quadratic=0.0080000004;
					start=1;
					hardLimitStart=420;
					hardLimitEnd=450;
				};
			};
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_pos";
				irLaserEnd="laser_dir";
				irdistance=5;
			};
		};
	};
	class 26th_CIUSMC_BASE_VIS_LIGHT: acc_flashlight
	{
		scope=1;
		displayName="[USMC] Base Visible Light";
		model="";
		author="Coal";
		UiPicture="";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			type=301;
			mass=6;
			class FlashLight
			{
				ambient[]={9,7.5,6};
				color[]={1200,1500,1800};
				conefadecoef=150;
				daylight=1;
				position="flash_pos";
				direction="flash_dir";
				flaremaxdistance=600;
				flaresize=1;
				innerangle=15;
				intensity=80;
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
	class 26th_CIUSMC_416_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\416_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_1_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_1_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_416_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\416_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_1_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_1_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_416_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\416_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_1_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_1_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_416_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\416_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_1_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_1_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_416_DEVICE_2_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] LA5 + WML Bravo";
		model="26th_USMC_Weapons\Devices\416_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_2_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_2_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_416_DEVICE_2_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] LA5 + WML Bravo";
		model="26th_USMC_Weapons\Devices\416_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_2_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_2_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_416_DEVICE_2_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] LA5 + WML Bravo";
		model="26th_USMC_Weapons\Devices\416_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_2_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_2_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_416_DEVICE_2_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] LA5 + WML Bravo";
		model="26th_USMC_Weapons\Devices\416_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_2_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_2_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_416_DEVICE_3_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] AN/PEQ-16 Charlie";
		model="26th_USMC_Weapons\Devices\416_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_3_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_3_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_416_DEVICE_3_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Charlie";
		model="26th_USMC_Weapons\Devices\416_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_3_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_3_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_416_DEVICE_3_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Charlie";
		model="26th_USMC_Weapons\Devices\416_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_3_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_3_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_416_DEVICE_3_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Charlie";
		model="26th_USMC_Weapons\Devices\416_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_416_DEVICE_3_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_416_DEVICE_3_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_4CON_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\forecon_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_1_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\forecon_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_1_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\forecon_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_1_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_4CON_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Alpha";
		model="26th_USMC_Weapons\Devices\forecon_side_1.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_1_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_1_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_4CON_DEVICE_2_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] LA5 + Surefire M600 Bravo";
		model="26th_USMC_Weapons\Devices\forecon_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_2_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Bravo";
		model="26th_USMC_Weapons\Devices\forecon_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_2_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Bravo";
		model="26th_USMC_Weapons\Devices\forecon_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_2_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_4CON_DEVICE_2_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] LA5 + Surefire M600 Bravo";
		model="26th_USMC_Weapons\Devices\forecon_side_2.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_2_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_2_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_4CON_DEVICE_3_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] LA5 + X300 Charlie";
		model="26th_USMC_Weapons\Devices\forecon_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_3_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] LA5 + X300 Charlie";
		model="26th_USMC_Weapons\Devices\forecon_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_3_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] LA5 + X300 Charlie";
		model="26th_USMC_Weapons\Devices\forecon_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_3_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_4CON_DEVICE_3_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] LA5 + X300 Charlie";
		model="26th_USMC_Weapons\Devices\forecon_side_3.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_3_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_3_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_4CON_DEVICE_4_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] LA5 + WML Delta";
		model="26th_USMC_Weapons\Devices\forecon_side_4.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_4_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] LA5 + WML Delta";
		model="26th_USMC_Weapons\Devices\forecon_side_4.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_4_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] LA5 + WML Delta";
		model="26th_USMC_Weapons\Devices\forecon_side_4.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_4_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_4CON_DEVICE_4_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] LA5 + WML Delta";
		model="26th_USMC_Weapons\Devices\forecon_side_4.p3d";
		picture="\26th_USMC_Weapons\UI\LA5.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_4_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_4_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_4CON_DEVICE_5_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] AN/PEQ-16 Echo";
		model="26th_USMC_Weapons\Devices\forecon_side_5.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_5_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Echo";
		model="26th_USMC_Weapons\Devices\forecon_side_5.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_5_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Echo";
		model="26th_USMC_Weapons\Devices\forecon_side_5.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_5_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_4CON_DEVICE_5_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Echo";
		model="26th_USMC_Weapons\Devices\forecon_side_5.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_5_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_5_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_4CON_DEVICE_6_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] AN/PEQ-16 Foxtrot";
		model="26th_USMC_Weapons\Devices\forecon_side_6.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_6_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Foxtrot";
		model="26th_USMC_Weapons\Devices\forecon_side_6.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_6_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Foxtrot";
		model="26th_USMC_Weapons\Devices\forecon_side_6.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_6_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_4CON_DEVICE_6_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Foxtrot";
		model="26th_USMC_Weapons\Devices\forecon_side_6.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_4CON_DEVICE_6_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_4CON_DEVICE_6_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_M110_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] AN/PEQ-16 Golf";
		model="26th_USMC_Weapons\Devices\M110_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M110_DEVICE_1_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_M110_DEVICE_1_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_M110_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Golf";
		model="26th_USMC_Weapons\Devices\M110_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M110_DEVICE_1_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_M110_DEVICE_1_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_M110_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Golf";
		model="26th_USMC_Weapons\Devices\M110_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M110_DEVICE_1_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_M110_DEVICE_1_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_M110_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Golf";
		model="26th_USMC_Weapons\Devices\M110_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M110_DEVICE_1_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_M110_DEVICE_1_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_M240L_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] AN/PEQ-16 Hotel";
		model="26th_USMC_Weapons\Devices\M240L_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M240L_DEVICE_1_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Hotel";
		model="26th_USMC_Weapons\Devices\M240L_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M240L_DEVICE_1_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Hotel";
		model="26th_USMC_Weapons\Devices\M240L_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_M240L_DEVICE_1_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_M240L_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 Hotel";
		model="26th_USMC_Weapons\Devices\M240L_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M240L_DEVICE_1_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_M240L_DEVICE_1_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class 26th_CIUSMC_M110_DEVICE_2_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] AN/PSQ-23";
		model="26th_USMC_Weapons\Devices\Rangefinder_M110.p3d";
		picture="\26th_USMC_Weapons\UI\Rangefinder.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M110_DEVICE_2_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_M110_DEVICE_2_LASER";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_M38_DEVICE_1_LASER: 26th_CIUSMC_BASE_LASER
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] AN/PEQ-16 India";
		model="26th_USMC_Weapons\Devices\M38_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M38_DEVICE_1_VIS_LIGHT";
		MRT_SwitchItemNextClass="26th_CIUSMC_M38_DEVICE_1_IR_DUAL_LOW";
		MRT_switchItemHintText="IR Laser";
	};
	class 26th_CIUSMC_M38_DEVICE_1_IR_DUAL_LOW: 26th_CIUSMC_BASE_IR_DUAL_LOW
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 India";
		model="26th_USMC_Weapons\Devices\M38_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M38_DEVICE_1_LASER";
		MRT_SwitchItemNextClass="26th_CIUSMC_M38_DEVICE_1_IR_DUAL_HIGH";
		MRT_switchItemHintText="IR Dual (Low)";
	};
	class 26th_CIUSMC_M38_DEVICE_1_IR_DUAL_HIGH: 26th_CIUSMC_BASE_IR_DUAL_HIGH
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 India";
		model="26th_USMC_Weapons\Devices\M38_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M38_DEVICE_1_IR_DUAL_LOW";
		MRT_SwitchItemNextClass="26th_CIUSMC_M38_DEVICE_1_VIS_LIGHT";
		MRT_switchItemHintText="IR Dual (High)";
	};
	class 26th_CIUSMC_M38_DEVICE_1_VIS_LIGHT: 26th_CIUSMC_BASE_VIS_LIGHT
	{
		scope=1;
		displayName="[USMC] AN/PEQ-16 India";
		model="26th_USMC_Weapons\Devices\M38_Side_1.p3d";
		picture="\26th_USMC_Weapons\UI\PEQ16.paa";
		MRT_SwitchItemPrevClass="26th_CIUSMC_M38_DEVICE_1_IR_DUAL_HIGH";
		MRT_SwitchItemNextClass="26th_CIUSMC_M38_DEVICE_1_LASER";
		MRT_switchItemHintText="Visible Light";
	};
	class InventoryUnderItem_Base_F;
	class bipod_01_F_blk;
	class CIUSMC_HARRIS: bipod_01_F_blk
	{
		author="Coal";
		scope=2;
		scopeArsenal=2;
		model="\26th_USMC_Weapons\Bipods\USMC_HARRIS.p3d";
		picture="\26th_USMC_Weapons\UI\Bipod.paa";
		displayName="[USMC] Harris Bipod";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="bipod";
			hasBipod=1;
			mass=10;
			type=302;
			soundBipodDown[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",
				0.707946,
				1,
				20
			};
			soundBipodUp[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",
				0.707946,
				1,
				20
			};
		};
		inertia=0.2;
		type=131072;
	};
	class InventoryOpticsItem_Base_F;
	class CIUSMC_SU230B: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Coal";
		inertia=0;
		displayName="[USMC] SU-230B";
		picture="\26th_USMC_Weapons\UI\Elcan.paa";
		model="\26th_USMC_Weapons\Scopes\Elcan_156.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			opticType=1;
			mass=15.5;
			RMBhint="Dual role Combat Sight";
			optics=15;
			modelOptics="\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230A";
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
					opticsZoomMin="0.25/6";
					opticsZoomMax=0.34999999;
					opticsZoomInit=0.34999999;
					discretefov[]=
					{
						0.34999999,
						"0.25/6"
					};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\26th_USMC_Weapons\Scopes\data\optic_SU230B_1x",
						"\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230A"
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
	class CIUSMC_Leupold_MK4: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] Leupold MK4";
		author="Coal";
		picture="\26th_USMC_Weapons\UI\M110.paa";
		model="26th_USMC_Weapons\Scopes\M110_Scope.p3d";
		weaponInfoType="CIUSMC_Rangefinder";
		descriptionShort="3.5-10";
		ACE_ScopeAdjust_Vertical[]={-25.5,25.5};
		ACE_ScopeAdjust_Horizontal[]={-25.5,25.5};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			mass=5;
			RMBhint="3.5-10 High Power Variable Optic";
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
					opticsZoomMin=0.013823333;
					opticsZoomMax=0.12441;
					opticsZoomInit=0.12441;
					discretefov[]={0.12441,0.093309999,0.062210001,0.04665,0.031102501,0.0233275,0.018662};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_3.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_4.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_6.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_8.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_12.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_16.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_20.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_27.p3d"
					};
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class CIUSMC_Leupold_MK4_CNVDT: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] Leupold MK4 CNVD-T";
		author="Coal";
		picture="\26th_USMC_Weapons\UI\M110_CNVDT.paa";
		model="26th_USMC_Weapons\Scopes\M110_Scope_CNVDT.p3d";
		weaponInfoType="CIUSMC_Rangefinder";
		descriptionShort="3.5-10";
		ACE_ScopeAdjust_Vertical[]={-25.5,25.5};
		ACE_ScopeAdjust_Horizontal[]={-25.5,25.5};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			mass=5;
			RMBhint="3.5-10 High Power Variable Optic";
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
					opticsZoomMin=0.013823333;
					opticsZoomMax=0.12441;
					opticsZoomInit=0.12441;
					discretefov[]={0.12441,0.093309999,0.062210001,0.04665,0.031102501,0.0233275,0.018662};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_3.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_4.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_6.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_8.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_12.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_16.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_20.p3d",
						"26th_USMC_Weapons\Scopes\data\A3_2d_optic_HP_3-27_27.p3d"
					};
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]=
					{
						"NVG",
						"TI"
					};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class CIUSMC_Optic_TS30A2: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Coal";
		displayName="[USMC] TS-30A2";
		picture="\26th_USMC_Weapons\UI\M38.paa";
		model="26th_USMC_Weapons\Scopes\M38_optic.p3d";
		weaponInfoType="";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			opticType=2;
			mass=15.5;
			RMBhint="Sniper Scope";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class USMC_TS30A2
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur2",
						"ace_spottingscope_OpticsRadBlur1"
					};
					opticsZoomMin=0.03125;
					opticsZoomMax=0.1;
					opticsZoomInit=0.1;
					discreteDistance[]={100};
					discreteDistanceInitIndex=2;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]=
					{
						"0.25/2.5",
						"0.25/4",
						"0.25/6",
						"0.25/8"
					};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"26th_USMC_Weapons\Scopes\data\mildot4.p3d",
						"26th_USMC_Weapons\Scopes\data\mildot6.p3d",
						"26th_USMC_Weapons\Scopes\data\mildot9.p3d",
						"26th_USMC_Weapons\Scopes\data\mildot12.p3d"
					};
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class USMC_TS30A2_ALT
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
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class CIUSMC_Optic_TS30A2_CNVDT: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Coal";
		displayName="[USMC] TS-30A2 CNVD-T";
		picture="\26th_USMC_Weapons\UI\M38_CNVDT.paa";
		model="26th_USMC_Weapons\Scopes\M38_optic_CNVDT.p3d";
		weaponInfoType="";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			opticType=2;
			mass=15.5;
			RMBhint="Sniper Scope";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class USMC_TS30A2
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur2",
						"ace_spottingscope_OpticsRadBlur1"
					};
					opticsZoomMin=0.03125;
					opticsZoomMax=0.1;
					opticsZoomInit=0.1;
					discreteDistance[]={100};
					discreteDistanceInitIndex=2;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]=
					{
						"0.25/2.5",
						"0.25/4",
						"0.25/6",
						"0.25/8"
					};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"26th_USMC_Weapons\Scopes\data\mildot4.p3d",
						"26th_USMC_Weapons\Scopes\data\mildot6.p3d",
						"26th_USMC_Weapons\Scopes\data\mildot9.p3d",
						"26th_USMC_Weapons\Scopes\data\mildot12.p3d"
					};
					memoryPointCamera="eye";
					visionMode[]=
					{
						"NVG",
						"TI"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class USMC_TS30A2_ALT
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
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class CIUSMC_optic_VCOG: ItemCore
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[USMC] SCO";
		picture="\26th_USMC_Weapons\UI\VCOG.paa";
		model="\26th_USMC_Weapons\scopes\VCOG.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			mass=10;
			opticType=2;
			optics=1;
			modelOptics="\26th_USMC_Weapons\scopes\data\reticle_VCOG_2x";
			class OpticsModes
			{
				class Over
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class VCOG
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.041999999;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={100};
					discreteDistanceInitIndex=2;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]={0.125,0.0625,0.041999999};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\26th_USMC_Weapons\scopes\data\reticle_VCOG_2x",
						"\26th_USMC_Weapons\scopes\data\reticle_VCOG_4x",
						"\26th_USMC_Weapons\scopes\data\reticle_VCOG_6x"
					};
					visionMode[]={};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
		inertia=0.2;
	};
	class CIUSMC_EXPS: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Coal";
		displayName="[USMC] Eotech EXPS";
		picture="\26th_USMC_Weapons\UI\EXPS.paa";
		model="26th_USMC_Weapons\Scopes\exps.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			opticType=1;
			mass=3;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class USMC_EXPS_OPTICS
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]={};
				};
				class USMC_EXPS_OPTICS_ALT
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsZoomMin=0.27500001;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class CIUSMC_G33_EXPS_DOWN: ItemCore
	{
		scope=1;
		displayName="[USMC] EoTech EXPS3 + G33";
		author="Coal";
		model="26th_USMC_Weapons\Scopes\G33_EXPS_DOWN.p3d";
		picture="\26th_USMC_Weapons\UI\EXPS_MAG.paa";
		descriptionShort="";
		MRT_SwitchItemPrevClass="CIUSMC_G33_EXPS_UP";
		MRT_SwitchItemNextClass="CIUSMC_G33_EXPS_UP";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class CIUSMC_G33_EXPS_UP: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] EoTech EXPS3 + G33";
		author="Coal";
		model="26th_USMC_Weapons\Scopes\G33_EXPS_UP.p3d";
		picture="\26th_USMC_Weapons\UI\EXPS_MAG.paa";
		descriptionShort="";
		MRT_SwitchItemPrevClass="CIUSMC_G33_EXPS_DOWN";
		MRT_SwitchItemNextClass="CIUSMC_G33_EXPS_DOWN";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			type=201;
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.15000001;
					opticsZoomMax=0.15000001;
					opticsZoomInit=0.15000001;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;
	class 26th_CIUSMC_SUPPRESSOR_BASE: muzzle_snds_H
	{
		scope=1;
		displayName="";
		author="Coal";
		picture="";
		model="";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			type=101;
			mass=13;
			inertia=0.1;
			class MagazineCoef
			{
				initSpeed=1.05;
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
			soundTypeIndex=1;
			muzzleEnd="zaslehpoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
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
		};
	};
	class 26th_CIUSMC_RC_WRAPPED_TAN: 26th_CIUSMC_SUPPRESSOR_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] Surefire RC2 Wrapped (Tan)";
		author="Coal";
		picture="\26th_USMC_Weapons\UI\TAN.paa";
		model="\26th_USMC_Weapons\Muzzles\RC_Wrapped_Tan.p3d";
	};
	class 26th_CIUSMC_RC_WRAPPED_MC: 26th_CIUSMC_SUPPRESSOR_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] Surefire RC2 Wrapped (MC)";
		author="Coal";
		picture="\26th_USMC_Weapons\UI\MC.paa";
		model="\26th_USMC_Weapons\Muzzles\RC_Wrapped_MC.p3d";
	};
	class 26th_CIUSMC_SOCOM_RC2_TAN: 26th_CIUSMC_SUPPRESSOR_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] Surefire RC2 (Tan)";
		author="Coal";
		picture="\26th_USMC_Weapons\UI\RC2_TAN.paa";
		model="\26th_USMC_Weapons\Muzzles\SOCOM_RC2_TAN.p3d";
	};
	class 26th_CIUSMC_SOCOM_RC2_BLK: 26th_CIUSMC_SUPPRESSOR_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] Surefire RC2 (Black)";
		author="Coal";
		picture="\26th_USMC_Weapons\UI\RC2_BLK.paa";
		model="\26th_USMC_Weapons\Muzzles\SOCOM_RC2_BLK.p3d";
	};
	class 26th_CIUSMC_M110_SUPPRESSOR: 26th_CIUSMC_SUPPRESSOR_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[USMC] M110 Suppressor";
		author="Coal";
		picture="\26th_USMC_Weapons\UI\SASS.paa";
		model="\26th_USMC_Weapons\Muzzles\SASS_Suppressor.p3d";
	};
};
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class RscText;
class RscInGameUI
{
	class RscUnitInfo;
	class CIUSMC_Rangefinder: RscUnitInfo
	{
		idd=-1;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=-1;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + (SafezoneY)";
			w="50 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc=198;
					style=0;
					sizeEx="0.04 * SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="LCD14";
					x="40 * 	(0.01875 * SafezoneH)";
					y="16 * 	(0.025 * SafezoneH)";
					w="6 * 	(0.01875 * SafezoneH)";
					h="1.5 * 	(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc=156;
					style=0;
					sizeEx="0.04 * SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="LCD14";
					x="40 * 	(0.01875 * SafezoneH)";
					y="14 * 	(0.025 * SafezoneH)";
					w="6 * 	(0.01875 * SafezoneH)";
					h="1.5 * 	(0.025 * SafezoneH)";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1778099282";
};

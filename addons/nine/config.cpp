////////////////////////////////////////////////////////////////////2/75RR]
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 17 14:17:59 2022 : 'file' last modified on Sun Mar 07 13:47:39 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Louetta_nine
	{
		requiredVersion = 0.1;
		units[] = {"Louetta_MATV_base","Louetta_MATV","Louetta_MATV_MK19","Louetta_MATV_M134"};
		weapons[] = {};
		requiredAddons[] = {"rhsusf_main","rhsusf_c_troops","rhsusf_c_heavyweapons"};
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgMagazines
{
	class 2000Rnd_65x39_Belt_Tracer_Red;
	class tfl_2000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt_Tracer_Red
	{
		count = 2000;
	};
};
class CfgWeapons
{
	class Default;
	class HMG_01;
	class HMG_M2: HMG_01
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class LMG_Minigun;
	class LMG_Minigun_Transport: LMG_Minigun
	{
		class manual;
	};
	class tfl_m134: LMG_Minigun_Transport
	{
		magazines[] = {"tfl_2000Rnd_65x39_Belt_Tracer_Red"};
		class gunParticles
		{
			class effect1
			{
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
				effectName = "MachineGunCartridge1";
			};
		};
		class manual: manual
		{
			reloadTime = 0.015;
			dispersion = 0.01;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"nine\weapon\tfl_minigun",20,0.9,1500,{25704,27159}};
				soundBegin[] = {"begin1",10};
			};
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			burst = 20;
			soundContinuous = 1;
			autoFire = 1;
		};
		class far: manual{};
		class medium: manual{};
		class close: manual{};
		class short: manual{};
	};
	class TFL_M2: HMG_M2
	{
		type = 1;
		magazineReloadTime = 25;
		ballisticsComputer = "2 + 16";
		canLock = 0;
		initspeed = 0;
		cursor = "EmptyCursor";
		cursoraimon = "EmptyCursor";
		magazines[] = {"rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Green","rhs_mag_100rnd_127x99_mag_Tracer_Yellow","rhs_mag_100rnd_127x99_SLAP_mag","rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red","rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green","rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow","rhs_mag_200rnd_127x99_mag","rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_SLAP_mag","rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red","rhs_mag_400rnd_127x99_mag","rhs_mag_400rnd_127x99_mag_Tracer_Red","rhs_mag_400rnd_127x99_SLAP_mag","rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red"};
		class GunParticles
		{
			class effect1
			{
				positionname = "usti hlavne";
				directionname = "konec hlavne";
				effectname = "MachineGunCloud";
			};
			class effect2
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectname = "MachineGunEject";
			};
			class effect3
			{
				positionname = "nabojnicestart2";
				directionname = "nabojniceend2";
				effectname = "MachineGunCartridge2";
			};
			class RHSUSF_BarrelRefract
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RHSUSF_BarrelRefractHeavy";
			};
		};
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"jsrs_m2_vehicle_shot_soundset","jsrs_hmg_reverb_soundset"};
			};
		};
		class close: close{};
		class short: short{};
		class medium: medium{};
		class far: far{};
		reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class ViewOptics;
		class EventHandlers;
		class CargoTurret;
		class Components;
	};
	class MRAP_01_base_F: Car_F
	{
		class EventHandlers;
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
		};
	};
	class Louetta_MATV_base: MRAP_01_base_F
	{
		author = "Louetta";
		mapSize = 9.42;
		nameSound = "veh_vehicle_MRAP_s";
		tf_RadioType_api = "tf_rt1523g";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.5;
		tf_range = 5000000;
		insideSoundCoef = 0.040000003;
		_generalMacro = "Louetta_MATV_base";
		displayName = "[2nd Batt 75th Rangers] M-ATV SOF M2 CROWS";
		class Library
		{
			libTextDesc = "";
		};
		model = "nine\MATV.p3d";
		editorSubcategory = "EdSubcat_Cars";
		picture = "\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		Icon = "\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		transportMaxBackpacks = 5;
		vehicleClass = "Car";
		transportSoldier = 3;
		crewVulnerable = 0;
		crewCrashProtection = 1.35;
		crewExplosionProtection = 0.9999;
		maxFordingDepth = -0.7;
		enableRadio = 1;
		enableGPS = 1;
		selectionBrakeLights = "light_brake";
		hullDamageCauseExplosion = 1;
		armorStructural = 16;
		armor = 250;
		cost = 500000;
		threat[] = {0.1,0.1,0.1};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		driverCompartment = "Compartment1";
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_RB","Door_LB"};
		memoryPointsGetInCargo[] = {"pos cargo","pos cargo3","pos cargo2"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir","pos cargo3 dir","pos cargo2 dir"};
		cargoCompartments[] = {"Compartment1","Compartment1","Compartment1"};
		class CargoTurret;
		class Turrets
		{
			class CROWS_Turret: NewTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				turretInfoType = "RHS_RscM153_CROWS";
				usePip = 1;
				headAimDown = 22;
				discreteDistance[] = {100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex = 2;
				soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",0.17782794,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",0.17782794,1,10};
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {};
				magazines[] = {};
				minElev = -20;
				maxElev = 60;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				gunnerAction = "RHS_MATV_CROWSgunner";
				gunnerInAction = "RHS_MATV_CROWSgunner";
				viewGunnerInExternal = 1;
				gunnerGetInAction = "GetInMRAP_01_cargo";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerDoor = "Door_LB";
				gunnerCompartments = "Compartment1";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				canHideGunner = 1;
				forceHideGunner = 1;
				startEngine = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "PIP0_dir";
				memoryPointGunnerOutOptics = "PIP0_dir";
				gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
				gunnerOutOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
				disableSoundAttenuation = 1;
				animationSourceStickX = "gunner_stick_trav";
				animationSourceStickY = "gunner_stick_elev";
				outGunnerMayFire = 1;
				gunnerRightHandAnimName = "gunner_stick";
				memoryPointsGetInGunner = "pos cargo2";
				memoryPointsGetInGunnerDir = "pos cargo2 dir";
				class ViewOptics: RCWSOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					minFov = 0.0083333;
					maxFov = 0.25;
					initFov = 0.25;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {2,3};
				};
				class OpticsIn
				{
					class DaysightWFOV: ViewOptics
					{
						opticsDisplayName = "1.0x";
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
						visionMode[] = {"Normal","Ti"};
						hitpoint = "Hit_Optic_CROWS_Day";
						initFov = 0.7;
						minFov = 0.7;
						maxFov = 0.7;
					};
					class ThermalWFOV: DaysightWFOV
					{
						opticsDisplayName = "4.3x";
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						hitpoint = "Hit_Optic_CROWS_TI";
						initFov = 0.162791;
						minFov = 0.162791;
						maxFov = 0.162791;
					};
					class ThermalNFOV: ThermalWFOV
					{
						opticsDisplayName = "12.5x";
						initFov = 0.056;
						minFov = 0.056;
						maxFov = 0.056;
					};
					class DaysightNFOV: DaysightWFOV
					{
						opticsDisplayName = "15.0x";
						initFov = 0.0466667;
						minFov = 0.0466667;
						maxFov = 0.0466667;
					};
					class DaysightVNFOV: DaysightWFOV
					{
						opticsDisplayName = "30.0x";
						initFov = 0.0233333;
						minFov = 0.0233333;
						maxFov = 0.0233333;
					};
				};
				class Hitpoints
				{
					class Hit_Optic_CROWS_Day
					{
						armor = -40;
						explosionShielding = 0;
						name = "";
						visual = "vis_optic_CROWS_Day";
						armorComponent = "Hit_Optic_CROWS_Day";
						passThrough = 0;
					};
					class Hit_Optic_CROWS_TI
					{
						armor = -40;
						explosionShielding = 0;
						name = "";
						visual = "vis_optic_CROWS_TI";
						armorComponent = "Hit_Optic_CROWS_TI";
						passThrough = 0;
					};
					class Hit_Optic_CROWS_LRF
					{
						armor = -40;
						explosionShielding = 0;
						name = "";
						visual = "vis_optic_CROWS_LRF";
						armorComponent = "Hit_Optic_CROWS_LRF";
						passThrough = 0;
					};
					class HitTurret
					{
						armor = -120;
						minimalHit = -0.13;
						explosionShielding = 0.5;
						name = "";
						visual = "vis_turret";
						armorComponent = "Hit_Turret";
						passThrough = 0;
					};
					class HitGun
					{
						armor = -120;
						minimalHit = -0.13;
						explosionShielding = 0.5;
						name = "";
						visual = "vis_gun";
						armorComponent = "Hit_Gun";
						passThrough = 0;
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				weapons[] = {"rhsusf_weap_DummyLauncher"};
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction = "passenger_flatground_1";
				isPersonTurret = 1;
				inGunnerMayFire = 0;
				rhs_hatch_control = 1;
				animationSourceHatch = "FFV_L";
				enabledByAnimationSource = "FFV_L_door";
				gunnerGetInAction = "GetInMantis";
				gunnerGetOutAction = "GetOutMantis";
				memoryPointsGetInGunner = "pos cargoffvL";
				memoryPointsGetInGunnerDir = "pos cargoffvL dir";
				gunnerName = "Passenger (Rear Left)";
				gunnerCompartments = "Compartment1";
				gunnerDoor = "DoorB";
				memoryPointGunnerOptics = "";
				selectionFireAnim = "";
				canHideGunner = 0;
				commanding = -2;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				allowLauncherOut = 1;
				proxyIndex = 4;
				maxElev = 85;
				minElev = -85;
				maxTurn = 61;
				minTurn = -65;
				class TurnIn
				{
					limitsArrayTop[] = {{44.8469,-89.7804},{45,84.7936}};
					limitsArrayBottom[] = {{-14.8031,-119.2046},{-33.0536,118.3221}};
				};
				class TurnOut
				{
					limitsArrayTop[] = {{44.8469,-89.7804},{45,84.7936}};
					limitsArrayBottom[] = {{-14.8031,-119.2046},{-33.0536,118.3221}};
				};
				class Hitpoints{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				animationSourceHatch = "FFV_R";
				enabledByAnimationSource = "FFV_R_door";
				gunnerInAction = "passenger_flatground_4";
				proxyIndex = 5;
				memoryPointsGetInGunner = "pos cargoffvR";
				memoryPointsGetInGunnerDir = "pos cargoffvR dir";
				gunnerName = "Passenger (Rear Right)";
				class TurnIn
				{
					limitsArrayTop[] = {{45,-89.204},{44.7531,110.7736}};
					limitsArrayBottom[] = {{-12.3923,-86.5262},{-19.7157,115.0205}};
				};
			};
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class Reflectors
		{
			class Left
			{
				color[] = {1.9,1.8,1.7};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 30;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.05;
					hardLimitStart = 50;
					hardLimitEnd = 80;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
			class Right3: Right2
			{
				position = "light_R_flare2";
				flareSize = 0.3;
				hitpoint = "Light_R2";
				selection = "Light_R2";
			};
			class Left3: Left2
			{
				position = "light_L_flare2";
				flareSize = 0.3;
				hitpoint = "Light_L2";
				selection = "Light_L2";
			};
			class RFlood: Right2
			{
				position = "light_Rflood_flare";
				flareSize = 0.3;
				hitpoint = "Light_R2";
				selection = "Light_Rflood";
				direction = "Light_Rflood_end";
			};
			class LFlood: Left2
			{
				position = "light_Lflood_flare";
				flareSize = 0.3;
				hitpoint = "Light_L2";
				selection = "Light_Lflood";
				direction = "Light_Lflood_end";
			};
			class BFlood: Left2
			{
				position = "light_Bflood_flare";
				flareSize = 0.3;
				hitpoint = "Light_L2";
				selection = "Light_Rflood";
				direction = "Light_Bflood_end";
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2","Left3","Right3"}};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_pos";
				direction = "exhaust_dir";
				effect = "ExhaustEffectHTruck";
			};
		};
		hiddenSelections[] = {"Camo","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","","BFT_screen"};
		hiddenSelectionsTextures[] = {"nine\tex\matv_a.paa","nine\tex\matv_wheels_a.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co.paa","nine\tex\m153_co.paa","nine\tex\rhsusf_matv_sof_d_co.paa","nine\tex\front_bar_co.paa","nine\tex\cable_b_01_co.paa","nine\tex\matv_mirror_co.paa","nine\tex\ammo_carrier_co.paa","nine\tex\side_carrier_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"nine\mat\MATV_base.rvmat","nine\mat\MATV_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\MATV_Wheels_base.rvmat","nine\mat\MATV_Wheels_damage.rvmat","a3\data_f\destruct\default_destruct_wheels.rvmat","nine\mat\MATV_interior_base.rvmat","nine\mat\MATV_interior_damage.rvmat","a3\data_f\destruct\default_destruct_interior.rvmat","nine\mat\Hatch_base.rvmat","nine\mat\Hatch_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","A3\Data_F\Glass_veh.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","a3\data_f\penetration\glass_armored_plate.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","nine\mat\rhsusf_matv_ext.rvmat","nine\mat\rhsusf_matv_ext_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\m153.rvmat","nine\mat\m153.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\cable.rvmat","nine\mat\cable_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\matv_mirror.rvmat","nine\mat\matv_mirror_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\raytheon.rvmat","nine\mat\raytheon_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\front_bar.rvmat","nine\mat\front_bar_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\rhsusf_matv_sof.rvmat","nine\mat\rhsusf_matv_sof_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\side_carrier.rvmat","nine\mat\side_carrier_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\ammo_carrier.rvmat","nine\mat\ammo_carrier_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat","nine\mat\jerrycan.rvmat","nine\mat\jerrycan_damage.rvmat","a3\data_f\destruct\default_destruct_exterior.rvmat"};
		};
		class textureSources
		{
			class desert
			{
				displayName = "Tan Dirty";
				author = "TFL";
				textures[] = {"nine\tex\matv_a.paa","nine\tex\matv_wheels_a.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co.paa","nine\tex\m153_co.paa","nine\tex\rhsusf_matv_sof_d_co.paa","nine\tex\front_bar_co.paa","nine\tex\cable_b_01_co.paa","nine\tex\matv_mirror_co.paa","nine\tex\ammo_carrier_co.paa","nine\tex\side_carrier_co.paa"};
				factions[] = {};
			};
			class clean
			{
				displayName = "Tan";
				author = "TFL";
				textures[] = {"nine\tex\matv_cln.paa","nine\tex\matv_wheels_blk.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co_cln.paa","nine\tex\m153_co_cln.paa","nine\tex\rhsusf_matv_sof_cln_co.paa","nine\tex\front_bar_cln_co.paa","nine\tex\cable_cln_01_co.paa","nine\tex\matv_mirror_cln_co.paa","nine\tex\ammo_carrier_cln_co.paa","nine\tex\side_carrier_cln_co.paa"};
				factions[] = {};
			};
			class snow
			{
				displayName = "Snow";
				author = "TFL";
				textures[] = {"nine\tex\matv_snw.paa","nine\tex\matv_wheels_snw.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co_cln.paa","nine\tex\m153_co_cln.paa","nine\tex\rhsusf_matv_sof_snw_co.paa","nine\tex\front_bar_snw_co.paa","nine\tex\cable_snw_01_co.paa","nine\tex\matv_mirror_snw_co.paa","nine\tex\ammo_carrier_cln_co.paa","nine\tex\side_carrier_cln_co.paa"};
				factions[] = {};
			};
			class black
			{
				displayName = "Black";
				author = "TFL";
				textures[] = {"nine\tex\matv_blk.paa","nine\tex\matv_wheels_blk.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co_blk.paa","nine\tex\m153_co_blk.paa","nine\tex\rhsusf_matv_sof_b_co.paa","nine\tex\front_bar_blk_co.paa","nine\tex\cable_blk_01_co.paa","nine\tex\matv_mirror_blk_co.paa","nine\tex\ammo_carrier_blk_co.paa","nine\tex\side_carrier_blk_co.paa"};
				factions[] = {};
			};
			class black2
			{
				displayName = "Black 02";
				author = "TFL";
				textures[] = {"nine\tex\matv_blk.paa","nine\tex\matv_wheels_blk.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co_blk.paa","nine\tex\m153_co.paa","nine\tex\rhsusf_matv_sof_b_co.paa","nine\tex\front_bar_blk_co.paa","nine\tex\cable_blk_01_co.paa","nine\tex\matv_mirror_blk_co.paa","nine\tex\ammo_carrier_blk_co.paa","nine\tex\side_carrier_blk_co.paa"};
				factions[] = {};
			};
			class black3
			{
				displayName = "Black 03";
				author = "TFL";
				textures[] = {"nine\tex\matv_blk.paa","nine\tex\matv_wheels_blk.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co_blk.paa","nine\tex\m153_co.paa","nine\tex\rhsusf_matv_sof_b_co.paa","nine\tex\front_bar_blk_co.paa","nine\tex\cable_blk_01_co.paa","nine\tex\matv_mirror_blk_co.paa","nine\tex\ammo_carrier_blk_co.paa","nine\tex\side_carrier_co.paa"};
				factions[] = {};
			};
			class black4
			{
				displayName = "Black 04";
				author = "TFL";
				textures[] = {"nine\tex\matv_blk.paa","nine\tex\matv_wheels_blk.paa","nine\tex\matv_interior_a.paa","nine\tex\rhsusf_matv_ext_co_blk.paa","nine\tex\m153_co_blk.paa","nine\tex\rhsusf_matv_sof_b_co.paa","nine\tex\front_bar_blk_co.paa","nine\tex\cable_blk_01_co.paa","nine\tex\matv_mirror_blk_co.paa","nine\tex\ammo_carrier_blk_co.paa","nine\tex\side_carrier_co.paa"};
				factions[] = {};
			};
		};
		class AnimationSources: AnimationSources
		{
			class camonet_hide
			{
				displayName = "Remove Camo Net";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class Spare_wheel
			{
				displayName = "Remove Spare Wheel";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = 0;
			};
			class one_hide
			{
				displayName = "Remove Black 1";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class two_hide
			{
				displayName = "Remove Black 2";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class three_hide
			{
				displayName = "Remove Black 3";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class four_hide
			{
				displayName = "Remove Black 4";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class five_hide
			{
				displayName = "Remove Black 5";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class one_w_hide
			{
				displayName = "Remove Grey 1";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class two_w_hide
			{
				displayName = "Remove Grey 2";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class three_w_hide
			{
				displayName = "Remove Grey 3";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class four_w_hide
			{
				displayName = "Remove Grey 4";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class five_w_hide
			{
				displayName = "Remove Grey 5";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class basilisk_hide
			{
				displayName = "Remove Black Basilisk";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class leviathan_hide
			{
				displayName = "Remove Black Leviathan";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class kraken_hide
			{
				displayName = "Remove Right Black Kraken";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class kraken_2_hide
			{
				displayName = "Remove Left Black Kraken";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class basilisk_w_hide
			{
				displayName = "Remove Grey Basilisk";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class leviathan_w_hide
			{
				displayName = "Remove Grey Leviathan";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class kraken_w_hide
			{
				displayName = "Remove Right Grey Kraken";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class kraken_w_2_hide
			{
				displayName = "Remove Left Grey Kraken";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class ISOF_hide
			{
				displayName = "Remove ISOF Marker";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class bar_hide
			{
				displayName = "Remove Lower Bumper";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = 0;
			};
			class front1_hide
			{
				displayName = "Remove Tow Setup 1";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = 0;
			};
			class front2_hide
			{
				displayName = "Remove Tow Setup 2";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class front3_hide
			{
				displayName = "Remove Tow Setup 3";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class UGV_hide
			{
				displayName = "Remove Craig";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class tube_hide
			{
				displayName = "Remove M136";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class ammobox50_hide
			{
				displayName = "Remove .50 Ammo Cans";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = 0;
			};
			class eggbeater_hide
			{
				displayName = "Remove Egg Beater Satcom";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = 0;
			};
			class light_stop
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
			class light_flood
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 1;
			};
			class raytheon_hide
			{
				displayName = "Remove Raytheon Boomerang";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class HWR_hide
			{
				displayName = "Remove HWR";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class SD_hide
			{
				displayName = "Remove S&D";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class Skull_hide
			{
				displayName = "Remove Skull";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class HWR_r_hide
			{
				displayName = "Remove HWR Red";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class cad_hide
			{
				displayName = "Remove C&D";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class meme_hide
			{
				displayName = "Remove Meme";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class rear1_hide
			{
				displayName = "Remove SOF Compartment Set 1";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class rear2_hide
			{
				displayName = "Remove SOF Compartment Set 2";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class rear3_hide
			{
				displayName = "Remove SOF Compartment Set 3";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class rear4_hide
			{
				displayName = "Remove SOF Compartment Set 4";
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				mass = 0;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "TFL_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "TFL_M2";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "TFL_M2";
			};
			class muzzle_hide_cannon: recoil_source
			{
				source = "reload";
				weapon = "TFL_M2";
			};
			class muzzle_rot_cannon: recoil_source
			{
				source = "ammorandom";
				weapon = "TFL_M2";
			};
			class HitLFWheel_health
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitLBWheel_health
			{
				source = "Hit";
				hitpoint = "HitLBWheel";
				raw = 1;
			};
			class HitRFWheel_health
			{
				source = "Hit";
				hitpoint = "HitRFWheel";
				raw = 1;
			};
			class HitRBWheel_health
			{
				source = "Hit";
				hitpoint = "HitRBWheel";
				raw = 1;
			};
			class HitReserveWheel
			{
				source = "Hit";
				hitpoint = "HitReserveWheel";
				raw = 1;
			};
			class Door_LF
			{
				displayName = "Open Left Front Door";
				source = "door";
				animPeriod = 0.8;
				sound = "RHSUSF_Truck_Door";
				soundPosition = "osa_dvere_lp";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "osa_dvere_pp";
				displayName = "Open Right Front Door";
			};
			class Door_LB: Door_LF
			{
				soundPosition = "osa_dvere_pp";
				displayName = "Open Left Rear Door";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "osa_dvere_pp";
				displayName = "Open Right Rear Door";
			};
			class hitglass1_health
			{
				source = "Hit";
				hitpoint = "glass1";
				raw = 1;
			};
			class hitglass2_health
			{
				source = "Hit";
				hitpoint = "glass2";
				raw = 1;
			};
			class hitglass3_health
			{
				source = "Hit";
				hitpoint = "glass3";
				raw = 1;
			};
			class hitglass4_health
			{
				source = "Hit";
				hitpoint = "glass4";
				raw = 1;
			};
			class hitglass5_health
			{
				source = "Hit";
				hitpoint = "glass5";
				raw = 1;
			};
			class hitglass6_health
			{
				source = "Hit";
				hitpoint = "glass6";
				raw = 1;
			};
			class BFT_Map_Scale
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0.1;
			};
			class BFT_Map_Move_X
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class BFT_Map_Move_Y
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
		class UVAnimations
		{
			class BFT_Map_Scale
			{
				type = "scale";
				section = "BFT_screen";
				source = "BFT_Map_Scale";
				minValue = 0;
				maxValue = 1;
				center[] = {1,1};
				scale0[] = {0,0};
				scale1[] = {1,1};
			};
			class BFT_Map_Move_X
			{
				section = "BFT_screen";
				type = "translation";
				source = "BFT_Map_Move_X";
				maxValue = 100;
				center[] = {1,0};
				offset0[] = {0,0};
				offset1[] = {100,0};
			};
			class BFT_Map_Move_Y: BFT_Map_Move_X
			{
				source = "BFT_Map_Move_Y";
				maxValue = 100;
				offset0[] = {0,0};
				offset1[] = {0,-100};
			};
			class BFT_Map_Rotate: BFT_Map_Scale
			{
				type = "rotate";
				source = "direction";
				minValue = "rad -180";
				maxValue = "rad 180";
				angle0 = "rad -180";
				angle1 = "rad 180";
			};
		};
		class UserActions
		{
			class light_stop_off
			{
				position = "pos_driverpos";
				radius = 2;
				onlyForplayer = 0;
				showwindow = 0;
				displayName = "Stop Light off";
				condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_stop'<0.5";
				statement = "this animate ['light_stop', 1]";
			};
			class light_stop_on
			{
				position = "pos_driverpos";
				radius = 2;
				onlyForplayer = 0;
				showwindow = 0;
				displayName = "Stop Light on";
				condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_stop'==1";
				statement = "this animate ['light_stop', 0]";
			};
			class light_flood_on
			{
				displayName = "Flood Lights on";
				position = "pos_driverpos";
				radius = 2;
				onlyForplayer = 0;
				showwindow = 0;
				condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_flood'==1;";
				statement = "this animate ['light_flood', 0]";
			};
			class light_flood_off: light_flood_on
			{
				displayName = "Flood Lights off";
				condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_flood'<0.5;";
				statement = "this animate ['light_flood', 1]";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				radius = 0.33;
				visual = "wheel_1_1_damage";
				armorComponent = "wheel_1_1_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLBWheel: HitLF2Wheel
			{
				radius = 0.33;
				visual = "wheel_1_2_damage";
				armorComponent = "wheel_1_2_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius = 0.33;
				visual = "wheel_2_1_damage";
				armorComponent = "wheel_2_1_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRBWheel: HitRF2Wheel
			{
				radius = 0.33;
				visual = "wheel_2_2_damage";
				armorComponent = "wheel_2_2_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitBody
			{
				armor = 6;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 0.4;
				minimalHit = 0.01;
				explosionShielding = 1.5;
				radius = 0.45;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.2;
				explosionShielding = 0.6;
				radius = 0.25;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				armorComponent = "hit_engine";
				name = "motor";
				visual = "-";
				passThrough = 0.3;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.45;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				armorComponent = "hit_fuel";
				name = "palivo";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitCamo
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_hull";
				name = "karoserie";
				visual = "Camo";
				passThrough = 0;
				minimalHit = 0.05;
				explosionShielding = 2;
				radius = 0.25;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1.5;
				visual = "glass1";
				armorComponent = "glass1";
				passThrough = 0.1;
				radius = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1.5;
				visual = "glass2";
				armorComponent = "glass2";
				explosionShielding = 3;
				passThrough = 0.1;
				radius = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1.5;
				visual = "glass3";
				armorComponent = "glass3";
				explosionShielding = 3;
				passThrough = 0.1;
				radius = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1.5;
				visual = "glass4";
				armorComponent = "glass4";
				explosionShielding = 3;
				passThrough = 0.1;
				radius = 0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor = 1.5;
				visual = "glass5";
				armorComponent = "glass5";
				explosionShielding = 3;
				passThrough = 0.1;
				radius = 0.25;
			};
			class HitGlass6: HitGlass6
			{
				armor = 1.5;
				visual = "glass6";
				armorComponent = "glass6";
				explosionShielding = 3;
				passThrough = 0.1;
				radius = 0.25;
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					point = "lightpoint_1";
					color[] = {20,30,30};
					ambient[] = {1,1,1};
					intensity = 2.5;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					drawLight = 0;
					activeLight = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 0.05;
						hardLimitEnd = 0.1;
					};
				};
				class Light2: Light1
				{
					point = "lightpoint_2";
				};
				class Light3: Light1
				{
					point = "lightpoint_3";
				};
				class Light_bft: Light1
				{
					point = "lightpoint_bft";
					color[] = {20,30,30};
					ambient[] = {1,3,3};
					intensity = 5.5;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 0.15;
						hardLimitEnd = 0.31;
					};
				};
			};
		};
		wheelDamageThreshold = 0.18;
		wheelDamageRadiusCoef = 0.75;
		wheelDestroyRadiusCoef = 0.48;
		driverAction = "driver_MRAP_01";
		cargoAction[] = {"passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands"};
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutMRAP_01";
		cargoGetInAction[] = {"GetInMRAP_01_cargo"};
		cargoGetOutAction[] = {"GetOutMRAP_01"};
		sensorPosition = "sensorPos";
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		terrainCoef = 1.5;
		turnCoef = 3;
		precision = 10;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		weapons[] = {"TruckHorn2","rhsusf_weap_duke"};
		magazines[] = {"rhsusf_mag_duke","rhsusf_mag_duke","rhsusf_mag_duke","rhsusf_mag_duke","rhsusf_mag_duke"};
		class RenderTargets
		{
			class mirrors_Left
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
				BBoxes[] = {"PIP_4_TL","PIP_4_TR","PIP_4_BL","PIP_4_BR"};
			};
			class mirrors_Right
			{
				renderTarget = "rendertarget5";
				class CameraView1
				{
					pointPosition = "PIP5_pos";
					pointDirection = "PIP5_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
				BBoxes[] = {"PIP_5_TL","PIP_5_TR","PIP_5_BL","PIP_5_BR"};
			};
			class mirrors_Left_2
			{
				renderTarget = "rendertarget6";
				class CameraView1
				{
					pointPosition = "PIP6_pos";
					pointDirection = "PIP6_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class mirrors_Right_2
			{
				renderTarget = "rendertarget7";
				class CameraView1
				{
					pointPosition = "PIP7_pos";
					pointDirection = "PIP7_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class Gunner_display
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 2;
					renderQuality = 2;
					fov = 0.7;
					turret[] = {0};
				};
				BBoxes[] = {"PIP_3_TL","PIP_3_TR","PIP_3_BL","PIP_3_BR"};
			};
		};
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 112;
		fuelCapacity = 26;
		wheelCircumference = 3.924;
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		idleRpm = 800;
		redRpm = 4500;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.182,"N",0,"D1",4.182,"D2",2.318,"D3",1.85,"D4",1.65,"D5",1.45};
			TransmissionRatios[] = {"High",5.539};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 3;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.85},{0.4,0.9},{0.5,1},{0.725,0.95},{0.85,0.6},{1,0.3}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_1_1";
				steering = 1;
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.35";
				mass = 150;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 22500;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				maxDroop = 0.15;
				sprungMass = 1566;
				springStrength = 201234;
				springDamperRate = 20600.6;
				longitudinalStiffnessPerUnitGravity = 5000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2";
				steering = 0;
				sprungMass = 2266;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 275000;
			};
			class RF: LF
			{
				side = "right";
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_2_1";
				center = "wheel_2_1_axis";
				sprungMass = 1566;
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				maxCompression = 0.11000001;
				maxDroop = 0.11000001;
			};
			class RR: RF
			{
				boneName = "wheel_2_2";
				steering = 0;
				sprungMass = 2266;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 275000;
			};
		};
		attenuationeffecttype = "jsrs_mrap_attenuation";
		soundgetin[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\handling\getin\mrap_1.ogg",0.5,1};
		soundgetout[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\handling\getout\mrap_1.ogg",0.5,1,40};
		sounddammage[] = {".ogg",0.5,1};
		soundengineonint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\mrap_01\mrap_01_start_int.ogg",1,1};
		soundengineonext[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\mrap_01\mrap_01_start_ext.ogg",1,1,125};
		soundengineoffint[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\mrap_01\mrap_01_shut_int.ogg",1,1};
		soundengineoffext[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\mrap_01\mrap_01_shut_ext.ogg",1,1,100};
		buildcrash0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_building_01.ogg",1.5,1,300};
		buildcrash1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_building_02.ogg",1.5,1,300};
		buildcrash2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_building_03.ogg",1.5,1,300};
		buildcrash3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_building_04.ogg",1.5,1,300};
		soundbuildingcrash[] = {"buildcrash0",0.25,"buildcrash1",0.25,"buildcrash2",0.25,"buildcrash3",0.25};
		woodcrash0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_mix_wood_01.ogg",1.5,1,300};
		woodcrash1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_mix_wood_02.ogg",1.5,1,300};
		woodcrash2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_mix_wood_03.ogg",1.5,1,300};
		woodcrash3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_mix_wood_04.ogg",1.5,1,300};
		woodcrash4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_mix_wood_05.ogg",1.5,1,300};
		woodcrash5[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_mix_wood_06.ogg",1.5,1,300};
		soundwoodcrash[] = {"woodcrash0",0.166,"woodcrash1",0.166,"woodcrash2",0.166,"woodcrash3",0.166,"woodcrash4",0.166,"woodcrash5",0.166};
		armorcrash0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_01.ogg",1.5,1,300};
		armorcrash1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_02.ogg",1.5,1,300};
		armorcrash2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_03.ogg",1.5,1,300};
		armorcrash3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_04.ogg",1.5,1,300};
		soundarmorcrash[] = {"armorcrash0",0.25,"armorcrash1",0.25,"armorcrash2",0.25,"armorcrash3",0.25};
		crash0[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_01.ogg",1.5,1,300};
		crash1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_02.ogg",1.5,1,300};
		crash2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_03.ogg",1.5,1,300};
		crash3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_04.ogg",1.5,1,300};
		crash4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\noises\crash_light\crash_vehicle_05.ogg",1.5,1,300};
		soundcrashes[] = {"crash0",0.2,"crash1",0.2,"crash2",0.2,"crash3",0.2,"crash4",0.2};
		class sounds
		{
			soundsetsint[] = {"jsrs_mrap_01_idle_interior_soundset","jsrs_mrap_01_low_interior_soundset","jsrs_mrap_01_high_interior_soundset","jsrs_mrap_01_start_interior_soundset","jsrs_vehicle_interior_silent_soundset","jsrs_wheeled_driving_noises_soundset","jsrs_wheeled_offroad_driving_noises_soundset","jsrs_light_vehicle_rain_int_soundset","jsrs_wheeled_medium_rattle_int_soundset","jsrs_wheeled_medium_offroad_rattle_int_soundset","jsrs_tires_asphalt_slow_int_soundset","jsrs_tires_asphalt_fast_int_soundset","jsrs_tires_offroad_slow_int_soundset","jsrs_tires_offroad_fast_int_soundset","jsrs_tires_grass_int_soundset","jsrs_medium_vehicle_water_moving_int_soundset"};
			soundsetsext[] = {"jsrs_mrap_01_idle_exterior_soundset","jsrs_mrap_01_low_exterior_soundset","jsrs_mrap_01_high_exterior_soundset","jsrs_mrap_01_start_exterior_soundset","jsrs_mrap_01_distance_soundset","jsrs_light_vehicle_rain_ext_soundset","jsrs_wheeled_medium_rattle_ext_soundset","jsrs_wheeled_medium_offroad_rattle_ext_soundset","jsrs_tires_asphalt_slow_ext_soundset","jsrs_tires_asphalt_fast_ext_soundset","jsrs_tires_offroad_slow_ext_soundset","jsrs_tires_offroad_fast_ext_soundset","jsrs_tires_grass_ext_soundset","jsrs_tires_close_dry_soundset","jsrs_tires_close_wet_soundset","jsrs_tires_distance_soundset","jsrs_light_vehicle_water_moving_ext_soundset"};
		};
		extCameraPosition[] = {0,2.2,-8};
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class Components;
	};
	class Louetta_MATV: Louetta_MATV_base
	{
		author = "Louetta x Zahra";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MRAP_01_F.jpg";
		_generalMacro = "Louetta_MATV";
		scope = 2;
		scopeCurator = 2;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[] = {"TFL_M2"};
				magazines[] = {"rhs_mag_400rnd_127x99_mag_Tracer_Red","rhs_mag_400rnd_127x99_mag_Tracer_Red","rhs_mag_400rnd_127x99_mag_Tracer_Red","rhs_mag_400rnd_127x99_mag_Tracer_Red","rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red","rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red","rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red","rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red"};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
		side = 1;
		faction = "BLU_F";
		unitInfoType = "RscUnitInfoNoWeapon";
		threat[] = {0.1,0.1,0.1};
	};
	class Louetta_MATV_MK19: Louetta_MATV_base
	{
		author = "Louetta x Zahra";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MRAP_01_F.jpg";
		_generalMacro = "Louetta_MATV_MK19";
		scope = 2;
		displayName = "[2nd Batt 75th Rangers] M-ATV SOF MK-19 CROWS";
		model = "nine\MATV_MK19.p3d";
		scopeCurator = 2;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "RHS_MK19_CROWS_M153";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "RHS_MK19_CROWS_M153";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "RHS_MK19_CROWS_M153";
			};
			class muzzle_hide_cannon: recoil_source
			{
				source = "reload";
				weapon = "RHS_MK19_CROWS_M153";
			};
			class muzzle_rot_cannon: recoil_source
			{
				source = "ammorandom";
				weapon = "RHS_MK19_CROWS_M153";
			};
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[] = {"RHS_MK19_CROWS_M153"};
				magazines[] = {"RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M430A1","RHS_96Rnd_40mm_MK19_M1001","RHS_96Rnd_40mm_MK19_M1001"};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
		side = 1;
		faction = "BLU_F";
		unitInfoType = "RscUnitInfoNoWeapon";
		threat[] = {0.1,0.1,0.1};
	};
	class Louetta_MATV_M134: Louetta_MATV_base
	{
		author = "Louetta x Zahra";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MRAP_01_F.jpg";
		_generalMacro = "Louetta_MATV_M134";
		scope = 2;
		displayName = "[2nd Batt 75th Rangers] M-ATV SOF M134 CROWS";
		model = "nine\alt\MATV.p3d";
		scopeCurator = 2;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "tfl_m134";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "tfl_m134";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "tfl_m134";
			};
			class muzzle_hide_cannon: recoil_source
			{
				source = "reload";
				weapon = "tfl_m134";
			};
			class muzzle_rot_cannon: recoil_source
			{
				source = "ammorandom";
				weapon = "tfl_m134";
			};
			class minigun
			{
				source = "revolving";
				weapon = "tfl_m134";
			};
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[] = {"tfl_m134"};
				magazines[] = {"tfl_2000Rnd_65x39_Belt_Tracer_Red","tfl_2000Rnd_65x39_Belt_Tracer_Red","tfl_2000Rnd_65x39_Belt_Tracer_Red","tfl_2000Rnd_65x39_Belt_Tracer_Red","tfl_2000Rnd_65x39_Belt_Tracer_Red"};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
		side = 1;
		faction = "BLU_F";
		unitInfoType = "RscUnitInfoNoWeapon";
		threat[] = {0.1,0.1,0.1};
	};
};
class CfgNonAIVehicles
{
	class ProxyFlag;
	class ProxyWeapon;
	class ProxyFlag_Alone_1: ProxyFlag
	{
		model = "\nine\flag_alone";
	};
};
class cfgMods
{
	author = "MattyIce";
	timepacked = "1615124859";
};

class CfgPatches
{
	class KAR_XM7
	{
		version="1.0";
		units[]=
		{
			"Item_KAR_XM7"
		};
		weapons[]=
		{
			"KAR_XM7",
			"KAR_XM7_BLK",
			"KAR_XM7_G",
			"KAR_XM7_BLK_G",
			"KAR_XM7_SUP",
			"KAR_XM7_SUP_blk"
		};
		requiredVersion="1.0";
		requiredAddons[]=
		{
			"cba_main",
			"A3_Weapons_F"
		};
		magazines[]=
		{
			"KAR_20Rnd_Fury",
			"KAR_20Rnd_Fury_blk",
			"KAR_20Rnd_Fury_RT",
			"KAR_20Rnd_Fury_RT_blk",
			"KAR_20Rnd_Fury_YT",
			"KAR_20Rnd_Fury_YT_blk",
			"KAR_20Rnd_Fury_GT",
			"KAR_20Rnd_Fury_GT_blk"
		};
		ammo[]=
		{
			"KAR_65x51_Fury_Ammo",
			"KAR_65x51_Fury_Ammo_RT",
			"KAR_65x51_Fury_Ammo_YT",
			"KAR_65x51_Fury_Ammo_GT"
		};
	};
};
class WeaponSlotsInfo;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class StandardSound;
class BaseSoundModeType;
class SilencedSound;
class asdg_MuzzleSlot;
class asdg_SlotInfo;
class asdg_UnderSlot;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class nia_charms_slot;
class Single;
class Manual;
class asdg_MuzzleSlot_65: asdg_MuzzleSlot
{
	class compatibleitems
	{
		KAR_XM7_SUP=1;
		KAR_XM7_SUP_blk=1;
	};
};
class CfgAmmo
{
	class BulletBase;
	class KAR_65x51_Fury_Ammo: BulletBase
	{
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.48800001};
		ACE_Caliber=7.0599999;
		ACE_bulletLength=27.007;
		ACE_bulletMass=8.6999998;
		ACE_muzzleVelocityVariationSD=0.15000001;
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={915};
		ACE_barrelLengths[]={330};
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=915;
		caliber=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		cartridge="FxCartridge_65";
		airFriction=-0.00089999998;
		class CamShakeExplode
		{
			power=2.4494901;
			duration=0.40000001;
			frequency=20;
			distance=7.3484702;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class KAR_65x51_Fury_Ammo_RT: BulletBase
	{
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.48800001};
		ACE_Caliber=7.0599999;
		ACE_bulletLength=27.007;
		ACE_bulletMass=8.6999998;
		ACE_muzzleVelocityVariationSD=0.15000001;
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={915};
		ACE_barrelLengths[]={330};
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=915;
		caliber=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge="FxCartridge_65";
		airFriction=-0.00089999998;
		tracerStartTime=0.072999999;
		tracerEndTime=1.5712301;
		class CamShakeExplode
		{
			power=2.4494901;
			duration=0.40000001;
			frequency=20;
			distance=7.3484702;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class KAR_65x51_Fury_Ammo_YT: BulletBase
	{
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.48800001};
		ACE_Caliber=7.0599999;
		ACE_bulletLength=27.007;
		ACE_bulletMass=8.6999998;
		ACE_muzzleVelocityVariationSD=0.15000001;
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={915};
		ACE_barrelLengths[]={330};
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=915;
		caliber=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		cartridge="FxCartridge_65";
		airFriction=-0.00089999998;
		tracerStartTime=0.072999999;
		tracerEndTime=1.5712301;
		class CamShakeExplode
		{
			power=2.4494901;
			duration=0.40000001;
			frequency=20;
			distance=7.3484702;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class KAR_65x51_Fury_Ammo_GT: BulletBase
	{
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.48800001};
		ACE_Caliber=7.0599999;
		ACE_bulletLength=27.007;
		ACE_bulletMass=8.6999998;
		ACE_muzzleVelocityVariationSD=0.15000001;
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={915};
		ACE_barrelLengths[]={330};
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=915;
		caliber=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		cartridge="FxCartridge_65";
		airFriction=-0.00089999998;
		tracerStartTime=0.072999999;
		tracerEndTime=1.5712301;
		class CamShakeExplode
		{
			power=2.4494901;
			duration=0.40000001;
			frequency=20;
			distance=7.3484702;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
};
class cfgSoundShaders
{
	class KAR_XM7_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_close_suppressed",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class KAR_XM7_silencerShot_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_suppressed_mid",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class KAR_XM7_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_close_suppressed_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class KAR_XM7_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_close_suppressed_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class KAR_XM7_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_close_suppressed_interior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class KAR_XM7_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_close_suppressed_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class KAR_XM7_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_close_suppressed_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class KAR_XM7_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"KAR_XM7\data\sounds\KAR_XM7_first",
				1
			}
		};
		range=15;
		volume=0.87;
	};
};
class CfgSoundSets
{
	class KAR_XM7_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"KAR_XM7_silencerShot_SoundShader",
			"KAR_XM7_Closure_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare3Curve";
		frequencyRandomizer=0.30000001;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
	};
	class KAR_XM7_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"KAR_XM7_silencerTailTrees_SoundShader",
			"KAR_XM7_silencerTailForest_SoundShader",
			"KAR_XM7_silencerTailMeadows_SoundShader",
			"KAR_XM7_silencerTailHouses_SoundShader",
			"KAR_XM7_silencerTailInterior_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="weaponShotTailDistanceFreqAttenuationFilter";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class FakeMagazine;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_762x39_Mag_F;
	class B_65x39_Case;
	class KAR_20Rnd_Fury: CA_Magazine
	{
		author="Kartsa, mestnmestn";
		picture="\KAR_XM7\data\ui\KAR_XM7_Mag_ca.paa";
		scope=2;
		scopeArsenal=2;
		ammo="KAR_65x51_Fury_Ammo";
		displayname="20rnd .277 Fury";
		displaynameshort=".277";
		initSpeed=915;
		lastroundstracer=0;
		tracersevery=0;
		mass=13.6;
		count=20;
		modelSpecial="\KAR_XM7\data\models\mag\xm7_mag_proxy";
		hiddenselections[]=
		{
			"camo4"
		};
		hiddenselectionstextures[]=
		{
			"KAR_XM7\data\tex\magazine_co.paa"
		};
		modelSpecialIsProxy=1;
		model="\KAR_XM7\data\models\mag\xm7_mag.p3d";
	};
	class KAR_20Rnd_Fury_blk: KAR_20Rnd_Fury
	{
		displayname="20rnd .277 Fury (Black)";
		picture="\KAR_XM7\data\ui\KAR_XM7_Mag_blk_ca.paa";
		hiddenselectionstextures[]=
		{
			"KAR_XM7\data\tex\magazine_blk_co.paa"
		};
	};
	class KAR_20Rnd_Fury_RT: KAR_20Rnd_Fury
	{
		scope=2;
		scopeArsenal=2;
		ammo="KAR_65x51_Fury_Ammo_RT";
		displayname="20rnd .277 Fury (Red Tracer)";
		displaynameshort=".277 (Red Tracer)";
		initSpeed=915;
		lastroundstracer=3;
		tracersevery=1;
	};
	class KAR_20Rnd_Fury_RT_blk: KAR_20Rnd_Fury_RT
	{
		displayname="20rnd .277 Fury (Black/Red Tracer)";
		picture="\KAR_XM7\data\ui\KAR_XM7_Mag_blk_ca.paa";
		hiddenselectionstextures[]=
		{
			"KAR_XM7\data\tex\magazine_blk_co.paa"
		};
	};
	class KAR_20Rnd_Fury_YT: KAR_20Rnd_Fury
	{
		scope=2;
		scopeArsenal=2;
		ammo="KAR_65x51_Fury_Ammo_YT";
		displayname="20rnd .277 Fury (Yellow Tracer)";
		displaynameshort=".277 (Yellow Tracer)";
	};
	class KAR_20Rnd_Fury_YT_blk: KAR_20Rnd_Fury_YT
	{
		displayname="20rnd .277 Fury (Black/Yellow Tracer)";
		picture="\KAR_XM7\data\ui\KAR_XM7_Mag_blk_ca.paa";
		hiddenselectionstextures[]=
		{
			"KAR_XM7\data\tex\magazine_blk_co.paa"
		};
	};
	class KAR_20Rnd_Fury_GT: KAR_20Rnd_Fury
	{
		scope=2;
		scopeArsenal=2;
		ammo="KAR_65x51_Fury_Ammo_GT";
		displayname="20rnd .277 Fury (Green Tracer)";
		displaynameshort=".277 (Green Tracer)";
	};
	class KAR_20Rnd_Fury_GT_blk: KAR_20Rnd_Fury_GT
	{
		displayname="20rnd .277 Fury (Black/Green Tracer)";
		picture="\KAR_XM7\data\ui\KAR_XM7_Mag_blk_ca.paa";
		hiddenselectionstextures[]=
		{
			"KAR_XM7\data\tex\magazine_blk_co.paa"
		};
	};
};
class CfgMagazineWells
{
	class KAR_XM7_MW
	{
		KAR_XM7_MAGS[]=
		{
			"KAR_20Rnd_Fury_YT",
			"KAR_20Rnd_Fury_RT",
			"KAR_20Rnd_Fury_GT",
			"KAR_20Rnd_Fury",
			"KAR_20Rnd_Fury_YT_blk",
			"KAR_20Rnd_Fury_RT_blk",
			"KAR_20Rnd_Fury_GT_blk",
			"KAR_20Rnd_Fury_blk"
		};
	};
};
class cfgWeapons
{
	class muzzle_snds_H;
	class muzzle_snds_M: muzzle_snds_H
	{
		class ItemInfo;
	};
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class KAR_XM7_SUP: muzzle_snds_M
	{
		scope=2;
		scopearsenal=2;
		author="mestnmestn, Kartsa";
		displayName="Sig MCX Spear .277 Suppressor";
		descriptionshort="Suppressor for Sig MCX Spear";
		picture="\KAR_XM7\data\ui\KAR_XM7_sup_ca.paa";
		model="KAR_XM7\data\models\xm7_suppressor.p3d";
		mass="14.5";
	};
	class KAR_XM7_SUP_blk: KAR_XM7_SUP
	{
		displayName="Sig MCX Spear .277 Suppressor (Black)";
		picture="\KAR_XM7\data\ui\KAR_XM7_sup_blk_ca.paa";
		model="KAR_XM7\data\models\xm7_suppressor_blk.p3d";
	};
	class KAR_XM7: Rifle_Base_F
	{
		author="mestnmestn, Kartsa, AntijnvanderGun";
		scope=2;
		displayName="Sig MCX Spear";
		picture="\KAR_XM7\data\ui\KAR_XM7_ca.paa";
		baseWeapon="KAR_XM7";
		model="\KAR_XM7\data\models\xm7.p3d";
		descriptionShort="Sig MCX Spear .277 Fury";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7",
			"Camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\KAR_XM7\data\tex\upperreceiver_co.paa",
			"\KAR_XM7\data\tex\stock_co.paa",
			"\KAR_XM7\data\tex\magazine_co.paa",
			"\KAR_XM7\data\tex\lowerreceiver_co.paa",
			"\KAR_XM7\data\tex\ironsight_co.paa",
			"\KAR_XM7\data\tex\handguard_co.paa",
			"\KAR_XM7\data\tex\details_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		magazineReloadSwitchPhase=0.47999999;
		magazines[]=
		{
			"KAR_20Rnd_Fury_RT",
			"KAR_20Rnd_Fury_YT",
			"KAR_20Rnd_Fury_GT",
			"KAR_20Rnd_Fury"
		};
		magazineWell[]=
		{
			"KAR_XM7_MW"
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",
			1,
			1,
			10
		};
		htMin=8;
		htMax=920;
		inertia=0.5;
		aimTransitionSpeed=1.1;
		dexterity=1.4;
		initSpeed=915;
		recoil="recoil_MSBS65";
		maxZeroing=800;
		ACE_barrelLength=330;
		ACE_barrelTwist=177.8;
		ACE_twistDirection=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[]={0.12,0.43000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.36000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.33000001,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.80000001};
				iconScale=0.30000001;
			};
			mass=83.800003;
		};
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
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"Msbs65_01_Shot_SoundSet",
					"Msbs65_01_Tail_SoundSet",
					"Mx_Tail_Contact_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"KAR_XM7_silencerShot_SoundSet",
					"KAR_XM7_silencerTail_SoundSet"
				};
			};
			reloadTime="60/800";
			dispersion=0.00044;
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
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"Msbs65_01_Shot_SoundSet",
					"Msbs65_01_Tail_SoundSet",
					"Mx_Tail_Contact_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"KAR_XM7_silencerShot_SoundSet",
					"KAR_XM7_silencerTail_SoundSet"
				};
			};
			reloadTime="60/800";
			dispersion=0.00044;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer="60/800";
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
			requiredOpticType="MEDIUM_OPTIC";
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
			requiredOpticType="FAR_OPTIC";
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
	class KAR_XM7_G: KAR_XM7
	{
		author="mestnmestn, Kartsa, AntijnvanderGun";
		scope=2;
		displayName="Sig MCX Spear (Grip)";
		picture="\KAR_XM7\data\ui\KAR_XM7_G_ca.paa";
		baseWeapon="KAR_XM7_G";
		model="\KAR_XM7\data\models\xm7_grip.p3d";
		descriptionShort="Sig MCX Spear .277 Fury";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
	};
	class KAR_XM7_BLK: KAR_XM7
	{
		author="mestnmestn, Kartsa, AntijnvanderGun";
		scope=2;
		displayName="Sig MCX Spear (Black)";
		picture="\KAR_XM7\data\ui\KAR_XM7_blk_ca.paa";
		baseWeapon="KAR_XM7_BLK";
		model="\KAR_XM7\data\models\xm7.p3d";
		descriptionShort="Sig MCX Spear .277 Fury";
		magazines[]=
		{
			"KAR_20Rnd_Fury_RT",
			"KAR_20Rnd_Fury_YT",
			"KAR_20Rnd_Fury_GT",
			"KAR_20Rnd_Fury"
		};
		hiddenSelectionsTextures[]=
		{
			"\KAR_XM7\data\tex\upperreceiver_blk_co.paa",
			"\KAR_XM7\data\tex\stock_blk_co.paa",
			"\KAR_XM7\data\tex\magazine_blk_co.paa",
			"\KAR_XM7\data\tex\lowerreceiver_blk_co.paa",
			"\KAR_XM7\data\tex\ironsight_co.paa",
			"\KAR_XM7\data\tex\handguard_blk_co.paa",
			"\KAR_XM7\data\tex\details_blk_co.paa"
		};
	};
	class KAR_XM7_BLK_G: KAR_XM7
	{
		author="mestnmestn, Kartsa, AntijnvanderGun";
		scope=2;
		displayName="Sig MCX Spear (Grip/Black)";
		picture="\KAR_XM7\data\ui\KAR_XM7_blk_g_ca.paa";
		baseWeapon="KAR_XM7_BLK_G";
		model="\KAR_XM7\data\models\xm7_grip.p3d";
		descriptionShort="Sig MCX Spear .277 Fury";
		magazines[]=
		{
			"KAR_20Rnd_Fury_RT",
			"KAR_20Rnd_Fury_YT",
			"KAR_20Rnd_Fury_GT",
			"KAR_20Rnd_Fury"
		};
		hiddenSelectionsTextures[]=
		{
			"\KAR_XM7\data\tex\upperreceiver_blk_co.paa",
			"\KAR_XM7\data\tex\stock_blk_co.paa",
			"\KAR_XM7\data\tex\magazine_blk_co.paa",
			"\KAR_XM7\data\tex\lowerreceiver_blk_co.paa",
			"\KAR_XM7\data\tex\ironsight_co.paa",
			"\KAR_XM7\data\tex\handguard_blk_co.paa",
			"\KAR_XM7\data\tex\details_blk_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
	};
};
class cfgvehicles
{
	class Weapon_Base_F;
	class Item_KAR_XM7: Weapon_Base_F
	{
		vehicleClass="WeaponsPrimary";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		scope=2;
		scopeCurator=2;
		author="Kartsa";
		displayName="Sig MCX Spear";
		class TransportWeapons
		{
			class KAR_XM7
			{
				weapon="KAR_XM7";
				count=1;
			};
		};
		class TransportMagazines
		{
			class KAR_20Rnd_Fury
			{
				magazine="KAR_20Rnd_Fury";
				count=1;
			};
		};
	};
};

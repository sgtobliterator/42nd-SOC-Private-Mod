class CfgPatches
{
	class KAR_XM250
	{
		requiredaddons[]=
		{
			"A3_Weapons_F",
			"cba_main"
		};
		units[]={};
		weapons[]=
		{
			"KAR_XM250",
			"KAR_XM250_BLK",
			"KAR_XM250_SUP",
			"KAR_XM250_SUP_BLK"
		};
		magazines[]=
		{
			"KAR_100Rnd_Fury",
			"KAR_100Rnd_Fury_blk",
			"KAR_100Rnd_Fury_RT",
			"KAR_100Rnd_Fury_RT_blk",
			"KAR_100Rnd_Fury_YT",
			"KAR_100Rnd_Fury_YT_blk",
			"KAR_100Rnd_Fury_GT",
			"KAR_100Rnd_Fury_GT_blk"
		};
		version="1";
		author="Kartsa";
		ammo[]=
		{
			"KAR_XM250_65x51_Fury_Ammo",
			"KAR_XM250_65x51_Fury_Ammo_RT",
			"KAR_XM250_65x51_Fury_Ammo_YT",
			"KAR_XM250_65x51_Fury_Ammo_GT"
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
		KAR_XM250_SUP=1;
		KAR_XM250_SUP_blk=1;
	};
};
class CfgAmmo
{
	class BulletBase;
	class KAR_XM250_65x51_Fury_Ammo: BulletBase
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
	class KAR_XM250_65x51_Fury_Ammo_RT: BulletBase
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
	class KAR_XM250_65x51_Fury_Ammo_YT: BulletBase
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
	class KAR_XM250_65x51_Fury_Ammo_GT: BulletBase
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
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class FakeMagazine;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_762x39_Mag_F;
	class B_65x39_Case;
	class KAR_100Rnd_Fury: CA_Magazine
	{
		author="Kartsa, mestnmestn";
		picture="\KAR_XM250\ui\XM250_mag_ca.paa";
		scope=2;
		scopeArsenal=2;
		ammo="KAR_XM250_65x51_Fury_Ammo";
		displayname="100rnd .277 Fury";
		displaynameshort=".277";
		initSpeed=915;
		lastroundstracer=0;
		tracersevery=0;
		mass=67;
		count=100;
		hiddenselections[]=
		{
			"camo4",
			"camo7"
		};
		hiddenselectionstextures[]=
		{
			"KAR_XM250\tex\xm250_04_co.paa",
			"KAR_XM250\tex\bullets_co.paa"
		};
		model="\KAR_XM250\model\XM250_Mag.p3d";
	};
	class KAR_100Rnd_Fury_blk: KAR_100Rnd_Fury
	{
		displayname="100rnd .277 Fury (Black)";
		hiddenselectionstextures[]=
		{
			"KAR_XM250\tex\xm250_04_blk_co.paa",
			"KAR_XM250\tex\bullets_co.paa"
		};
		picture="\KAR_XM250\ui\XM250_mag_blK_ca.paa";
	};
	class KAR_100Rnd_Fury_RT: KAR_100Rnd_Fury
	{
		scope=2;
		scopeArsenal=2;
		ammo="KAR_XM250_65x51_Fury_Ammo_RT";
		displayname="100rnd .277 Fury (Red Tracer)";
		displaynameshort=".277 (Red Tracer)";
		initSpeed=915;
		lastroundstracer=3;
		tracersevery=1;
	};
	class KAR_100Rnd_Fury_RT_blk: KAR_100Rnd_Fury_RT
	{
		displayname="100rnd .277 Fury (Black/Red Tracer)";
		hiddenselectionstextures[]=
		{
			"KAR_XM250\tex\xm250_04_blk_co.paa",
			"KAR_XM250\tex\bullets_co.paa"
		};
		picture="\KAR_XM250\ui\XM250_mag_blK_ca.paa";
	};
	class KAR_100Rnd_Fury_YT: KAR_100Rnd_Fury
	{
		scope=2;
		scopeArsenal=2;
		ammo="KAR_XM250_65x51_Fury_Ammo_YT";
		displayname="100rnd .277 Fury (Yellow Tracer)";
		displaynameshort=".277 (Yellow Tracer)";
	};
	class KAR_100Rnd_Fury_YT_blk: KAR_100Rnd_Fury_YT
	{
		displayname="100rnd .277 Fury (Black/Yellow Tracer)";
		hiddenselectionstextures[]=
		{
			"KAR_XM250\tex\xm250_04_blk_co.paa",
			"KAR_XM250\tex\bullets_co.paa"
		};
		picture="\KAR_XM250\ui\XM250_mag_blK_ca.paa";
	};
	class KAR_100Rnd_Fury_GT: KAR_100Rnd_Fury
	{
		scope=2;
		scopeArsenal=2;
		ammo="KAR_XM250_65x51_Fury_Ammo_GT";
		displayname="100rnd .277 Fury (Green Tracer)";
		displaynameshort=".277 (Green Tracer)";
	};
	class KAR_100Rnd_Fury_GT_blk: KAR_100Rnd_Fury_GT
	{
		displayname="100rnd .277 Fury (Black/Green Tracer)";
		hiddenselectionstextures[]=
		{
			"KAR_XM250\tex\xm250_04_blk_co.paa",
			"KAR_XM250\tex\bullets_co.paa"
		};
		picture="\KAR_XM250\ui\XM250_mag_blK_ca.paa";
	};
};
class CfgMagazineWells
{
	class KAR_XM250_MW
	{
		KAR_XM250_MAGS[]=
		{
			"KAR_100Rnd_Fury_YT",
			"KAR_100Rnd_Fury_RT",
			"KAR_100Rnd_Fury_GT",
			"KAR_100Rnd_Fury",
			"KAR_100Rnd_Fury_YT_blk",
			"KAR_100Rnd_Fury_RT_blk",
			"KAR_100Rnd_Fury_GT_blk",
			"KAR_100Rnd_Fury_blk"
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
	class KAR_XM250_SUP: muzzle_snds_M
	{
		scope=2;
		scopearsenal=2;
		author="Kartsa";
		displayName="XM250 .277 Suppressor";
		descriptionshort="Suppressor for the Sig XM250";
		picture="\KAR_XM250\ui\KAR_XM250_SUP_ca.paa";
		model="KAR_XM250\model\xm250_sup.p3d";
		mass="10";
	};
	class KAR_XM250_SUP_BLK: KAR_XM250_SUP
	{
		displayName="XM250 Suppressor (Black)";
		picture="\KAR_XM250\ui\KAR_XM250_SUP_blk_ca.paa";
		model="KAR_XM250\model\xm250_sup_blk.p3d";
	};
	class ItemCore;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class KAR_XM250: Rifle_Base_F
	{
		ACE_barrelLength=444;
		ACE_barrelTwist=177.8;
		ACE_twistDirection=1;
		author="Kartsa";
		baseWeapon="KAR_XM250";
		scope=2;
		model="\KAR_XM250\model\xm250.p3d";
		displayName="XM250";
		descriptionShort="XM250 Machinegun chambered in .277 FURY";
		picture="\KAR_XM250\ui\KAR_XM250_ca.paa";
		deployedPivot="bipod";
		hasBipod="true";
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenselectionstextures[]=
		{
			"KAR_XM250\tex\canted_sights_co.paa",
			"KAR_XM250\tex\xm250_01_co.paa",
			"KAR_XM250\tex\xm250_02_co.paa",
			"KAR_XM250\tex\xm250_03_co.paa",
			"KAR_XM250\tex\xm250_04_co.paa",
			"KAR_XM250\tex\xm250_05_co.paa",
			"KAR_XM250\tex\supressor_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm"
		};
		magazines[]=
		{
			"KAR_100Rnd_Fury_YT",
			"KAR_100Rnd_Fury_RT",
			"KAR_100Rnd_Fury_GT",
			"KAR_100Rnd_Fury",
			"KAR_100Rnd_Fury_YT_blk",
			"KAR_100Rnd_Fury_RT_blk",
			"KAR_100Rnd_Fury_GT_blk",
			"KAR_100Rnd_Fury_blk"
		};
		magazineWell[]=
		{
			"KAR_XM250_MW"
		};
		reloadAction="GestureReloadMMG02";
		recoil="recoil_mk200";
		maxZeroing=2000;
		inertia=1.1;
		aimTransitionSpeed=0.60000002;
		magazineReloadSwitchPhase=0.40000001;
		cursor="mg";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[]={0.059999999,0.41999999};
				iconScale=0.15000001;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.62,0.31999999};
				iconScale=0.15000001;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.38,0.41999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot
			{
			};
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",
			0.17782794,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_reload",
			0.50118721,
			1,
			10
		};
		modes[]=
		{
			"single",
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class single: Mode_SemiAuto
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
					"MMG02_Shot_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime="60/800";
			dispersion=0.00103;
			soundContinuous=0;
			soundBurst=0;
		};
		class manual: Mode_FullAuto
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
					"MMG02_Shot_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime="60/800";
			dispersion=0.00103;
			soundContinuous=0;
			soundBurst=0;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=5;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=3;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			burst=3;
			aiRateOfFire=9;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=3;
			minRange=800;
			minRangeProbab=0.039999999;
			midRange=1000;
			midRangeProbab=0.5;
			maxRange=1200;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			autoFire=0;
			burst=1;
			aiRateOfFire=12;
			aiRateOfFireDistance=1600;
			aiRateOfFireDispersion=4;
			minRange=1200;
			minRangeProbab=0.050000001;
			midRange=1600;
			midRangeProbab=0.5;
			maxRange=2000;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefY=20;
		aiDispersionCoefX=15;
	};
	class KAR_XM250_BLK: KAR_XM250
	{
		baseWeapon="KAR_XM250_BLK";
		displayName="XM250 (Black)";
		picture="\KAR_XM250\ui\KAR_XM250_blk_ca.paa";
		hiddenselectionstextures[]=
		{
			"KAR_XM250\tex\canted_sights_co.paa",
			"KAR_XM250\tex\xm250_01_blk_co.paa",
			"KAR_XM250\tex\xm250_02_blk_co.paa",
			"KAR_XM250\tex\xm250_03_blk_co.paa",
			"KAR_XM250\tex\xm250_04_blk_co.paa",
			"KAR_XM250\tex\xm250_05_blk_co.paa",
			"KAR_XM250\tex\supressor_co.paa"
		};
	};
};

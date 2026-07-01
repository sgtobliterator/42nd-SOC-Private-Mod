class CfgPatches
{
	class CIUSMC_SAW
	{
		requiredAddons[]=
		{
			"cba_main"
		};
		units[]={};
		weapons[]=
		{
			"1RB_Circular_Saw"
		};
		author="Coal";
	};
};
class CfgFunctions
{
	class RB1_SAW
	{
		tag="RB1_SAW";
		class Saw
		{
			file="\26th_USMC_Saw\f";
			class sawCut
			{
			};
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class saw_hit: BulletBase
	{
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		caliber=0.1;
		deflecting=45;
		visibleFireTime=0;
		visibleFire=0;
		audibleFire=0;
		cost=100;
		typicalSpeed=100;
		airFriction=-1.1799999;
		muzzleEffect="";
		minRange=1;
		minRangeProbab=0.80000001;
		midRange=2;
		midRangeProbab=1.5;
		maxRange=3;
		maxRangeProbab=2.5;
		explosive=0;
		simulationStep=0.001;
		timeToLive=0.015;
		dangerRadiusBulletClose=0;
		dangerRadiusHit=0;
		suppressionRadiusBulletClose=0;
		suppressionRadiusHit=0;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CIUSMC_saw_hit: CA_Magazine
	{
		scope=2;
		displayName="[USMC] Saw Battery";
		picture="\26th_USMC_SAW\Data\Saw_battery.paa";
		ammo="saw_hit";
		count=10000000;
		initSpeed=100;
		tracersEvery=0;
		lastRoundsTracer=10000;
		descriptionShort="Saw Hit";
		mass=1;
	};
};
class Single;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class FullAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class SlotInfo;
		class CowsSlot;
		class PointerSlot;
	};
	class CIUSMC_Circular_Saw: Rifle_Base_F
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Coal";
		displayName="[USMC] Circular Saw";
		model="\26th_USMC_Saw\CS\CS.p3d";
		picture="\26th_USMC_Saw\Data\SAW.paa";
		baseWeapon="CIUSMC_Circular_Saw";
		magazines[]=
		{
			"CIUSMC_saw_hit"
		};
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		descriptionShort="Circular Saw";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		class Library
		{
			libtextdesc="Circular Saw";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class MuzzleSlot: SlotInfo
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot
			{
				compatibleItems[]={};
			};
		};
		reloadmagazinesound[]=
		{
			"26th_USMC_Saw\sound\reload",
			2,
			1,
			20
		};
		value=2;
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"26th_USMC_Saw\sound\saw.wss",
					500.23413,
					1,
					10
				};
				closure2[]=
				{
					"26th_USMC_Saw\sound\saw.wss",
					500.23413,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					1,
					"closure2",
					1
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"26th_USMC_Saw\sound\saw.wss",
					500.23413,
					1,
					1300
				};
				begin2[]=
				{
					"26th_USMC_Saw\sound\saw.wss",
					500.23413,
					1,
					1300
				};
				begin3[]=
				{
					"26th_USMC_Saw\sound\saw.wss",
					500.23413,
					1,
					1300
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin2",
					1,
					"begin3",
					1
				};
			};
			maxrange=300;
			maxrangeprobab=0.050000001;
			midrange=150;
			midrangeprobab=0.69999999;
			minrange=2;
			minrangeprobab=0.30000001;
			reloadTime=0.035;
			dispersion=0.00131;
			recoil="recoil_empty";
			recoilprone="recoil_empty";
		};
	};
};
class Extended_FiredBIS_EventHandlers
{
	class CAManBase
	{
		class RB1_SAW_Fired
		{
			firedBIS="params ['_unit','_weapon','','','','','_projectile']; if (_weapon isEqualTo 'CIUSMC_Circular_Saw') then { [_unit,_weapon,_projectile] remoteExec ['RB1_SAW_fnc_sawCut', 2]; };";
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777909383";
};

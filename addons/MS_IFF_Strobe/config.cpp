class CfgPatches
{
	class MS_IFF_Addon
	{
		name="Multispectral IFF Strobes";
		author="Fat_Lurch";
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"A3_Functions_F",
			"A3_Weapons_F",
			"A3_Weapons_F_EPB"
		};
		units[]={};
		weapons[]=
		{
			"Throw"
		};
		magazines[]=
		{
			"B_IR_Grenade",
			"MS_Strobe_Mag_1",
			"MS_Strobe_Mag_2"
		};
		ammo[]=
		{
			"B_IRstrobe",
			"IRStrobeBase",
			"GrenadeCore",
			"MS_Strobe_Ammo_1",
			"MS_Strobe_Ammo_2"
		};
	};
};
class cfgAmmo
{
	class IRStrobeBase;
	class B_IRstrobe: IRStrobeBase
	{
		timeToLive=18000;
	};
	class MS_Strobe_Ammo_1: B_IRstrobe
	{
		hit=0;
		indirectHit=0;
		explosionTime=0;
		explosionEffects="CE_MS_IFF_Effect_1";
		mintimetolive=18000;
		explosive=1;
		effectFly="CE_MS_IFF_Effect_1";
		craterEffects="";
		craterWaterEffects="";
		model="MS_IFF_Strobe\MS_IFF.p3d";
		fuseDistance=9.9999998e+010;
	};
	class MS_Strobe_Ammo_2: MS_Strobe_Ammo_1
	{
		explosionEffects="CE_MS_IFF_Effect_2";
		effectFly="CE_MS_IFF_Effect_2";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class B_IR_Grenade: CA_Magazine
	{
		mass=0.5;
	};
	class MS_Strobe_Mag_1: B_IR_Grenade
	{
		ammo="MS_Strobe_Ammo_1";
		ACE_Attachable="MS_Strobe_Ammo_1";
		author="Fat_Lurch";
		displayname="MS IFF Strobe -1";
		descriptionShort="Multispectral IFF Strobe (1 Pulse)";
		displayNameShort="MS IFF Strobe -1";
		mass=0.5;
		model="\MS_IFF_Strobe\MS_IFF.p3d";
		picture="\MS_IFF_Strobe\data\gear_MS_IFF_Strobe_ca.paa";
	};
	class MS_Strobe_Mag_2: MS_Strobe_Mag_1
	{
		ammo="MS_Strobe_Ammo_2";
		ACE_Attachable="MS_Strobe_Ammo_2";
		displayname="MS IFF Strobe -2";
		descriptionShort="Multispectral IFF Strobe (2 Pulse)";
		displayNameShort="MS IFF Strobe -2";
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"MS_IFF_Muzzle_1",
			"MS_IFF_Muzzle_2"
		};
		class ThrowMuzzle;
		class MS_IFF_Muzzle_1: ThrowMuzzle
		{
			magazines[]=
			{
				"MS_Strobe_Mag_1"
			};
		};
		class MS_IFF_Muzzle_2: ThrowMuzzle
		{
			magazines[]=
			{
				"MS_Strobe_Mag_2"
			};
		};
	};
};
class CE_MS_IFF_Effect_1
{
	class MWIR
	{
		simulation="particles";
		type="MWIR_Effect_1Fast";
		position[]={0,0,0};
		lifeTime=18000;
		qualityLevel=-1;
		start=1;
		enabled=1;
	};
};
class CE_MS_IFF_Effect_2
{
	class MWIR
	{
		simulation="particles";
		type="MWIR_Effect_2Fast";
		position[]={0,0,0};
		lifeTime=18000;
		qualityLevel=-1;
		start=1;
		enabled=1;
	};
};
class CfgCloudlets
{
	class MWIR_Effect_2Fast
	{
		sizeCoef=1;
		size[]={1,1};
		interval=1.5;
		CircleRadius=0;
		CircleVelocity[]={0,0,0};
		particleShape="\A3\data_f\cl_exp";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angle=0;
		angleVar=180;
		animationName="";
		particleType="Billboard";
		timerPeriod=0;
		lifeTime=0.5;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=10;
		volume=7.9000001;
		rubbing=0;
		animationSpeed[]={1};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		positionVarConst[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		colorCoef[]={0,0,0,1};
		animationSpeedCoef=1;
		destroyOnWaterSurface=0;
		destroyOnWaterSurfaceOffset=0;
		onSurface="true";
		keepOnSurface="false";
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		position[]={0,0,0};
		color[]=
		{
			{0,0,0,1000000000},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,1000000000}
		};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
	};
	class MWIR_Effect_1Fast: MWIR_Effect_2Fast
	{
		size[]={"1"};
		lifeTime=0.079999998;
		interval=1.5;
		color[]=
		{
			{0,0,0,1000000000}
		};
	};
};
class cfgMods
{
	author="Fat_Lurch";
	timepacked="1550613289";
};

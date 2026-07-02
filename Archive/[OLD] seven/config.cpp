#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Louetta_seven
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
			"Louetta_HK416_1",
			"Louetta_HK416_2",
			"Louetta_HK416_3",
			"Louetta_HK416_4",
			"Louetta_HK416_5",
			"Louetta_HK416_6",
			"Louetta_HK416_7",
			"Louetta_HK416_8",
			"Louetta_HK416_9",
			"Louetta_HK417",
			"Louetta_HK417_1",
			"Louetta_HK417_2",
			"Louetta_HK417_3",
			"Louetta_HK417_4",
			"louetta_walker_MRAWS",
			"louetta_special_MRAWS",
			"Louetta_scope1",
			"Louetta_scope1_t"
		};
	};
};
class CfgEditorCategories
{
	class tf136
	{
		displayName="TF-136";
	};
};
class CfgEditorSubcategories
{
	class louetta
	{
		displayName="Louetta";
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class B_762x51_Ball;
	class B_556x45_Ball;
	class Louetta_300_Ball: B_556x45_Ball
	{
		airFriction=-0.00113233;
		airlock=1;
		audiblefire=8;
		caliber=0.5;
		deflecting=22;
		cartridge="FxCartridge_762";
		cost=1.2;
		hit=16;
		indirecthit=0;
		indirecthitrange=0;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerendtime=1;
		tracerscale=1;
		tracerstarttime=0.050000001;
		typicalspeed=674.59998;
		visiblefire=5;
		class CamShakeExplode
		{
			distance="((6^0.5)*3)";
			duration="((round (6^0.5))*0.2 max 0.2)";
			frequency=20;
			power="(6^0.5)";
		};
		class CamShakeHit
		{
			distance=1;
			duration="((round (6^0.25))*0.2 max 0.2)";
			frequency=20;
			power=6;
		};
		AB_caliber=0.308;
		AB_bulletLength=1.118;
		AB_bulletMass=147;
		AB_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		AB_ballisticCoefficients[]={0.398};
		AB_velocityBoundaries[]={};
		AB_standardAtmosphere="ICAO";
		AB_dragModel=1;
		AB_muzzleVelocities[]={559,609,625};
		AB_barrelLengths[]={6,16,20};
		ACE_caliber=7.823;
		ACE_bulletLength=28.396999;
		ACE_bulletMass=9.5256004;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.398};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={559,609,625};
		ACE_barrelLengths[]={152.39999,406.39999,508};
	};
	class Louetta_300_SMK: Louetta_300_Ball
	{
		airFriction=-0.00118473;
		airlock=1;
		caliber=0.33700001;
		cartridge="FxCartridge_762";
		cost=1.2;
		hit=16;
		deflecting=20;
		indirecthit=0;
		indirecthitrange=0;
		model="\hlc_core\mesh\bullettracer\tracer_dim";
		tracerscale=1;
		tracerstarttime=0.050000001;
		typicalSpeed=312;
		visibleFire=0.0099999998;
		audibleFire=0.0099999998;
		visibleFireTime=0.0099999998;
		audibleFireTime=0.0099999998;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		ACE_caliber=7.823;
		ACE_bulletLength=37.820999;
		ACE_bulletMass=14.256;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.60799998};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={300,320,340};
		ACE_barrelLengths[]={228.60001,406.39999,508};
		AB_caliber=0.308;
		AB_bulletLength=1.489;
		AB_bulletMass=220;
		AB_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		AB_ballisticCoefficients[]={0.60799998};
		AB_velocityBoundaries[]={};
		AB_standardAtmosphere="ICAO";
		AB_dragModel=1;
		AB_muzzleVelocities[]={300,320,340};
		AB_barrelLengths[]={9,16,20};
	};
	class Louetta_556x45_Ball: B_556x45_Ball
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		cost=1;
		airFriction=-0.001425;
		caliber=0.80000001;
		cartridge="FxCartridge_556";
		ACE_caliber=10;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.9896002;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.361};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={624,816,832,838};
		ACE_barrelLengths[]={190.5,368.29999,457.20001,508};
	};
	class Louetta_556x45_Ball_Tracer: Louetta_556x45_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
		nvgOnly=0;
	};
	class Louetta_556x45_Ball_Tracer_IR: Louetta_556x45_Ball_Tracer
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
	};
	class Louetta_762x51_Ball: B_762x51_Ball
	{
		hit=13;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber=12;
		ACE_bulletLength=29.285999;
		ACE_bulletMass=4.1000004;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.34900001,0.338,0.33000001,0.31};
		ACE_velocityBoundaries[]={792,610,488};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={624,816,832,838};
		ACE_barrelLengths[]={152.39999,406.39999,508};
	};
	class Louetta_762x51_Ball_Tracer: Louetta_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
		tracerStartTime=0.050000001;
		tracerEndTime=2;
		nvgOnly=0;
	};
	class Louetta_762x51_Ball_Tracer_IR: Louetta_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
	};
	class B_9x21_Ball;
	class Louetta_9x19mm_Ball: B_9x21_Ball
	{
		scope=2;
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		suppressionRadiusBulletClose=2;
		cartridge="FxCartridge_9mm";
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber=0.30000001;
		deflecting=30;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=320;
		airFriction=-0.0022;
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class 20Rnd_762x51_Mag;
	class 16Rnd_9x21_Mag;
	class Louetta_19Rnd_9x19_g17: 16Rnd_9x21_Mag
	{
		scope=2;
		displayName="Glock 17 9mm 19Rnd";
		model="seven\glock\g17mag.p3d";
		picture="\RH_de\data\UI\m_g17_ca.paa";
		type=16;
		ammo="Louetta_9x19mm_Ball";
		count=19;
		initSpeed=370;
		mass=4;
		author="Louetta";
		displayNameShort="FMJ";
		descriptionShort="FMJ";
		modelSpecial="seven\glock\proxy\proxyg17mag.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_33Rnd_9x19_g17: 16Rnd_9x21_Mag
	{
		scope=2;
		displayName="Glock 17 9mm 33Rnd Big Stick";
		model="seven\glock\g17bigstick.p3d";
		picture="\RH_de\data\UI\m_g17_ca.paa";
		type=16;
		ammo="Louetta_9x19mm_Ball";
		count=33;
		initSpeed=370;
		mass=4;
		author="Louetta";
		displayNameShort="FMJ";
		descriptionShort="FMJ";
		modelSpecial="seven\glock\proxy\proxyg17bigstick.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="30rnd .300 BLK";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="seven\mags\proxy\300";
		hiddenSelections[]={};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_SMK: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="30rnd .300 BLK Subsonic";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="seven\mags\proxy\300";
		hiddenSelections[]={};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_40: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count=40;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="40rnd .300 BLK";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40.p3d";
		hiddenSelections[]={};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_SMK_40: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count=40;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="40rnd .300 BLK Subsonic";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40.p3d";
		hiddenSelections[]={};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_40_tan: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count=40;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="40rnd .300 BLK Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40_tan.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_SMK_40_tan: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count=40;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="40rnd .300 BLK Subsonic Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40_tan.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_40_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count=47;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="47rnd TTI .300 BLK";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran.p3d";
		hiddenSelections[]={};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_SMK_40_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count=47;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="47rnd TTI .300 BLK Subsonic";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran.p3d";
		hiddenSelections[]={};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_40_tan_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count=47;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="47rnd TTI .300 BLK Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_300_Blackout_SMK_40_tan_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count=47;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="47rnd TTI .300 BLK Subsonic Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="5.56mm 30rnd Stanag (Magpul)";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
		hiddenSelections[]=
		{
			"camo",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_Stanag: Louetta_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (T) Stanag (Magpul)";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="";
	};
	class Louetta_556x45_TM_Stanag: Louetta_556x45_T_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (TM) Stanag (Magpul)";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="";
	};
	class Louetta_556x45_IRT_Stanag: Louetta_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRT) Stanag (Magpul)";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="";
	};
	class Louetta_556x45_IRTM_Stanag: Louetta_556x45_IRT_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRTM) Stanag (Magpul)";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="";
	};
	class Louetta_556x45_PMAG_20: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=20;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
		displayname="5.56mm 20rnd PMAG";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG.paa";
		model="seven\mags\pmag_556_20.p3d";
		modelSpecial="seven\mags\proxy\pmag_556_20.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_556_20.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_20: Louetta_556x45_PMAG_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 20rnd (T) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG.paa";
	};
	class Louetta_556x45_TM_PMAG_20: Louetta_556x45_T_PMAG_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 20rnd (TM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG.paa";
	};
	class Louetta_556x45_IRT_PMAG_20: Louetta_556x45_PMAG_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 20rnd (IRT) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG.paa";
	};
	class Louetta_556x45_IRTM_PMAG_20: Louetta_556x45_IRT_PMAG_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 20rnd (IRTM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG.paa";
	};
	class Louetta_556x45_PMAG_tan_20: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=20;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
		displayname="5.56mm 20rnd PMAG Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_tan.paa";
		model="seven\mags\pmag_556_20_fde.p3d";
		modelSpecial="seven\mags\proxy\pmag_556_20_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_556_20_fde.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_tan_20: Louetta_556x45_PMAG_tan_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 20rnd (T) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_tan.paa";
	};
	class Louetta_556x45_TM_PMAG_tan_20: Louetta_556x45_T_PMAG_tan_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 20rnd (TM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_tan.paa";
	};
	class Louetta_556x45_IRT_PMAG_tan_20: Louetta_556x45_PMAG_tan_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 20rnd (IRT) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_tan.paa";
	};
	class Louetta_556x45_IRTM_PMAG_tan_20: Louetta_556x45_IRT_PMAG_tan_20
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 20rnd (IRTM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_tan.paa";
	};
	class Louetta_556x45_PMAG_60: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=60;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 60";
		displayname="5.56mm 60rnd PMAG";
		initspeed=974.79999;
		mass=50;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_60.paa";
		model="seven\mags\pmag_556_60.p3d";
		modelSpecial="seven\mags\proxy\pmag_556_60.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_60: Louetta_556x45_PMAG_60
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 60rnd (T) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_60.paa";
	};
	class Louetta_556x45_TM_PMAG_60: Louetta_556x45_T_PMAG_60
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 60rnd (TM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_60.paa";
	};
	class Louetta_556x45_IRT_PMAG_60: Louetta_556x45_PMAG_60
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 60rnd (IRT) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_60.paa";
	};
	class Louetta_556x45_IRTM_PMAG_60: Louetta_556x45_IRT_PMAG_60
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 60rnd (IRTM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_60.paa";
	};
	class Louetta_556x45_PMAG_mw: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="5.56mm 30rnd PMAG MW";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_mw.paa";
		model="seven\mags\pmag_mw.p3d";
		modelSpecial="seven\mags\proxy\mw_pmag.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_mw: Louetta_556x45_PMAG_mw
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (T) PMAG MW";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_mw.paa";
	};
	class Louetta_556x45_TM_PMAG_mw: Louetta_556x45_T_PMAG_mw
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (TM) PMAG MW";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_mw.paa";
	};
	class Louetta_556x45_IRT_PMAG_mw: Louetta_556x45_PMAG_mw
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRT) PMAG MW";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_mw.paa";
	};
	class Louetta_556x45_IRTM_PMAG_mw: Louetta_556x45_IRT_PMAG_mw
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRTM) PMAG MW";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_mw.paa";
	};
	class Louetta_556x45_PMAG_40: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=40;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="5.56mm 40rnd PMAG";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_40: Louetta_556x45_PMAG_40
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 40rnd (T) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_TM_PMAG_40: Louetta_556x45_T_PMAG_40
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 40rnd (TM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRT_PMAG_40: Louetta_556x45_PMAG_40
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 40rnd (IRT) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRTM_PMAG_40: Louetta_556x45_IRT_PMAG_40
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 40rnd (IRTM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_PMAG_40_tan: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=40;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="5.56mm 40rnd PMAG Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_40_tan: Louetta_556x45_PMAG_40_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 40rnd (T) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_TM_PMAG_40_tan: Louetta_556x45_T_PMAG_40_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 40rnd (TM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRT_PMAG_40_tan: Louetta_556x45_PMAG_40_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 40rnd (IRT) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRTM_PMAG_40_tan: Louetta_556x45_IRT_PMAG_40_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 40rnd (IRTM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_545x39_PMAG: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=30;
		descriptionshort="Rounds: 30";
		displayname="5.45mm 30rnd PMAG";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="545 On Drugs";
		picture="\seven\data\PMAG_545.paa";
		model="seven\mags\pmag545.p3d";
		modelSpecial="seven\mags\proxy\pmag_545_30.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_545x39_T_PMAG: Louetta_545x39_PMAG
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.45mm 30rnd (T) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_545.paa";
	};
	class Louetta_545x39_TM_PMAG: Louetta_545x39_T_PMAG
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.45mm 30rnd (TM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_545.paa";
	};
	class Louetta_545x39_IRT_PMAG: Louetta_545x39_PMAG
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.45mm 30rnd (IRT) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_545.paa";
	};
	class Louetta_545x39_IRTM_PMAG: Louetta_545x39_IRT_PMAG
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.45mm 30rnd (IRTM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_545.paa";
	};
	class Louetta_545x39_PMAG_tan: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=60;
		descriptionshort="Rounds: 30";
		displayname="5.45mm 30rnd PMAG Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_545_30_fde.paa"
		};
		displaynameshort="545 On Drugs";
		picture="\seven\data\PMAG_545_tan.paa";
		model="seven\mags\pmag545_fde.p3d";
		modelSpecial="seven\mags\proxy\pmag_545_30.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_545x39_T_PMAG_tan: Louetta_545x39_PMAG_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.45mm 30rnd (T) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_545_tan.paa";
	};
	class Louetta_545x39_TM_PMAG_tan: Louetta_545x39_T_PMAG_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.45mm 30rnd (TM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_545_tan.paa";
	};
	class Louetta_545x39_IRT_PMAG_tan: Louetta_545x39_PMAG_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.45mm 30rnd (IRT) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_545_tan.paa";
	};
	class Louetta_545x39_IRTM_PMAG_tan: Louetta_545x39_IRT_PMAG_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.45mm 30rnd (IRTM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_545_tan.paa";
	};
	class Louetta_20Rnd_762x51mm: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=20;
		mass=5;
		lastroundstracer=3;
		displayname="HK417 7.62x51mm 20rnd Magazine";
		descriptionShort="HK417 Magazine";
		tracersEvery=0;
		picture="\seven\data\417.paa";
		modelSpecial="\seven\proxies\proxy417";
		model="\seven\417.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\data2\arifle_spar_03_blk_f_01_co.paa",
			"seven\data2\arifle_spar_03_snd_f_01_co.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_20Rnd_762x51mm_T: Louetta_20Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="HK417 7.62x51mm 20rnd Magazine (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_TM: Louetta_20Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="HK417 7.62x51mm 20rnd Magazine (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_IRT: Louetta_20Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="HK417 7.62x51mm 20rnd Magazine (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_20Rnd_762x51mm_IRTM: Louetta_20Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="HK417 7.62x51mm 20rnd Magazine (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_m110: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=20;
		mass=5;
		lastroundstracer=3;
		displayname="M110 7.62x51mm 20rnd Magazine";
		descriptionShort="M110 Magazine";
		tracersEvery=0;
		picture="\seven\data\m110.paa";
		modelSpecial="\seven\mags\proxy\m110";
		model="\seven\mags\m110.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_20Rnd_762x51mm_m110_T: Louetta_20Rnd_762x51mm_m110
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="M110 7.62x51mm 20rnd Magazine (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_m110_TM: Louetta_20Rnd_762x51mm_m110
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="M110 7.62x51mm 20rnd Magazine (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_m110_IRT: Louetta_20Rnd_762x51mm_m110
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="M110 7.62x51mm 20rnd Magazine (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_20Rnd_762x51mm_m110_IRTM: Louetta_20Rnd_762x51mm_m110
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="M110 7.62x51mm 20rnd Magazine (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_PMAG: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=20;
		mass=5;
		lastroundstracer=3;
		displayname="PMAG 7.62x51mm 20rnd Magazine";
		descriptionShort="PMAG Magazine";
		tracersEvery=0;
		picture="\seven\data\PMAG.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\pmag\pmag20.paa"
		};
		modelSpecial="\seven\proxies\proxyPMAG";
		model="\seven\PMAG.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_20Rnd_762x51mm_PMAG_T: Louetta_20Rnd_762x51mm_PMAG
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="PMAG 7.62x51mm 20rnd Magazine (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_PMAG_TM: Louetta_20Rnd_762x51mm_PMAG
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="PMAG 7.62x51mm 20rnd Magazine (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_PMAG_IRT: Louetta_20Rnd_762x51mm_PMAG
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="PMAG 7.62x51mm 20rnd Magazine (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_20Rnd_762x51mm_PMAG_IRTM: Louetta_20Rnd_762x51mm_PMAG
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="PMAG 7.62x51mm 20rnd Magazine (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_PMAG_tan: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=20;
		mass=5;
		lastroundstracer=3;
		displayname="PMAG Tan 7.62x51mm 20rnd Magazine";
		descriptionShort="PMAG Magazine";
		tracersEvery=0;
		picture="\seven\data\PMAG_tan.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\pmag\pmag20_fde.paa"
		};
		modelSpecial="\seven\proxies\proxyPMAG";
		model="\seven\PMAG.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_20Rnd_762x51mm_PMAG_tan_T: Louetta_20Rnd_762x51mm_PMAG_tan
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="PMAG Tan 7.62x51mm 20rnd Magazine (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_PMAG_tan_TM: Louetta_20Rnd_762x51mm_PMAG_tan
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="PMAG Tan 7.62x51mm 20rnd Magazine (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_20Rnd_762x51mm_PMAG_tan_IRT: Louetta_20Rnd_762x51mm_PMAG_tan
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="PMAG Tan 7.62x51mm 20rnd Magazine (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_20Rnd_762x51mm_PMAG_tan_IRTM: Louetta_20Rnd_762x51mm_PMAG_tan
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="PMAG Tan 7.62x51mm 20rnd Magazine (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_100Rnd_762x51mm: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=100;
		mass=40;
		lastroundstracer=3;
		displayname="MK48 100rnd Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
		modelSpecial="\seven\mk48\proxy\proxy";
		model="\seven\mk48\100rnd.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk46\data\toadie_m249\pouch_tan_co.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_100Rnd_762x51mm_T: Louetta_100Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 100rnd Pouch (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_100Rnd_762x51mm_TM: Louetta_100Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 100rnd Pouch (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_100Rnd_762x51mm_IRT: Louetta_100Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 100rnd Pouch (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_100Rnd_762x51mm_IRTM: Louetta_100Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 100rnd Pouch (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_200Rnd_762x51mm: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=200;
		mass=80;
		lastroundstracer=3;
		displayname="MK48 200rnd Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
		modelSpecial="\seven\mk48\proxy\proxy4";
		model="\seven\mk48\200rnd.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk48\data\100_mag_co.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_200Rnd_762x51mm_T: Louetta_200Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 200rnd Pouch (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_200Rnd_762x51mm_TM: Louetta_200Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 200rnd Pouch (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_200Rnd_762x51mm_IRT: Louetta_200Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 200rnd Pouch (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_200Rnd_762x51mm_IRTM: Louetta_200Rnd_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 200rnd Pouch (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_100Rnd_S_762x51mm: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=100;
		mass=40;
		lastroundstracer=3;
		displayname="MK48 100rnd Soft Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
		modelSpecial="\seven\mk48\proxy\proxy2";
		model="\seven\mk48\100rnd_2.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk48\data\mk48_spry1.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_100Rnd_S_762x51mm_T: Louetta_100Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 100rnd Soft Pouch (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_100Rnd_S_762x51mm_TM: Louetta_100Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 100rnd Soft Pouch (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_100Rnd_S_762x51mm_IRT: Louetta_100Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 100rnd Soft Pouch (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_100Rnd_S_762x51mm_IRTM: Louetta_100Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 100rnd Soft Pouch (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_200Rnd_S_762x51mm: 20Rnd_762x51_Mag
	{
		author="Louetta";
		scope=2;
		eden=2;
		ammo="Louetta_762x51_Ball";
		count=200;
		mass=80;
		lastroundstracer=3;
		displayname="MK48 200rnd Soft Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
		modelSpecial="\seven\mk48\proxy\proxy3";
		model="\seven\mk48\200rnd_2.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk48\data\mk48_long_spry1.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_200Rnd_S_762x51mm_T: Louetta_200Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 200rnd Soft Pouch (Tracer)";
		tracersEvery=1;
		lastRoundsTracer=3;
	};
	class Louetta_200Rnd_S_762x51mm_TM: Louetta_200Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer";
		displayname="MK48 200rnd Soft Pouch (Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_200Rnd_S_762x51mm_IRT: Louetta_200Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 200rnd Soft Pouch (IR-DIM Tracer)";
		tracersEvery=1;
		lastRoundsTracer=1;
	};
	class Louetta_200Rnd_S_762x51mm_IRTM: Louetta_200Rnd_S_762x51mm
	{
		author="Louetta";
		scope=2;
		ammo="Louetta_762x51_Ball_Tracer_IR";
		displayname="MK48 200rnd Soft Pouch (IR-DIM Tracer Mixed)";
		tracersEvery=3;
		lastRoundsTracer=3;
	};
	class Louetta_556x45_PMAG_30: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="5.56mm 30rnd PMAG";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_30.paa";
		model="seven\mags\pmag_mw.p3d";
		modelSpecial="seven\mags\proxy\pmag_30.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_30: Louetta_556x45_PMAG_30
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (T) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_30.paa";
	};
	class Louetta_556x45_TM_PMAG_30: Louetta_556x45_T_PMAG_30
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (TM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_30.paa";
	};
	class Louetta_556x45_IRT_PMAG_30: Louetta_556x45_PMAG_30
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRT) PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_30.paa";
	};
	class Louetta_556x45_IRTM_PMAG_30: Louetta_556x45_IRT_PMAG_30
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRTM) PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_30.paa";
	};
	class Louetta_556x45_PMAG_40_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=47;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 47";
		displayname="5.56mm 47rnd TTI PMAG";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran.p3d";
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_40_tti: Louetta_556x45_PMAG_40_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 47rnd (T) TTI PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_TM_PMAG_40_tti: Louetta_556x45_T_PMAG_40_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 47rnd (TM) TTI PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRT_PMAG_40_tti: Louetta_556x45_PMAG_40_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 47rnd (IRT) TTI PMAG";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRTM_PMAG_40_tti: Louetta_556x45_IRT_PMAG_40_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 47rnd (IRTM) TTI PMAG";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_PMAG_40_tan_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=47;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 47";
		displayname="5.56mm 47rnd TTI PMAG Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_40_tan_tti: Louetta_556x45_PMAG_40_tan_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 47rnd (T) TTI PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_TM_PMAG_40_tan_tti: Louetta_556x45_T_PMAG_40_tan_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 47rnd (TM) TTI PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRT_PMAG_40_tan_tti: Louetta_556x45_PMAG_40_tan_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 47rnd (IRT) TTI PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_IRTM_PMAG_40_tan_tti: Louetta_556x45_IRT_PMAG_40_tan_tti
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 47rnd (IRTM) TTI PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_40.paa";
	};
	class Louetta_556x45_PMAG_30_tan: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="5.56mm 30rnd PMAG Tan";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=4;
		scope=2;
		eden=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\seven\data\PMAG_30.paa";
		model="seven\mags\pmag_mw.p3d";
		modelSpecial="seven\mags\proxy\pmag_30_tan.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag30_tan_co.paa"
		};
		modelSpecialIsProxy=1;
	};
	class Louetta_556x45_T_PMAG_30_tan: Louetta_556x45_PMAG_30_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (T) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_30.paa";
	};
	class Louetta_556x45_TM_PMAG_30_tan: Louetta_556x45_T_PMAG_30_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		displayName="5.56mm 30rnd (TM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_30.paa";
	};
	class Louetta_556x45_IRT_PMAG_30_tan: Louetta_556x45_PMAG_30_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRT) PMAG Tan";
		tracersEvery=1;
		lastRoundsTracer=1;
		picture="\seven\data\PMAG_30.paa";
	};
	class Louetta_556x45_IRTM_PMAG_30_tan: Louetta_556x45_IRT_PMAG_30_tan
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer_IR";
		displayName="5.56mm 30rnd (IRTM) PMAG Tan";
		tracersEvery=3;
		lastRoundsTracer=3;
		picture="\seven\data\PMAG_30.paa";
	};
};
class CfgMagazineWells
{
	class louetta_300
	{
		Louetta_Magazines[]=
		{
			"Louetta_300_Blackout",
			"Louetta_300_Blackout_SMK",
			"Louetta_300_Blackout_40",
			"Louetta_300_Blackout_SMK_40",
			"Louetta_300_Blackout_40_tan",
			"Louetta_300_Blackout_SMK_40_tan",
			"Louetta_300_Blackout_40_tti",
			"Louetta_300_Blackout_SMK_40_tti",
			"Louetta_300_Blackout_40_tan_tti",
			"Louetta_300_Blackout_SMK_40_tan_tti"
		};
	};
	class STANAG_556x45
	{
		Louetta_Magazines[]=
		{
			"Louetta_556x45_Stanag",
			"Louetta_556x45_T_Stanag",
			"Louetta_556x45_TM_Stanag",
			"Louetta_556x45_IRT_Stanag",
			"Louetta_556x45_IRTM_Stanag",
			"Louetta_556x45_PMAG_20",
			"Louetta_556x45_T_PMAG_20",
			"Louetta_556x45_TM_PMAG_20",
			"Louetta_556x45_IRT_PMAG_20",
			"Louetta_556x45_IRTM_PMAG_20",
			"Louetta_556x45_PMAG_tan_20",
			"Louetta_556x45_T_PMAG_tan_20",
			"Louetta_556x45_TM_PMAG_tan_20",
			"Louetta_556x45_IRT_PMAG_tan_20",
			"Louetta_556x45_IRTM_PMAG_tan_20",
			"Louetta_556x45_PMAG_60",
			"Louetta_556x45_T_PMAG_60",
			"Louetta_556x45_TM_PMAG_60",
			"Louetta_556x45_IRT_PMAG_60",
			"Louetta_556x45_IRTM_PMAG_60",
			"Louetta_556x45_PMAG_mw",
			"Louetta_556x45_T_PMAG_mw",
			"Louetta_556x45_TM_PMAG_mw",
			"Louetta_556x45_IRT_PMAG_mw",
			"Louetta_556x45_IRTM_PMAG_mw",
			"Louetta_556x45_PMAG_30",
			"Louetta_556x45_T_PMAG_30",
			"Louetta_556x45_TM_PMAG_30",
			"Louetta_556x45_IRT_PMAG_30",
			"Louetta_556x45_IRTM_PMAG_30",
			"Louetta_556x45_PMAG_40",
			"Louetta_556x45_T_PMAG_40",
			"Louetta_556x45_TM_PMAG_40",
			"Louetta_556x45_IRT_PMAG_40",
			"Louetta_556x45_IRTM_PMAG_40",
			"Louetta_556x45_PMAG_40_tan",
			"Louetta_556x45_T_PMAG_40_tan",
			"Louetta_556x45_TM_PMAG_40_tan",
			"Louetta_556x45_IRT_PMAG_40_tan",
			"Louetta_556x45_IRTM_PMAG_40_tan",
			"Louetta_556x45_PMAG_40_tti",
			"Louetta_556x45_T_PMAG_40_tti",
			"Louetta_556x45_TM_PMAG_40_tti",
			"Louetta_556x45_IRT_PMAG_40_tti",
			"Louetta_556x45_IRTM_PMAG_40_tti",
			"Louetta_556x45_PMAG_40_tan_tti",
			"Louetta_556x45_T_PMAG_40_tan_tti",
			"Louetta_556x45_TM_PMAG_40_tan_tti",
			"Louetta_556x45_IRT_PMAG_40_tan_tti",
			"Louetta_556x45_IRTM_PMAG_40_tan_tti",
			"Louetta_556x45_PMAG_30_tan",
			"Louetta_556x45_T_PMAG_30_tan",
			"Louetta_556x45_TM_PMAG_30_tan",
			"Louetta_556x45_IRT_PMAG_30_tan",
			"Louetta_556x45_IRTM_PMAG_30_tan"
		};
	};
	class STANAG_762x51
	{
		Louetta_Magazines[]=
		{
			"Louetta_20Rnd_762x51mm_m110",
			"Louetta_20Rnd_762x51mm_m110_T",
			"Louetta_20Rnd_762x51mm_m110_TM",
			"Louetta_20Rnd_762x51mm_m110_IRT",
			"Louetta_20Rnd_762x51mm_m110_IRTM",
			"Louetta_20Rnd_762x51mm_pmag",
			"Louetta_20Rnd_762x51mm_pmag_T",
			"Louetta_20Rnd_762x51mm_pmag_TM",
			"Louetta_20Rnd_762x51mm_pmag_IRT",
			"Louetta_20Rnd_762x51mm_pmag_IRTM",
			"Louetta_20Rnd_762x51mm_pmag_tan",
			"Louetta_20Rnd_762x51mm_pmag_tan_T",
			"Louetta_20Rnd_762x51mm_pmag_tan_TM",
			"Louetta_20Rnd_762x51mm_pmag_tan_IRT",
			"Louetta_20Rnd_762x51mm_pmag_tan_IRTM"
		};
	};
	class AK_545x39
	{
		Louetta_Magazines[]=
		{
			"Louetta_545x39_PMAG",
			"Louetta_545x39_T_PMAG",
			"Louetta_545x39_TM_PMAG",
			"Louetta_545x39_IRT_PMAG",
			"Louetta_545x39_IRTM_PMAG",
			"Louetta_545x39_PMAG_tan",
			"Louetta_545x39_T_PMAG_tan",
			"Louetta_545x39_TM_PMAG_tan",
			"Louetta_545x39_IRT_PMAG_tan",
			"Louetta_545x39_IRTM_PMAG_tan"
		};
	};
	class CBA_545x39_AK
	{
		Louetta_Magazines[]=
		{
			"Louetta_545x39_PMAG",
			"Louetta_545x39_T_PMAG",
			"Louetta_545x39_TM_PMAG",
			"Louetta_545x39_IRT_PMAG",
			"Louetta_545x39_IRTM_PMAG",
			"Louetta_545x39_PMAG_tan",
			"Louetta_545x39_T_PMAG_tan",
			"Louetta_545x39_TM_PMAG_tan",
			"Louetta_545x39_IRT_PMAG_tan",
			"Louetta_545x39_IRTM_PMAG_tan"
		};
	};
	class CBA_545x39_RPK
	{
		Louetta_Magazines[]=
		{
			"Louetta_545x39_PMAG",
			"Louetta_545x39_T_PMAG",
			"Louetta_545x39_TM_PMAG",
			"Louetta_545x39_IRT_PMAG",
			"Louetta_545x39_IRTM_PMAG",
			"Louetta_545x39_PMAG_tan",
			"Louetta_545x39_T_PMAG_tan",
			"Louetta_545x39_TM_PMAG_tan",
			"Louetta_545x39_IRT_PMAG_tan",
			"Louetta_545x39_IRTM_PMAG_tan"
		};
	};
	class Louetta_mk48
	{
		Louetta_Magazines[]=
		{
			"Louetta_100Rnd_762x51mm",
			"Louetta_100Rnd_762x51mm_T",
			"Louetta_100Rnd_762x51mm_TM",
			"Louetta_100Rnd_762x51mm_IRT",
			"Louetta_100Rnd_762x51mm_IRTM",
			"Louetta_200Rnd_762x51mm",
			"Louetta_200Rnd_762x51mm_T",
			"Louetta_200Rnd_762x51mm_TM",
			"Louetta_200Rnd_762x51mm_IRT",
			"Louetta_200Rnd_762x51mm_IRTM",
			"Louetta_100Rnd_S_762x51mm",
			"Louetta_100Rnd_S_762x51mm_T",
			"Louetta_100Rnd_S_762x51mm_TM",
			"Louetta_100Rnd_S_762x51mm_IRT",
			"Louetta_100Rnd_S_762x51mm_IRTM",
			"Louetta_200Rnd_S_762x51mm",
			"Louetta_200Rnd_S_762x51mm_T",
			"Louetta_200Rnd_S_762x51mm_TM",
			"Louetta_200Rnd_S_762x51mm_IRT",
			"Louetta_200Rnd_S_762x51mm_IRTM"
		};
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
class asdg_PistolUnderRail;
class asdg_MuzzleSlot_9MM_SMG
{
	class compatibleItems
	{
		louettampx_suppressor=1;
	};
};
class asdg_MuzzleSlot_9MM;
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
		Louetta_scope1=1;
		Louetta_scope1_t=1;
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
		m110suppressor=1;
	};
};
class asdg_MuzzleSlot_556
{
	class compatibleItems
	{
		louettasocom556=1;
		louettamcx_suppressor=1;
	};
};
class asdg_PistolOpticMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class LMG_03_base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class m110suppressor: ItemCore
	{
		scope=2;
		displayName="M110 Suppressor";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="seven\m110\suppressor.p3d";
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
	class louettam107: ItemCore
	{
		scope=2;
		displayName="M107 Suppressor";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="seven\m107\muzzle\suppressor_blk_nw.p3d";
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
	class louettam107_2: louettam107
	{
		displayName="M107 Suppressor Wrapped";
		model="seven\m107\muzzle\suppressor_blk.p3d";
	};
	class louettam107_3: louettam107
	{
		displayName="M107 Suppressor Tan Wrapped";
		model="seven\m107\muzzle\suppressor.p3d";
	};
	class louettam107_4: louettam107
	{
		displayName="M107 Suppressor Tan";
		model="seven\m107\muzzle\suppressor_nw.p3d";
	};
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
	class louettamcx_suppressor: ItemCore
	{
		scope=2;
		displayName="MCX Integral Suppressor System";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="seven\mcx\muzzle\suppressor.p3d";
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
	class louettampx_suppressor: ItemCore
	{
		scope=2;
		displayName="MPX Supressor";
		author="Louetta";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="seven\mpx\muzzle\suppressor.p3d";
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
	class Louetta_m107_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL";
		model="seven\m107\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		editorCategory="tf136";
		editorSubcategory="louetta";
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
	class Louetta_sidemk18_1_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="AN/PEQ-15 + M600U";
		model="seven\mk18\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemk18_1_FLASH";
		MRT_SwitchItemNextClass="Louetta_sidemk18_1_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemk18_1_MIX: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="AN/PEQ-15 + M600U";
		model="seven\mk18\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemk18_1_LASER";
		MRT_SwitchItemNextClass="Louetta_sidemk18_1_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemk18_1_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="AN/PEQ-15 + M600U";
		model="seven\mk18\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemk18_1_MIX";
		MRT_SwitchItemNextClass="Louetta_sidemk18_1_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemk18_2_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="L3 NGAL + M600U";
		model="seven\mk18\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemk18_2_FLASH";
		MRT_SwitchItemNextClass="Louetta_sidemk18_2_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemk18_2_MIX: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="L3 NGAL + M600U";
		model="seven\mk18\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemk18_2_LASER";
		MRT_SwitchItemNextClass="Louetta_sidemk18_2_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemk18_2_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="L3 NGAL + M600U";
		model="seven\mk18\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemk18_2_MIX";
		MRT_SwitchItemNextClass="Louetta_sidemk18_2_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemcx_LASER: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="MAWL + M600U";
		model="seven\mcx\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemcx_FLASH";
		MRT_SwitchItemNextClass="Louetta_sidemcx_MIX";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemcx_MIX: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="MAWL + M600U";
		model="seven\mcx\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemcx_LASER";
		MRT_SwitchItemNextClass="Louetta_sidemcx_FLASH";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemcx_FLASH: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="MAWL + M600U";
		model="seven\mcx\side\side_1.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemcx_MIX";
		MRT_SwitchItemNextClass="Louetta_sidemcx_LASER";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemcx_LASER_2: Louetta_ANPEQ15_TAN
	{
		scope=2;
		displayName="NGAL + M600U";
		model="seven\mcx\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemcx_FLASH_2";
		MRT_SwitchItemNextClass="Louetta_sidemcx_MIX_2";
		MRT_switchItemHintText="IR Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemcx_MIX_2: Louetta_ANPEQ15_TAN_MIX
	{
		scope=1;
		displayName="NGAL + M600U";
		model="seven\mcx\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemcx_LASER_2";
		MRT_SwitchItemNextClass="Louetta_sidemcx_FLASH_2";
		MRT_switchItemHintText="Visible Laser";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_sidemcx_FLASH_2: Louetta_SFLIGHT_TOP
	{
		scope=1;
		displayName="NGAL + M600U";
		model="seven\mcx\side\side_2.p3d";
		author="Louetta";
		picture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		UiPicture="\026Depot_acc\data\UI\LAZERLIGHTcombotan.paa";
		MRT_SwitchItemPrevClass="Louetta_sidemcx_MIX_2";
		MRT_SwitchItemNextClass="Louetta_sidemcx_LASER_2";
		MRT_switchItemHintText="Flash light";
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class Louetta_scope1: optic_SOS
	{
		displayName="M110K1 Scope";
		author="Louetta";
		picture="\RH_acc\inv\ui\shortdot_ui_ca.paa";
		Uipicture="\RH_acc\inv\ui\shortdot_ui_ca.paa";
		model="seven\m110\scope.p3d";
		scope=2;
		dlc="TF136";
		descriptionShort="This is from TF136";
		weaponInfoType="RscWeaponZeroing";
		editorCategory="tf136";
		editorSubcategory="louetta";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=9;
			optics=1;
			modelOptics="\A3\Weapons_f\acc\reticle_marksman_F";
			class OpticsModes
			{
				class optic
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.071944997;
					opticsZoomMax=0.01277;
					opticsZoomInit=0.071944997;
					discretefov[]={0.071944997,0.024900001,0.01277};
					modelOptics[]=
					{
						"\RH_acc\RH_leu_mildot6_5illum.p3d",
						"\RH_acc\RH_leu_mildot10illum.p3d",
						"\RH_acc\RH_leu_mildot19_5illum.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=0;
					discreteDistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex=0;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=600;
				};
			};
		};
		inertia=0.2;
	};
	class Louetta_scope1_t: optic_SOS
	{
		displayName="M110K1 Scope + AN/PAS-13";
		author="Louetta";
		_generalMacro="Tog_atnthor";
		picture="\RH_acc\inv\ui\shortdot_ui_ca.paa";
		Uipicture="\RH_acc\inv\ui\shortdot_ui_ca.paa";
		model="seven\m110\scope_t.p3d";
		scope=2;
		dlc="TF136";
		descriptionShort="Louetta Is Awesome";
		weaponInfoType="RscWeaponZeroing";
		editorCategory="tf136";
		editorSubcategory="louetta";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=9;
			optics=1;
			modelOptics="\RH_acc\RH_LWTS_optic";
			class OpticsModes
			{
				class optic
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.071944997;
					opticsZoomMax=0.01277;
					opticsZoomInit=0.071944997;
					discretefov[]={0.071944997,0.024900001,0.01277};
					modelOptics[]=
					{
						"\RH_acc\RH_leu_mildot6_5illum.p3d",
						"\RH_acc\RH_leu_mildot10illum.p3d",
						"\RH_acc\RH_leu_mildot19_5illum.p3d"
					};
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={2,3};
					opticsFlare=0;
					discreteDistance[]={100,200,300,400,500};
					discreteDistanceInitIndex=0;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=500;
					cameraDir="";
				};
			};
		};
		inertia=0.2;
	};
	class rhs_weap_mk18_bk;
	class Louetta_MCX: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\MCX\MCX.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] MCX";
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
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidemcx_LASER",
					"Louetta_sidemcx_FLASH",
					"Louetta_sidemcx_Mix",
					"Louetta_sidemcx_LASER_2",
					"Louetta_sidemcx_FLASH_2",
					"Louetta_sidemcx_Mix_2"
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
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\seven\anim\MCX.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_MCX";
	};
	class Louetta_MCX_2: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\MCX\MCX_2.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] MCX 2";
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
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidemcx_LASER",
					"Louetta_sidemcx_FLASH",
					"Louetta_sidemcx_Mix",
					"Louetta_sidemcx_LASER_2",
					"Louetta_sidemcx_FLASH_2",
					"Louetta_sidemcx_Mix_2"
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
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\seven\anim\MCX.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_MCX_2";
	};
	class Louetta_MCX_blk: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\MCX\MCX_blk.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] MCX Black";
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
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidemcx_LASER",
					"Louetta_sidemcx_FLASH",
					"Louetta_sidemcx_Mix",
					"Louetta_sidemcx_LASER_2",
					"Louetta_sidemcx_FLASH_2",
					"Louetta_sidemcx_Mix_2"
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
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\seven\anim\MCX.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_MCX_blk";
	};
	class Louetta_MCX_2_blk: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\MCX\MCX_2_blk.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] MCX 2 Black";
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
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_sidemcx_LASER",
					"Louetta_sidemcx_FLASH",
					"Louetta_sidemcx_Mix",
					"Louetta_sidemcx_LASER_2",
					"Louetta_sidemcx_FLASH_2",
					"Louetta_sidemcx_Mix_2"
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
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\seven\anim\MCX.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_MCX_2_blk";
	};
	class Louetta_MCX_2_tan: Louetta_MCX_2_blk
	{
		displayName="[TFL] MCX 2 Tan";
		hiddenSelections[]=
		{
			"upper",
			"lower",
			"stock1",
			"rail"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mcx\data\upper_tan.paa",
			"seven\mcx\data\lower_tan.paa",
			"seven\mcx\data\stock1_tan_co.paa",
			"seven\mcx\data\rail_tan.paa"
		};
		baseWeapon="Louetta_MCX_2_tan";
	};
	class Louetta_MCX_2_tan1: Louetta_MCX_2_blk
	{
		displayName="[TFL] MCX 2 Two Tone 1";
		hiddenSelections[]=
		{
			"upper",
			"lower",
			"stock1"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mcx\data\upper_tan.paa",
			"seven\mcx\data\lower_tan.paa",
			"seven\mcx\data\stock1_tan_co.paa"
		};
		baseWeapon="Louetta_MCX_2_tan1";
	};
	class Louetta_MCX_2_tan2: Louetta_MCX_2_blk
	{
		displayName="[TFL] MCX 2 Two Tone 2";
		hiddenSelections[]=
		{
			"stock1",
			"rail"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mcx\data\stock1_tan_co.paa",
			"seven\mcx\data\rail_tan.paa"
		};
		baseWeapon="Louetta_MCX_2_tan2";
	};
	class Louetta_MK18: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\mk18\mk18.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] MK18";
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
					"Louetta_sidemk18_1_LASER",
					"Louetta_sidemk18_1_FLASH",
					"Louetta_sidemk18_1_Mix",
					"Louetta_sidemk18_2_LASER",
					"Louetta_sidemk18_2_FLASH",
					"Louetta_sidemk18_2_Mix"
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
			"seven\anim\MK18.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_MK18";
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
	class Louetta_URGI: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\mk16\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] Lopez's URGI";
		picture="\seven\mk16\data\ui.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
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
					"Louetta_sideURGI_1_LASER",
					"Louetta_sideURGI_1_FLASH",
					"Louetta_sideURGI_1_Mix",
					"Louetta_sideURGI_2_LASER",
					"Louetta_sideURGI_2_FLASH",
					"Louetta_sideURGI_2_Mix",
					"Louetta_sideURGI_3_LASER",
					"Louetta_sideURGI_3_FLASH",
					"Louetta_sideURGI_3_Mix",
					"Louetta_sideURGI_4_LASER",
					"Louetta_sideURGI_4_FLASH",
					"Louetta_sideURGI_4_Mix"
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
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI";
	};
	class Louetta_URGI_2: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\mk16\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] Furlan's URGI";
		picture="\seven\mk16\data\ui2.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
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
					"Louetta_sideURGI_1_LASER",
					"Louetta_sideURGI_1_FLASH",
					"Louetta_sideURGI_1_Mix",
					"Louetta_sideURGI_2_LASER",
					"Louetta_sideURGI_2_FLASH",
					"Louetta_sideURGI_2_Mix",
					"Louetta_sideURGI_3_LASER",
					"Louetta_sideURGI_3_FLASH",
					"Louetta_sideURGI_3_Mix",
					"Louetta_sideURGI_4_LASER",
					"Louetta_sideURGI_4_FLASH",
					"Louetta_sideURGI_4_Mix"
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk16\data\lower2.paa",
			"seven\mk16\data\magpulstock_tan_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI_2";
	};
	class Louetta_URGI_3: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\mk16\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] URGI 1";
		picture="\seven\mk16\data\ui2.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
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
					"Louetta_sideURGI_1_LASER",
					"Louetta_sideURGI_1_FLASH",
					"Louetta_sideURGI_1_Mix",
					"Louetta_sideURGI_2_LASER",
					"Louetta_sideURGI_2_FLASH",
					"Louetta_sideURGI_2_Mix",
					"Louetta_sideURGI_3_LASER",
					"Louetta_sideURGI_3_FLASH",
					"Louetta_sideURGI_3_Mix",
					"Louetta_sideURGI_4_LASER",
					"Louetta_sideURGI_4_FLASH",
					"Louetta_sideURGI_4_Mix"
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk16\data\lower3.paa",
			"seven\mk16\data\magpulstock_tan_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI_3";
	};
	class Louetta_URGI_4: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\mk16\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] URGI 2";
		picture="\seven\mk16\data\ui2.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
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
					"Louetta_sideURGI_1_LASER",
					"Louetta_sideURGI_1_FLASH",
					"Louetta_sideURGI_1_Mix",
					"Louetta_sideURGI_2_LASER",
					"Louetta_sideURGI_2_FLASH",
					"Louetta_sideURGI_2_Mix",
					"Louetta_sideURGI_3_LASER",
					"Louetta_sideURGI_3_FLASH",
					"Louetta_sideURGI_3_Mix",
					"Louetta_sideURGI_4_LASER",
					"Louetta_sideURGI_4_FLASH",
					"Louetta_sideURGI_4_Mix"
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk16\data\lower4.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI_4";
	};
	class Louetta_URGI_5: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\mk16\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] URGI 3";
		picture="\seven\mk16\data\ui2.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
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
					"Louetta_sideURGI_1_LASER",
					"Louetta_sideURGI_1_FLASH",
					"Louetta_sideURGI_1_Mix",
					"Louetta_sideURGI_2_LASER",
					"Louetta_sideURGI_2_FLASH",
					"Louetta_sideURGI_2_Mix",
					"Louetta_sideURGI_3_LASER",
					"Louetta_sideURGI_3_FLASH",
					"Louetta_sideURGI_3_Mix",
					"Louetta_sideURGI_4_LASER",
					"Louetta_sideURGI_4_FLASH",
					"Louetta_sideURGI_4_Mix"
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk16\data\lower6.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI_5";
	};
	class Louetta_URGI_6: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\seven\mk16\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] URGI 4";
		picture="\seven\mk16\data\ui2.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
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
					"Louetta_sideURGI_1_LASER",
					"Louetta_sideURGI_1_FLASH",
					"Louetta_sideURGI_1_Mix",
					"Louetta_sideURGI_2_LASER",
					"Louetta_sideURGI_2_FLASH",
					"Louetta_sideURGI_2_Mix",
					"Louetta_sideURGI_3_LASER",
					"Louetta_sideURGI_3_FLASH",
					"Louetta_sideURGI_3_Mix",
					"Louetta_sideURGI_4_LASER",
					"Louetta_sideURGI_4_FLASH",
					"Louetta_sideURGI_4_Mix"
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk16\data\lower7.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI_6";
	};
	class Louetta_URGI_7: rhs_weap_mk18_bk
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="seven\mk16\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[TFL] URGI 5";
		picture="seven\mk16\data\ui2.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
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
					"Louetta_sideURGI_1_LASER",
					"Louetta_sideURGI_1_FLASH",
					"Louetta_sideURGI_1_Mix",
					"Louetta_sideURGI_2_LASER",
					"Louetta_sideURGI_2_FLASH",
					"Louetta_sideURGI_2_Mix",
					"Louetta_sideURGI_3_LASER",
					"Louetta_sideURGI_3_FLASH",
					"Louetta_sideURGI_3_Mix",
					"Louetta_sideURGI_4_LASER",
					"Louetta_sideURGI_4_FLASH",
					"Louetta_sideURGI_4_Mix"
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
		hiddenSelections[]=
		{
			"camo1",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mk16\data\lower7.paa",
			"seven\mk16\data\magpulstock_tan_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI_7";
	};
	class SMG_05_base_F;
	class Louetta_MPX2: SMG_05_base_F
	{
		author="Louetta";
		displayName="[TFL] MPX";
		_generalMacro="Louetta_MPX2";
		baseWeapon="Louetta_MPX2";
		model="seven\mpx\mpx.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"nia_wp_hk416\anim\handpose_VFG.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		scope=2;
		editorCategory="tf136";
		editorSubcategory="louetta";
		class WeaponSlotsInfo
		{
			mass=58;
			class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
			{
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0.44999999,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.2,0.34999999};
				iconScale=0.25;
			};
		};
	};
	class hgun_P07_F;
	class louetta_g17: hgun_P07_F
	{
		author="Louetta";
		dlc="TF136";
		scope=2;
		magazineWell[]={};
		model="seven\glock\glock17.p3d";
		picture="";
		baseWeapon="louetta_g17";
		hiddenSelections[]={};
		magazines[]=
		{
			"Louetta_19Rnd_9x19_g17"
		};
		displayname="[TFL] Glock 17";
		descriptionShort="";
		reloadAction="HLC_GestureReloadP226";
		class Library
		{
			libTextDesc="Louetta";
		};
		modes[]=
		{
			"Single"
		};
		class WeaponSlotsInfo
		{
			mass=13;
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPicture="\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPosition[]={-0.15000001,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
			};
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class louetta_g17_1: louetta_g17
	{
		author="Louetta";
		dlc="TF136";
		scope=2;
		model="seven\glock\glock17_1.p3d";
		picture="";
		magazines[]=
		{
			"Louetta_19Rnd_9x19_g17"
		};
		displayname="[TFL] Glock 17 2 ";
		descriptionShort="";
		class Library
		{
			libTextDesc="Louetta";
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
		baseWeapon="louetta_g17_1";
	};
	class louetta_g17_2: louetta_g17
	{
		author="Louetta";
		dlc="TF136";
		scope=2;
		model="seven\glock\glock17_2.p3d";
		picture="";
		magazines[]=
		{
			"Louetta_19Rnd_9x19_g17"
		};
		displayname="[TFL] Glock 17 3";
		descriptionShort="";
		class Library
		{
			libTextDesc="Louetta";
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
		baseWeapon="louetta_g17_2";
	};
	class louetta_g17_BS: hgun_P07_F
	{
		author="Louetta";
		dlc="TF136";
		scope=2;
		magazineWell[]={};
		model="seven\glock\glock17_bs.p3d";
		picture="";
		baseWeapon="louetta_g17_BS";
		hiddenSelections[]={};
		magazines[]=
		{
			"Louetta_33Rnd_9x19_g17"
		};
		displayname="[TFL] Glock 17 BS";
		descriptionShort="";
		reloadAction="HLC_GestureReloadP226";
		class Library
		{
			libTextDesc="Louetta";
		};
		modes[]=
		{
			"Single"
		};
		class WeaponSlotsInfo
		{
			mass=13;
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPicture="\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPosition[]={-0.15000001,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
			};
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class louetta_g17_1_BS: louetta_g17
	{
		author="Louetta";
		dlc="TF136";
		scope=2;
		model="seven\glock\glock17_1_BS.p3d";
		picture="";
		magazines[]=
		{
			"Louetta_33Rnd_9x19_g17"
		};
		displayname="[TFL] Glock 17 2 BS";
		descriptionShort="";
		class Library
		{
			libTextDesc="Louetta";
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
		baseWeapon="louetta_g17_1_BS";
	};
	class louetta_g17_2_BS: louetta_g17
	{
		author="Louetta";
		dlc="TF136";
		scope=2;
		model="seven\glock\glock17_2_BS.p3d";
		picture="";
		magazines[]=
		{
			"Louetta_33Rnd_9x19_g17"
		};
		displayname="[TFL] Glock 17 3 BS";
		descriptionShort="";
		class Library
		{
			libTextDesc="Louetta";
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
		baseWeapon="louetta_g17_2_BS";
	};
	class UGL_F;
	class launch_MRAWS_base_F;
	class louetta_walker_MRAWS: launch_MRAWS_base_F
	{
		author="Louetta";
		_generalMacro="louetta_walker_MRAWS";
		baseWeapon="louetta_walker_MRAWS";
		scope=2;
		displayName="Walker's Soul Stealer";
		picture="\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_darkgreen_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"seven\launcher\walker_base.paa",
			"seven\launcher\136_launcher_2.paa"
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class louetta_special_MRAWS: launch_MRAWS_base_F
	{
		author="Louetta";
		_generalMacro="louetta_special_MRAWS";
		baseWeapon="louetta_special_MRAWS";
		scope=2;
		displayName="Louetta Special";
		picture="\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_darkgreen_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"seven\launcher\sand_base.paa",
			"seven\launcher\136_launcher_2.paa"
		};
		editorCategory="tf136";
		editorSubcategory="louetta";
	};
	class arifle_SPAR_01_base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Louetta_HK416_1: arifle_SPAR_01_base_F
	{
		author="Louetta";
		_generalMacro="Louetta_HK416_1";
		scope=2;
		editorCategory="tf136";
		editorSubcategory="louetta";
		displayName="[TFL] HK416A5 1";
		descriptionShort="";
		DLC="SOCOM";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		model="\seven\HK416_1.p3d";
		hiddenSelections[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		hasBipod=0;
		magazineReloadSwitchPhase=0.47999999;
		htMin=8;
		htMax=920;
		inertia=0.5;
		aimTransitionSpeed=1.1;
		dexterity=1.5;
		initSpeed=800;
		recoil="recoil_spar";
		maxZeroing=800;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		drysound[]=
		{
			"A3\Sounds_F_exp\arsenal\weapons\rifles\spar01\spar01_dry",
			1.5,
			1,
			10
		};
		reloadmagazinesound[]=
		{
			"A3\Sounds_F_exp\arsenal\weapons\rifles\spar01\spar01_reload",
			1,
			1,
			35
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
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
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=90;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
	};
	class Louetta_HK416_2: Louetta_HK416_1
	{
		author="Louetta";
		_generalMacro="Louetta_HK416_2";
		scope=2;
		displayName="[TFL] HK416A5 2";
		descriptionShort="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		model="\seven\HK416_2.p3d";
	};
	class Louetta_HK416_5: Louetta_HK416_1
	{
		author="Louetta";
		_generalMacro="Louetta_HK416_3";
		scope=2;
		displayName="[TFL] HK416A5 5.45x39mm Conversion Kit";
		descriptionShort="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		model="\seven\HK416_5.p3d";
		recoil="rhs_recoil_ak74m";
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_plum_AK",
			"rhs_30Rnd_545x39_7N10_desert_AK",
			"rhs_30Rnd_545x39_7N10_camo_AK",
			"rhs_30Rnd_545x39_7N6_AK",
			"rhs_30Rnd_545x39_7N6_green_AK",
			"rhs_30Rnd_545x39_7N6M_AK",
			"rhs_30Rnd_545x39_7N6M_green_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N10_2mag_AK",
			"rhs_30Rnd_545x39_7N10_2mag_plum_AK",
			"rhs_30Rnd_545x39_7N10_2mag_desert_AK",
			"rhs_30Rnd_545x39_7N10_2mag_camo_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_plum_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_camo_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_30Rnd_545x39_AK_plum_green",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N6_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_no_tracers"
		};
		magazineWell[]=
		{
			"AK_545x39",
			"CBA_545x39_AK",
			"CBA_545x39_RPK"
		};
	};
	class Louetta_HK416_9: Louetta_HK416_1
	{
		author="Louetta";
		_generalMacro="Louetta_HK416_7";
		scope=2;
		displayName="[TFL] HK416A5 3";
		descriptionShort="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		model="\seven\HK416_9.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\anim\anim_416ml.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"Louetta_side_1_LASER",
					"Louetta_side_1_FLASH",
					"Louetta_side_1_Mix",
					"Louetta_side_2_LASER",
					"Louetta_side_2_FLASH",
					"Louetta_side_2_Mix"
				};
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=90;
		};
	};
	class Louetta_HK416_10: Louetta_HK416_9
	{
		author="Louetta";
		_generalMacro="Louetta_HK416_7";
		scope=2;
		displayName="[TFL] HK416A5 4";
		descriptionShort="";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		model="\seven\HK416_10.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\anim\anim_416ml.rtm"
		};
	};
	class arifle_SPAR_03_base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Louetta_HK417: arifle_SPAR_03_base_F
	{
		author="Louetta";
		_generalMacro="Louetta_HK417";
		scope=0;
		editorCategory="tf136";
		editorSubcategory="louetta";
		displayName="$STR_A3_CfgWeapons_arifle_SPAR_03_base_F0";
		descriptionShort="$STR_A3_CfgWeapons_arifle_SPAR_03_base_F1";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR17_ca.paa";
		model="\seven\data2\HK417.p3d";
		hiddenSelections[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		magazines[]=
		{
			"Louetta_20Rnd_762x51mm",
			"Louetta_20Rnd_762x51mm_T",
			"Louetta_20Rnd_762x51mm_TM",
			"Louetta_20Rnd_762x51mm_IRT",
			"Louetta_20Rnd_762x51mm_IRTM",
			"20Rnd_762x51_Mag"
		};
		htMin=12;
		htMax=800;
		inertia=0.80000001;
		aimTransitionSpeed=0.69999999;
		dexterity=1.2;
		initSpeed=900;
		recoil="recoil_spar_dmr";
		maxZeroing=1600;
		cursor="srifle";
		drySound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_dry",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_firemode",
			0.25118864,
			1,
			5
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
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
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_SPAR_03_base_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=160;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1",
			"fullauto_medium"
		};
	};
	class Louetta_HK417_1: Louetta_HK417
	{
		author="Louetta";
		_generalMacro="Louetta_HK417_1";
		baseWeapon="Louetta_HK417_1";
		scope=0;
		displayName="[TFL] HK417";
		model="seven\data2\HK417.p3d";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
	};
	class Louetta_HK417_2: Louetta_HK417
	{
		author="Louetta";
		_generalMacro="Louetta_HK417_2";
		baseWeapon="Louetta_HK417_2";
		scope=0;
		displayName="[TFL] HK417 2";
		model="seven\data2\HK417_2.p3d";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
	};
	class Louetta_HK417_3: Louetta_HK417
	{
		author="Louetta";
		_generalMacro="Louetta_HK417_3";
		baseWeapon="Louetta_HK417_3";
		scope=2;
		displayName="[TFL] HK417";
		model="seven\data2\HK417_3.p3d";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_spar_03_blk_f_x_ca.paa";
	};
	class Louetta_HK417_4: Louetta_HK417
	{
		author="Louetta";
		_generalMacro="Louetta_HK417_4";
		baseWeapon="Louetta_HK417_4";
		scope=0;
		displayName="[TFL] HK417 4";
		model="seven\data2\HK417_4.p3d";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_spar_03_blk_f_x_ca.paa";
	};
	class Louetta_m110k1: arifle_SPAR_03_base_F
	{
		author="Louetta";
		_generalMacro="Louetta_m110k1";
		scope=0;
		editorCategory="tf136";
		editorSubcategory="louetta";
		displayName="$STR_A3_CfgWeapons_arifle_SPAR_03_base_F0";
		descriptionShort="$STR_A3_CfgWeapons_arifle_SPAR_03_base_F1";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR17_ca.paa";
		model="\seven\data2\HK417.p3d";
		hiddenSelections[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\seven\Anim\M110K1.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		magazines[]=
		{
			"Louetta_20Rnd_762x51mm_m110",
			"20Rnd_762x51_Mag"
		};
		magazineWell[]=
		{
			"STANAG_762x51",
			"STANAG_762x51_Large"
		};
		htMin=12;
		htMax=800;
		inertia=0.80000001;
		aimTransitionSpeed=0.69999999;
		dexterity=1.2;
		initSpeed=900;
		recoil="recoil_spar_dmr";
		maxZeroing=1600;
		cursor="srifle";
		drySound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_dry",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_firemode",
			0.25118864,
			1,
			5
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
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
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_SPAR_03_base_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				compatibleItems[]=
				{
					"louetta_peq15tan"
				};
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=160;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
	};
	class Louetta_M110k1_1: Louetta_m110k1
	{
		author="Louetta";
		_generalMacro="Louetta_m110k1_1";
		baseWeapon="Louetta_m110k1_1";
		scope=2;
		displayName="[TFL] M110K1";
		model="seven\m110\M110K1.p3d";
		picture="\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_spar_03_blk_f_x_ca.paa";
	};
	class Louetta_mk48_1: LMG_03_base_F
	{
		author="Louetta";
		scope=2;
		ace_overheating_allowSwapBarrel=1;
		ACE_barrelTwist=305;
		ACE_barrelLength=465;
		magazines[]=
		{
			"Louetta_100Rnd_762x51mm"
		};
		hasBipod=0;
		deployedPivot="deploypoint";
		magazineReloadSwitchPhase=0.5;
		reloadaction="HLC_GestureReloadM249";
		maxZeroing=1400;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_mk46_STD.rtm"
		};
		reloadmagazinesound[]=
		{
			"\hlc_wp_saw\snd\soundshaders\mk48\mk48_reload",
			1,
			1,
			20
		};
		dexterity=100;
		class ItemInfo
		{
			priority=1;
		};
		class GunParticles
		{
			class AmmoBeltEject
			{
				directionName="linkeject_end";
				effectName="MachineGunEject2";
				positionName="linkeject_start";
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		model="seven\mk48\mk48.p3d";
		displayName="[TFL] MK48 Mod 0";
		descriptionShort="7.62X51mm";
		picture="";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		magazineWell[]=
		{
			"Louetta_mk48"
		};
		class Library
		{
			libTextDesc="The Premiere MK48";
		};
		inertia=0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class GripodSlot: rhs_western_mg_gripod_slot
			{
				linkProxy="\hlc_core\mesh\tier1_grip_proxy";
			};
			class UnderBarrelSlot: rhs_UnderSlot_m249_ris
			{
			};
		};
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
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.44668359,
			1,
			10
		};
		modes[]=
		{
			"FullAutoFast",
			"FullAutoSlow",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAutoSlow: Mode_FullAuto
		{
			reloadTime=0.15000001;
			dispersion=0.00073000003;
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
					"MG_Shot_SoundSet",
					"FRAME_CALIBER_7x62MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_7x62MM_SILENCED"
				};
				soundContinuous=0;
				soundBurst=0;
				minRange=0;
				minRangeProbab=0.30000001;
				midRange=5;
				midRangeProbab=0.69999999;
				maxRange=10;
				maxRangeProbab=0.039999999;
				showToPlayer=1;
			};
		};
		class FullAutoFast: FullAutoSlow
		{
			reloadTime=0.075000003;
			textureType="fastAuto";
		};
		class close: FullAutoFast
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: FullAutoSlow
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		class __MAGSWITCHCLASS
		{
		};
		rhs_grip1_change="Louetta_mk48_1_grip";
		rhs_grip2_change="Louetta_mk48_1_grip2";
		rhs_grip3_change="Louetta_mk48_1_grip3";
		baseWeapon="Louetta_mk48_1";
	};
	class Louetta_mk48_1_grip: Louetta_mk48_1
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_1_grip2: Louetta_mk48_1
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_AFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_1_grip3: Louetta_mk48_1
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_2: Louetta_mk48_1
	{
		author="Louetta";
		scope=2;
		ace_overheating_allowSwapBarrel=1;
		ACE_barrelTwist=305;
		ACE_barrelLength=465;
		magazines[]=
		{
			"Louetta_100Rnd_762x51mm"
		};
		hasBipod=0;
		deployedPivot="deploypoint";
		magazineReloadSwitchPhase=0.5;
		reloadaction="HLC_GestureReloadM249";
		maxZeroing=1400;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_mk46_STD.rtm"
		};
		reloadmagazinesound[]=
		{
			"\hlc_wp_saw\snd\soundshaders\mk48\mk48_reload",
			1,
			1,
			20
		};
		dexterity=100;
		class ItemInfo
		{
			priority=1;
		};
		class GunParticles
		{
			class AmmoBeltEject
			{
				directionName="linkeject_end";
				effectName="MachineGunEject2";
				positionName="linkeject_start";
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		model="seven\mk48\mk48_2.p3d";
		displayName="[TFL] MK48 Mod 0 Tan";
		descriptionShort="7.62X51mm";
		picture="";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		magazineWell[]=
		{
			"Louetta_mk48"
		};
		class Library
		{
			libTextDesc="The Premiere MK48";
		};
		inertia=0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class GripodSlot: rhs_western_mg_gripod_slot
			{
				linkProxy="\hlc_core\mesh\nia_grip_proxy";
			};
			class UnderBarrelSlot: rhs_UnderSlot_m249_ris
			{
			};
		};
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
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.44668359,
			1,
			10
		};
		modes[]=
		{
			"FullAutoFast",
			"FullAutoSlow",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class __MAGSWITCHCLASS
		{
		};
		rhs_grip1_change="Louetta_mk48_2_grip";
		rhs_grip2_change="Louetta_mk48_2_grip2";
		rhs_grip3_change="Louetta_mk48_2_grip3";
		baseWeapon="Louetta_mk48_2";
	};
	class Louetta_mk48_2_grip: Louetta_mk48_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_2_grip2: Louetta_mk48_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_AFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_2_grip3: Louetta_mk48_2
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_3: Louetta_mk48_1
	{
		author="Louetta";
		scope=2;
		ace_overheating_allowSwapBarrel=1;
		ACE_barrelTwist=305;
		ACE_barrelLength=465;
		magazines[]=
		{
			"Louetta_100Rnd_762x51mm"
		};
		hasBipod=0;
		deployedPivot="deploypoint";
		magazineReloadSwitchPhase=0.5;
		reloadaction="HLC_GestureReloadM249";
		maxZeroing=1400;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_mk46_STD.rtm"
		};
		reloadmagazinesound[]=
		{
			"\hlc_wp_saw\snd\soundshaders\mk48\mk48_reload",
			1,
			1,
			20
		};
		dexterity=100;
		class ItemInfo
		{
			priority=1;
		};
		class GunParticles
		{
			class AmmoBeltEject
			{
				directionName="linkeject_end";
				effectName="MachineGunEject2";
				positionName="linkeject_start";
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		model="seven\mk48\mk48_3.p3d";
		displayName="[TFL] MK48 Mod 0 Tan Heat Sheild";
		descriptionShort="7.62X51mm";
		picture="";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		magazineWell[]=
		{
			"Louetta_mk48"
		};
		class Library
		{
			libTextDesc="The Premiere MK48";
		};
		inertia=0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class GripodSlot: rhs_western_mg_gripod_slot
			{
				linkProxy="\hlc_core\mesh\tier1_grip_proxy";
			};
			class UnderBarrelSlot: rhs_UnderSlot_m249_ris
			{
			};
		};
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
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.44668359,
			1,
			10
		};
		modes[]=
		{
			"FullAutoFast",
			"FullAutoSlow",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class __MAGSWITCHCLASS
		{
		};
		rhs_grip1_change="Louetta_mk48_3_grip";
		rhs_grip2_change="Louetta_mk48_3_grip2";
		rhs_grip3_change="Louetta_mk48_3_grip3";
		baseWeapon="Louetta_mk48_3";
	};
	class Louetta_mk48_3_grip: Louetta_mk48_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_3_grip2: Louetta_mk48_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_AFG.rtm"
		};
		inertia=0.81;
	};
	class Louetta_mk48_3_grip3: Louetta_mk48_3
	{
		scopeArsenal=0;
		author="Louetta";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm"
		};
		inertia=0.81;
	};
	class hlc_rifle_awmagnum;
	class louetta_awmagnum_1: hlc_rifle_awmagnum
	{
		author="Louetta";
		displayName="[TFL] MK13";
		hiddenSelections[]={};
		model="seven\mk13\mk13";
		picture="\hlc_wp_fhawc\tex\ui\gear_awmFDE_ca";
		hiddenSelectionsTextures[]={};
	};
	class louetta_awmagnum_2: hlc_rifle_awmagnum
	{
		author="Louetta";
		displayName="[TFL] MK13 2";
		hiddenSelections[]={};
		model="seven\mk13\mk13_2";
		picture="\hlc_wp_fhawc\tex\ui\gear_awmFDE_ca";
		hiddenSelectionsTextures[]={};
	};
	class rhs_weap_mk17_LB;
	class louetta_mk20: rhs_weap_mk17_LB
	{
		author="Louetta";
		model="seven\mk20\mk20.p3d";
		hiddenSelections[]={};
		displayName="[TFL] MK20 SSR";
		baseweapon="louetta_mk20";
		class WeaponSlotsInfo
		{
			class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot
			{
			};
			class CowsSlot: rhs_western_rifle_scopes_slot_long
			{
			};
			class PointerSlot: rhs_western_rifle_laser_slot_top
			{
			};
			class MuzzleSlot: rhs_western_762rifle_muzzle_slot
			{
			};
			class GripodSlot
			{
			};
		};
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_M107_Base_F: Rifle_Long_Base_F
	{
	};
	class Louetta_weap_M107_Base_F: rhs_weap_M107_Base_F
	{
		class Library
		{
			libTextDesc="Louetta Made This";
		};
		model="\seven\m107\M107.p3d";
		hiddenSelections[]=
		{
			"camo",
			"stock wrap"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_Body_Co.paa",
			"\seven\m107\muzzle\data\stock_wrap_co.paa"
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.0004363;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M107_Shot_SoundSet",
					"FRAME_CALIBER_12x7MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M107_silencerShot_SoundSet",
					"FRAME_CALIBER_12x7MM_SILENCED",
					"ALL_DIST_TAIL"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=283.79999;
			class CowsSlot: rhs_western_rifle_scopes_slot_long
			{
			};
			class MuzzleSlot
			{
				compatibleItems[]=
				{
					"louettam107_2",
					"louettam107_3",
					"louettam107_4",
					"louettam107"
				};
				linkProxy="\a3\data_f\proxies\weapon_slots\muzzle";
			};
			class PointerSlot
			{
				compatibleItems[]=
				{
					"Louetta_m107_LASER"
				};
				linkProxy="\a3\data_f\proxies\weapon_slots\side";
			};
		};
	};
	class Louetta_weap_M107: Louetta_weap_M107_Base_F
	{
		scope=2;
		author="Louetta";
		displayName="[TFL] M107 Stock Wrap";
		baseweapon="Louetta_weap_M107";
	};
	class Louetta_weap_M107_2: Louetta_weap_M107_Base_F
	{
		scope=2;
		author="Louetta";
		displayName="[TFL] M107";
		baseweapon="Louetta_weap_M107_2";
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_Body_Co.paa",
			""
		};
	};
	class Louetta_weap_M107_3: Louetta_weap_M107_Base_F
	{
		scope=2;
		author="Louetta";
		displayName="[TFL] M107 Tan Stock Wrap";
		baseweapon="Louetta_weap_M107_3";
		hiddenSelectionsTextures[]=
		{
			"seven\m107\data\m107_body_tan_co.paa",
			"\seven\m107\muzzle\data\stock_wrap_co.paa"
		};
	};
	class Louetta_weap_M107_4: Louetta_weap_M107_Base_F
	{
		scope=2;
		author="Louetta";
		displayName="[TFL] M107 Tan";
		baseweapon="Louetta_weap_M107_4";
		hiddenSelectionsTextures[]=
		{
			"seven\m107\data\m107_body_tan_co.paa",
			""
		};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1615509060";
};

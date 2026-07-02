class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class B_762x51_Ball;
	class B_556x45_Ball;
	class Louetta_300_Ball: B_556x45_Ball
	{
        airFriction = -0.00113233;
        airlock = 1;
        audiblefire = 8;
        caliber = 0.500;
        deflecting = 22;
        cartridge = "FxCartridge_762";
        cost = 1.2;
        hit = 16;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        typicalspeed = 674.6;
        visiblefire = 5;
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
        AB_caliber = 0.308;
        AB_bulletLength = 1.118;
        AB_bulletMass = 147;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.398 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ICAO";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 559, 609, 625 };
        AB_barrelLengths[] = { 6, 16, 20 };
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.397;
        ACE_bulletMass = 9.5256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.398 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 559, 609, 625 };
        ACE_barrelLengths[] = { 152.4, 406.4, 508.0 };
    };
	class Louetta_300_SMK : Louetta_300_Ball
	{
        airFriction = -0.00118473;
        airlock = 1;
        caliber = 0.337;
        cartridge = "FxCartridge_762";
        cost = 1.2;
        hit = 16;
        deflecting = 20;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\hlc_core\mesh\bullettracer\tracer_dim";
        tracerscale = 1;
        tracerstarttime = 0.05;
        typicalSpeed = 312;
        visibleFire		= 0.01;
		audibleFire		= 0.01;
		visibleFireTime	= 0.01;
		audibleFireTime	= 0.01;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 14.256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.608 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 300, 320, 340 };
        ACE_barrelLengths[] = { 228.6, 406.4, 508.0 };
        AB_caliber = 0.308;
        AB_bulletLength = 1.489;
        AB_bulletMass = 220;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.608 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ICAO";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 300, 320, 340 };
        AB_barrelLengths[] = { 9, 16, 20 };
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
		modelSpecialIsProxy = 1;	
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
		modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "30rnd .300 BLK";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="seven\mags\proxy\300";
		hiddenSelections[]=
		{
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_SMK: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "30rnd .300 BLK Subsonic";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="seven\mags\proxy\300";
		hiddenSelections[]=
		{
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_40: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count = 40;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "40rnd .300 BLK";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40.p3d";
		hiddenSelections[]=
		{
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_SMK_40: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count = 40;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "40rnd .300 BLK Subsonic";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40.p3d";
		hiddenSelections[]=
		{
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_40_tan: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count = 40;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "40rnd .300 BLK Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40_tan.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa",
			
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_SMK_40_tan: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count = 40;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "40rnd .300 BLK Subsonic Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40_tan.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa",
			
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_40_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count = 47;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "47rnd TTI .300 BLK";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran.p3d";
		hiddenSelections[]=
		{
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_SMK_40_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count = 47;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "47rnd TTI .300 BLK Subsonic";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran.p3d";
		hiddenSelections[]=
		{
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_40_tan_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_Ball";
		count = 47;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "47rnd TTI .300 BLK Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa",
			
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_300_Blackout_SMK_40_tan_tti: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_300_SMK";
		count = 47;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "47rnd TTI .300 BLK Subsonic Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa",
			
		};
        modelSpecialIsProxy = 1;	
	};
	class Louetta_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author="Louetta";
		ammo="Louetta_556x45_Ball_Tracer";
		count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm 30rnd Stanag (Magpul)";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
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
        modelSpecialIsProxy = 1;	
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
		count = 20;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
        displayname = "5.56mm 20rnd PMAG";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG.paa";
		model="seven\mags\pmag_556_20.p3d";
		modelSpecial="seven\mags\proxy\pmag_556_20.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_556_20.paa",
			
		};
        modelSpecialIsProxy = 1;	
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
		count = 20;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
        displayname = "5.56mm 20rnd PMAG Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_tan.paa";
		model="seven\mags\pmag_556_20_fde.p3d";
		modelSpecial="seven\mags\proxy\pmag_556_20_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_556_20_fde.paa",
			
		};
        modelSpecialIsProxy = 1;	
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
		count = 60;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 60";
        displayname = "5.56mm 60rnd PMAG";
        initspeed = 974.8;
        mass = 50;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_60.paa";
		model="seven\mags\pmag_556_60.p3d";
		modelSpecial="seven\mags\proxy\pmag_556_60.p3d";
        modelSpecialIsProxy = 1;	
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
		count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm 30rnd PMAG MW";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_mw.paa";
		model="seven\mags\pmag_mw.p3d";
		modelSpecial="seven\mags\proxy\mw_pmag.p3d";
        modelSpecialIsProxy = 1;	
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
		count = 40;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm 40rnd PMAG";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40.p3d";
        modelSpecialIsProxy = 1;	
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
		count = 40;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm 40rnd PMAG Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa",
			
		};
        modelSpecialIsProxy = 1;	
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
		count = 30;
        descriptionshort = "Rounds: 30";
        displayname = "5.45mm 30rnd PMAG";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "545 On Drugs";
        picture="\seven\data\PMAG_545.paa";
		model="seven\mags\pmag545.p3d";
		modelSpecial="seven\mags\proxy\pmag_545_30.p3d";
        modelSpecialIsProxy = 1;	
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
		count = 60;
        descriptionshort = "Rounds: 30";
        displayname = "5.45mm 30rnd PMAG Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
		hiddenSelections[]=
		{
			"camo"		
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_545_30_fde.paa"
		};
        displaynameshort = "545 On Drugs";
        picture="\seven\data\PMAG_545_tan.paa";
		model="seven\mags\pmag545_fde.p3d";
		modelSpecial="seven\mags\proxy\pmag_545_30.p3d";
        modelSpecialIsProxy = 1;	
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
		lastroundstracer = 3;
		displayname="HK417 7.62x51mm 20rnd Magazine";
		descriptionShort="HK417 Magazine";
		tracersEvery=0;
		picture="\seven\data\417.paa";
        modelSpecial = \seven\proxies\proxy417;
        model = "\seven\417.p3d";
        hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"seven\data2\arifle_spar_03_blk_f_01_co.paa","seven\data2\arifle_spar_03_snd_f_01_co.paa"};
        modelSpecialIsProxy = 1;
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
		lastroundstracer = 3;
		displayname="M110 7.62x51mm 20rnd Magazine";
		descriptionShort="M110 Magazine";
		tracersEvery=0;
		picture="\seven\data\m110.paa";
        modelSpecial = \seven\mags\proxy\m110;
        model = "\seven\mags\m110.p3d";
        modelSpecialIsProxy = 1;
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
		lastroundstracer = 3;
		displayname="PMAG 7.62x51mm 20rnd Magazine";
		descriptionShort="PMAG Magazine";
		tracersEvery=0;
		picture="\seven\data\PMAG.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"seven\pmag\pmag20.paa"};
        modelSpecial = \seven\proxies\proxyPMAG;
        model = "\seven\PMAG.p3d";
        modelSpecialIsProxy = 1;
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
		lastroundstracer = 3;
		displayname="PMAG Tan 7.62x51mm 20rnd Magazine";
		descriptionShort="PMAG Magazine";
		tracersEvery=0;
		picture="\seven\data\PMAG_tan.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"seven\pmag\pmag20_fde.paa"};
        modelSpecial = \seven\proxies\proxyPMAG;
        model = "\seven\PMAG.p3d";
        modelSpecialIsProxy = 1;
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
		lastroundstracer = 3;
		displayname="MK48 100rnd Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
        modelSpecial = \seven\mk48\proxy\proxy;
        model = "\seven\mk48\100rnd.p3d";
        hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"seven\mk46\data\toadie_m249\pouch_tan_co.paa"};
        modelSpecialIsProxy = 1;
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
		lastroundstracer = 3;
		displayname="MK48 200rnd Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
        modelSpecial = \seven\mk48\proxy\proxy4;
        model = "\seven\mk48\200rnd.p3d";
        hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"seven\mk48\data\100_mag_co.paa"};
        modelSpecialIsProxy = 1;
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
		lastroundstracer = 3;
		displayname="MK48 100rnd Soft Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
        modelSpecial = \seven\mk48\proxy\proxy2;
        model = "\seven\mk48\100rnd_2.p3d";
        hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"seven\mk48\data\mk48_spry1.paa"};
        modelSpecialIsProxy = 1;
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
	class Louetta_100Rnd_S_762x51mm_IRT: Louetta_100Rnd_s_762x51mm
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
		lastroundstracer = 3;
		displayname="MK48 200rnd Soft Pouch";
		descriptionShort="MK48 Pouch";
		tracersEvery=0;
		picture="";
        modelSpecial = \seven\mk48\proxy\proxy3;
        model = "\seven\mk48\200rnd_2.p3d";
        hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"seven\mk48\data\mk48_long_spry1.paa"};
        modelSpecialIsProxy = 1;
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
		count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm 30rnd PMAG";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_30.paa";
		model="seven\mags\pmag_mw.p3d";
		modelSpecial="seven\mags\proxy\pmag_30.p3d";
        modelSpecialIsProxy = 1;	
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
		count = 47;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 47";
        displayname = "5.56mm 47rnd TTI PMAG";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran.p3d";
        modelSpecialIsProxy = 1;	
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
		count = 47;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 47";
        displayname = "5.56mm 47rnd TTI PMAG Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_40.paa";
		model="seven\mags\pmag_40.p3d";
		modelSpecial="seven\mags\proxy\pmag_40_taran_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag_40_tan.paa",
			
		};
        modelSpecialIsProxy = 1;	
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
		count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm 30rnd PMAG Tan";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 4;
        scope = 2;
		eden=2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture="\seven\data\PMAG_30.paa";
		model="seven\mags\pmag_mw.p3d";
		modelSpecial="seven\mags\proxy\pmag_30_tan.p3d";
		hiddenSelections[]=
		{
			"camo",
			
		};
		hiddenSelectionsTextures[]=
		{
			"seven\mags\data\pmag30_tan_co.paa",
			
		};
        modelSpecialIsProxy = 1;	
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
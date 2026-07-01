#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Worm_izlid
	{
		addonRootClass="";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"cba_main"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"Worm_izlidb"
		};
	};
};
class CfgFunctions
{
	class WORM_IZLID
	{
		class Core
		{
			class postInit
			{
				file="WORM_IZLID\functions\fnc_postInit.sqf";
				postInit=1;
			};
			class toggleIzlid
			{
				file="WORM_IZLID\functions\fnc_toggleIzlid.sqf";
			};
			class handleIzlidToggled
			{
				file="WORM_IZLID\functions\fnc_handleIzlidToggled.sqf";
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class Worm_IZLIDB: Pistol_Base_F
	{
		scope=2;
		author="Worm";
		displayName="Izlid";
		descriptionShort="Big ass lightsaber";
		model="\Worm_izlid\izlid.p3d";
		picture="\Worm_izlid\data\izlid.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Worm_izlid\anim\pistollaser.rtm"
		};
		magazines[]={};
		modes[]=
		{
			"Low",
			"High",
			"Pulse"
		};
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		class Low: Mode_SemiAuto
		{
			displayName="Low";
			sounds[]={};
			begin1[]=
			{
				"",
				1.77828,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.075000003;
			inertia=0.5;
			aimTransitionSpeed=1.1;
			dexterity=1.5;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class High: Low
		{
			displayName="High";
		};
		class Pulse: Low
		{
			displayName="Pulse";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterScale=0;
			mass=5;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
	};
};
class cfgMods
{
	author="Worm That Walks";
	timepacked="1678275807";
};

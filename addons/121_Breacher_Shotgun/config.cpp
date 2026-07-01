////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Wed Nov 16 19:12:32 2022 : 'file' last modified on Sat Aug 06 17:05:23 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 121_Breacher_Shotgun
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author = "Visco";
	};
};
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		121_GestureReloadM590 = "121_GestureReloadM590";
		121_GestureReloadM590_start = "121_GestureReloadM590_start";
		121_GestureReloadM590_addShell = "121_GestureReloadM590_addShell";
		121_GestureReloadM590_end = "121_GestureReloadM590_end";
		121_GestureRechamberM590 = "121_GestureReloadM590";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			121_GestureReloadM590[] = {"121_GestureReloadM590","Gesture"};
			121_GestureReloadM590_start[] = {"121_GestureReloadM590_start","Gesture"};
			121_GestureReloadM590_addShell[] = {"121_GestureReloadM590_addShell","Gesture"};
			121_GestureReloadM590_end[] = {"121_GestureReloadM590_end","Gesture"};
			121_GestureRechamberM590[] = {"121_GestureRechamberM590","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			121_GestureReloadM590[] = {"121_GestureReloadM590_Prone","Gesture"};
			121_GestureReloadM590_start[] = {"121_GestureReloadM590_start_prone","Gesture"};
			121_GestureReloadM590_addShell[] = {"121_GestureReloadM590_addShell_prone","Gesture"};
			121_GestureReloadM590_end[] = {"121_GestureReloadM590_end_prone","Gesture"};
			121_GestureRechamberM590[] = {"121_GestureRechamberM590_Prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			121_GestureReloadM590[] = {"121_GestureReloadM590_Context","Gesture"};
			121_GestureReloadM590_start[] = {"121_GestureReloadM590_start_Context","Gesture"};
			121_GestureReloadM590_addShell[] = {"121_GestureReloadM590_addShell_Context","Gesture"};
			121_GestureReloadM590_end[] = {"121_GestureReloadM590_end_Context","Gesture"};
			121_GestureRechamberM590[] = {"121_GestureRechamberM590_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			121_GestureReloadM590[] = {"121_GestureReloadM590_Context","Gesture"};
			121_GestureReloadM590_start[] = {"121_GestureReloadM590_start_Context","Gesture"};
			121_GestureReloadM590_addShell[] = {"121_GestureReloadM590_addShell_Context","Gesture"};
			121_GestureReloadM590_end[] = {"121_GestureReloadM590_end_Context","Gesture"};
			121_GestureRechamberM590[] = {"121_GestureRechamberM590_Context","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			121_GestureReloadM590[] = {"121_GestureReloadM590","Gesture"};
			121_GestureReloadM590_start[] = {"121_GestureReloadM590_start","Gesture"};
			121_GestureReloadM590_addShell[] = {"121_GestureReloadM590_addShell","Gesture"};
			121_GestureReloadM590_end[] = {"121_GestureReloadM590_end","Gesture"};
			121_GestureRechamberM590[] = {"121_GestureRechamberM590","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadM4SSAS;
		class RHS_GestureReloadM590_Prone;
		class 121_GestureReloadM590_Prone: RHS_GestureReloadM590_Prone
		{
			mask = "handsWeapon_pst";
		};
		class 121_GestureReloadM590: GestureReloadM4SSAS
		{
			mask = "handsWeapon_pst";
		};
		class 121_GestureReloadM590_Context: 121_GestureReloadM590
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM590_start_prone;
		class 121_GestureReloadM590_start_prone: RHS_GestureReloadM590_start_prone
		{
			mask = "handsWeapon_pst";
		};
		class RHS_GestureReloadM590_start;
		class 121_GestureReloadM590_start: RHS_GestureReloadM590_start
		{
			mask = "handsWeapon_pst";
		};
		class 121_GestureReloadM590_start_Context: 121_GestureReloadM590_start
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM590_addShell_prone;
		class 121_GestureReloadM590_addShell_prone: RHS_GestureReloadM590_addShell_prone
		{
			mask = "handsWeapon_pst";
		};
		class RHS_GestureReloadM590_addShell;
		class 121_GestureReloadM590_addShell: RHS_GestureReloadM590_addShell
		{
			mask = "handsWeapon_pst";
		};
		class 121_GestureReloadM590_addShell_Context: 121_GestureReloadM590_addShell
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM590_end_prone;
		class 121_GestureReloadM590_end_prone: RHS_GestureReloadM590_end_prone
		{
			mask = "handsWeapon_pst";
		};
		class RHS_GestureReloadM590_end;
		class 121_GestureReloadM590_end: RHS_GestureReloadM590_end
		{
			mask = "handsWeapon_pst";
		};
		class 121_GestureReloadM590_end_Context: 121_GestureReloadM590_end
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureRechamberM590_Prone;
		class 121_GestureRechamberM590_Prone: RHS_GestureRechamberM590_Prone
		{
			mask = "handsWeapon_pst";
		};
		class RHS_GestureRechamberM590;
		class 121_GestureRechamberM590: RHS_GestureRechamberM590
		{
			mask = "handsWeapon_pst";
		};
		class 121_GestureRechamberM590_Context: 121_GestureRechamberM590
		{
			mask = "handsWeapon_context";
		};
	};
};
class RscInGameUI
{
	class RscWeaponZeroing;
	class rhs_m590_handler2: RscWeaponZeroing
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_safemode";
	};
};
class CfgMagazineWells
{
	class CBA_12g_2rnds
	{
		RHS_Magazines[] = {"121_2Rnd_Slug"};
	};
};
class CfgMagazines
{
	class rhsusf_5Rnd_00Buck;
	class 121_2Rnd_Slug: rhsusf_5Rnd_00Buck
	{
		author = "Visco";
		scope = 2;
		displayName = "2Rnd 12g Breaching Slug";
		displayNameShort = "Slug";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_12g_slug.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_slug";
		modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_slug_1rnd.p3d";
		ammo = "rhs_ammo_12g_slug";
		initSpeed = 395;
		count = 2;
		mass = 2.1;
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class RHSUSF_SAFE_BASE;
	class 121_serbu_breacher: Rifle_Base_F
	{
		author = "Visco";
		picture = "\121_Breacher_Shotgun\Breacher\121_serbu_1.paa";
		scope = 2;
		model = "\121_Breacher_Shotgun\Breacher\121_M590_5MAG.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m320.rtm"};
		magazines[] = {"121_2Rnd_Slug"};
		optics = 1;
		modelOptics = "-";
		displayName = "[10th LI] Serbu Super-Shorty 12-Gauge";
		type = 2;
		descriptionShort = "Shotgun <br />Caliber: 12 gauge";
		weaponInfoType = "RHS_m590_handler2";
		modes[] = {"Single"};
		muzzles[] = {"this","SAFE","RHS_ReloadAction"};
		class SAFE: RHSUSF_SAFE_BASE{};
		class RHS_ReloadAction: RHSUSF_SAFE_BASE
		{
			modes[] = {"this"};
			magazines[] = {"rhs_mag_fakeMuzzle1"};
			reloadTime = 0.1;
		};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		reloadAction = "121_GestureReloadM590";
		recoil = "rhs_recoil_m590";
		reloadSound[] = {"A3\sounds_f\weapons\M320\M320_reload",0.1,1,30};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.6;
			minRange = 1;
			minRangeProbab = 0.45;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet","Msbs65_01_Shotgun_Tail_SoundSet"};
			};
		};
		inertia = 0.5;
		dexterity = 1.5;
		fireSpreadAngle = 0.95;
		class WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			mass = 40;
			class PointerSlot
			{
				iconPosition[] = {0,0};
				iconScale = 1;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
		};
		class Eventhandlers: Eventhandlers
		{
			class RHS_BoltAction
			{
				fired = "[_this select 0,_this # 1,_this # 1,_this # 4] call rhs_fnc_boltAction;";
				reload = "_this spawn RHS_fnc_reloadShotgun2";
			};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"121_Breacher_Shotgun\Breacher\data\Shotgun_co.paa","121_Breacher_Shotgun\Breacher\data\Shotgun_foreend_co.paa"};
		rhs_boltActionSound[] = {"rhsusf\addons\rhsusf_c_weapons\sounds\m590_pump.ogg",0.9,1,20};
		rhs_boltActionAnim = "121_GestureRechamberM590";
		rhs_boltActionCasePos[] = {0,0.05,0.05};
		rhs_boltActionCaseDir[] = {0.3,0.05,0.25};
		rhs_boltActionCaseDelay = 0.1;
		rhs_boltActionCaseSelection = "rightHand";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class m590_handler2
			{
				file = "\121_Breacher_Shotgun\Breacher\scripts\121_m590_handler.sqf";
			};
			class reloadShotgun2
			{
				file = "121_Breacher_Shotgun\Breacher\scripts\121_reloadShotgun.sqf";
			};
		};
	};
};
class cfgMods
{
	author = "viscoplastic";
	timepacked = "1659798323";
};

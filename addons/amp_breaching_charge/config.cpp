class CfgPatches
{
	class AMP_Breaching_Charge
	{
		name="bcdw - main";
		units[]=
		{
			"AMP_Breaching_Charge",
			"AMP_Breaching_Charge_Place"
		};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"A3_Weapons_F_Explosives",
			"ace_interaction",
			"ace_explosives"
		};
		author="Ampersand";
		authors[]=
		{
			"Ampersand"
		};
		authorUrl="https://github.com/ampersand38/";
		version="2.0.2.0";
		versionStr="2.0.2.0";
		versionAr[]={2,0,2,0};
		magazines[]={};
		ammo[]=
		{
			"AMP_Breaching_Charge_Ammo",
			"AMP_Breaching_Charge_Ammo_Scripted",
			"AMP_Breaching_Charge_Timer_Ammo",
			"AMP_Breaching_Charge_Command_Ammo"
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class bcdw_main
	{
		init="call compile preprocessFileLineNumbers '\z\bcdw\addons\main\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class bcdw_main
	{
		init="call compile preprocessFileLineNumbers '\z\bcdw\addons\main\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class bcdw_main
	{
		init="call compile preprocessFileLineNumbers '\z\bcdw\addons\main\XEH_postInit.sqf'";
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class BCDW: NO_CATEGORY
	{
		displayName="BCDW";
		priority=2;
		side=7;
	};
};
class CfgVehicleClasses
{
	class BCDW_Vehicles
	{
		displayName="BCDW Vehicles";
	};
};
class CfgAmmo
{
	class ClaymoreDirectionalMine_Remote_Ammo;
	class AMP_Breaching_Charge_Ammo: ClaymoreDirectionalMine_Remote_Ammo
	{
		hit=10;
		indirectHit=10;
		indirectHitRange=2;
		model="\A3\Weapons_F\Explosives\mine_SLAM_directional";
		mineModelDisabled="\A3\Weapons_F\Explosives\mine_SLAM_directional";
		defaultMagazine="AMP_Breaching_Charge_Mag";
		ace_explosives_magazine="AMP_Breaching_Charge_Mag";
		ace_explosives_Explosive="AMP_Breaching_Charge_Ammo_Scripted";
	};
	class AMP_Breaching_Charge_Ammo_Scripted: AMP_Breaching_Charge_Ammo
	{
	};
	class AMP_Breaching_Charge_Timer_Ammo: AMP_Breaching_Charge_Ammo
	{
		mineTrigger="TimeTrigger";
	};
	class AMP_Breaching_Charge_Command_Ammo: AMP_Breaching_Charge_Ammo
	{
		mineTrigger="RemoteTrigger";
	};
};
class CfgMagazines
{
	class SLAMDirectionalMine_Wire_Mag;
	class AMP_Breaching_Charge_Mag: SLAMDirectionalMine_Wire_Mag
	{
		scopeArsenal=2;
		author="Ampersand";
		ammo="AMP_Breaching_Charge_Ammo";
		mass=10;
		descriptionShort="A main charge takes down obstacles like walls and doors with minimal collateral damage.";
		class Library
		{
			libTextDesc="A main charge takes down obstacles like walls and doors with minimal collateral damage.";
		};
		displayName="Breaching Charge";
		ace_explosives_SetupObject="AMP_Breaching_Charge_Place";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
				"Command",
				"MK16_Transmitter"
			};
		};
	};
};
class CfgVehicles
{
	class SLAMDirectionalMine;
	class AMP_Breaching_Charge: SLAMDirectionalMine
	{
		author="Ampersand";
		_generalMacro="AMP_Breaching_Charge";
		ammo="AMP_Breaching_Charge_Ammo";
		displayName="Breaching Charge";
	};
	class ACE_Explosives_Place_SLAM;
	class AMP_Breaching_Charge_Place: ACE_Explosives_Place_SLAM
	{
		author="Ampersand";
		displayName="Breaching Charge";
		class EventHandlers
		{
			init="(_this select 0) call bcdw_main_fnc_plantBreachingCharge;";
			deleted="(_this select 0) call bcdw_main_fnc_rotateAmmoObj;";
		};
	};
};
class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"AMP_Breaching_Charge_Muzzle"
		};
		class PutMuzzle: Default
		{
		};
		class AMP_Breaching_Charge_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"AMP_Breaching_Charge_Mag"
			};
			displayName="Breaching Charge";
		};
	};
};

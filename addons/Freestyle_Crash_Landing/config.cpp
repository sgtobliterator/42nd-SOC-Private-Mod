class CfgPatches
{
	class fscl_main
	{
		name="FSCL - main";
		author="Freestyle_Build";
		units[]={};
		weapons[]={};
		requiredVersion=2;
		requiredAddons[]=
		{
			"cba_main"
		};
	};
};
class CfgMods
{
	class fscl
	{
		dir="@Freestyles Crash Landing";
		name="Freestyles Crash Landing";
		picture="";
		hidePicture="true";
		hideName="true";
		actionName="";
		action="";
		description="";
	};
};
class Extended_PreStart_EventHandlers
{
	class fscl_main
	{
		init="call compile preprocessFileLineNumbers '\x\fscl\addons\main\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class fscl_main
	{
		init="call compile preprocessFileLineNumbers '\x\fscl\addons\main\XEH_preInit.sqf'";
	};
};
class Extended_initPost_EventHandlers
{
	class Air
	{
		class FSCL
		{
			init="[_this select 0] call fscl_main_fnc_setup";
			exclude[]=
			{
				"ParachuteBase",
				"UAV",
				"UAV_01_base_F"
			};
		};
	};
};

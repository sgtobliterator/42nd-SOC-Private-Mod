class CfgPatches
{
	class sebs_briefing_table_main
	{
		name="main";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]={};
		author="Seb";
		version="1.1.0.0";
		versionStr="1.1.0.0";
		versionAr[]={1,1,0,0};
	};
};
class CfgFunctions
{
	class sebs_briefing_table
	{
		class sebs_briefing_table
		{
			file="z\sebs_briefing_table\addons\main\functions";
			class createTable
			{
			};
			class clearTable
			{
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class sebs_briefing_table_main
	{
		init="call compile preprocessFileLineNumbers '\z\sebs_briefing_table\addons\main\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class sebs_briefing_table_main
	{
		init="call compile preprocessFileLineNumbers '\z\sebs_briefing_table\addons\main\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class sebs_briefing_table_main
	{
		init="call compile preprocessFileLineNumbers '\z\sebs_briefing_table\addons\main\XEH_postInit.sqf'";
	};
};

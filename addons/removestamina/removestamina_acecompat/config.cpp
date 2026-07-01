class CfgPatches
{
	class RemoveStamina_ACE
	{
		name="Remove Stamina - ACE 3";
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"ace_advanced_fatigue",
			"RemoveStamina"
		};
		skipWhenMissingDependencies = 1;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init="";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_advanced_fatigue="";
	};
};

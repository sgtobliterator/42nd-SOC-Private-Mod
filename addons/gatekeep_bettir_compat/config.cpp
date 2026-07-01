#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class gatekeep_bettir_compat
	{
		name="gatekeep_bettir_compat";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"gatekeep_headgear",
			"BettIR_Core"
		};
		author="wanoO";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
		skipWhenMissingDependencies = 1;
	};
};
class BettIR_Config
{
	class CompatibleNightvisionGoggles
	{
		class __base_NVG;
		class GateKeep_NVG_Y16: __base_NVG
		{
		};
		class GateKeep_NVG_Y26: __base_NVG
		{
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631303344";
};

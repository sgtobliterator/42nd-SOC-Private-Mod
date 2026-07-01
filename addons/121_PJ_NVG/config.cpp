class CfgPatches
{
	class 121_PJ_NVG
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.0099999998;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class Binocular;
	class NVGoggles;
	class PJ_NVG1: NVGoggles
	{
		scope=2;
		displayName="[17th STS] AN/PVS-31 Night Vision Device";
		model="121_PJ_NVG\121_PJ_NVG.p3d";
		author="Keepsrunning";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="121_PJ_NVG\textures\pvs_optic";
		nameSound="nvgoggles";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_PJ_NVG\121_PJ_NVGd.p3d";
			modelOff="121_PJ_NVG\121_PJ_NVG.p3d";
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
};
class cfgMods
{
	author="Toka";
	timepacked="1659494178";
};

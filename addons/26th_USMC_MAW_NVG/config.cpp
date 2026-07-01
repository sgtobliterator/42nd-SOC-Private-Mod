class CfgPatches
{
	class CIUSMC_MAW_NVG
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
	class CIUSMC_Anvis: NVGoggles
	{
		author="Coal";
		scope=2;
		displayName="[USMC] ANVIS-9";
		model="26th_USMC_MAW_NVG\model\anvis_down.p3d";
		picture="26th_USMC_MAW_NVG\data\icon\Anvis.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1.1,0.80000001,1.9,0.89999998},
			{1,1,6,0}
		};
		modelOptics="\26th_USMC_MAW_NVG\model\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="26th_USMC_MAW_NVG\model\anvis_down.p3d";
			modelOff="26th_USMC_MAW_NVG\model\anvis_up.p3d";
			hiddenSelections[]=
			{
				""
			};
			mass=1;
		};
		class XtdGearInfo
		{
			model="CIUSMC_ANVIS9";
			State="Mounted";
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class CIUSMC_Anvis_stow: NVGoggles
	{
		author="Coal";
		scope=2;
		displayName="[USMC] ANVIS-9 (Stowed)";
		model="26th_USMC_MAW_NVG\model\anvis_stow.p3d";
		picture="26th_USMC_MAW_NVG\data\icon\Anvis.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="26th_USMC_MAW_NVG\model\anvis_stow.p3d";
			hiddenSelections[]={};
			mass=1;
		};
		class XtdGearInfo
		{
			model="CIUSMC_ANVIS9";
			State="Stowed";
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class CIUSMC_ANVIS9
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"State"
			};
			class State
			{
				label="State";
				values[]=
				{
					"Mounted",
					"Stowed"
				};
				changeingame=1;
				class Mounted
				{
					label="Mounted";
				};
				class Stowed
				{
					label="Stowed";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777909277";
};

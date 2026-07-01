class CfgPatches
{
	class CIUSMC_NVG
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class ItemCore;
	class NVGoggles
	{
		class ItemInfo;
	};
	class CIUSMC_NVG_BASE: NVGoggles
	{
		scope=1;
		modelOptics="";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.34999999;
		ace_nightvision_colorPreset[]=
		{
			0,
			{0,0,0,0},
			{1,0.98000002,0.94999999,0.85000002},
			{1,1,3,0}
		};
		author="Coal";
		class Library
		{
			libTextDesc="";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class CIUSMC_MOUNT: CIUSMC_NVG_BASE
	{
		scope=2;
		displayName="[USMC] Wilcox Mount";
		picture="\26th_USMC_NVG\UI\Mount.paa";
		model="26th_USMC_NVG\USMC_WILCOX_MOUNT.p3d";
		visionMode[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="26th_USMC_NVG\USMC_WILCOX_MOUNT.p3d";
			modelOff="26th_USMC_NVG\USMC_WILCOX_MOUNT.p3d";
			mass=1;
		};
		class XtdGearInfo
		{
			model="CIUSMC_PVS31";
			position="stowed";
		};
	};
	class CIUSMC_PVS31_DOWN: CIUSMC_NVG_BASE
	{
		scope=2;
		displayName="[USMC] AN/PVS-31A (Down)";
		picture="\26th_USMC_NVG\UI\31_Down.paa";
		model="26th_USMC_NVG\USMC_PVS31_OFF_DOWN.p3d";
		ace_nightvision_border="\26th_USMC_NVG\Optics\nvg_mask_4096.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="26th_USMC_NVG\USMC_PVS31_ON.p3d";
			modelOff="26th_USMC_NVG\USMC_PVS31_OFF_DOWN.p3d";
			mass=5;
		};
		class XtdGearInfo
		{
			model="CIUSMC_PVS31";
			position="down";
		};
	};
	class CIUSMC_PVS31_WIDE: CIUSMC_NVG_BASE
	{
		scope=2;
		displayName="[USMC] AN/PVS-31A (Wide)";
		picture="\26th_USMC_NVG\UI\31_Wide.paa";
		model="26th_USMC_NVG\USMC_PVS31_OFF_WIDE.p3d";
		ace_nightvision_border="\26th_USMC_NVG\Optics\nvg_mask_4096.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="26th_USMC_NVG\USMC_PVS31_ON.p3d";
			modelOff="26th_USMC_NVG\USMC_PVS31_OFF_WIDE.p3d";
			mass=9.8000002;
		};
		class XtdGearInfo
		{
			model="CIUSMC_PVS31";
			position="wide";
		};
	};
	class CIUSMC_PVS31_NARROW: CIUSMC_NVG_BASE
	{
		scope=2;
		displayName="[USMC] AN/PVS-31A (Narrow)";
		picture="\26th_USMC_NVG\UI\31_Narrow.paa";
		model="26th_USMC_NVG\USMC_PVS31_OFF_NARROW.p3d";
		ace_nightvision_border="\26th_USMC_NVG\Optics\nvg_mask_4096.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="26th_USMC_NVG\USMC_PVS31_ON.p3d";
			modelOff="26th_USMC_NVG\USMC_PVS31_OFF_NARROW.p3d";
			mass=9.8000002;
		};
		class XtdGearInfo
		{
			model="CIUSMC_PVS31";
			position="narrow";
		};
	};
};
class XtdGearModels
{
	class cfgWeapons
	{
		class CIUSMC_PVS31
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"position"
			};
			class position
			{
				label="NVG";
				values[]=
				{
					"wide",
					"narrow",
					"down",
					"stowed"
				};
				changeingame=1;
				class wide
				{
					label="Wide";
				};
				class narrow
				{
					label="Narrow";
				};
				class down
				{
					label="Down";
				};
				class wide_stow
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
	timepacked="1778047266";
};

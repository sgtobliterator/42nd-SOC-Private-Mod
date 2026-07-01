class CfgPatches
{
	class CIUSMC_MAW_Headgear
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class HeadgearItem;
	class NVGoggles;
	class rhsusf_ihadss;
	class CIUSMC_HGU84_VD_1: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.69999999;
		displayName="[USMC] HGU-84/P (White)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_84_White.paa";
		model="26th_USMC_MAW_Headgear\model\USMC_HGU_84.p3d";
		modelOptics="\rhsusf\addons\rhsusf_a2port_air\ihadss_optic.p3d";
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		hiddenSelections[]=
		{
			"v_up",
			"v_cover",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			""
		};
		author="Coal";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU_84.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"v_up",
				"v_cover",
				"cover"
			};
			hiddenSelectionsTextures[]=
			{
				"",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU84";
			camo="White";
			cover="off";
			setup="vdwn";
		};
	};
	class CIUSMC_HGU84_1_VU: CIUSMC_HGU84_VD_1
	{
		scope=2;
		displayName="[USMC] HGU-84/P (VU)";
		hiddenSelections[]=
		{
			"v_down",
			"v_cover",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU_84.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"v_down",
				"v_cover",
				"cover"
			};
			hiddenSelectionsTextures[]=
			{
				"",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU84";
			camo="White";
			cover="off";
			setup="vup";
		};
	};
	class CIUSMC_HGU84_1_VD_C: CIUSMC_HGU84_VD_1
	{
		scope=2;
		displayName="[USMC] HGU-84/P (VD/Covered)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_84_CB_Cover.paa";
		hiddenSelections[]=
		{
			"v_up",
			"v_cover",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"26th_USMC_MAW_Headgear\data\HGU_84P_Cover_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU_84.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"v_up",
				"v_cover",
				"cover"
			};
			hiddenSelectionsTextures[]=
			{
				"",
				"",
				"26th_USMC_MAW_Headgear\data\HGU_84P_Cover_co.paa"
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU84";
			camo="White";
			cover="on";
			setup="vdwn";
		};
	};
	class CIUSMC_HGU84_1_VU_C: CIUSMC_HGU84_VD_1
	{
		scope=2;
		displayName="[USMC] HGU-84/P (VD/Covered)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_84_CB_Cover.paa";
		hiddenSelections[]=
		{
			"v_down",
			"v_cover",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"26th_USMC_MAW_Headgear\data\HGU_84P_Cover_co.paa",
			"26th_USMC_MAW_Headgear\data\HGU_84P_Cover_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU_84.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"v_down",
				"v_cover",
				"cover"
			};
			hiddenSelectionsTextures[]=
			{
				"",
				"26th_USMC_MAW_Headgear\data\HGU_84P_Cover_co.paa",
				"26th_USMC_MAW_Headgear\data\HGU_84P_Cover_co.paa"
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU84";
			camo="White";
			cover="on";
			setup="vup";
		};
	};
	class CIUSMC_HGU_1: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.69999999;
		displayName="[USMC] HGU-56/P (White)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_White_FULL.paa";
		model="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
		modelOptics="\rhsusf\addons\rhsusf_a2port_air\ihadss_optic.p3d";
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"visor1"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
			"",
			""
		};
		author="Coal";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"visor1"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="White";
			setup="Full";
		};
	};
	class CIUSMC_HGU_1_VU_AM: CIUSMC_HGU_1
	{
		scope=2;
		displayName="[USMC] HGU-56/P (VU/Closed)";
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="White";
			setup="Mask";
		};
	};
	class CIUSMC_HGU_1_VD_NM: CIUSMC_HGU_1
	{
		scope=2;
		displayName="[USMC] HGU-56/P (VD/Open)";
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"visor1",
			"Mask"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"visor1",
				"Mask"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
				"",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="White";
			setup="Visor";
		};
	};
	class CIUSMC_HGU_1_VU_NM: CIUSMC_HGU_1
	{
		scope=2;
		displayName="[USMC] HGU-56/P (VU/Open)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_White_Open.paa";
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"Mask",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"Mask",
				"visor"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_white_co.paa",
				"",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="White";
			setup="Open";
		};
	};
	class CIUSMC_HGU_1_STOW: CIUSMC_HGU_1
	{
		scope=2;
		displayName="[USMC] HGU-56/P (Stowed)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_Stow.paa";
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.15000001;
		ace_hearing_hasEHP=1;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: ItemInfo
		{
			uniformModel="\26th_USMC_MAW_Headgear\model\USMC_Beanie.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			armor=0;
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor=0;
				};
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="White";
			setup="Stow";
		};
	};
	class CIUSMC_HGU_2: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.69999999;
		displayName="[USMC] HGU-56/P (Tan)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_Tan_FULL.paa";
		model="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
		modelOptics="\rhsusf\addons\rhsusf_a2port_air\ihadss_optic.p3d";
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"visor1"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
			"",
			""
		};
		author="Coal";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"visor1"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="Tan";
			setup="Full";
		};
	};
	class CIUSMC_HGU_2_VU_AM: CIUSMC_HGU_2
	{
		scope=2;
		displayName="[USMC] HGU-56/P (VU/Closed)";
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="Tan";
			setup="Mask";
		};
	};
	class CIUSMC_HGU_2_VD_NM: CIUSMC_HGU_2
	{
		scope=2;
		displayName="[USMC] HGU-56/P (VD/Open)";
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"visor1",
			"Mask"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"visor1",
				"Mask"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
				"",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="Tan";
			setup="Visor";
		};
	};
	class CIUSMC_HGU_2_VU_NM: CIUSMC_HGU_2
	{
		scope=2;
		displayName="[USMC] HGU-56/P (VU/Open)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_Tan_Open.paa";
		hiddenSelections[]=
		{
			"camo",
			"Mask2",
			"Mask",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="26th_USMC_MAW_Headgear\model\USMC_HGU.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"camo",
				"Mask2",
				"Mask",
				"visor"
			};
			hiddenSelectionsTextures[]=
			{
				"26th_USMC_MAW_Headgear\data\rhs_hgu56_tan_co.paa",
				"",
				"",
				""
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="Tan";
			setup="Open";
		};
	};
	class CIUSMC_HGU_2_STOW: CIUSMC_HGU_2
	{
		scope=2;
		displayName="[USMC] HGU-56/P (Stowed)";
		picture="\26th_USMC_MAW_Headgear\icon\HGU_Stow.paa";
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.15000001;
		ace_hearing_hasEHP=1;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: ItemInfo
		{
			uniformModel="\26th_USMC_MAW_Headgear\model\USMC_Beanie.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			armor=0;
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor=0;
				};
			};
		};
		class XtdGearInfo
		{
			model="USMC_HGU";
			camo="Tan";
			setup="Stow";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class USMC_HGU
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"camo",
				"setup"
			};
			class camo
			{
				label="Color";
				values[]=
				{
					"White",
					"Tan"
				};
				changeingame=0;
				class White
				{
					label="White";
				};
				class Tan
				{
					label="Tan";
				};
			};
			class setup
			{
				label="Helmet";
				values[]=
				{
					"Full",
					"Mask",
					"Visor",
					"Open",
					"Stow"
				};
				changeingame=1;
				class Full
				{
					label="Full";
				};
				class Mask
				{
					label="Mask";
				};
				class Visor
				{
					label="Visor";
				};
				class Open
				{
					label="Open";
				};
				class Stow
				{
					label="Stowed";
				};
			};
		};
		class USMC_HGU84
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"camo",
				"cover",
				"setup"
			};
			class camo
			{
				label="Color";
				values[]=
				{
					"White",
					"Olive"
				};
				changeingame=0;
				class White
				{
					label="White";
				};
				class Olive
				{
					label="Olive";
				};
			};
			class cover
			{
				label="Cover";
				values[]=
				{
					"off",
					"on"
				};
				changeingame=0;
				class off
				{
					label="Off";
				};
				class on
				{
					label="On";
				};
			};
			class setup
			{
				label="Helmet";
				values[]=
				{
					"vdwn",
					"vup"
				};
				changeingame=1;
				class vdwn
				{
					label="Visor";
				};
				class vup
				{
					label="No Visor";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1778211664";
};

#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class aceax_compat_tfl_cold
	{
		name="compat_TFL_cold";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"tfl_cold"
		};
		author="wanoO";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
	};
};
class XtdGearModels
{
	class SleevesBase;
	class CamoBase;
	class CfgWeapons
	{
		class tfl_pcu
		{
			label="[TFL] PCU";
			author="TFL";
			options[]=
			{
				"jacket",
				"pants"
			};
			class jacket: CamoBase
			{
				label="PCU";
				values[]=
				{
					"mc",
					"tan",
					"blk",
					"gry"
				};
			};
			class pants: CamoBase
			{
				label="Pants";
				values[]=
				{
					"mc",
					"mca",
					"aor1",
					"aor2",
					"m81",
					"mcal"
				};
				class mcd;
				class mca: mcd
				{
					label="MCA";
				};
				class mcal
				{
					label="MCAL";
					description="MC Alpine";
					image="aceax_compat_tfl_cold\data\mcal.paa";
				};
			};
		};
		class tfl_puff: tfl_pcu
		{
			label="[TFL] Puff";
			author="TFL";
			options[]=
			{
				"jacket",
				"pants"
			};
			class jacket: CamoBase
			{
				label="Jacket";
				values[]=
				{
					"blk",
					"tan"
				};
				class tan
				{
					label="Sand";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
		};
		class tfl_fleece
		{
			label="[TFL] Fleece Hat";
			author="TFL";
			options[]=
			{
				"camo",
				"headset"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"rgr",
					"tan"
				};
				class rgr
				{
					label="Green";
					image="aceax_compat_tfl_cold\data\rg.paa";
				};
			};
			class headset
			{
				label="Headset (ACE)";
				changeingame=1;
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					description="Wear Headset";
					icon="aceax_compat_tfl_cold\data\headset.paa";
					actionlabel="Wear Headset";
				};
				class Off
				{
					description="Remove Headset";
					icon="aceax_compat_tfl_cold\data\noheadset.paa";
					actionlabel="Remove Headset";
				};
			};
		};
		class tfl_beanie: tfl_fleece
		{
			label="[TFL] Beanie";
			author="TFL";
			options[]=
			{
				"camo",
				"headset"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"rgr",
					"tan",
					"blk"
				};
				class rgr
				{
					label="Green";
					image="aceax_compat_tfl_cold\data\rg.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
	};
	class tfl_fleece_hat: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_fleece";
			camo="rgr";
			headset="Off";
		};
	};
	class tfl_fleece_tan_hat: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_fleece";
			camo="tan";
			headset="Off";
		};
	};
	class tfl_fleece_hat_peltors: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_fleece";
			camo="rgr";
			headset="On";
		};
	};
	class tfl_fleece_tan_hat_peltors: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_fleece";
			camo="tan";
			headset="On";
		};
	};
	class tfl_beanie_hat: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_beanie";
			camo="blk";
			headset="Off";
		};
	};
	class tfl_beanie_hat_green: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_beanie";
			camo="rgr";
			headset="Off";
		};
	};
	class tfl_beanie_tan_hat: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_beanie";
			camo="tan";
			headset="Off";
		};
	};
	class tfl_beanie_hat_peltors: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_beanie";
			camo="blk";
			headset="On";
		};
	};
	class tfl_beanie_hat_green_peltors: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_beanie";
			camo="rgr";
			headset="On";
		};
	};
	class tfl_beanie_tan_hat_peltors: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
		class XtdGearInfo
		{
			model="tfl_beanie";
			camo="tan";
			headset="On";
		};
	};
	class tfl_puff_mc_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="blk";
			pants="mc";
		};
	};
	class tfl_puff_aor1_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="blk";
			pants="aor1";
		};
	};
	class tfl_puff_aor2_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="blk";
			pants="aor2";
		};
	};
	class tfl_puff_mca_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="blk";
			pants="mca";
		};
	};
	class tfl_puff_m81_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="blk";
			pants="m81";
		};
	};
	class tfl_puff_mcal_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="blk";
			pants="mcal";
		};
	};
	class tfl_puff_s_mc_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="tan";
			pants="mc";
		};
	};
	class tfl_puff_s_aor1_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="tan";
			pants="aor1";
		};
	};
	class tfl_puff_s_aor2_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="tan";
			pants="aor2";
		};
	};
	class tfl_puff_s_mca_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="tan";
			pants="mca";
		};
	};
	class tfl_puff_s_m81_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="tan";
			pants="m81";
		};
	};
	class tfl_puff_s_mcal_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_puff";
			jacket="tan";
			pants="mcal";
		};
	};
	class tfl_pcu_mc_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="gry";
			pants="mc";
		};
	};
	class tfl_pcu_aor1_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="gry";
			pants="aor1";
		};
	};
	class tfl_pcu_aor2_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="gry";
			pants="aor2";
		};
	};
	class tfl_pcu_mca_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="gry";
			pants="mca";
		};
	};
	class tfl_pcu_m81_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="gry";
			pants="m81";
		};
	};
	class tfl_pcu_mcal_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="gry";
			pants="mcal";
		};
	};
	class tfl_pcu_b_mc_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="blk";
			pants="mc";
		};
	};
	class tfl_pcu_b_aor1_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="blk";
			pants="aor1";
		};
	};
	class tfl_pcu_b_aor2_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="blk";
			pants="aor2";
		};
	};
	class tfl_pcu_b_mca_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="blk";
			pants="mca";
		};
	};
	class tfl_pcu_b_m81_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="blk";
			pants="m81";
		};
	};
	class tfl_pcu_b_mcal_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="blk";
			pants="mcal";
		};
	};
	class tfl_pcu_mca_mc_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mcal";
			pants="mc";
		};
	};
	class tfl_pcu_mca_aor1_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mcal";
			pants="aor1";
		};
	};
	class tfl_pcu_mca_aor2_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mcal";
			pants="aor2";
		};
	};
	class tfl_pcu_mca_mca_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mcal";
			pants="mca";
		};
	};
	class tfl_pcu_mca_m81_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mcal";
			pants="m81";
		};
	};
	class tfl_pcu_mca_mcal_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mcal";
			pants="mcal";
		};
	};
	class tfl_pcu_mc_mc_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mc";
			pants="mc";
		};
	};
	class tfl_pcu_mc_aor1_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mc";
			pants="aor1";
		};
	};
	class tfl_pcu_mc_aor2_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mc";
			pants="aor2";
		};
	};
	class tfl_pcu_mc_mca_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mc";
			pants="mca";
		};
	};
	class tfl_pcu_mc_m81_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mc";
			pants="m81";
		};
	};
	class tfl_pcu_mc_mcal_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="mc";
			pants="mcal";
		};
	};
	class tfl_pcu_brown_mc_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="tan";
			pants="mc";
		};
	};
	class tfl_pcu_brown_aor1_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="tan";
			pants="aor1";
		};
	};
	class tfl_pcu_brown_aor2_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="tan";
			pants="aor2";
		};
	};
	class tfl_pcu_brown_mca_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="tan";
			pants="mca";
		};
	};
	class tfl_pcu_brown_m81_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="tan";
			pants="m81";
		};
	};
	class tfl_pcu_brown_mcal_g_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_pcu";
			jacket="tan";
			pants="mcal";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631895307";
};

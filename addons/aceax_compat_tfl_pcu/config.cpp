#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class aceax_compat_tfl_pcu
	{
		name="compat_tfl_pcu";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"tfl_pcu"
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
		class tfl_mw_pcu
		{
			label="[TFL] G3";
			author="TFL,Nidonreb";
			options[]=
			{
				"pcu_mw",
				"pants",
				"gloves"
			};
			class pcu_mw: CamoBase
			{
				label="PCU";
				values[]=
				{
					"mc",
					"blk",
					"gry",
					"tan",
					"rg"
				};
				class rg
				{
					label="RG";
					description="Ranger Green";
					image="aceax_compat_tfl_pcu\data\rg.paa";
				};
			};
			class pants: pcu_mw
			{
				label="Pants";
				values[]=
				{
					"mc",
					"m81",
					"aor1",
					"aor2"
				};
			};
			class gloves
			{
				label="Gloves (ACE)";
				changeingame=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
					description="Wear Gloves";
					icon="aceax_compat_tfl_g3\data\gloves.paa";
					actionlabel="Wear Gloves";
				};
				class off
				{
					label="Off";
					description="Remove Gloves";
					icon="aceax_compat_tfl_g3\data\nogloves.paa";
					actionlabel="Remove Gloves";
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
	class tfl_mw_pcu_mc_blk_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="mc";
			gloves="off";
		};
	};
	class tfl_mw_pcu_mc_blk_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="mc";
			gloves="on";
		};
	};
	class tfl_mw_pcu_mc_rg_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="mc";
			gloves="off";
		};
	};
	class tfl_mw_pcu_mc_rg_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="mc";
			gloves="on";
		};
	};
	class tfl_mw_pcu_mc_gry_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="mc";
			gloves="off";
		};
	};
	class tfl_mw_pcu_mc_gry_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="mc";
			gloves="on";
		};
	};
	class tfl_mw_pcu_mc_mc_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="mc";
			gloves="off";
		};
	};
	class tfl_mw_pcu_mc_mc_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="mc";
			gloves="on";
		};
	};
	class tfl_mw_pcu_mc_tan_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="mc";
			gloves="off";
		};
	};
	class tfl_mw_pcu_mc_tan_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="mc";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor1_blk_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="aor1";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor1_blk_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="aor1";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor1_rg_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="aor1";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor1_rg_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="aor1";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor1_gry_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="aor1";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor1_gry_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="aor1";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor1_mc_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="aor1";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor1_mc_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="aor1";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor1_tan_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="aor1";
			gloves="off";
		};
		scope=2;
		scopeArsenal=2;
		author="TFL,Nidonreb";
		displayName="[TFL] G3 PCU (AOR1TAN)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniforMClass="tfl_mw_pcu_aor1_tan";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class tfl_mw_pcu_aor1_tan_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="aor1";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor2_blk_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="aor2";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor2_blk_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="aor2";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor2_rg_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="aor2";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor2_rg_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="aor2";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor2_gry_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="aor2";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor2_gry_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="aor2";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor2_mc_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="aor2";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor2_mc_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="aor2";
			gloves="on";
		};
	};
	class tfl_mw_pcu_aor2_tan_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="aor2";
			gloves="off";
		};
	};
	class tfl_mw_pcu_aor2_tan_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="aor2";
			gloves="on";
		};
	};
	class tfl_mw_pcu_m81_blk_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="m81";
			gloves="off";
		};
	};
	class tfl_mw_pcu_m81_blk_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="blk";
			pants="m81";
			gloves="on";
		};
	};
	class tfl_mw_pcu_m81_rg_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="m81";
			gloves="off";
		};
	};
	class tfl_mw_pcu_m81_rg_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="rg";
			pants="m81";
			gloves="on";
		};
	};
	class tfl_mw_pcu_m81_gry_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="m81";
			gloves="off";
		};
	};
	class tfl_mw_pcu_m81_gry_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="gry";
			pants="m81";
			gloves="on";
		};
	};
	class tfl_mw_pcu_m81_mc_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="m81";
			gloves="off";
		};
	};
	class tfl_mw_pcu_m81_mc_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="mc";
			pants="m81";
			gloves="on";
		};
	};
	class tfl_mw_pcu_m81_tan_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="m81";
			gloves="off";
		};
	};
	class tfl_mw_pcu_m81_tan_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_mw_pcu";
			pcu_mw="tan";
			pants="m81";
			gloves="on";
		};
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class TFL_mw_pcu_aor1_tan: B_Soldier_F
	{
		scope=2;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=2;
		faction="sof_rangers";
		author="TFL,Nidonreb";
		model="TFL_pcu\TFL_mw_pcu.p3d";
		_generalMacro="tfl_test";
		uniforMClass="TFL_pcu_aor1_tan";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"leftknee",
			"rightknee"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_g3\g3\Pants_AOR1.paa",
			"TFL_pcu\data\pcu_tan_co.paa",
			"TFL_g3\g3\Pants_AOR1.paa",
			"TFL_g3\g3\Pants_AOR1.paa"
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631894784";
};

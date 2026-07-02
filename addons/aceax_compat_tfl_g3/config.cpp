#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class aceax_compat_tfl_g3
	{
		name="compat_tfl_g3";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"tfl_g3"
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
		class tfl_g3
		{
			label="[TFL] G3";
			author="TFL";
			options[]=
			{
				"shirt",
				"pants",
				"pads",
				"sleeves",
				"gloves"
			};
			class shirt: CamoBase
			{
				label="Shirt";
				values[]=
				{
					"mc",
					"mca",
					"mcb",
					"mct",
					"mcal",
					"m81",
					"aor1",
					"aor2",
					"blk",
					"gry",
					"cb",
					"rg",
					"tsw",
					"tsd",
					"marp",
					"rdbs"
				};
				class mcd;
				class mca: mcd
				{
					label="MCA";
					description="MC Arid";
				};
				class mcal
				{
					label="MCAL";
					description="MC Alpine";
					image="aceax_compat_tfl_g3\data\mcal.paa";
				};
				class cb
				{
					label="CB";
					description="Coyote Brown";
					image="aceax_compat_tfl_g3\data\cb.paa";
				};
				class rg
				{
					label="RG";
					description="Ranger Green";
					image="aceax_compat_tfl_g3\data\rg.paa";
				};
				class marp
				{
					label="MARPAT";
					image="aceax_compat_tfl_g3\data\marp.paa";
				};
				class rdbs
				{
					label="RDBS";
					image="aceax_compat_tfl_g3\data\rdbs.paa";
				};
			};
			class pants: shirt
			{
				label="Pants";
			};
			class pads
			{
				label="Knee Pads";
				values[]=
				{
					"on",
					"off",
					"left",
					"right"
				};
				class on
				{
					label="On";
				};
				class off
				{
					label="Off";
				};
				class left
				{
					label="Left";
				};
				class right
				{
					label="Right";
				};
			};
			class sleeves: SleevesBase
			{
				label="Sleeves (ACE)";
				changeingame=1;
				values[]=
				{
					"full",
					"quarter",
					"half"
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
		class tfl_field
		{
			label="Sleeves (ACE)";
			options[]=
			{
				"camo",
				"sleeves"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"mct"
				};
			};
			class sleeves: SleevesBase
			{
				values[]=
				{
					"full",
					"half"
				};
			};
		};
		class tfl_custom_g3
		{
			label="[TFL] Custom G3";
			options[]=
			{
				"Mix"
			};
			class Mix
			{
				values[]=
				{
					"JD I",
					"Matty I",
					"Matty II",
					"Matty III",
					"monarch I",
					"seal I",
					"seal II"
				};
			};
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class tfl_new_blk_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_blk_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_blk_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_blk_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_blk_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_blk_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_blk_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_blk_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_blk_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_blk_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_blk_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_blk_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_blk_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_blk_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_blk_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_blk_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_blk_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_blk_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_blk_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_blk_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_blk_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_blk_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_blk_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_blk_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="m81";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_g3_field_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_field";
			camo="mc";
			sleeves="full";
		};
	};
	class tfl_g3_field_mct_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_field";
			camo="mct";
			sleeves="full";
		};
	};
	class tfl_g3_field_r_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_field";
			camo="mc";
			sleeves="half";
		};
	};
	class tfl_g3_field_mct_r_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_field";
			camo="mct";
			sleeves="half";
		};
	};
	class tfl_new_mattyice_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_custom_g3";
			mix="Matty I";
		};
	};
	class tfl_new_mattyice_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_custom_g3";
			mix="Matty II";
		};
	};
	class tfl_new_mattyice_rs2_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_custom_g3";
			mix="Matty III";
		};
	};
	class tfl_new_JD_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_custom_g3";
			mix="JD I";
		};
	};
	class tfl_new_MNRCH_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_custom_g3";
			mix="monarch I";
		};
	};
	class tfl_new_seal_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_custom_g3";
			mix="seal I";
		};
	};
	class tfl_new_seal2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_custom_g3";
			mix="seal II";
		};
	};
	class tfl_new_AOR1AOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1AOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1AOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1DTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1DTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1TGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1TGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1MARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1MARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1BLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1BLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1CB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1CB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1RG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1RG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR1GRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR1GRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor1";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCDTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCDTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCADTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCADTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCATGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCATGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCABLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCABLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCACB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCACB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCACB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCACB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCACB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCACB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCACB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCACB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCACB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCACB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCACB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCACB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCACB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCACB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCACB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCACB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCACB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCACB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCACB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCACB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCACB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCACB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCACB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCACB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCARG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCARG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCARG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCARG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCARG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCARG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBDTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBDTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTDTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTDTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALDTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALDTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSMARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSMARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATBLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATBLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBRG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBRG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBRG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBRG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBRG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBRG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBRG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBRG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBRG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBRG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBRG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBRG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBRG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBRG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBRG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBRG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBRG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBRG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBRG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBRG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBRG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBRG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBRG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBRG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGMCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGMCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGGRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGGRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_GRYAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_GRYAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="gry";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_BLKAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_BLKAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="blk";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_CBAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_CBAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="cb";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RGAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RGAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rg";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MARPATAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MARPATAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="marp";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_RDBSAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_RDBSAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="rdbs";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_TGRAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_TGRAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsw";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_DTGRAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_DTGRAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="tsd";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCALAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCALAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcal";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCTAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCTAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mct";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCBAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCBAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mcb";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mca";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_MCAOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_MCAOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="mc";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_AOR2AOR1_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_AOR2AOR1_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="aor2";
			pants="aor1";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81AOR2_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81AOR2_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="aor2";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MC_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MC_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MC_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MC_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MC_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MC_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MC_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MC_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MC_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MC_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MC_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MC_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MC_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MC_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MC_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MC_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MC_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MC_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MC_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MC_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MC_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MC_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MC_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MC_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mc";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCA_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCA_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mca";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mct";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MCAL_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MCAL_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="mcal";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81DTGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81DTGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsd";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81TGR_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81TGR_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="tsw";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RDBS_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RDBS_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rdbs";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81MARPAT_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81MARPAT_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="marp";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81BLK_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81BLK_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="blk";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81CB_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81CB_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81CB_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81CB_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81CB_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81CB_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81CB_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81CB_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81CB_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81CB_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81CB_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81CB_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81CB_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81CB_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81CB_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81CB_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81CB_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81CB_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81CB_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81CB_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81CB_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81CB_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81CB_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81CB_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="cb";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RG_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RG_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RG_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RG_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RG_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RG_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RG_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81RG_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81RG_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RG_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RG_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RG_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RG_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RG_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RG_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81RG_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81RG_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RG_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RG_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RG_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RG_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RG_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81RG_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81RG_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="rg";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_fs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_fs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="on";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_fs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_fs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="left";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_fs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_fs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="right";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_fs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_fs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="off";
			sleeves="full";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_qs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_qs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="on";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_qs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_qs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="left";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_qs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_qs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="right";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_qs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_qs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="off";
			sleeves="quarter";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_rs_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_rs_np_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_rs_np_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="off";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_rs_npr_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_rs_npr_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="left";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_rs_npl_uniform: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="off";
		};
	};
	class tfl_new_M81GRY_rs_npl_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="right";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_new_M81GRY_rs_uniform_g: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_g3";
			shirt="m81";
			pants="gry";
			pads="on";
			sleeves="half";
			gloves="on";
		};
	};
	class tfl_g3_hoddie_test_uniform: Uniform_Base
	{
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631795977";
};

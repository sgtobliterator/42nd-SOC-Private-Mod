class CfgPatches
{
	class sts23rd_121_uniforms
	{
		name="23rd STS Uniforms";
		author="Puotek";
		requiredAddons[]=
		{
			"ace_common",
			"121_75th_uniform"
		};
		requiredVersion=2.1800001;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class sts23rd_121_uniforms_soldier_base: B_Soldier_base_F
	{
		scope=1;
		author="soupie von soup";
		modelSides[]={6};
		displayName="Soldier Base";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class sts23rd_121_uniforms_g3_sleeve: sts23rd_121_uniforms_soldier_base
	{
		model="\121_75th_Uniform\ranger_pata3.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2",
			"leftflag",
			"rightflag"
		};
	};
	class sts23rd_121_uniforms_g3_rolled: sts23rd_121_uniforms_soldier_base
	{
		model="\121_75th_Uniform\ranger_pata1.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2",
			"leftflag",
			"rightflag"
		};
	};
	class sts23rd_121_uniforms_g3_sleeve_mc: sts23rd_121_uniforms_g3_sleeve
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\mc\pants_co.paa",
			"121_75th_Uniform\Data\Patagonia\crye_g3_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_mc_co.paa",
			"",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_mc: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\mc\pants_co.paa",
			"121_75th_Uniform\Data\Patagonia\crye_g3_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_mc_co.paa",
			"",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_mc_jtac: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\mc\pants_co.paa",
			"121_75th_Uniform\Data\Patagonia\crye_g3_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_mc_co.paa",
			"121_75th_Uniform\Data\accessories\IR_JTAC_co.paa",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_mc_med: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\mc\pants_co.paa",
			"121_75th_Uniform\Data\Patagonia\crye_g3_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_mc_co.paa",
			"121_75th_Uniform\Data\accessories\IR_med_co.paa",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_mc_eod: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\mc\pants_co.paa",
			"121_75th_Uniform\Data\Patagonia\crye_g3_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_mc_co.paa",
			"121_75th_Uniform\Data\accessories\IR_eod_co.paa",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_sleeve_rgr: sts23rd_121_uniforms_g3_sleeve
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\rgr\pants_co.paa",
			"\sts23rd_121_uniforms\data\g3\rgr\top_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_rgr_co.paa",
			"",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_rgr: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\rgr\pants_co.paa",
			"\sts23rd_121_uniforms\data\g3\rgr\top_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_rgr_co.paa",
			"",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_rgr_jtac: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\rgr\pants_co.paa",
			"\sts23rd_121_uniforms\data\g3\rgr\top_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_rgr_co.paa",
			"121_75th_Uniform\Data\accessories\IR_JTAC_co.paa",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_rgr_med: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\rgr\pants_co.paa",
			"\sts23rd_121_uniforms\data\g3\rgr\top_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_rgr_co.paa",
			"121_75th_Uniform\Data\accessories\IR_med_co.paa",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_g3_rolled_rgr_eod: sts23rd_121_uniforms_g3_rolled
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\g3\rgr\pants_co.paa",
			"\sts23rd_121_uniforms\data\g3\rgr\top_co.paa",
			"121_75th_Uniform\Data\Cuffs\cuffs_rgr_co.paa",
			"121_75th_Uniform\Data\accessories\IR_eod_co.paa",
			"\sts23rd_121_uniforms\data\patches\unit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_Uniform\Data\G3s\pants.rvmat",
			"121_75th_Uniform\Data\Patagonia\shirt_g3.rvmat",
			"121_75th_Uniform\Data\cuffs\cuffs.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat",
			"121_75th_Uniform\Data\accessories\IR_ReflectCallsign.rvmat"
		};
	};
	class sts23rd_121_uniforms_pcu_base: sts23rd_121_uniforms_soldier_base
	{
		model="\121_75th_Uniform\ranger_pcu.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"rightflag"
		};
	};
	class sts23rd_121_uniforms_pcu_khk: sts23rd_121_uniforms_pcu_base
	{
		hiddenSelectionsTextures[]=
		{
			"121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
			"121_75th_Uniform\Data\pcu\pcu_beyond_co.paa",
			""
		};
	};
	class sts23rd_121_uniforms_pcu_blk: sts23rd_121_uniforms_pcu_base
	{
		hiddenSelectionsTextures[]=
		{
			"121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
			"\sts23rd_121_uniforms\data\pcu\blk_co.paa",
			""
		};
	};
	class sts23rd_121_uniforms_pcu_cb: sts23rd_121_uniforms_pcu_base
	{
		hiddenSelectionsTextures[]=
		{
			"121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
			"\sts23rd_121_uniforms\data\pcu\cb_co.paa",
			""
		};
	};
	class sts23rd_121_uniforms_pcu_rg: sts23rd_121_uniforms_pcu_base
	{
		hiddenSelectionsTextures[]=
		{
			"121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
			"\sts23rd_121_uniforms\data\pcu\rg_co.paa",
			""
		};
	};
	class sts23rd_121_uniforms_pcu_dnc: sts23rd_121_uniforms_pcu_base
	{
		hiddenSelectionsTextures[]=
		{
			"121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
			"\sts23rd_121_uniforms\data\pcu\dnc_co.paa",
			""
		};
	};
	class sts23rd_121_uniforms_pcu_m81: sts23rd_121_uniforms_pcu_base
	{
		hiddenSelectionsTextures[]=
		{
			"121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
			"\sts23rd_121_uniforms\data\pcu\m81_co.paa",
			""
		};
	};
	class sts23rd_121_uniforms_rugby_base: sts23rd_121_uniforms_soldier_base
	{
		model="\121_75th_Uniform\ranger_rugby1.p3d";
		hiddenSelections[]=
		{
			"injury_body"
		};
	};
	class sts23rd_121_uniforms_rugby_blk: sts23rd_121_uniforms_rugby_base
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\rugby\blk_co.paa"
		};
	};
	class sts23rd_121_uniforms_rugby_khk: sts23rd_121_uniforms_rugby_base
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\rugby\khk_co.paa"
		};
	};
	class sts23rd_121_uniforms_rugby_rg: sts23rd_121_uniforms_rugby_base
	{
		hiddenSelectionsTextures[]=
		{
			"\sts23rd_121_uniforms\data\rugby\rg_co.paa"
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class sts23rd_121_uniforms_uniform_base: Uniform_Base
	{
		scope=1;
		author="soupie von soup";
		displayName="";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="";
			containerClass="Supply80";
			mass=60;
		};
	};
	class sts23rd_121_uniforms_u_g3_sleeve: sts23rd_121_uniforms_uniform_base
	{
		picture="\121_75th_Uniform\121_ranger_uniform7_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass=80;
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled: sts23rd_121_uniforms_uniform_base
	{
		picture="\121_75th_Uniform\121_ranger_uniform3_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass=80;
		};
	};
	class sts23rd_121_uniforms_u_g3_sleeve_mc: sts23rd_121_uniforms_u_g3_sleeve
	{
		scope=2;
		displayName="Crye G3 (MC)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_sleeve_mc";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_mc_rolled: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (MC)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_mc";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_mc_jtac: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (MC/JTAC)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_mc_jtac";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_mc_med: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (MC/MED)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_mc_med";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_mc_eod: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (MC/EOD)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_mc_eod";
		};
	};
	class sts23rd_121_uniforms_u_g3_sleeve_rgr: sts23rd_121_uniforms_u_g3_sleeve
	{
		scope=2;
		displayName="Crye G3 (Ranger Green)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_sleeve_rgr";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_rgr_rolled: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (Ranger Green)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_rgr";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_rgr_jtac: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (Ranger Green/JTAC)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_rgr_jtac";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_rgr_med: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (Ranger Green/MED)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_rgr_med";
		};
	};
	class sts23rd_121_uniforms_u_g3_rolled_rgr_eod: sts23rd_121_uniforms_u_g3_rolled
	{
		scope=2;
		displayName="Crye G3 Rolled (Ranger Green/EOD)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_g3_rolled_rgr_eod";
		};
	};
	class sts23rd_121_uniforms_u_pcu_base: sts23rd_121_uniforms_uniform_base
	{
		picture="\121_75th_Uniform\121_ranger_pcu_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass=80;
		};
	};
	class sts23rd_121_uniforms_u_pcu_blk: sts23rd_121_uniforms_u_pcu_base
	{
		scope=2;
		displayName="PCU Jacket (Black)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_pcu_blk";
		};
	};
	class sts23rd_121_uniforms_u_pcu_cb: sts23rd_121_uniforms_u_pcu_base
	{
		scope=2;
		displayName="PCU Jacket (Coyote Brown)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_pcu_cb";
		};
	};
	class sts23rd_121_uniforms_u_pcu_khk: sts23rd_121_uniforms_u_pcu_base
	{
		scope=2;
		displayName="PCU Jacket (Khaki)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_pcu_khk";
		};
	};
	class sts23rd_121_uniforms_u_pcu_rg: sts23rd_121_uniforms_u_pcu_base
	{
		scope=2;
		displayName="PCU Jacket (Ranger Green)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_pcu_rg";
		};
	};
	class sts23rd_121_uniforms_u_pcu_dnc: sts23rd_121_uniforms_u_pcu_base
	{
		scope=2;
		displayName="PCU Jacket (D-Night Camo)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_pcu_dnc";
		};
	};
	class sts23rd_121_uniforms_u_pcu_m81: sts23rd_121_uniforms_u_pcu_base
	{
		scope=2;
		displayName="PCU Jacket (M81 Camo)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_pcu_m81";
		};
	};
	class sts23rd_121_uniforms_u_rugby_base: sts23rd_121_uniforms_uniform_base
	{
		picture="\121_75th_Uniform\121_ranger_rugby_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass=55;
		};
	};
	class sts23rd_121_uniforms_u_rugby_blk: sts23rd_121_uniforms_u_rugby_base
	{
		scope=2;
		displayName="Rugby Shirt (Black)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_rugby_blk";
		};
	};
	class sts23rd_121_uniforms_u_rugby_khk: sts23rd_121_uniforms_u_rugby_base
	{
		scope=2;
		displayName="Rugby Shirt (Khaki)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_rugby_khk";
		};
	};
	class sts23rd_121_uniforms_u_rugby_rg: sts23rd_121_uniforms_u_rugby_base
	{
		scope=2;
		displayName="Rugby Shirt (Ranger Green)";
		class ItemInfo: ItemInfo
		{
			uniformClass="sts23rd_121_uniforms_rugby_rg";
		};
	};
};

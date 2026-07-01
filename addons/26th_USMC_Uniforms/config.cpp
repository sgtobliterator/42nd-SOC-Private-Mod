class CfgPatches
{
	class CIUSMC_Uniforms
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_Soldier_F;
	class B_Soldier_diver_base_F;
	class rhsusf_army_acu_uniform;
	class rhsusf_army_acu2_uniform;
	class CIUSMC_CBRN_GRN: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_CBRN.p3d";
		uniformClass="CIUSMC_CBRN_GRN_1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\cbrn_suit_grn_co.paa"
		};
	};
	class CIUSMC_CBRN_TAN: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_CBRN.p3d";
		uniformClass="CIUSMC_CBRN_TAN_1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\cbrn_suit_tan_co.paa"
		};
	};
	class CIUSMC_MCCUU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_MCCUU.p3d";
		uniformClass="CIUSMC_MCCUU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\USMC_Pants_MarpatWoodland_co.paa"
		};
	};
	class CIUSMC_MCCUU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_MCCUU.p3d";
		uniformClass="CIUSMC_MCCUU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\USMC_Pants_MarpatDesert_co.paa"
		};
	};
	class CIUSMC_G3_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3.p3d";
		uniformClass="CIUSMC_G3_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_G3_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3.p3d";
		uniformClass="CIUSMC_G3_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_G3_PCU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_PCU.p3d";
		uniformClass="CIUSMC_G3_PCU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPW_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPW_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPD_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPD_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPW_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPW_Sleeve_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_MCCUU_MPD_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_MCCUU.p3d";
		uniformClass="CIUSMC_G3_MCCUU_MPD_Sleeve_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_PCU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_PCU.p3d";
		uniformClass="CIUSMC_G3_PCU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Field_G3_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_G3.p3d";
		uniformClass="CIUSMC_Field_G3_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Field_G3_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_G3.p3d";
		uniformClass="CIUSMC_Field_G3_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Field_PCU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU.p3d";
		uniformClass="CIUSMC_Field_PCU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Field_PCU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU.p3d";
		uniformClass="CIUSMC_Field_PCU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPW_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPW_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPD_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPD_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPW_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPW_NG_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_MCCUU_MPD_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_MCCUU.p3d";
		uniformClass="CIUSMC_Field_MCCUU_MPD_NG_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPW_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPW_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPD_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPD_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPW_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPW_Sleeve_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			"",
			""
		};
	};
	class CIUSMC_BDU_MCCUU_MPD_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_MCCUU.p3d";
		uniformClass="CIUSMC_BDU_MCCUU_MPD_Sleeve_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Coverall_OD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Overalls.p3d";
		uniformClass="CIUSMC_Coverall_OD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USAF_Overalls_top_GreenUSMC_co.paa",
			"26th_USMC_Uniforms\data\USAF_Overalls_pants_GreenUSMC_co.paa",
			""
		};
	};
	class CIUSMC_Coverall_OD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Overalls.p3d";
		uniformClass="CIUSMC_Coverall_OD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USAF_Overalls_top_GreenUSMC_co.paa",
			"26th_USMC_Uniforms\data\USAF_Overalls_pants_GreenUSMC_co.paa",
			""
		};
	};
	class CIUSMC_Coverall_CB: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Overalls.p3d";
		uniformClass="CIUSMC_Coverall_CB_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USAF_Overalls_top_CoyoteUSMC_co.paa",
			"26th_USMC_Uniforms\data\USAF_Overalls_pants_CoyoteUSMC_co.paa",
			""
		};
	};
	class CIUSMC_Coverall_CB_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Overalls.p3d";
		uniformClass="CIUSMC_Coverall_CB_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USAF_Overalls_top_CoyoteUSMC_co.paa",
			"26th_USMC_Uniforms\data\USAF_Overalls_pants_CoyoteUSMC_co.paa",
			""
		};
	};
	class CIUSMC_G3_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3.p3d";
		uniformClass="CIUSMC_G3_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			""
		};
	};
	class CIUSMC_G3_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3.p3d";
		uniformClass="CIUSMC_G3_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			""
		};
	};
	class CIUSMC_Field_G3_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_G3.p3d";
		uniformClass="CIUSMC_Field_G3_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			""
		};
	};
	class CIUSMC_Field_G3_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_G3.p3d";
		uniformClass="CIUSMC_Field_G3_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			""
		};
	};
	class CIUSMC_G3_PCU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_PCU.p3d";
		uniformClass="CIUSMC_G3_PCU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			""
		};
	};
	class CIUSMC_G3_PCU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_PCU.p3d";
		uniformClass="CIUSMC_G3_PCU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			""
		};
	};
	class CIUSMC_Field_PCU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU.p3d";
		uniformClass="CIUSMC_Field_PCU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			""
		};
	};
	class CIUSMC_Field_PCU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU.p3d";
		uniformClass="CIUSMC_Field_PCU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			""
		};
	};
	class CIUSMC_G3_MPW_Fleece: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_Fleece.p3d";
		uniformClass="CIUSMC_G3_MPW_Fleece_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_G3_MPD_Fleece: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_Fleece.p3d";
		uniformClass="CIUSMC_G3_MPD_Fleece_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_G3_MPW_Fleece_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_Fleece.p3d";
		uniformClass="CIUSMC_G3_MPW_Fleece_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPW_co.paa",
			""
		};
	};
	class CIUSMC_G3_MPD_Fleece_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_G3_Fleece.p3d";
		uniformClass="CIUSMC_G3_MPD_Fleece_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Pants_MPD_co.paa",
			""
		};
	};
	class CIUSMC_Field_MPW_Fleece: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_Fleece.p3d";
		uniformClass="CIUSMC_Field_MPW_Fleece_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Field_MPD_Fleece: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_Fleece.p3d";
		uniformClass="CIUSMC_Field_MPD_Fleece_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Field_MPW_Fleece_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_Fleece.p3d";
		uniformClass="CIUSMC_Field_MPW_Fleece_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPW_co.paa",
			""
		};
	};
	class CIUSMC_Field_MPD_Fleece_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_Fleece.p3d";
		uniformClass="CIUSMC_Field_MPD_Fleece_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\Field_MPD_co.paa",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hup",
			"_tuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HD_G: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP_G.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HD_G_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hup",
			"_tuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HU: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HU_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hdwn",
			"_tuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HU_G: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP_G.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HU_G_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hdwn",
			"_tuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HD_TUCK: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HD_TUCK_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hup",
			"_untuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HD_G_TUCK: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP_G.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HD_G_TUCK_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hup",
			"_untuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HU_TUCK: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HU_TUCK_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hdwn",
			"_untuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Field_PCU_ALP_HU_G_TUCK: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Field_PCU_ALP_G.p3d";
		uniformClass="CIUSMC_Field_PCU_ALP_HU_G_TUCK_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_hdwn",
			"_untuck"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_MPS_CO.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPS_co.paa",
			"",
			""
		};
	};
	class CIUSMC_G3_BDU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_G3.p3d";
		uniformClass="CIUSMC_G3_BDU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_G3_BDU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_G3.p3d";
		uniformClass="CIUSMC_G3_BDU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_G3_BDU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_G3.p3d";
		uniformClass="CIUSMC_G3_BDU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			""
		};
	};
	class CIUSMC_G3_BDU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_G3.p3d";
		uniformClass="CIUSMC_G3_BDU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			""
		};
	};
	class CIUSMC_BDU_PCU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_PCU.p3d";
		uniformClass="CIUSMC_BDU_PCU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_BDU_PCU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_PCU.p3d";
		uniformClass="CIUSMC_BDU_PCU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_BDU_PCU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_PCU.p3d";
		uniformClass="CIUSMC_BDU_PCU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			""
		};
	};
	class CIUSMC_BDU_PCU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_PCU.p3d";
		uniformClass="CIUSMC_BDU_PCU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			""
		};
	};
	class CIUSMC_BDU_MPW_Fleece: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_Fleece.p3d";
		uniformClass="CIUSMC_BDU_MPW_Fleece_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_BDU_MPD_Fleece: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_Fleece.p3d";
		uniformClass="CIUSMC_BDU_MPD_Fleece_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_BDU_MPW_Fleece_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_Fleece.p3d";
		uniformClass="CIUSMC_BDU_MPW_Fleece_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatWoodland_co.paa",
			""
		};
	};
	class CIUSMC_BDU_MPD_Fleece_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_BDU_Fleece.p3d";
		uniformClass="CIUSMC_BDU_MPD_Fleece_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\BDU_Pants_MarpatDesert_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_G3_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_G3.p3d";
		uniformClass="CIUSMC_Cargo_G3_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_G3_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_G3.p3d";
		uniformClass="CIUSMC_Cargo_G3_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_G3_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_G3.p3d";
		uniformClass="CIUSMC_Cargo_G3_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_G3_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_G3.p3d";
		uniformClass="CIUSMC_Cargo_G3_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_PCU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_PCU.p3d";
		uniformClass="CIUSMC_Cargo_PCU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_PCU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_PCU.p3d";
		uniformClass="CIUSMC_Cargo_PCU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_PCU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_PCU.p3d";
		uniformClass="CIUSMC_Cargo_PCU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_PCU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_PCU.p3d";
		uniformClass="CIUSMC_Cargo_PCU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\pcu_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_sleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPW_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD_Sleeve: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPD_Sleeve_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo5",
			"_hand",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPW_Sleeve_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatWoodland_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD_Sleeve_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_MCCUU.p3d";
		uniformClass="CIUSMC_Cargo_MCCUU_MPD_Sleeve_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_glove",
			"_nosleeve"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\USMC_Top_MarpatDesert_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"",
			""
		};
	};
	class CIUSMC_Cargo_Fleece_MPW: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_Fleece.p3d";
		uniformClass="CIUSMC_Cargo_Fleece_MPW_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_Fleece_MPD: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_Fleece.p3d";
		uniformClass="CIUSMC_Cargo_Fleece_MPD_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"camo5",
			"_hand"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"26th_USMC_Uniforms\data\gunglove_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_Fleece_MPW_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_Fleece.p3d";
		uniformClass="CIUSMC_Cargo_Fleece_MPW_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			""
		};
	};
	class CIUSMC_Cargo_Fleece_MPD_NG: B_Soldier_base_F
	{
		scope=2;
		model="\26th_USMC_Uniforms\model\USMC_Cargo_Fleece.p3d";
		uniformClass="CIUSMC_Cargo_Fleece_MPD_NG_1";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"_glove"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\minotaur_croc_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			""
		};
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class H_HelmetB;
	class HeadgearItem;
	class NVGoggles;
	class CIUSMC_MCCUU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCCUU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_MCCUU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="MCCUU";
			camo="MPW";
		};
	};
	class CIUSMC_MCCUU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCCUU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_MCCUU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="MCCUU";
			camo="MPD";
		};
	};
	class CIUSMC_G3_MCCUU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_G3_MCCUU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_G3_MCCUU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_MCCUU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_MCCUU_MPW_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPW_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_G3_MCCUU_MPD_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPD_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_G3_MCCUU_MPW_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPW_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_MCCUU_MPD_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MCCUU_MPD_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_MCCUU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_MCCUU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_MCCUU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_MCCUU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_MCCUU_MPW_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPW_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_MCCUU_MPD_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPD_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_MCCUU_MPW_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPW_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_MCCUU_MPD_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MCCUU_MPD_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_MCCUU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_MCCUU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_MCCUU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_MCCUU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_MCCUU_MPW_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPW_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_MCCUU_MPD_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPD_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_MCCUU_MPW_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPW_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_MCCUU_MPD_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/MCCUU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MCCUU_MPD_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3's (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_G3_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3's (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_Field_G3_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Field (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_G3_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_G3_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Field (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_G3_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_G3_PCU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_PCU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_G3_PCU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_PCU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_Field_PCU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_PCU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_PCU_ALP_HD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Untuck";
			Gaiter="Off";
			Hood="Down";
		};
	};
	class CIUSMC_Field_PCU_ALP_HD_G_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear\Gaiters";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HD_G";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Untuck";
			Gaiter="On";
			Hood="Down";
		};
	};
	class CIUSMC_Field_PCU_ALP_HU_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HU";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Untuck";
			Gaiter="Off";
			Hood="Up";
		};
	};
	class CIUSMC_Field_PCU_ALP_HU_G_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear\Gaiters";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HU_G";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Untuck";
			Gaiter="On";
			Hood="Up";
		};
	};
	class CIUSMC_Field_PCU_ALP_HD_TUCK_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HD_TUCK";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Tuck";
			Gaiter="Off";
			Hood="Down";
		};
	};
	class CIUSMC_Field_PCU_ALP_HD_G_TUCK_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear\Gaiters";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HD_G_TUCK";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Tuck";
			Gaiter="On";
			Hood="Down";
		};
	};
	class CIUSMC_Field_PCU_ALP_HU_TUCK_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HU_TUCK";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Tuck";
			Gaiter="Off";
			Hood="Up";
		};
	};
	class CIUSMC_Field_PCU_ALP_HU_G_TUCK_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cold Weather Gear\Gaiters";
		picture="\26th_USMC_Uniforms\data\icon\ECW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_ALP_HU_G_TUCK";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Alpine";
			Fit="Tuck";
			Gaiter="On";
			Hood="Up";
		};
	};
	class CIUSMC_Coverall_OD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Coverall (OD)";
		picture="\26th_USMC_Uniforms\data\icon\Coverall_G.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Coverall_OD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Coverall";
			camo="OD";
			glove="On";
		};
	};
	class CIUSMC_Coverall_OD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Coverall (OD)";
		picture="\26th_USMC_Uniforms\data\icon\Coverall_G.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Coverall_OD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Coverall";
			camo="OD";
			glove="Off";
		};
	};
	class CIUSMC_Coverall_CB_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Coverall (CB)";
		picture="\26th_USMC_Uniforms\data\icon\Coverall_B.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Coverall_Cb";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Coverall";
			camo="CB";
			glove="On";
		};
	};
	class CIUSMC_Coverall_CB_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Coverall (CB)";
		picture="\26th_USMC_Uniforms\data\icon\Coverall_B.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Coverall_CB_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="Coverall";
			camo="CB";
			glove="Off";
		};
	};
	class CIUSMC_G3_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3's (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3's (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_G3_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Field (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_G3_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_G3_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Field (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_G3_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_PCU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_PCU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_PCU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_PCU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_PCU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_PCU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_PCU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_MPW_Fleece_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Fleece (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPW_Fleece";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_G3_MPD_Fleece_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Fleece (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPD_Fleece";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="On";
		};
	};
	class CIUSMC_Field_MPW_Fleece_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/Fleece (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MPW_Fleece";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_Field_MPD_Fleece_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/Fleece (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MPD_Fleece";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="On";
		};
	};
	class CIUSMC_G3_MPW_Fleece_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Fleece (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPW_Fleece_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_MPD_Fleece_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Fleece (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_MPD_Fleece_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="G3";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_MPW_Fleece_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/Fleece (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Field_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MPW_Fleece_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_Field_MPD_Fleece_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye Field/Fleece (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Field_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Field_MPD_Fleece_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Field";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_BDU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/BDU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_BDU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_G3_BDU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/BDU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_BDU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_G3_BDU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/BDU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_BDU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_G3_BDU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/BDU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_G3_BDU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_PCU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye BDU/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_PCU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_PCU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye BDU/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_PCU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_PCU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_PCU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_PCU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_PCU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_MPW_Fleece_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/Fleece (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MPW_Fleece";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_MPD_Fleece_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/Fleece (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MPD_Fleece";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="On";
		};
	};
	class CIUSMC_BDU_MPW_Fleece_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/Fleece (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_BDU_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MPW_Fleece_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_BDU_MPD_Fleece_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] BDU/Fleece (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_BDU_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_BDU_MPD_Fleece_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="BDU";
			Gloves="Off";
		};
	};
	class CIUSMC_CBRN_GRN_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] CBRN Suit (GRN)";
		picture="\26th_USMC_Uniforms\data\icon\CBRN_G.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_CBRN_GRN";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CBRN";
			camo="GRN";
		};
	};
	class CIUSMC_CBRN_TAN_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] CBRN Suit (Tan)";
		picture="\26th_USMC_Uniforms\data\icon\CBRN_B.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_CBRN_TAN";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CBRN";
			camo="Tan";
		};
	};
	class CIUSMC_Cargo_PCU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cargo/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_PCU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_PCU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cargo/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_PCU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_PCU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cargo/PCU (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_CArgo_PCU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_PCU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Cargo/PCU (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\PCU_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_PCU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="PCU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_G3_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_G3_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_G3_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_G3_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_G3_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_G3_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_G3_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Crye G3/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\G3_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_G3_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="G3";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_Fleece_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Fleece/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_Fleece_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_Fleece_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Fleece/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_Fleece_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_Fleece_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Fleece/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_Fleece_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_Fleece_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] Fleece/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\Fleece_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_Fleece_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="Fleece";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPW";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPD";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPW_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPD_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="Off";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPW_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD_Sleeve_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPD_Sleeve";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Cargo";
			Gloves="On";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPW_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPW)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPW_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPW";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
	class CIUSMC_Cargo_MCCUU_MPD_Sleeve_NG_1: Uniform_Base
	{
		scope=2;
		displayName="[USMC] MCCUU/Cargo (MPD)";
		picture="\26th_USMC_Uniforms\data\icon\MCUU_Cargo_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CIUSMC_Cargo_MCCUU_MPD_Sleeve_NG";
			containerClass="Supply70";
			mass=4;
		};
		class XtdGearInfo
		{
			model="CIUSMC_Uniforms";
			camo="MPD";
			Tops="MCCUU";
			Sleeve="On";
			Bottoms="Cargo";
			Gloves="Off";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class MCCUU
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"camo"
			};
			class camo
			{
				alwaysSelectable=1;
				label="camo";
				values[]=
				{
					"MPW",
					"MPD"
				};
				changeingame=0;
				class MPW
				{
					label="MPW";
					image="26th_USMC_Uniforms\data\icon\MPW.paa";
				};
				class MPD
				{
					label="MPD";
					image="26th_USMC_Uniforms\data\icon\MPD.paa";
				};
			};
		};
		class Coverall
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"camo",
				"glove"
			};
			class camo
			{
				alwaysSelectable=1;
				label="Color";
				values[]=
				{
					"OD",
					"CB"
				};
				changeingame=0;
				class OD
				{
					label="OD";
					image="26th_USMC_Uniforms\data\icon\OD.paa";
				};
				class CB
				{
					label="CB";
					image="26th_USMC_Uniforms\data\icon\CB.paa";
				};
			};
			class glove
			{
				alwaysSelectable=1;
				label="Gloves";
				values[]=
				{
					"On",
					"Off"
				};
				changeingame=1;
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
		};
		class CBRN
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"camo"
			};
			class camo
			{
				alwaysSelectable=1;
				label="Color";
				values[]=
				{
					"GRN",
					"Tan"
				};
				changeingame=0;
				class OD
				{
					label="OD";
					image="26th_USMC_Uniforms\data\icon\OD.paa";
				};
				class CB
				{
					label="CB";
					image="26th_USMC_Uniforms\data\icon\CB.paa";
				};
			};
		};
		class Alpine
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"Fit",
				"Hood",
				"Gaiter"
			};
			class Fit
			{
				alwaysSelectable=1;
				label="PCU Fit";
				values[]=
				{
					"Tuck",
					"Untuck"
				};
				changeingame=1;
				class Tuck
				{
					label="Tucked";
					image="";
				};
				class Untuck
				{
					label="Untucked";
					image="";
				};
			};
			class Hood
			{
				alwaysSelectable=1;
				label="Hood";
				values[]=
				{
					"Down",
					"Up"
				};
				changeingame=1;
				class Down
				{
					label="Down";
					image="";
				};
				class Up
				{
					label="Up";
					image="";
				};
			};
			class Gaiter
			{
				alwaysSelectable=1;
				label="Gaiters";
				values[]=
				{
					"On",
					"Off"
				};
				changeingame=1;
				class On
				{
					label="On";
					image="";
				};
				class Off
				{
					label="Off";
					image="";
				};
			};
		};
		class CIUSMC_Uniforms
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"camo",
				"Tops",
				"Sleeve",
				"Bottoms",
				"Gloves"
			};
			class camo
			{
				alwaysSelectable=1;
				label="camo";
				values[]=
				{
					"MPW",
					"MPD"
				};
				changeingame=0;
				class MPW
				{
					label="MPW";
					image="26th_USMC_Uniforms\data\icon\MPW.paa";
				};
				class MPD
				{
					label="MPD";
					image="26th_USMC_Uniforms\data\icon\MPD.paa";
				};
			};
			class Tops
			{
				alwaysSelectable=1;
				label="Top";
				values[]=
				{
					"G3",
					"MCCUU",
					"Fleece",
					"PCU"
				};
				changeingame=0;
				class G3
				{
					label="FROG";
					image="";
				};
				class MCCUU
				{
					label="Utility";
					image="";
				};
				class Fleece
				{
					label="Fleece";
					image="";
				};
				class PCU
				{
					label="PCU";
					image="";
				};
			};
			class Sleeve
			{
				alwaysSelectable=1;
				label="Sleeves";
				values[]=
				{
					"On",
					"Off"
				};
				changeingame=1;
				class On
				{
					label="Rolled";
					image="";
				};
				class Off
				{
					label="Unrolled";
					image="";
				};
			};
			class Bottoms
			{
				alwaysSelectable=1;
				label="Bottoms";
				values[]=
				{
					"G3",
					"Field",
					"BDU",
					"Cargo"
				};
				changeingame=0;
				class G3
				{
					label="G3";
					image="";
				};
				class Field
				{
					label="Field";
					image="";
				};
				class BDU
				{
					label="BDU";
					image="";
				};
				class Cargo
				{
					label="Cargo";
					image="";
				};
			};
			class Gloves
			{
				alwaysSelectable=1;
				label="Gloves";
				values[]=
				{
					"On",
					"Off"
				};
				changeingame=1;
				class On
				{
					label="On";
					image="";
				};
				class Off
				{
					label="Off";
					image="";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1778182098";
};

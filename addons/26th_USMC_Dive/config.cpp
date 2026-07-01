class CfgPatches
{
	class CIUSMC_Dive
	{
		units[]=
		{
			""
		};
		weapons[]=
		{
			""
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_common"
		};
	};
};
class XtdGearModels
{
	class cfgweapons
	{
		class G3Dive
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"camo",
				"hood"
			};
			class hood
			{
				label="Hood";
				values[]=
				{
					"off",
					"on"
				};
				changeingame=1;
				class off
				{
					label="Off";
				};
				class on
				{
					label="On";
				};
			};
			class camo
			{
				label="Camo";
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
		class JPCDive
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"Vest"
			};
			class Vest
			{
				label="Rebreather";
				values[]=
				{
					"JPCLARV",
					"JPC"
				};
				changeingame=1;
				class JPCLARV
				{
					label="On";
				};
				class JPC
				{
					label="Off";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class Uniform_Base;
	class UniformItem;
	class HeadgearItem;
	class V_RebreatherB;
	class U_B_survival_uniform;
	class CIUSMC_JPC_Dive_RB: V_RebreatherB
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[USMC] Diver JPC/Draeger LAR-V 7000";
		allowedSlots[]={901};
		picture="\26th_USMC_Dive\data\icon\Draegar_JPC.paa";
		model="26th_USMC_Dive\model\USMC_JPC_Dive.p3d";
		hiddenUnderwaterSelections[]=
		{
			"_fin",
			"hide",
			"hide2"
		};
		shownUnderwaterSelections[]=
		{
			"unhide",
			"unhide2"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"26th_USMC_Dive\data\swim_fins_co.paa",
			"26th_USMC_Dive\data\respirator_co.paa",
			"26th_USMC_Dive\data\respirator_co.paa",
			"26th_USMC_Dive\data\respirator_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="26th_USMC_Dive\model\USMC_JPC_Dive.p3d";
			vestType="Rebreather";
			hiddenUnderwaterSelections[]=
			{
				"_fin",
				"hide",
				"hide2"
			};
			shownUnderwaterSelections[]=
			{
				"unhide",
				"unhide2"
			};
			hiddenUnderwaterSelectionsTextures[]=
			{
				"26th_USMC_Dive\data\swim_fins_co.paa",
				"26th_USMC_Dive\data\respirator_co.paa",
				"26th_USMC_Dive\data\respirator_co.paa",
				"26th_USMC_Dive\data\respirator_co.paa"
			};
			picture="\26th_USMC_Dive\icon\Draegar_JPC.paa";
			containerClass="Supply200";
			mass=30;
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="JPCDive";
			Vest="JPCLARV";
		};
	};
	class CIUSMC_JPC_Dive: V_RebreatherB
	{
		author="Coal";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[USMC] Diver JPC";
		allowedSlots[]={901};
		picture="\26th_USMC_Dive\data\icon\Dive_JPC.paa";
		model="26th_USMC_Dive\model\USMC_JPC_Dive.p3d";
		hiddenSelections[]=
		{
			"_breath"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="26th_USMC_Dive\model\USMC_JPC_Dive.p3d";
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"_breath"
			};
			hiddenSelectionsTextures[]={};
			picture="\26th_USMC_Dive\icon\Dive_JPC.paa";
			containerClass="Supply200";
			mass=5;
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="JPCDive";
			Vest="JPC";
		};
	};
	class CIUSMC_G3_Dive_MPW_1: U_B_survival_uniform
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Coal";
		displayName="[USMC] Diving Uniform/Hood (MPW)";
		picture="\26th_USMC_Dive\data\icon\Dive_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType="Neopren";
			modelSides[]={0,1,2,3};
			uniformClass="CIUSMC_G3_Dive_MPW";
			containerClass="Supply80";
			mass=5;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="G3Dive";
			hood="on";
			Camo="MPW";
		};
	};
	class CIUSMC_G3_Dive_MPW_NH_1: U_B_survival_uniform
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Coal";
		displayName="[USMC] Diving Uniform (MPW)";
		picture="\26th_USMC_Dive\data\icon\Dive_G3_MPW.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType="Neopren";
			modelSides[]={0,1,2,3};
			uniformClass="CIUSMC_G3_Dive_MPW_NH";
			containerClass="Supply80";
			mass=5;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="G3Dive";
			hood="off";
			Camo="MPW";
		};
	};
	class CIUSMC_G3_Dive_MPD_1: U_B_survival_uniform
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Coal";
		displayName="[USMC] Diving Uniform/Hood (MPD)";
		picture="\26th_USMC_Dive\data\icon\Dive_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType="Neopren";
			modelSides[]={0,1,2,3};
			uniformClass="CIUSMC_G3_Dive_MPD";
			containerClass="Supply80";
			mass=5;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="G3Dive";
			hood="on";
			Camo="MPD";
		};
	};
	class CIUSMC_G3_Dive_MPD_NH_1: U_B_survival_uniform
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Coal";
		displayName="[USMC] Diving Uniform (MPD)";
		picture="\26th_USMC_Dive\data\icon\Dive_G3_MPD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType="Neopren";
			modelSides[]={0,1,2,3};
			uniformClass="CIUSMC_G3_Dive_MPD_NH";
			containerClass="Supply80";
			mass=5;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="G3Dive";
			hood="off";
			Camo="MPD";
		};
	};
};
class CfgVehicles
{
	class b_soldier_survival_F;
	class CIUSMC_G3_Dive_MPW: b_soldier_survival_F
	{
		scope=1;
		dlc="";
		modelSides[]={0,1,2,3};
		displayName="Test Man";
		model="26th_USMC_Dive\model\USMC_G3_Dive.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_hood"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			"26th_USMC_Dive\data\wetsuit_hood_blk_co.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"",
			"26th_USMC_Dive\data\swim_fins_co.paa"
		};
	};
	class CIUSMC_G3_Dive_MPW_NH: b_soldier_survival_F
	{
		scope=1;
		dlc="";
		modelSides[]={0,1,2,3};
		displayName="Test Man";
		model="26th_USMC_Dive\model\USMC_G3_Dive.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_hood"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPW_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPW_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPW_co.paa",
			""
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"",
			"26th_USMC_Dive\data\swim_fins_co.paa"
		};
	};
	class CIUSMC_G3_Dive_MPD: b_soldier_survival_F
	{
		scope=1;
		dlc="";
		modelSides[]={0,1,2,3};
		displayName="Test Man";
		model="26th_USMC_Dive\model\USMC_G3_Dive.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_hood"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			"26th_USMC_Dive\data\wetsuit_hood_blk_co.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"",
			"26th_USMC_Dive\data\swim_fins_co.paa"
		};
	};
	class CIUSMC_G3_Dive_MPD_NH: b_soldier_survival_F
	{
		scope=1;
		dlc="";
		modelSides[]={0,1,2,3};
		displayName="Test Man";
		model="26th_USMC_Dive\model\USMC_G3_Dive.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"_hood"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Uniforms\data\G3_HD_Top_MPD_co.paa",
			"26th_USMC_Uniforms\data\G3_HD_Top_cove_MPD_co.paa",
			"26th_USMC_Uniforms\data\urban_bottom_MPD_co.paa",
			""
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"",
			"26th_USMC_Dive\data\swim_fins_co.paa"
		};
	};
};
class CfgGlasses
{
	class None;
	class G_Diving;
	class CIUSMC_Diving_Goggles: G_Diving
	{
		author="Coal";
		displayname="[USMC] Diving Goggles";
		model="26th_USMC_Dive\model\USMC_Diving_Goggles.p3d";
		picture="\26th_USMC_Dive\data\icon\Goggles.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"26th_USMC_Dive\data\goggles_co.paa",
			"26th_USMC_Dive\data\goggles_glass_ca.paa"
		};
		mass=1;
	};
};
class CfgMods
{
	author="Coal";
	timepacked="1777908957";
};

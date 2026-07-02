class CfgPatches
{
	class 121_soar_mh60
	{
		units[]=
		{
			"121_soar_hibyrd_slick"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_Soldier_diver_base_F;
	class 121_soar_uniform1: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform1.P3D";
	};
	class 121_soar_uniform2: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform2.P3D";
	};
	class 121_soar_uniform3: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform3.P3D";
	};
	class 121_soar_uniform4: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform4.P3D";
	};
	class 121_soar_uniform1_pcu: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform1_pcu.P3D";
	};
	class 121_soar_uniform2_pcu: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform2_pcu.P3D";
	};
	class 121_soar_uniform3_pcu: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform3_pcu.P3D";
	};
	class 121_soar_uniform4_pcu: B_Soldier_base_F
	{
		scope=2;
		model="121_soar_gear\121_soar_uniform4_pcu.P3D";
	};
	class vtx_MH60M;
	class 121_soar_hibyrd_slick: vtx_MH60M
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"z\vtx\addons\MH60M\Data\Main_co.paa",
			"z\vtx\addons\MH60M\Data\Misc_co.paa",
			"121_soar_gear\data\helicopter\hibyrd_tail.paa",
			"121_soar_gear\data\helicopter\hibyrd_markings.paa",
			"\z\vtx\addons\uh60_misc\data\VTX_Door_Numbers\Num_5_ca.paa",
			"\z\vtx\addons\uh60_misc\data\VTX_Door_Numbers\Num_0_ca.paa",
			"\z\vtx\addons\uh60_misc\data\VTX_Door_Numbers\Num_5_ca.paa",
			"\z\vtx\addons\uh60_misc\data\VTX_Door_Numbers\Num_0_ca.paa",
			"z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa"
		};
		displayName="[SOAR] Hibyrd's MH-60M";
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class H_CrewHelmetHeli_B;
	class ItemCore;
	class HeadGearItem;
	class VestItem;
	class NVGoggles;
	class 121_soar_none_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (None)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="none";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_none_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (None)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="none";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_none_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (None)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="none";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_none_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (None)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="none";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_ichor_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Ichor)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Ichor.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Ichor.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="ichor";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_ichor_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Ichor)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Ichor.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Ichor.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="ichor";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_ichor_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Ichor)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Ichor.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Ichor.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="ichor";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_ichor_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Ichor)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Ichor.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Ichor.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="ichor";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_cam_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Cam)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Cam.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Cam.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="cam";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_cam_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Cam)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Cam.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Cam.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="cam";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_cam_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Cam)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Cam.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Cam.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="cam";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_cam_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="HGU-56P (Cam)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Cam.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Cam.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="cam";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_russian_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Russian)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Russian.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Russian.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="russian";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_russian_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Russian)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Russian.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Russian.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="russian";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_russian_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Russian)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Russian.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Russian.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="russian";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_russian_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Russian)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Russian.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Russian.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="russian";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_jeff_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Jeff)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Jeff.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Jeff.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="jeff";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_jeff_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Jeff)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Jeff.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Jeff.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="jeff";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_jeff_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Jeff)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Jeff.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Jeff.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="jeff";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_jeff_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Jeff)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Jeff.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Jeff.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="jeff";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_grimm_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Grimm)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Grimm.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Grimm.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="grimm";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_grimm_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Grimm)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Grimm.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Grimm.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="grimm";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_grimm_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Grimm)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Grimm.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Grimm.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="grimm";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_grimm_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Grimm)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Grimm.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Grimm.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="grimm";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_hibyrd_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Hibyrd)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Hibyrd.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Hibyrd.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="hibyrd";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_hibyrd_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Hibyrd)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Hibyrd.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Hibyrd.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="hibyrd";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_hibyrd_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Hibyrd)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Hibyrd.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Hibyrd.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="hibyrd";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_hibyrd_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Hibyrd)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Hibyrd.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Hibyrd.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="hibyrd";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_reckless_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Reckless)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Reckless.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Reckless.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="reckless";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_reckless_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Reckless)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Reckless.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Reckless.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="reckless";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_reckless_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Reckless)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Reckless.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Reckless.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="reckless";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_reckless_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Reckless)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\Reckless.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\Reckless.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="reckless";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic1_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 1)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P1.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P1.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic1";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic1_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 1)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P1.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P1.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic1";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic1_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 1)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P1.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P1.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic1";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic1_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 1)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P1.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P1.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic1";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic2_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 2)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P2.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P2.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic2";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic2_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 2)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P2.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P2.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic2";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic2_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 2)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P2.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P2.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic2";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic2_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 2)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P2.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P2.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic2";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic3_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 3)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P3.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P3.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic3";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic3_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 3)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P3.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P3.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic3";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic3_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 3)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P3.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P3.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic3";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic3_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 3)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P3.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P3.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic3";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic4_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 4)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P4.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P4.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic4";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic4_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 4)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P4.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P4.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic4";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic4_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 4)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P4.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P4.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic4";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic4_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 4)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P4.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P4.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic4";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic5_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 5)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P5.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P5.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic5";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic5_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 5)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P5.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P5.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic5";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic5_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 5)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P5.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P5.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic5";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic5_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 5)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P5.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P5.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic5";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic6_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 6)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P6.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P6.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic6";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic6_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 6)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P6.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P6.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic6";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic6_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 6)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P6.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P6.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic6";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic6_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 6)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P6.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P6.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic6";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic7_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 7)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P7.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P7.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic7";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic7_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 7)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P7.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P7.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic7";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic7_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 7)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P7.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P7.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic7";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic7_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 7)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P7.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P7.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic7";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic8_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 8)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P8.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P8.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic8";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic8_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 8)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P8.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P8.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic8";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic8_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 8)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P8.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P8.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic8";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic8_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 8)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P8.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P8.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic8";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic9_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 9)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P9.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P9.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic9";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic9_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 9)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P9.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P9.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic9";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic9_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 9)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P9.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P9.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic9";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic9_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 9)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P9.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P9.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic9";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic10_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 10)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P10.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P10.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic10";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic10_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 10)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P10.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P10.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic10";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic10_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 10)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P10.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P10.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic10";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic10_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 10)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P10.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P10.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic10";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic11_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 11)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P11.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P11.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic11";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic11_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 11)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P11.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P11.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic11";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic11_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 11)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P11.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P11.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic11";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic11_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 11)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P11.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P11.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic11";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic12_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 12)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P12.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P12.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic12";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic12_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 12)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P12.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P12.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic12";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic12_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 12)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P12.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P12.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic12";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic12_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 12)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P12.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P12.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic12";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic13_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 13)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P13.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P13.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic13";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic13_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 13)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P13.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P13.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic13";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic13_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 13)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P13.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P13.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic13";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic13_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 13)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P13.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P13.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic13";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic14_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 14)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P14.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P14.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic14";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic14_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 14)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P14.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P14.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic14";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic14_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 14)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P14.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P14.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic14";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic14_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 14)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P14.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P14.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic14";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic15_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 15)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P15.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P15.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic15";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic15_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 15)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P15.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P15.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic15";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic15_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 15)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P15.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P15.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic15";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic15_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 15)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P15.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P15.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic15";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic16_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 16)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P16.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P16.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic16";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic16_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 16)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P16.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P16.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic16";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic16_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 16)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P16.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P16.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic16";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic16_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 16)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P16.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P16.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic16";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic17_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 17)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P17.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P17.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic17";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic17_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 17)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P17.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P17.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic17";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic17_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 17)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P17.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P17.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic17";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic17_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 17)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P17.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P17.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic17";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic18_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 18)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P18.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P18.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic18";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic18_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 18)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P18.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P18.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic18";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic18_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 18)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P18.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P18.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic18";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic18_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 18)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P18.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P18.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic18";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic19_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 19)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P19.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P19.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic19";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic19_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 19)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P19.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P19.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic19";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic19_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 19)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P19.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P19.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic19";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic19_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 19)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P19.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P19.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic19";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_generic20_helmet1: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 20)";
		model="\121_soar_gear\121_soar_helmet1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P20.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet1.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P20.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic20";
			visor="down";
			mask="on";
		};
	};
	class 121_soar_generic20_helmet2: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 20)";
		model="\121_soar_gear\121_soar_helmet2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P20.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P20.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic20";
			visor="up";
			mask="on";
		};
	};
	class 121_soar_generic20_helmet3: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 20)";
		model="\121_soar_gear\121_soar_helmet3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P20.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet3.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P20.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic20";
			visor="down";
			mask="off";
		};
	};
	class 121_soar_generic20_helmet4: ItemCore
	{
		author="Mighty";
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_h_crew_helmet_heli_oi_ca.paa";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
		displayName="[SOAR] HGU-56P (Generic 20)";
		model="\121_soar_gear\121_soar_helmet4.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_soar_gear\data\HGU-56P20.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=20;
			uniformModel="\121_soar_gear\121_soar_helmet4.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.75;
			ace_hearing_lowerVolume=0.5;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\121_soar_gear\data\HGU-56P20.paa"
			};
		};
		class XtdGearInfo
		{
			model="121_soar_hgu";
			pilot="generic20";
			visor="up";
			mask="off";
		};
	};
	class 121_soar_anvis: NVGoggles
	{
		author="Mighty";
		scope=2;
		displayName="[SOAR] ANVIS-9";
		model="121_soar_gear\121_soar_nvg1.p3d";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		modelOptics="\121_soar_gear\data\ACE_nvg_wide_optics.p3d";
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.5,0.1,1.5,0.89999998},
			{1,1,6,0}
		};
		class Library
		{
			libTextDesc="";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_soar_gear\121_soar_nvg2.p3d";
			modelOff="121_soar_gear\121_soar_nvg1.p3d";
			mass=13.624781;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		class XtdGearInfo
		{
			model="121_soar_nods";
			difficulty="normal";
		};
	};
	class 121_soar_anvis_hardcore: NVGoggles
	{
		author="Mighty";
		scope=2;
		displayName="[SOAR] ANVIS-9";
		model="121_soar_gear\121_soar_nvg1.p3d";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.5,0.1,1.5,0.89999998},
			{1,1,6,0}
		};
		class Library
		{
			libTextDesc="";
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_soar_gear\121_soar_nvg2.p3d";
			modelOff="121_soar_gear\121_soar_nvg1.p3d";
			mass=13.624781;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		class XtdGearInfo
		{
			model="121_soar_nods";
			difficulty="hardcore";
		};
	};
	class 121_soar_uniform1u: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform1";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit";
			gloves="none";
		};
	};
	class 121_soar_uniform2u: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform2";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit";
			gloves="nomex";
		};
	};
	class 121_soar_uniform3u: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform3";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit";
			gloves="oakley";
		};
	};
	class 121_soar_uniform4u: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform4";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit";
			gloves="mechanix";
		};
	};
	class 121_soar_uniform1u_pcu: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit (PCU)";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform1_pcu";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit_pcu";
			gloves="none";
		};
	};
	class 121_soar_uniform2u_pcu: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit (PCU)";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform2_pcu";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit_pcu";
			gloves="nomex";
		};
	};
	class 121_soar_uniform3u_pcu: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit (PCU)";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform3_pcu";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit_pcu";
			gloves="oakley";
		};
	};
	class 121_soar_uniform4u_pcu: Uniform_Base
	{
		scope=2;
		displayName="[SOAR] Two-Piece Flight Suit (PCU)";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="121_soar_uniform4_pcu";
			uniformType="Neopren";
			containerClass="Supply100";
			mass=1;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
		class XtdGearInfo
		{
			model="121_soar_suit_pcu";
			gloves="mechanix";
		};
	};
	class 121_soar_vest1: ItemCore
	{
		author="Mighty";
		scope=2;
		displayName="[SOAR] First Spear Aviation Body Armor Vest";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\121_soar_gear\121_soar_vest1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_soar_gear\121_soar_vest1.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				""
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					PassThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=20;
					PassThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_soar_abav";
			loadout="one";
		};
	};
	class 121_soar_vest2: ItemCore
	{
		author="Mighty";
		scope=2;
		displayName="[SOAR] First Spear Aviation Body Armor Vest";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\121_soar_gear\121_soar_vest2.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_soar_gear\121_soar_vest2.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				""
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					PassThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=20;
					PassThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_soar_abav";
			loadout="two";
		};
	};
	class 121_soar_vest3: ItemCore
	{
		author="Mighty";
		scope=2;
		displayName="[SOAR] First Spear Aviation Body Armor Vest";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\121_soar_gear\121_soar_vest3.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_soar_gear\121_soar_vest3.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				""
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					PassThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=20;
					PassThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_soar_abav";
			loadout="three";
		};
	};
	class 121_soar_vest4: ItemCore
	{
		author="Mighty";
		scope=2;
		displayName="[SOAR] First Spear Aviation Body Armor Vest";
		picture="\121_soar_gear\data\160th_soar_ca.paa";
		model="\121_soar_gear\121_soar_vest4.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_soar_gear\121_soar_vest4.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				""
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					PassThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=20;
					PassThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_soar_abav";
			loadout="four";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 121_soar_suit
		{
			label="160th SOAR";
			author="Mighty";
			options[]=
			{
				"gloves"
			};
			class gloves
			{
				label="Gloves";
				changeingame=0;
				values[]=
				{
					"none",
					"nomex",
					"oakley",
					"mechanix"
				};
				class none
				{
					label="None";
				};
				class nomex
				{
					label="Nomex";
				};
				class oakley
				{
					label="Oakley";
				};
				class mechanix
				{
					label="Mechanix";
				};
			};
		};
		class 121_soar_suit_pcu
		{
			label="160th SOAR";
			author="Mighty";
			options[]=
			{
				"gloves"
			};
			class gloves
			{
				label="Gloves";
				changeingame=0;
				values[]=
				{
					"none",
					"nomex",
					"oakley",
					"mechanix"
				};
				class none
				{
					label="None";
				};
				class nomex
				{
					label="Nomex";
				};
				class oakley
				{
					label="Oakley";
				};
				class mechanix
				{
					label="Mechanix";
				};
			};
		};
		class 121_soar_abav
		{
			label="160th SOAR";
			author="Mighty";
			options[]=
			{
				"loadout"
			};
			class loadout
			{
				label="Loadout";
				values[]=
				{
					"one",
					"two",
					"three",
					"four"
				};
				class one
				{
					label="Variant 1";
				};
				class two
				{
					label="Variant 2";
				};
				class three
				{
					label="Variant 3";
				};
				class four
				{
					label="Variant 4";
				};
			};
		};
		class 121_soar_nods
		{
			label="160th SOAR";
			author="Mighty";
			options[]=
			{
				"difficulty"
			};
			class difficulty
			{
				label="Difficulty";
				values[]=
				{
					"normal",
					"hardcore"
				};
				class normal
				{
					label="Normal";
				};
				class hardcore
				{
					label="Hardcore";
				};
			};
		};
		class 121_soar_hgu
		{
			label="160th SOAR";
			author="Mighty";
			options[]=
			{
				"pilot",
				"visor",
				"mask"
			};
			class pilot
			{
				label="Pilot";
				values[]=
				{
					"none",
					"ichor",
					"cam",
					"russian",
					"jeff",
					"hibyrd",
					"grimm",
					"reckless",
					"generic1",
					"generic2",
					"generic3",
					"generic4",
					"generic5",
					"generic6",
					"generic7",
					"generic8",
					"generic9",
					"generic10",
					"generic11",
					"generic12",
					"generic13",
					"generic14",
					"generic15",
					"generic16",
					"generic17",
					"generic18",
					"generic19",
					"generic20"
				};
				class none
				{
					label="None";
				};
				class ichor
				{
					label="Ichor";
				};
				class cam
				{
					label="Cam";
				};
				class generic1
				{
					label="Generic 1";
				};
				class generic2
				{
					label="Generic 2";
				};
				class generic3
				{
					label="Generic 3";
				};
				class generic4
				{
					label="Generic 4";
				};
				class generic5
				{
					label="Generic 5";
				};
				class generic6
				{
					label="Generic 6";
				};
				class generic7
				{
					label="Generic 7";
				};
				class generic8
				{
					label="Generic 8";
				};
				class generic9
				{
					label="Generic 9";
				};
				class generic10
				{
					label="Generic 10";
				};
				class generic11
				{
					label="Generic 11";
				};
				class generic12
				{
					label="Generic 12";
				};
				class generic13
				{
					label="Generic 13";
				};
				class generic14
				{
					label="Generic 14";
				};
				class generic15
				{
					label="Generic 15";
				};
				class generic16
				{
					label="Generic 16";
				};
				class generic17
				{
					label="Generic 17";
				};
				class generic18
				{
					label="Generic 18";
				};
				class generic19
				{
					label="Generic 19";
				};
				class generic20
				{
					label="Generic 20";
				};
				class russian
				{
					label="Russian";
				};
				class jeff
				{
					label="Jeff";
				};
				class hibyrd
				{
					label="Hibyrd";
				};
				class reckless
				{
					label="Reckless";
				};
				class grimm
				{
					label="Grimm";
				};
			};
			class visor
			{
				label="Visor";
				values[]=
				{
					"down",
					"up"
				};
				changeingame=1;
				class down
				{
					label="Down";
				};
				class up
				{
					label="Up";
				};
			};
			class mask
			{
				label="Mask";
				values[]=
				{
					"on",
					"off"
				};
				changeingame=1;
				class on
				{
					label="On";
				};
				class off
				{
					label="Off";
				};
			};
		};
	};
};
class cfgMods
{
	author="Kaiser Mighty";
	timepacked="1662860764";
};

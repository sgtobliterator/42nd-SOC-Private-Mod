class CfgPatches
{
	class sts23rd_helmets
	{
		name="23rd STS Helmets";
		author="Puotek";
		requiredAddons[]=
		{
			"ace_common",
			"121_75th_helmet"
		};
		requiredVersion=2.1800001;
		units[]={};
		weapons[]={};
	};
};
class Extended_PreInit_EventHandlers
{
	sts23rd_helmets_XEH_preInit="call compile preprocessFileLineNumbers '\sts23rd_helmets\preInit.sqf'";
};
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class sts23rd_helmets_core: ItemCore
	{
		scope=1;
		author="Puotek";
		weaponPoolAvailable=1;
		picture="\121_75th_helmet\121_ranger_helmet_ca.paa";
		displayName="Ops-Core MT";
		descriptionShort="Ops-Core FAST MT, MC Cover";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=1;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=32;
			modelSides[]={6};
			hiddenSelections[]={};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.40000001;
				};
			};
		};
	};
	class sts23rd_opscore_amp_weight: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT [AMP/Counterweight]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_peltor",
			"_peltor2",
			"_HelmetCam",
			"_pvs31Batt",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_peltor",
				"_peltor2",
				"_HelmetCam",
				"_pvs31Batt",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_amp_weight_off: sts23rd_opscore_amp_weight
	{
		displayName="Ops-Core MT Folded [AMP/Counterweight]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_amp_weight";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_amp_battery: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT [AMP/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_peltor",
			"_peltor2",
			"_HelmetCam",
			"_counterWeight",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_peltor",
				"_peltor2",
				"_HelmetCam",
				"_counterWeight",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_amp_battery_off: sts23rd_opscore_amp_battery
	{
		displayName="Ops-Core MT Folded [AMP/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_amp_battery";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_peltor_weight: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT [Peltor/Counterweight]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor2",
			"_HelmetCam",
			"_pvs31Batt",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor2",
				"_HelmetCam",
				"_pvs31Batt",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_peltor_weight_off: sts23rd_opscore_peltor_weight
	{
		displayName="Ops-Core MT Folded [Peltor/Counterweight]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_peltor_weight";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_peltor_battery: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT [Peltor/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor2",
			"_HelmetCam",
			"_counterWeight",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor2",
				"_HelmetCam",
				"_counterWeight",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_peltor_battery_off: sts23rd_opscore_peltor_battery
	{
		displayName="Ops-Core MT Folded [Peltor/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_peltor_battery";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_arc_battery: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT [Peltor ARC/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor",
			"_HelmetCam",
			"_counterWeight",
			"_ChargePro"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor",
				"_HelmetCam",
				"_counterWeight",
				"_ChargePro"
			};
		};
	};
	class sts23rd_opscore_arc_battery_off: sts23rd_opscore_arc_battery
	{
		displayName="Ops-Core MT Folded [Peltor ARC/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_arc_battery";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_arc_weight: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT [Peltor ARC/Counterweight]";
		model="\121_75th_helmet\75th_opscore_peltor2.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor",
			"_HelmetCam",
			"_pvs31Batt"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore_peltor2.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor",
				"_HelmetCam",
				"_pvs31Batt"
			};
		};
	};
	class sts23rd_opscore_arc_weight_off: sts23rd_opscore_arc_weight
	{
		displayName="Ops-Core MT Folded [Peltor ARC/Counterweight]";
		model="\121_75th_helmet\75th_opscore_peltor2_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_arc_weight";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore_peltor2_off.p3d";
		};
	};
	class sts23rd_opscore_puotek: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT Puotek";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor",
			"_peltor2",
			"_HelmetCam",
			"_pvs31Batt",
			"_Switch"
		};
		hiddenSelectionsMaterials[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails.rvmat",
			"121_75th_helmet\data\cover.rvmat",
			"",
			"121_75th_helmet\data\ir_reflect.rvmat",
			"121_75th_helmet\data\accs\amp\amp2.rvmat",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"\sts23rd_helmets\data\patches\nya.paa",
			"\sts23rd_helmets\data\patches\fixstupid.paa",
			"121_75th_helmet\data\accs\amp\opscore_amp2_mc_co.paa",
			"",
			"",
			"",
			"",
			""
		};
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_puotek_off";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor",
				"_peltor2",
				"_HelmetCam",
				"_pvs31Batt",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_puotek_off: sts23rd_opscore_puotek
	{
		displayName="Ops-Core MT Puotek Folded";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=0;
		ace_arsenal_uniqueBase="";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_pj_amp_weight: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT PJ [AMP/Counterweight]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_peltor",
			"_peltor2",
			"_HelmetCam",
			"_pvs31Batt",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"\sts23rd_helmets\data\patches\unit.paa",
			"\sts23rd_helmets\data\patches\pj.paa",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_peltor",
				"_peltor2",
				"_HelmetCam",
				"_pvs31Batt",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_pj_amp_weight_off: sts23rd_opscore_pj_amp_weight
	{
		displayName="Ops-Core MT PJ Folded [AMP/Counterweight]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_pj_amp_weight";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_pj_amp_battery: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT PJ [AMP/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_peltor",
			"_peltor2",
			"_HelmetCam",
			"_counterWeight",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"\sts23rd_helmets\data\patches\unit.paa",
			"\sts23rd_helmets\data\patches\pj.paa",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_peltor",
				"_peltor2",
				"_HelmetCam",
				"_counterWeight",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_pj_amp_battery_off: sts23rd_opscore_pj_amp_battery
	{
		displayName="Ops-Core MT PJ Folded [AMP/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_pj_amp_battery";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_pj_peltor_weight: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT PJ [Peltor/Counterweight]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor2",
			"_HelmetCam",
			"_pvs31Batt",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"\sts23rd_helmets\data\patches\unit.paa",
			"\sts23rd_helmets\data\patches\pj.paa",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor2",
				"_HelmetCam",
				"_pvs31Batt",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_pj_peltor_weight_off: sts23rd_opscore_pj_peltor_weight
	{
		displayName="Ops-Core MT PJ Folded [Peltor/Counterweight]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_pj_peltor_weight";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_pj_peltor_battery: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT PJ [Peltor/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor2",
			"_HelmetCam",
			"_counterWeight",
			"_Switch"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"\sts23rd_helmets\data\patches\unit.paa",
			"\sts23rd_helmets\data\patches\pj.paa",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor2",
				"_HelmetCam",
				"_counterWeight",
				"_Switch"
			};
		};
	};
	class sts23rd_opscore_pj_peltor_battery_off: sts23rd_opscore_pj_peltor_battery
	{
		displayName="Ops-Core MT PJ Folded [Peltor/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_pj_peltor_battery";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_pj_arc_battery: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT PJ [Peltor ARC/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor",
			"_HelmetCam",
			"_counterWeight",
			"_ChargePro"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"\sts23rd_helmets\data\patches\unit.paa",
			"\sts23rd_helmets\data\patches\pj.paa",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor",
				"_HelmetCam",
				"_counterWeight",
				"_ChargePro"
			};
		};
	};
	class sts23rd_opscore_pj_arc_battery_off: sts23rd_opscore_pj_arc_battery
	{
		displayName="Ops-Core MT PJ Folded [Peltor ARC/Battery Pack]";
		model="\121_75th_helmet\75th_opscore1_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_pj_arc_battery";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore1_off.p3d";
		};
	};
	class sts23rd_opscore_pj_arc_weight: sts23rd_helmets_core
	{
		scope=2;
		displayName="Ops-Core MT PJ [Peltor ARC/Counterweight]";
		model="\121_75th_helmet\75th_opscore_peltor2.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"_cover",
			"_patch",
			"_patch2",
			"_headsetRacs",
			"_peltor",
			"_HelmetCam",
			"_pvs31Batt"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_helmet\data\highcut_ops_core_rails_co.paa",
			"121_75th_helmet\data\price_helmet2_mc_co.paa",
			"\sts23rd_helmets\data\patches\unit.paa",
			"\sts23rd_helmets\data\patches\pj_rev.paa",
			"",
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore_peltor2.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"_cover",
				"_patch",
				"_patch2",
				"_headsetRacs",
				"_peltor",
				"_HelmetCam",
				"_pvs31Batt"
			};
		};
	};
	class sts23rd_opscore_pj_arc_weight_off: sts23rd_opscore_pj_arc_weight
	{
		displayName="Ops-Core MT PJ Folded [Peltor ARC/Counterweight]";
		model="\121_75th_helmet\75th_opscore_peltor2_off.p3d";
		ace_hearing_protection=0.66000003;
		ace_hearing_lowerVolume=0;
		ace_hearing_hasEHP=0;
		ace_arsenal_hide=1;
		ace_arsenal_uniqueBase="sts23rd_opscore_pj_arc_weight";
		class ItemInfo: ItemInfo
		{
			uniformModel="\121_75th_helmet\75th_opscore_peltor2_off.p3d";
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class sts23rd_helmets_fold
				{
					displayName="Fold Headset";
					condition="0 call sts23rd_helmets_fnc_canFold";
					statement="0 call sts23rd_helmets_fnc_switchHeadset";
					exceptions[]={};
				};
				class sts23rd_helmets_unfold
				{
					displayName="Unfold Headset";
					condition="0 call sts23rd_helmets_fnc_canUnfold";
					statement="0 call sts23rd_helmets_fnc_switchHeadset";
					exceptions[]={};
				};
			};
		};
	};
};

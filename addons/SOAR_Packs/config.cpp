#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Apr 11 05:55:22 2023 : 'file' last modified on Thu Aug 18 19:41:09 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SOAR_Packs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class XtdGearModels {

	class CfgVehicles {

		class SOAR_radio_packs {
			label="Radio Packs";
			author="Sergeant";
			options[]= {
				"variations"
			};
			class variations {
				label="Variations";
				changeingame=0;
				values[]= {
					"117_Backpack",
					"117_Backpack2",
					"117_Flatback",
					"117_Panel",
					"117_Hidden",
					"117_JTAC"
				};
				class 117_Backpack {
					label="117";
				};
				class 117_Backpack2 {
					label="117 2";
				};
				class 117_Flatback {
					label="Flatback";
				};
				class 117_Panel {
					label="Panel";
				};
				class 117_Hidden {
					label="Invisible";
				};
				class 117_JTAC {
					label="JTAC";
				};
			};
		};
		class SOAR_rucksacks {
			label="Rucksacks";
			author="Sergeant";
			options[]= {
				"variations";
			};
			class variations {
				label="Variations";
				changeingame=0;
				values[]= {
					"Pack",
					"MG_Pack"
				};
				class Pack {
					label="Rucksack";
				};
				class MG_Pack {
					label="MG Rucksack";
				};
			};
		};
		class SOAR_panels {
			label="Panels";
			author="Sergeant";
			options[]= {
				"variations"
			};
			class variations {
				label="Variations";
				changeingame=0;
				values[]= {
					"Panel_1",
					"Panel_2"
				};
				class Panel_1 {
					label="Panel 1";
				};
				class Panel_2 {
					label="Panel 2";
				};
			};
		};
		class SOAR_bags {
			label="Bags";
			author="Sergeant";
			options[]= {
				"variations"
			};
			class variations {
				label="Variations";
				changeingame=0;
				values[]= {
					"Medic_Bag",
					"Mystery_ASAP",
					"Mystery_CL",
					"Talon"
				};
				class Medic_Bag {
					label="Medic";
				};
				class Mystery_ASAP {
					label="Mystery ASAP";
				};
				class Mystery_CL {
					label="Mystery CL";
				};
				class Talon {
					label="Talon";
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class B_AssaultPack_mcamo;
	class Bag_Base;
	class Backpack_Base;
	class 117_Backpack: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] 117 Backpack";
		model = "\SOAR_Packs\models\117_Backpack.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class XtdGearInfo
		{
			model="SOAR_radio_packs";
			variations="117_Backpack";
		};
	};
	class 117_Backpack2: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] 117 Backpack2";
		model = "\SOAR_Packs\models\117_Backpack2.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class XtdGearInfo
		{
			model="SOAR_radio_packs";
			variations="117_Backpack2";
		};
	};
	class 117_Flatpack: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] 117 Flatpack";
		model = "\SOAR_Packs\models\117_Flatpack.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class XtdGearInfo
		{
			model="SOAR_radio_packs";
			variations="117_Flatback";
		};
	};
	class 117_Panel: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] 117_Panel";
		model = "\SOAR_Packs\models\117_Panel.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class XtdGearInfo
		{
			model="SOAR_radio_packs";
			variations="117_Panel";
		};
	};
	class blank: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] Hidden Pack";
		model = "\SOAR_Packs\models\blank.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class XtdGearInfo
		{
			model="SOAR_radio_packs";
			variations="117_Hidden";
		};
	};
	class Gunslinger_Ruck: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] Gunslinger Rucksack ";
		model = "\SOAR_Packs\models\Gunslinger_Ruck.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_rucksacks";
			variations="Pack";
		};
	};
	class MG_Pack: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] MG Rucksack";
		model = "\SOAR_Packs\models\MG_Pack.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_rucksacks";
			variations="MG_Pack";
		};
	};
	class Panel_Pack: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] Panel Pack";
		model = "\SOAR_Packs\models\Panel_Pack.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_panels";
			variations="Panel_1";
		};
	};
	class Medic_Pack: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] Medic Bag";
		model = "\SOAR_Packs\models\Medic_Pack.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_bags";
			variations="Medic_Bag";
		};
	};
	class MysteryASAP: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] MysteryASAP";
		model = "\SOAR_Packs\models\MysteryASAP.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_bags";
			variations="Mystery_ASAP";
		};
	};
	class MysteryCL: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] MysteryCL";
		model = "\SOAR_Packs\models\MysteryCL.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_bags";
			variations="Mystery_CL";
		};
	};
	class Panel_Bag2: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] Panel Bag2";
		model = "\SOAR_Packs\models\Panel_Bag2.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_panels";
			variations="Panel_2";
		};
	};
	class JTAC_Pack: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] JTAC Radio Pack ";
		model = "\SOAR_Packs\models\TACP_Pack.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class XtdGearInfo
		{
			model="SOAR_radio_packs";
			variations="117_JTAC";
		};
	};
	class Talon_Sterilzed: Backpack_Base
	{
		author = "75thRRC Mod Team";
		scope = 2;
		displayName = "[RRC] Talon - Assault Pack ";
		model = "\SOAR_Packs\models\Talon_Sterilzed.p3d";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		maximumLoad = 500;
		class XtdGearInfo
		{
			model="SOAR_bags";
			variations="Talon";
		};
	};
};
class cfgMods
{
	author = "75thRRC Mod Team";
	timepacked = "1660855269";
};

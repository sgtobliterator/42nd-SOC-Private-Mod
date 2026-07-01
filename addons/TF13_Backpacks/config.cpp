#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class TF13_Backpacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class XtdGearModels
{
	class cfgvehicles
	{
		class TF13_Ranger
		{
			label="[42nd SOC] Ranger Backpack";
			author="MARKO";
			options[]=
			{
				"vest",
				"camo"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"blk",
					"cb",
					"mc",
					"rg"
				};
				class blk
				{
					label="BLK";
				};
				class cb
				{
					label="CB";
				};
				class mc
				{
					label="MC";
				};
				class rg
				{
					label="RG";
				};
			};
		};
		class TF13_Eagle
		{
			label="[42nd SOC] Eagle Backpack";
			author="MARKO";
			options[]=
			{
				"strap",
				"antenna"
			};
			class strap
			{
				label="Backpack Straps";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class antenna
			{
				label="Camo";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
		};
		class TF13_MRCL
		{
			label="[42nd SOC] Mystery Ranch 3DA CL";
			author="MARKO";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"cb",
					"mc"
				};
				class cb
				{
					label="CB";
				};
				class mc
				{
					label="MC";
				};
			};
		};
		class TF13_MRASAP
		{
			label="[42nd SOC] Mystery Ranch ASAP";
			author="MARKO";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"blk",
					"cb",
					"gry",
					"mc"
				};
				class blk
				{
					label="BLK";
				};
				class cb
				{
					label="CB";
				};
				class gry
				{
					label="GRY";
				};
				class mc
				{
					label="MC";
				};
			};
		};
		class TF13_30L
		{
			label="[42nd SOC] 30L - Arcteryx Backpack";
			author="MARKO";
			options[]=
			{
				"camo"
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"hv",
					"mc",
					"mct",
					"od",
					"tan"
				};
				class hv
				{
					label="HIVIS";
				};
				class mc
				{
					label="MC";
				};
				class mct
				{
					label="MCT";
				};
				class od
				{
					label="OD";
				};
				class tan
				{
					label="TAN";
				};
			};
		};
		class TF13_Pack
		{
			label="[42nd SOC] Zip-On Pack";
			author="MARKO";
			options[]=
			{
				"vest",
				"camo",
				"bolt",
				"halligan",
				"magpouch",
				"flag",
				"bangpouch"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc",
					"fcpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
				class fcpc
				{
					label="FCPC";
				};
			};
			class camo
			{
				label="Camouflage";
				values[]=
				{
					"aor1",
					"aor2",
					"mc",
					"rg"
				};
				class aor1
				{
					label="AOR1";
				};
				class aor2
				{
					label="AOR2";
				};
				class mc
				{
					label="MC";
				};
				class rg
				{
					label="RG";
				};
			};
			class bolt
			{
				label="Bolt";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class halligan
			{
				label="Halligan";
				values[]=
				{
					"on1",
					"on2",
					"off"
				};
				class on1
				{
					label="1";
				};
				class on2
				{
					label="2";
				};
				class off
				{
					label="OFF";
				};
			};
			class magpouch
			{
				label="Mag Pouches";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class flag
			{
				label="US Flag";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class bangpouch
			{
				label="Flashbang Pouches";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
		};
		class TF13_GS
		{
			label="[42nd SOC] Gunslinger";
			author="MARKO";
			options[]=
			{
				"vest"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
		};
		class TF13_BPP
		{
			label="[42nd SOC] Backpack Panel";
			author="MARKO";
			options[]=
			{
				"vest",
				"sg",
				"can",
				"flag"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
			class sg
			{
				label="Shotgun";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
			class can
			{
				label="Shotgun";
				values[]=
				{
					"wm",
					"rb",
					"off"
				};
				class wm
				{
					label="MONSTER ENERGY";
				};
				class rb
				{
					label="RED BULL";
				};
				class off
				{
					label="OFF";
				};
			};
			class flag
			{
				label="US Flag";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="ON";
				};
				class off
				{
					label="OFF";
				};
			};
		};
		class TF13_Panel
		{
			label="[42nd SOC] Panels";
			author="MARKO";
			options[]=
			{
				"vest",
				"panel"
			};
			class vest
			{
				label="Vest";
				values[]=
				{
					"avs",
					"jpc"
				};
				class avs
				{
					label="AVS";
				};
				class jpc
				{
					label="JPC";
				};
			};
			class panel
			{
				label="Panel";
				values[]=
				{
					"panel1",
					"panel2",
					"panel3",
					"panel4",
					"panel5",
					"panel6"
				};
				class panel1
				{
					label="1";
				};
				class panel2
				{
					label="2";
				};
				class panel3
				{
					label="3";
				};
				class panel4
				{
					label="4";
				};
				class panel5
				{
					label="5";
				};
				class panel6
				{
					label="6";
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_Base;
	class B_AssaultPack_mcamo;
	class TF13_Ranger_BLK_AVS: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack AVS (BLK)";
		model="TF13_Backpacks\ranger_backpack_avs.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_blk.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="avs";
			camo="blk";
		};
	};
	class TF13_Ranger_CB_AVS: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack AVS (CB)";
		model="TF13_Backpacks\ranger_backpack_avs.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_cb.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="avs";
			camo="cb";
		};
	};
	class TF13_Ranger_MC_AVS: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack AVS (MC)";
		model="TF13_Backpacks\ranger_backpack_avs.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_mc.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="avs";
			camo="mc";
		};
	};
	class TF13_Ranger_RG_AVS: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack AVS (RG)";
		model="TF13_Backpacks\ranger_backpack_avs.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_rg.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="avs";
			camo="rg";
		};
	};
	class TF13_Ranger_BLK_JPC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack JPC (BLK)";
		model="TF13_Backpacks\ranger_backpack_jpc.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_blk.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="jpc";
			camo="blk";
		};
	};
	class TF13_Ranger_CB_JPC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack JPC (CB)";
		model="TF13_Backpacks\ranger_backpack_jpc.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_cb.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="jpc";
			camo="cb";
		};
	};
	class TF13_Ranger_MC_JPC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack JPC (MC)";
		model="TF13_Backpacks\ranger_backpack_jpc.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_mc.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="jpc";
			camo="mc";
		};
	};
	class TF13_Ranger_RG_JPC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Ranger Backpack JPC (RG)";
		model="TF13_Backpacks\ranger_backpack_jpc.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\backpack_rg.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Ranger";
			vest="jpc";
			camo="rg";
		};
	};
	class TF13_Eagle_MC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Eagle Pack (MC)";
		model="TF13_Backpacks\eaglepack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			""
		};
		class XtdGearInfo
		{
			model="TF13_Eagle";
			strap="off";
			antenna="off";
		};
	};
	class TF13_Eagle_Strap_MC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Eagle Backpack (MC)";
		model="TF13_Backpacks\eaglepack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"tf13_backpacks\tex\strap_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Eagle";
			strap="on";
			antenna="off";
		};
	};
	class TF13_Eagle_Antenna_MC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Comms Eagle Pack (MC)";
		model="TF13_Backpacks\eaglepack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"gatekeep_vests\data\antenna\slingshot_co.paa",
			"gatekeep_vests\data\re\radio_co.paa",
			""
		};
		class XtdGearInfo
		{
			model="TF13_Eagle";
			strap="off";
			antenna="on";
		};
	};
	class TF13_Eagle_Antenna_Strap_MC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Comms Eagle Backpack (MC)";
		model="TF13_Backpacks\eaglepack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"antenna",
			"antenna2",
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			"gatekeep_vests\data\antenna\slingshot_co.paa",
			"gatekeep_vests\data\re\radio_co.paa",
			"tf13_backpacks\tex\strap_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_Eagle";
			strap="on";
			antenna="on";
		};
	};
	class TF13_3DACL_CB: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Mystery Ranch 3DA CL (CB)";
		model="TF13_Backpacks\MysteryCL.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mysteryCL_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_MRCL";
			camo="cb";
		};
	};
	class TF13_3DACL_MC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Mystery Ranch 3DA CL (MC)";
		model="TF13_Backpacks\MysteryCL.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mysteryCL_mc_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_MRCL";
			camo="mc";
		};
	};
	class TF13_ASAP_BLK: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Mystery Ranch ASAP (BLK)";
		model="TF13_Backpacks\MysteryASAP.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mysteryASAP_blk_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_MRASAP";
			camo="blk";
		};
	};
	class TF13_ASAP_CB: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Mystery Ranch ASAP (CB)";
		model="TF13_Backpacks\MysteryASAP.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mysteryASAP_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_MRASAP";
			camo="cb";
		};
	};
	class TF13_ASAP_GRY: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Mystery Ranch ASAP (GRY)";
		model="TF13_Backpacks\MysteryASAP.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mysteryASAP_gry_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_MRASAP";
			camo="gry";
		};
	};
	class TF13_ASAP_MC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] Mystery Ranch ASAP (MC)";
		model="TF13_Backpacks\MysteryASAP.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mysteryASAP_mc_co.paa"
		};
		class XtdGearInfo
		{
			model="TF13_MRASAP";
			camo="mc";
		};
	};
	class TF13_30L_HV: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] 30L - Arcteryx (HIVIS)";
		model="TF13_Backpacks\arcteryxbackpack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mountain_hivis.paa"
		};
		class XtdGearInfo
		{
			model="TF13_30L";
			camo="hv";
		};
	};
	class TF13_30L_MC: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] 30L - Arcteryx (MC)";
		model="TF13_Backpacks\arcteryxbackpack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mountain_mc.paa"
		};
		class XtdGearInfo
		{
			model="TF13_30L";
			camo="mc";
		};
	};
	class TF13_30L_MCT: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] 30L - Arcteryx (MCT)";
		model="TF13_Backpacks\arcteryxbackpack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mountain_mct.paa"
		};
		class XtdGearInfo
		{
			model="TF13_30L";
			camo="mct";
		};
	};
	class TF13_30L_OD: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] 30L - Arcteryx (OD)";
		model="TF13_Backpacks\arcteryxbackpack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mountain_od.paa"
		};
		class XtdGearInfo
		{
			model="TF13_30L";
			camo="od";
		};
	};
	class TF13_30L_TAN: B_AssaultPack_mcamo
	{
		author="MARKO";
		scope=2;
		displayName="[42nd SOC] 30L - Arcteryx (TAN)";
		model="TF13_Backpacks\arcteryxbackpack.p3d";
		picture="tf13_cia\tf13.paa";
		maximumLoad=500;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"TF13_Backpacks\tex\mountain_tan.paa"
		};
		class XtdGearInfo
		{
			model="TF13_30L";
			camo="tan";
		};
	};
};
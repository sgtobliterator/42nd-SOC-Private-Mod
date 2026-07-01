#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class viking_panels
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class XtdGearModels {

	class CfgVehicles {

		class viking_panel {
			label="Viking Panels";
			author="Sergeant";
			options[]= {
				"loadout",
				"variant"
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"assault",
					"comms",
					"breacher"
				};
				class assault {
					label="Assault";
				};
				class comms {
					label="Communication";
				};
				class breacher {
					label="Breacher";
				};
			};
			class variant {
				label="Variant";
				changeingame=0;
				values[]= {
					"1",
					"2",
					"3",
					"4",
					"5",
					"6",
					"7",
					"8",
					"9",
					"10",
					"11",
					"12",
					"13"
				};
				class 1 {
					label="1";
				};
				class 2 {
					label="2";
				};
				class 3 {
					label="3";
				};
				class 4 {
					label="4";
				};
				class 5 {
					label="5";
				};
				class 6 {
					label="6";
				};
				class 7 {
					label="7";
				};
				class 8 {
					label="8";
				};
				class 9 {
					label="9";
				};
				class 10 {
					label="10";
				};
				class 11 {
					label="11";
				};
				class 12 {
					label="12";
				};
				class 13 {
					label="13";
				};
			};
		};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class CfgVehicles
{
	class B_Kitbag_Base;
	class B_AssaultPack_mcamo;
	class backpanel_1: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_1";
		displayname="[42nd SOC] Backpanel Assult1";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\Assult_1.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="1";
		};
	};
	class backpanel_2: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_2";
		displayname="[42nd SOC] Backpanel Assult2";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_2.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="2";
		};
	};
	class backpanel_3: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_3";
		displayname="[42nd SOC] Backpanel Assult3";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_3.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="3";
		};
	};
	class backpanel_4: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_4";
		displayname="[42nd SOC] Backpanel Assult4";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_4.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="4";
		};
	};
	class backpanel_5: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_5";
		displayname="[42nd SOC] Backpanel comms1";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms_1.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="1";
		};
	};
	class backpanel_6: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_6";
		displayname="[42nd SOC] Backpanel comms2";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms_2.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="2";
		};
	};
	class backpanel_7: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_7";
		displayname="[42nd SOC] Backpanel comms3";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms_3.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="3";
		};
	};
	class backpanel_8: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_8";
		displayname="[42nd SOC] Backpanel Assult5";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_5.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="5";
		};
	};
	class backpanel_9: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_9";
		displayname="[42nd SOC] Backpanel Assult6";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_6.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="6";
		};
	};
	class backpanel_10: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_10";
		displayname="[42nd SOC] Backpanel Assult7";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_7.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="7";
		};
	};
	class backpanel_11: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_11";
		displayname="[42nd SOC] Backpanel Assult8";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_8.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="8";
		};
	};
	class backpanel_12: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_12";
		displayname="[42nd SOC] Backpanel Assult9";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_9.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="9";
		};
	};
	class backpanel_13: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_13";
		displayname="[42nd SOC] Backpanel Assult10";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_10.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="10";
		};
	};
	class backpanel_14: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_14";
		displayname="[42nd SOC] Backpanel Assult11";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_11.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="11";
		};
	};
	class backpanel_15: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_15";
		displayname="[42nd SOC] comms 4";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms4.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="4";
		};
	};
	class backpanel_16: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_16";
		displayname="[42nd SOC] comms 5";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms5.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="5";
		};
	};
	class backpanel_17: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_17";
		displayname="[42nd SOC] comms 6";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms6.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="6";
		};
	};
	class backpanel_18: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_18";
		displayname="[42nd SOC] comms 7";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms7.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="7";
		};
	};
	class backpanel_19: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_19";
		displayname="[42nd SOC] comms 8";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms8.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="8";
		};
	};
	class backpanel_20: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_20";
		displayname="[42nd SOC] comms 9";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms9.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="9";
		};
	};
	class backpanel_21: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=0;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_21";
		displayname="[42nd SOC] test 1";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_12.p3d";
		maximumLoad=500;
		mass=40;
	};
	class backpanel_22: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_22";
		displayname="[42nd SOC] backpanel Assult12";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_13.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="12";
		};
	};
	class backpanel_23: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_23";
		displayname="[42nd SOC] backpanel Assult13";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\assult_14.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="assault";
			variant="13";
		};
	};
	class backpanel_24: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_24";
		displayname="[42nd SOC] comms 10";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms10.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="10";
		};
	};
	class backpanel_25: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_25";
		displayname="[42nd SOC] comms 11";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\comms11.p3d";
		maximumLoad=500;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="comms";
			variant="11";
		};
	};
	class backpanel_26: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_26";
		displayname="[42nd SOC] Breacher 1";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\breacher.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="breacher";
			variant="1";
		};
	};
	class backpanel_27: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_27";
		displayname="[42nd SOC] Breacher 2";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\breacher1.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="breacher";
			variant="2";
		};
	};
	class backpanel_28: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_28";
		displayname="[42nd SOC] Breacher 3";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\breacher2.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="breacher";
			variant="3";
		};
	};
	class backpanel_29: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_29";
		displayname="[42nd SOC] Breacher 4";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\breacher3.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="breacher";
			variant="4";
		};
	};
	class backpanel_30: B_AssaultPack_mcamo
	{
		author="Viking";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="backpanel_29";
		displayname="[42nd SOC] Breacher 5";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_rgr.paa";
		model="viking_backpack\breacher4.p3d";
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="viking_panel";
			loadout="breacher";
			variant="5";
		};
	};
};
class cfgMods
{
	author="viking";
	timepacked="1615850756";
};

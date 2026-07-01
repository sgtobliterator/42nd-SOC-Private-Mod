#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Apr 11 06:00:05 2023 : 'file' last modified on Thu Aug 18 11:41:20 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SOAR_Vests
	{
		units[] = {};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class XtdGearModels {

	class CfgWeapons {

		class SOAR_avs_flight {
			label="SOAR AVS Flight";
			author="Sergeant";
			options[]= {
				"loadout",
				"flotation"
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"one",
					"two",
					"three",
					"four",
					"five",
					"six",
					"seven"
				};
				class one {
					label="1";
				};
				class two {
					label="2";
				};
				class three {
					label="3";
				};
				class four {
					label="4";
				};
				class five {
					label="5";
				};
				class six {
					label="6";
				};
				class seven {
					label="7";
				};
			};
			class flotation {
				label="Flotation";
				changeingame=1;
				values[]= {
					"on",
					"off"
				};
				class on {
					label="On";
				};
				class off {
					label="Off";
				};
			};
		};
		class SOAR_ferro_concepts {
			label="SOAR Ferro Concepts";
			author="Sergeant";
			options[]= {
				"loadout",
				"flotation"
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"one",
					"two",
					"three",
					"four",
					"five",
					"six",
					"seven"
				};
				class one {
					label="1";
				};
				class two {
					label="2";
				};
				class three {
					label="3";
				};
				class four {
					label="4";
				};
				class five {
					label="5";
				};
				class six {
					label="6";
				};
				class seven {
					label="7";
				};
			};
			class flotation {
				label="Flotation";
				changeingame=1;
				values[]= {
					"on",
					"off"
				};
				class on {
					label="On";
				};
				class off {
					label="Off";
				};
			};
		};
		class SOAR_strandhogg {
			label="SOAR Strandhogg";
			author="Sergeant";
			options[]= {
				"version",
				"loadout",
				"flotation",
				"harness"
			};
			class version {
				label="Version";
				changeingame=0;
				values[]= {
					"v1",
					"v2"
				};
				class v1 {
					label="Version 1";
				};
				class v2 {
					label="Version 2";
				};
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"one",
					"two"
				};
				class one {
					label="1";
				};
				class two {
					label="2";
				};
			};
			class flotation {
				label="Flotation";
				changeingame=1;
				values[]= {
					"on",
					"off"
				};
				class on {
					label="On";
				};
				class off {
					label="Off";
				};
			};
			class harness {
				label="Harness";
				changeingame=1;
				values[]= {
					"on",
					"off"
				};
				class on {
					label="On";
				};
				class off {
					label="Off";
				};
			};
		};
	};
};
class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="two";
			flotation="off";
			harness="off";
		};

class cfgWeapons
{
	class Vest_Camo_Base;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class ItemCore;
	class AVS_Flight_1: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 1";
		model = "SOAR_Vests\models\AVS_Flight_1.p3d";
		hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
		hiddenSelectionsTextures[] = {"","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","soar_vests\data\haydenblade_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\fastmag_tan_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","","","","","","","","","","","","","","","","","","","",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_1.p3d";
			hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
			hiddenSelectionsTextures[] = {"","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","soar_vests\data\haydenblade_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\fastmag_tan_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","","","","","","","","","","","","","","","","","","","",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="one";
			flotation="off";
		};
	};
	class AVS_Flight_1_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 1-Water";
		model = "SOAR_Vests\models\AVS_Flight_1.p3d";
		hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","soar_vests\data\haydenblade_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\fastmag_tan_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","","","","","","","","","","","","","","","","","","","",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_1.p3d";
			hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
			hiddenSelectionsTextures[] = {"","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","soar_vests\data\haydenblade_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\fastmag_tan_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","","","","","","","","","","","","","","","","","","","",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="one";
			flotation="on";
		};
	};
	class AVS_Flight_2: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 2";
		model = "SOAR_Vests\models\AVS_Flight_1.p3d";
		hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
		hiddenSelectionsTextures[] = {"","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","soar_vests\data\material_2_co.paa","","","","","","","","","","","",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_1.p3d";
			hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa"," ","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","soar_vests\data\material_2_co.paa","","","","","","","","","","","",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="two";
			flotation="off";
		};
	};
	class AVS_Flight_2_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 2-Water";
		model = "SOAR_Vests\models\AVS_Flight_1.p3d";
		hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","soar_vests\data\material_2_co.paa","","","","","","","","","","","",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_1.p3d";
			hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa"," ","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\chemlight_a_ir_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\izlid_ca.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\c_marker_co.paa","soar_vests\data\material_2_co.paa","","","","","","","","","","","",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="two";
			flotation="on";
		};
	};
	class AVS_Flight_3: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 3";
		model = "SOAR_Vests\models\AVS_Flight_1.p3d";
		hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
		hiddenSelectionsTextures[] = {"","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","","","","","","","","","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\haydenblade_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\material_1_co.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\big_gp_med_co.paa","soar_vests\data\pouch_1_co.paa","soar_vests\data\u94_ptt_co.paa","soar_vests\data\palomar_acc_vest2_co.paa","soar_vests\data\parts01_co.paa","soar_vests\data\wire_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_1.p3d";
			hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
			hiddenSelectionsTextures[] = {"","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","","","","","","","","","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\haydenblade_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\material_1_co.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\big_gp_med_co.paa","soar_vests\data\pouch_1_co.paa","soar_vests\data\u94_ptt_co.paa","soar_vests\data\palomar_acc_vest2_co.paa","soar_vests\data\parts01_co.paa","soar_vests\data\wire_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="three";
			flotation="off";
		};
	};
	class AVS_Flight_3_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 3-Water";
		model = "SOAR_Vests\models\AVS_Flight_1.p3d";
		hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","","","","","","","","","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\haydenblade_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\material_1_co.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\big_gp_med_co.paa","soar_vests\data\pouch_1_co.paa","soar_vests\data\u94_ptt_co.paa","soar_vests\data\palomar_acc_vest2_co.paa","soar_vests\data\parts01_co.paa","soar_vests\data\wire_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_1.p3d";
			hiddenSelections[] = {"FLPC_Water","FLPC_Serpa","FLPC_Camo2","FLPC_Camo1","FL_Serpa_Proxy","F1_Blade","F1_Chem","F1_FastMag","F1_Izlid","F1_Kang","F1_Mag1","F1_Mag2","F1_Marker","F2_BaseP","F2_Chem","F2_Glock","F2_Izlid","F2_Kang","F2_Mag","F2_Marker","F2_TQ","F3_BaseP","F3_Blade","F3_Glock","F3_GPouch","F3_Kang","F3_Mags","F3_Med1","F3_Med2","F3_PTT","F3_Scissor","F3_TQ","F3_Wire"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\serpa.paa","tfl_vests\textures\avs_a_mc_co.paa","tfl_vests\textures\avs_a_cb_co.paa","","","","","","","","","","","","","","","","","","soar_vests\data\baseplate_co.paa","soar_vests\data\haydenblade_co.paa","soar_vests\data\glock17_co.paa","soar_vests\data\material_1_co.paa","tfl_vests\textures\kangaroo2_mc_co.paa","tfl_vests\textures\pmag30_co.paa","soar_vests\data\big_gp_med_co.paa","soar_vests\data\pouch_1_co.paa","soar_vests\data\u94_ptt_co.paa","soar_vests\data\palomar_acc_vest2_co.paa","soar_vests\data\parts01_co.paa","soar_vests\data\wire_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="three";
			flotation="on";
		};
	};
	class AVS_Flight_4: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 4";
		model = "SOAR_Vests\models\AVS_Flight_4.p3d";
		hiddenSelections[] = {"FL4_Water"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_4.p3d";
			hiddenSelections[] = {"FL4_Water"};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="four";
			flotation="off";
		};
	};
	class AVS_Flight_5: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 5";
		model = "SOAR_Vests\models\AVS_Flight_5.p3d";
		hiddenSelections[] = {"FL5_Water"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_5.p3d";
			hiddenSelections[] = {"FL5_Water"};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="five";
			flotation="off";
		};

	};
	class AVS_Flight_6: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 6";
		model = "SOAR_Vests\models\AVS_Flight_6.p3d";
		hiddenSelections[] = {"FL6_Water"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_6.p3d";
			hiddenSelections[] = {"FL6_Water"};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="six";
			flotation="off";
		};
	};
	class AVS_Flight_7: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 7";
		model = "SOAR_Vests\models\AVS_Flight_7.p3d";
		hiddenSelections[] = {"FL7_Water"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_7.p3d";
			hiddenSelections[] = {"FL7_Water"};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="seven";
			flotation="off";
		};
	};
	class AVS_Flight_4_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 4-Water";
		model = "SOAR_Vests\models\AVS_Flight_4.p3d";
		hiddenSelections[] = {"FL4_Water"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_4.p3d";
			hiddenSelections[] = {"FL4_Water"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="four";
			flotation="on";
		};
	};
	class AVS_Flight_5_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 5-Water";
		model = "SOAR_Vests\models\AVS_Flight_5.p3d";
		hiddenSelections[] = {"FL5_Water"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_5.p3d";
			hiddenSelections[] = {"FL4_Water"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="five";
			flotation="on";
		};
	};
	class AVS_Flight_6_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 6-Water";
		model = "SOAR_Vests\models\AVS_Flight_6.p3d";
		hiddenSelections[] = {"FL6_Water"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_6.p3d";
			hiddenSelections[] = {"FL6_Water"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="six";
			flotation="on";
		};
	};
	class AVS_Flight_7_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] AVS Flight 7-Water";
		model = "SOAR_Vests\models\AVS_Flight_7.p3d";
		hiddenSelections[] = {"FL7_Water"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\AVS_Flight_7.p3d";
			hiddenSelections[] = {"FL7_Water"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_avs_flight";
			loadout="seven";
			flotation="on";
		};
	};
	class FC_Flight_1: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] Ferro Concepts Flight 1";
		model = "SOAR_Vests\models\FC_Flight_1.p3d";
		hiddenSelections[] = {"FC1_Water"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\FC_Flight_1.p3d";
			hiddenSelections[] = {"FC1_Water"};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_ferro_concepts";
			loadout="one";
			flotation="off";
		};
	};
	class FC_Flight_2: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] Ferro Concepts Flight 2";
		model = "SOAR_Vests\models\FC_Flight_2.p3d";
		hiddenSelections[] = {"FC2_Water"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\FC_Flight_2.p3d";
			hiddenSelections[] = {"FC2_Water"};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_ferro_concepts";
			loadout="two";
			flotation="off";
		};
	};
	class FC_Flight_3: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] Ferro Concepts Flight 3";
		model = "SOAR_Vests\models\FC_Flight_3.p3d";
		hiddenSelections[] = {"FC3_Water"};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\FC_Flight_3.p3d";
			hiddenSelections[] = {"FC3_Water"};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_ferro_concepts";
			loadout="three";
			flotation="off";
		};
	};
	class FC_Flight_1_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] Ferro Concepts Flight 1-Water";
		model = "SOAR_Vests\models\FC_Flight_1.p3d";
		hiddenSelections[] = {"FC1_Water"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\FC_Flight_1.p3d";
			hiddenSelections[] = {"FC1_Water"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_ferro_concepts";
			loadout="one";
			flotation="on";
		};
	};
	class FC_Flight_2_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] Ferro Concepts Flight 2-Water";
		model = "SOAR_Vests\models\FC_Flight_2.p3d";
		hiddenSelections[] = {"FC2_Water"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\FC_Flight_2.p3d";
			hiddenSelections[] = {"FC2_Water"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_ferro_concepts";
			loadout="two";
			flotation="on";
		};
	};
	class FC_Flight_3_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] Ferro Concepts Flight 3-Water";
		model = "SOAR_Vests\models\FC_Flight_3.p3d";
		hiddenSelections[] = {"FC3_Water"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\FC_Flight_3.p3d";
			hiddenSelections[] = {"FC3_Water"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_ferro_concepts";
			loadout="three";
			flotation="on";
		};
	};
	class StrandhoggV1_1_Water_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 1 Water & H";
		model = "SOAR_Vests\models\StrandhoggV1_1.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_1.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="one";
			flotation="on";
			harness="on";
		};
	};
	class StrandhoggV1_1_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 1 Water";
		model = "SOAR_Vests\models\StrandhoggV1_1.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_1.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="one";
			flotation="on";
			harness="off";
		};
	};
	class StrandhoggV1_1_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 1  Harness";
		model = "SOAR_Vests\models\StrandhoggV1_1.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_1.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="one";
			flotation="off";
			harness="on";
		};
	};
	class StrandhoggV1_1_Base: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 1  Base";
		model = "SOAR_Vests\models\StrandhoggV1_1.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_1.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="one";
			flotation="off";
			harness="off";
		};
	};
	class StrandhoggV1_2_Water_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 2 Water & H";
		model = "SOAR_Vests\models\StrandhoggV1_2.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_2.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="two";
			flotation="on";
			harness="on";
		};
	};
	class StrandhoggV1_2_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 2 Water";
		model = "SOAR_Vests\models\StrandhoggV1_2.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_2.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="two";
			flotation="on";
			harness="off";
		};
	};
	class StrandhoggV1_2_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 2  Harness";
		model = "SOAR_Vests\models\StrandhoggV1_2.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_2.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="two";
			flotation="off";
			harness="on";
		};
	};
	class StrandhoggV1_2_Base: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V1Strandhogg 2  Base";
		model = "SOAR_Vests\models\StrandhoggV1_2.p3d";
		hiddenSelections[] = {"SV1_Water","SV1_Harness"};
		hiddenSelectionsTextures[] = {"",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV1_2.p3d";
			hiddenSelections[] = {"SV1_Water","SV1_Harness"};
			hiddenSelectionsTextures[] = {"",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v1";
			loadout="two";
			flotation="off";
			harness="off";
		};
	};
	class StrandhoggV2_1_Water_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 1 Water & H";
		model = "SOAR_Vests\models\StrandhoggV2_1.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_1.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="one";
			flotation="on";
			harness="on";
		};
	};
	class StrandhoggV2_1_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 1 Water ";
		model = "SOAR_Vests\models\StrandhoggV2_1.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_1.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="one";
			flotation="on";
			harness="off";
		};
	};
	class StrandhoggV2_1_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 1 Harness";
		model = "SOAR_Vests\models\StrandhoggV2_1.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_1.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="one";
			flotation="off";
			harness="on";
		};
	};
	class StrandhoggV2_1_Base: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 1 Base";
		model = "SOAR_Vests\models\StrandhoggV2_1.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_1.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="one";
			flotation="off";
			harness="off";
		};
	};
	class StrandhoggV2_2_Water_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 2 Water & H";
		model = "SOAR_Vests\models\StrandhoggV2_2.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_2.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="two";
			flotation="on";
			harness="on";
		};
	};
	class StrandhoggV2_2_Water: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 2 Water ";
		model = "SOAR_Vests\models\StrandhoggV2_2.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_2.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"soar_vests\data\pilot_gear_co.paa",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="two";
			flotation="on";
			harness="off";
		};
	};
	class StrandhoggV2_2_Harness: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 2 Harness";
		model = "SOAR_Vests\models\StrandhoggV2_2.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_2.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"","soar_vests\data\usmc_pilot_co.paa"};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="two";
			flotation="off";
			harness="on";
		};
	};
	class StrandhoggV2_2_Base: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 2 Base";
		model = "SOAR_Vests\models\StrandhoggV2_2.p3d";
		hiddenSelections[] = {"SV2_Water","SV2_Harness"};
		hiddenSelectionsTextures[] = {"",""};
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\StrandhoggV2_2.p3d";
			hiddenSelections[] = {"SV2_Water","SV2_Harness"};
			hiddenSelectionsTextures[] = {"",""};
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="SOAR_strandhogg";
			version="v2";
			loadout="two";
			flotation="off";
			harness="off";
		};
	};
	class Tundra_Light: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] Ferro Concepts Flight 4";
		model = "SOAR_Vests\models\Tundra_Light.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\Tundra_Light.p3d";
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class Tundra_Medium: ItemCore
	{
		author = "75thRRC Mod Team";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "[SOAR] V2Strandhogg 3";
		model = "SOAR_Vests\models\Tundra_Medium.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "SOAR_Vests\models\Tundra_Medium.p3d";
			containerClass = "Supply240";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "22+3";
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};
class cfgMods
{
	author = "75thRRC Mod Team";
	timepacked = "1660826480";
};

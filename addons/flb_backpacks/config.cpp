#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class flb_backpacks
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		version="";
		author="FlankenLabs";
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class XtdGearModels {

	class CfgVehicles {

		class flb_rush {
			label="Rush 5.11";
			author="Sergeant";
			options[]= {
				"camo",
				"loadout"
			};
			class camo {
				label="Camo";
				changeingame=0;
				values[]= {
					"blk",
					"mc",
					"rg",
					"tan"
				};
				class blk {
					label="Black";
				};
				class mc {
					label="Multicam";
				};
				class rg {
					label="Ranger Green";
				};
				class tan {
					label="Tan";
				};
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"default",
					"alpine",
					"breacher",
					"comms"
				};
				class default {
					label="Default";
				};
				class alpine {
					label="Alpine";
				};
				class breacher {
					label="Breacher";
				};
				class comms {
					label="Radio"
				};
			};
		};
		class flb_mountian {
			label="30L Pack";
			author="Sergeant";
			options[]= {
				"camo"
			};
			class camo {
				label="Camo";
				changeingame=0;
				values[]= {
					"hivis",
					"mc",
					"rg",
					"tan"
				};
				class hivis {
					label="Hi-Vis";
				};
				class mc {
					label="Multicam";
				};
				class rg {
					label="Ranger Green";
				};
				class tan {
					label="Tan";
				};
			};
		};
		class flb_assault {
			label="Assault Pack";
			author="Sergeant";
			options[]= {
				"camo",
				"loadout"
			};
			class camo {
				label="Camo";
				changeingame=0;
				values[]= {
					"blk",
					"od",
					"tan"
				};
				class blk {
					label="Black";
				};
				class od {
					label="OD";
				};
				class tan {
					label="Tan";
				};
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"default",
					"breacher"
				};
				class default {
					label="Default";
				};
				class breacher {
					label="Breacher";
				};
			};
		};
		class flb_flat {
			label="Flat Pack";
			author="Sergeant";
			options[]= {
				"camo",
				"loadout"
			};
			class camo {
				label="Camo";
				changeingame=0;
				values[]= {
					"khaki",
					"mc",
					"rg"
				};
				class khaki {
					label="Khaki";
				};
				class mc {
					label="Multicam";
				};
				class rg {
					label="Ranger Green";
				};
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"default",
					"breacher",
					"comms"
				};
				class default {
					label="Default";
				};
				class breacher {
					label="Breacher";
				};
				class comms {
					label="Radio";
				};
			};
		};
		class flb_modular {
			label="Modular Assault";
			author="Sergeant";
			options[]= {
				"camo",
				"loadout",
				"variant"
			};
			class camo {
				label="Camo";
				changeingame=0;
				values[]= {
					"blk",
					"mc",
					"od",
					"tan"
				};
				class blk {
					label="Black";
				};
				class mc {
					label="Multicam";
				};
				class od {
					label="OD";
				};
				class tan {
					label="Tan";
				};
			};
			class loadout{
				label="Loadout";
				changeingame=0;
				values[]= {
					"default",
					"alpine",
					"breacher",
					"comms",
					"medic"
				};
				class default {
					label="Default";
				};
				class alpine {
					label="Alpine";
				};
				class breacher {
					label="Breacher";
				};
				class comms {
					label="Radio";
				};
				class medic {
					label="Medic";
				};
			};
			class variant {
				label="Variant";
				changeingame=0;
				values[]= {
					"1",
					"2"
				};
				class 1 {
					label="1";
				};
				class 2 {
					label="2";
				};
			};
		};
		class flb_osprey {
			label="Osprey";
			author="Sergeant";
			options[]= {
				"camo"
			};
			class camo {
				label="Camo";
				changeingame=0;
				values[]= {
					"blk",
					"mc",
					"rg",
					"tan"
				};
				class blk {
					label="Black";
				};
				class mc {
					label="Multicam";
				};
				class rg {
					label="Ranger Green";
				};
				class tan {
					label="Tan";
				};
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class Item_Base_F;
	class Bag_Base: ReammoBox
	{
		tf_hasLRradio=0;
		tf_encryptionCode="";
		tf_range=500000;
	};
	class TFAR_Bag_Base: Bag_Base
	{
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		scope=1;
		scopeCurator=1;
	};	
	class Steerable_Parachute_F;
	class B_Parachute;
	class B_AssaultPack_mcamo;
	class flb_511std_A_rgr: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="rg";
			loadout="default";
		};
	};
	class flb_511std_A_blk: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH (Black)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="blk";
			loadout="default";
		};
	};
	class flb_511std_A_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH (Tan)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="tan";
			loadout="default";
		};
	};
	class flb_511std_A_mcm: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="mc";
			loadout="default";
		};
	};
	class flb_511breach_A_rgr: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Breacher (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="rg";
			loadout="breacher";
		};
	};
	class flb_511breach_A_blk: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Breacher (Black)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="blk";
			loadout="breacher";
		};
	};
	class flb_511breach_A_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Breacher (Tan)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="tan";
			loadout="breacher";
		};
	};
	class flb_511breach_A_mcm: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Breacher (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="mc";
			loadout="breacher";
		};
	};
	class flb_511alpine_A_rgr: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Alpine (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="rg";
			loadout="alpine";
		};
	};
	class flb_511alpine_A_blk: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Alpine (Black)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="blk";
			loadout="alpine";
		};
	};
	class flb_511alpine_A_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Alpine (Tan)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="tan";
			loadout="alpine";
		};
	};
	class flb_511alpine_A_mcm: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - Alpine (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="mc";
			loadout="alpine";
		};
	};
	class flb_511radio_A_rgr: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - LRR (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
	    tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="rg";
			loadout="comms";
		};
	};
	class flb_511radio_A_blk: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - LRR (Black)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="blk";
			loadout="comms";
		};
	};
	class flb_511radio_A_tan: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - LRR (Tan)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="tan";
			loadout="comms";
		};
	};
	class flb_511radio_A_mcm: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] 5.11 RUSH - LRR (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_511_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\kitbag_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_rush";
			camo="mc";
			loadout="comms";
		};
	};
	class flb_assaultpack_Breach_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Breach";
		displayName="[42nd SOC] Assault Pack - Breacher (OD)";
		picture="\flb_backpacks\data\ui\assaultpack_od_ca.paa";
		model="flb_backpacks\data\model\flb_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\backpack_od_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_assault";
			camo="od";
			loadout="breacher";
		};
	};
	class flb_assaultpack_Breach_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Breach";
		displayName="[42nd SOC] Assault Pack - Breacher (Black)";
		picture="\flb_backpacks\data\ui\assaultpack_blk_ca.paa";
		model="flb_backpacks\data\model\flb_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\backpack_BLK_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_assault";
			camo="blk";
			loadout="breacher";
		};
	};
	class flb_assaultpack_Breach_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Breach";
		displayName="[42nd SOC] Assault Pack - Breacher (TAN)";
		picture="\flb_backpacks\data\ui\assaultpack_tan_ca.paa";
		model="flb_backpacks\data\model\flb_assaultpack_V1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\backpack_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_assault";
			camo="tan";
			loadout="breacher";
		};
	};
	class flb_assaultpack_Standard_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Standard";
		displayName="[42nd SOC] Assault Pack (OD)";
		picture="\flb_backpacks\data\ui\assaultpack_od_ca.paa";
		model="flb_backpacks\data\model\flb_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\backpack_od_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_assault";
			camo="od";
			loadout="default";
		};
	};
	class flb_assaultpack_Standard_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Standard";
		displayName="[42nd SOC] Assault Pack (Black)";
		picture="\flb_backpacks\data\ui\assaultpack_blk_ca.paa";
		model="flb_backpacks\data\model\flb_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\backpack_BLK_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_assault";
			camo="blk";
			loadout="default";
		};
	};
	class flb_assaultpack_Standard_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="AssaultPack_Standard";
		displayName="[42nd SOC] Assault Pack (TAN)";
		picture="\flb_backpacks\data\ui\assaultpack_tan_ca.paa";
		model="flb_backpacks\data\model\flb_assaultpack_V2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\backpack_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_assault";
			camo="tan";
			loadout="default";
		};
	};
	class flb_mappack_breach_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 01 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="breacher";
			variant="1";
		};
	};
	class flb_mappack_breach_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 01 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="breacher";
			variant="1";
		};
	};
	class flb_mappack_breach_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 01 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="breacher";
			variant="1";
		};
	};
	class flb_mappack_breach_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 01 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="breacher";
			variant="1";
		};
	};
	class flb_mappack_Alpine_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 01 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="alpine";
			variant="1";
		};
	};
	class flb_mappack_Alpine_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 01 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="alpine";
			variant="1";
		};
	};
	class flb_mappack_Alpine_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 01 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="alpine";
			variant="1";
		};
	};
	class flb_mappack_Alpine_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 01 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="alpine";
			variant="1";
		};
	};
	class flb_mappack_Medical_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 01 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="medic";
			variant="1";
		};
	};
	class flb_mappack_Medical_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 01 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="medic";
			variant="1";
		};
	};
	class flb_mappack_Medical_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 01 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="medic";
			variant="1";
		};
	};
	class flb_mappack_Medical_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 01 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="medic";
			variant="1";
		};
	};
	class flb_mappack_Radio_od: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 01 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="comms";
			variant="1";
		};

	};
	class flb_mappack_Radio_tan: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 01 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="comms";
			variant="1";
		};

	};
	class flb_mappack_Radio_mc: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 01 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="comms";
			variant="1";
		};

	};
	class flb_mappack_Radio_BLK: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 01 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="comms";
			variant="1";
		};

	};
	class flb_mappack_Standard_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[42nd SOC] Modular Assault Pack (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="default";
			variant="1";
		};
	};
	class flb_mappack_Standard_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[42nd SOC] Modular Assault Pack (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="default";
			variant="1";
		};
	};
	class flb_mappack_Standard_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[42nd SOC] Modular Assault Pack (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="default";
			variant="1";
		};
	};
	class flb_mappack_Standard_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Standard";
		displayName="[42nd SOC] Modular Assault Pack (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_standard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="default";
			variant="1";
		};
	};
	class flb_mappack_breach_v2_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 02 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="breacher";
			variant="2";
		};
	};
	class flb_mappack_breach_v2_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 02 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="breacher";
			variant="2";
		};
	};
	class flb_mappack_breach_v2_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 02 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="breacher";
			variant="2";
		};
	};
	class flb_mappack_breach_v2_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Breacher";
		displayName="[42nd SOC] Modular Assault Pack - Breacher 02 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_breacher_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="breacher";
			variant="2";
		};
	};
	class flb_mappack_Alpine_v2_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 02 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="alpine";
			variant="2";
		};
	};
	class flb_mappack_Alpine_v2_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 02 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="alpine";
			variant="2";
		};
	};
	class flb_mappack_Alpine_v2_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 02 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="alpine";
			variant="2";
		};
	};
	class flb_mappack_Alpine_v2_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Alpine";
		displayName="[42nd SOC] Modular Assault Pack - Alpine 02 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_alpine_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="alpine";
			variant="2";
		};
	};
	class flb_mappack_Medical_v2_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 02 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="medic";
			variant="2";
		};
	};
	class flb_mappack_Medical_v2_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 02 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="medic";
			variant="2";
		};
	};
	class flb_mappack_Medical_v2_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 02 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="medic";
			variant="2";
		};
	};
	class flb_mappack_Medical_v2_BLK: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Medical";
		displayName="[42nd SOC] Modular Assault Pack - Medical 02 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_medical_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="medic";
			variant="2";
		};
	};
	class flb_mappack_Radio_v2_od: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 02 (OD)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_OD_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="od";
			loadout="comms";
			variant="2";
		};
	};
	class flb_mappack_Radio_v2_tan: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 02 (Tan)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_tan_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="tan";
			loadout="comms";
			variant="2";
		};
	};
	class flb_mappack_Radio_v2_mc: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 02 (Multicam)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="mc";
			loadout="comms";
			variant="2";
		};
	};
	class flb_mappack_Radio_v2_BLK: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="MapPack_Radio";
		displayName="[42nd SOC] Modular Assault Pack - Comms 02 (BLK)";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_map_radio_v2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\SOG_BAG_blk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_modular";
			camo="blk";
			loadout="comms";
			variant="2";
		};
	};
	class flb_tacmed_BP_01: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TacMed_BackPack";
		displayName="[42nd SOC] Tactical Medicine Pack - Standard";
		picture="\flb_backpacks\data\ui\mappack_ca.paa";
		model="flb_backpacks\data\model\flb_medtac_pack.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		maximumLoad=500;
		mass=40;
	};
	class flb_talon22_A_rgr: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[42nd SOC] Osprey TALON 22 - SOP (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\taloon_od.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_osprey";
			camo="rg";
		};

	};
	class flb_talon22_A_blk: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[42nd SOC] Osprey TALON 22 - SOP (Black)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\taloon_blk.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_osprey";
			camo="blk";
		};

	};
	class flb_talon22_A_mcm: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[42nd SOC] Osprey TALON 22 - SOP (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\taloon_mc.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_osprey";
			camo="mc";
		};

	};
	class flb_talon22_A_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="TALON_22";
		displayName="[42nd SOC] Osprey TALON 22 - SOP (Tan)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_talon22.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\taloon_tan.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_osprey";
			camo="tan";
		};

	};
	class FLB_Halo_Deployed: Steerable_Parachute_F
	{
		author="FlankenLabs";
		_generalMacro="FLB_Halo_Deployed";
		scope=1;
		displayname="[42nd SOC] HALO Operations Rig";
		model="flb_backpacks\data\model\flb_halo_gear_V2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class FLB_Halo_Rig_01: B_Parachute
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		_generalMacro="COS_PARACHUTE";
		displayname="[42nd SOC] HALO Operations Rig";
		model="flb_backpacks\data\model\flb_halo_gear_V1.p3d";
		ParachuteClass="FLB_Halo_Deployed";
		descriptionShort="HALO Operations Rig";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
	};
	class flb_flatpack_base_rgr: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="rg";
			loadout="default";
		};
	};
	class flb_flatpack_base_mcm: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\flb_flatpack_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="mc";
			loadout="default";
		};
	};
	class flb_flatpack_base_khk: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack (Khaki)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\flb_flatpack_khk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="khaki";
			loadout="default";
		};
	};
	class flb_flatpack_breacher_rgr: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack - Breacher (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack_breacher.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="rg";
			loadout="breacher";
		};
	};
	class flb_flatpack_breacher_mcm: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack - Breacher (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\flb_flatpack_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="mc";
			loadout="breacher";
		};
	};
	class flb_flatpack_breacher_khk: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack - Breacher (Khaki)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack_breacher.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\flb_flatpack_khk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="khaki";
			loadout="breacher";
		};
	};
	class flb_flatpack_radio_rgr: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack - Radio (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack_radio.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="rg";
			loadout="comms";
		};
	};
	class flb_flatpack_radio_mcm: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack - Radio (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\flb_flatpack_mc_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="mc";
			loadout="comms";
		};
	};
	class flb_flatpack_radio_khk: TFAR_Bag_Base
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="Flat_Pack";
		displayName="[42nd SOC] Flat Pack - Radio (Khaki)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_flatpack_radio.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\backpacks\flb_flatpack_khk_co.paa"
		};
		maximumLoad=500;
		mass=40;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=500000;
		class XtdGearInfo
		{
			model="flb_flat";
			camo="khaki";
			loadout="comms";
		};
	};
	class flb_mountainpack_tan: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] Arcteryx - 30L Assault Pack (Tan)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\mountain\mountain_tan.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_mountian";
			camo="tan";
		};
	};
	class flb_mountainpack_od: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] Arcteryx - 30L Assault Pack (RangerGreen)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\mountain\mountain_od.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_mountian";
			camo="rg";
		};
	};
	class flb_mountainpack_mc: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] Arcteryx - 30L Assault Pack (Multicam)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\mountain\mountain_mc.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_mountian";
			camo="mc";
		};
	};
	class flb_mountainpack_training: B_AssaultPack_mcamo
	{
		author="FlankenLabs";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		_generalMacro="511_RUSH";
		displayName="[42nd SOC] Arcteryx - 30L Assault Pack (HI-VIS)";
		picture="\flb_backpacks\data\ui\backpack_ca.paa";
		model="flb_backpacks\data\model\flb_mountainpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"flb_backpacks\data\tex\mountain\mountain_hivis.paa"
		};
		maximumLoad=500;
		mass=40;
		class XtdGearInfo
		{
			model="flb_mountian";
			camo="hivis";
		};
	};
};
class cfgMods
{
	author="flankenstein";
	timepacked="1583787837";
};

#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class invisible_tfar_radio
	{
		units[] = {};
		weapons[] = {};
		author = "Mighty";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
	};
};
class cfgVehicles
{
	class B_Kitbag_rgr;
	class tfar_invisible_radio: B_Kitbag_rgr
	{
		author = "9SFG Aux Team";
		scope = 2;
		displayName = "[10th LI] JTAC TFAR Radio";
		model = "\invisible_tfar_radio\radio.p3d";
		maximumLoad = 500;
		mass = 40;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_range = 500000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
};
class cfgMods
{
	author = "Kaiser Mighty";
	timepacked = "1617624161";
};

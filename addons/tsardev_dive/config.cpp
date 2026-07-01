class CfgPatches
{
	class Tsardev_Dive
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
class CfgVehicles
{
	class Bag_Base;
	class B_AssaultPack_mcamo;
	class Drypack_LR: B_AssaultPack_mcamo
	{
		author="Tsardev";
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
		_generalMacro="backpack_1";
		displayName="[tsar] Drypack (ADE)";
		picture="tsardev\logo.paa";
		model="tsardev_dive\model\drybag.p3d";
		maximumLoad=400;
		mass=40;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=45000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
};
class cfgMods
{
	author="Tsardev";
	timepacked="1674337601";
};

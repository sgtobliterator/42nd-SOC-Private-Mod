class CfgPatches
{
	class CCT_Pack
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers",
			"SOAR_Packs"
		};
	};
};

//Dependent on SOAR Packs purely for the ACE Arsenal Extension Compat. Feel free to modify

class XtdGearModels {

	class CfgVehicles {

		class SOAR_radio_packs {

			class variations {
				values[] += {
					"CCT_Pack"
				};
				class CCT_Pack {
					label="CCT Pack";
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
	class Backpack_Base: B_AssaultPack_mcamo
	{
		scope=1;
		scopeCurator=0;
		author="Alfa";
		DLC="SOCOM";
		displayName="";
		picture="";
		isbackpack=1;
		model="";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		maximumLoad=400;
		mass=30;
	};
	class CCT_Pack: Backpack_Base
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[Alfa] CCT Radio Pack ";
		model="CCT_Pack\models\CCT_Pack.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		DLC="SOCOM";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class XtdGearInfo
		{
			model="SOAR_radio_packs";
			variations="CCT_Pack";
		};
	};
};
class cfgMods
{
	author="J. Wright";
	timepacked="1660152803";
};

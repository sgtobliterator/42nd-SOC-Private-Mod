class CfgPatches
{
	class MK50
	{
		units[]=
		{
			"Item_MK50"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class Mod_Base;
	class MK50: Mod_Base
	{
		picture="\MK50\CSW_logo.paa";
		logo="\MK50\CSW_logo.paa";
		logoOver="\MK50\CSW_logo.paa";
		logoSmall="\MK50\CSW_logo.paa";
		name="CSW MOD";
		hideName="true";
		actionName="QQ";
		action="307752601";
		author="[CN]75thRanger--OST";
		timepacked="1426373691";
		dlcColor[]={0.19,0.54000002,0.80000001,1};
		dir="KICKASS";
	};
	author="DDG959";
	timepacked="1587396605";
};
class CfgGlasses
{
	class None;
	class MK50: None
	{
		displayname="AVON FM53 RPE";
		_generalMacro="MK50";
		model="\MK50\MK50.p3d";
		author="OST [75th Ranger]";
		dlc="CSW MOD";
		picture="\MK50\UI\CPE_MK50.paa";
		ACE_Overlay="AGM_Comp_Shemaghs\textures\HUD\GasMask.paa";
		ACE_OverlayCracked="AGM_Comp_Shemaghs\textures\HUD\GasMaskCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ace_gasmask=1;
		mass=19.950001;
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class MK502: None
	{
		displayname="AVON FM53 RPE Goggle";
		_generalMacro="MK50";
		model="\MK50\MK501.p3d";
		author="OST [75th Ranger]";
		dlc="CSW MOD";
		picture="\MK50\UI\CPE_MK50.paa";
		ACE_Overlay="AGM_Comp_Shemaghs\textures\HUD\GasMask.paa";
		ACE_OverlayCracked="AGM_Comp_Shemaghs\textures\HUD\GasMaskCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ace_gasmask=1;
		mass=19.950001;
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class MK503: None
	{
		displayname="AVON FM53";
		_generalMacro="MK50";
		model="\MK50\MK502.p3d";
		author="OST [75th Ranger]";
		dlc="CSW MOD";
		picture="\MK50\UI\CPE_MK50.paa";
		ACE_Overlay="AGM_Comp_Shemaghs\textures\HUD\GasMask.paa";
		ACE_OverlayCracked="AGM_Comp_Shemaghs\textures\HUD\GasMaskCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ace_gasmask=1;
		mass=19.950001;
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
};
class CfgVehicles
{
	class Item_NVGoggles;
	class Item_MK50: Item_NVGoggles
	{
		editorSubcategory="EdSubcat_InventoryItems";
		displayName="MK50 GasMask";
		author="[CN]75thRanger--OST";
		class TransportItems
		{
			class MK50
			{
				count=1;
				name="MK50";
			};
		};
	};
};

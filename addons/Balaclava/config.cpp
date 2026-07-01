////////////////////////////////////////////////////////////////////
//DeRap: Balaclava\addons\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 11 02:15:14 2022 : 'file' last modified on Wed Dec 31 18:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class GSG9_Headwears
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgGlasses
{
	class None;
	class Balaclava_Black_Gsg9_GreyG: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Black Balaclava (Grey Glasses)";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\Balaclava.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Black_Gsg9_BlackG: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Black Balaclava (Black Glasses)";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaBB.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Black_Gsg9: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Black Balaclava";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaC.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Crocodile_Gsg9_GreyG: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Crocodile Balaclava (Grey Glasses)";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\Balaclava.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Crocodile_Gsg9_BlackG: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Gio's Bitch'in FaceWear";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaBB.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Crocodile_Gsg9: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Crocodile Balaclava";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaC.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Tactical_Googles: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Tactical Googles";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\Googles.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile_Polizei.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Tactical_Googles_Black: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Tactical Googles (Black)";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\GooglesB.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile_Polizei.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Black_Nose: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Black Balaclava Open Nose";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaO.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Crocodile_Nose: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Crocodile Balaclava Open Nose";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaO.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Black_Grey_Glasses_Nose: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Black (Grey Glasses) Balaclava Open Nose";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaOG.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_co.paa","Balaclava\addons\data\GlassGrey.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Black_Black_Glasses_Nose: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Black (Black Glasses) Balaclava Open Nose";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaOB.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_co.paa","Balaclava\addons\data\GlassBlack.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Crocodile_Black_Glasses_Nose: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Crocodile (Black Glasses) Balaclava Open Nose";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaOB.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile.paa","Balaclava\addons\data\GlassBlack.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class Balaclava_Crocodile_Grey_Glasses_Nose: None
	{
		author = "PhoenixTREAL";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Assault Crocodile (Grey Glasses) Balaclava Open Nose";
		picture = "\Balaclava\addons\Glass.paa";
		model = "\Balaclava\addons\BalaclavaOG.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Balaclava\addons\data\Balaclava_Crocodile.paa","Balaclava\addons\data\GlassGrey.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
};
class cfgMods
{
	author = "PhЧeЕ…Г®С…";
	timepacked = "1564863247";
};

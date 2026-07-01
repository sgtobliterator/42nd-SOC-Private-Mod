#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Louetta
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
			"ACE_Common"
		};
	};
};
class CfgFunctions
{
	class Louetta
	{
		tag="Louetta";
		file="\Louetta\functions";
		class functions
		{
			class Headsetdown
			{
			};
			class HeadsetdownCheck
			{
			};
			class Headsetoff
			{
			};
			class headsetoffCheck
			{
			};
			class HeadsetonHead
			{
			};
			class Headsetup
			{
			};
			class headsetupCheck
			{
			};
		};
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_diver_F;
	class louetta_g3_mc_rugby_tan: B_Soldier_F
	{
		scope=2;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=2;
		faction="sof_rangers";
		author="Louetta";
		model="louetta\uniform\tfl_g3_tshirt_tuck.p3d";
		_generalMacro="louetta_g3_mc_rugby_tan";
		uniforMClass="louetta_g3_mc_rugby_tan_uniform";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
};
class CfgWeapons
{
	class Default;
	class ItemCore: Default
	{
	};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
	class Uniform_Base;
	class VestItem;
	class NVGoggles;
	class louetta_g3_mc_rugby_tan_uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Louetta";
		displayName="[Louetta] G3 Rugby (MC/Tan)";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniforMClass="louetta_g3_mc_rugby_tan";
			containerClass="Supply100";
			mass=5;
			uniformType="Neopren";
		};
	};
	class Louetta_URGI;
	class Louetta_URGI_Wrap: Louetta_URGI
	{
		scope=2;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		model="\Louetta\URGI\URGI.p3d";
		dexterity=1.62;
		author="Louetta";
		displayName="[Louetta] Matty's URGI Wrapped";
		picture="\seven\mk16\data\ui.paa";
		overviewPicture="\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"seven\mk16\anim\urgi.rtm"
		};
		reloadAction="NIA_GestureReload416";
		baseWeapon="Louetta_URGI_Wrap";
	};
	class Louetta_GSGM_Matty: NVGoggles
	{
		author="Louetta x Zahra";
		displayName="[Louetta] Matty's GSGM";
		model="Louetta\nvg\gsgm.p3d";
		picture="\tfl_nvg\ui\gsgm.paa";
		modelOptics="-";
		nameSound="nvgoggles";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Louetta\nvg\gsgm.p3d";
			modelOff="Louetta\nvg\gsgm.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			mass=1;
		};
	};
	class Louetta_GSGM_GPNVG_Matty: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[Louetta] Matty's GSGM GPNVG-18 White Phosphor";
		model="Louetta\nvg\GSGM_GPNVG18_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=4;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\gp_Optic";
		nameSound="nvgoggles";
		colorPreset[]=
		{
			0,
			{0,0,0,0},
			{0.69999999,0.30000001,1.3,0.89999998},
			{1,1,6,0}
		};
		descriptionShort="White Phosphor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Louetta\nvg\GSGM_GPNVG18_down_w.p3d";
			modelOff="Louetta\nvg\GSGM_GPNVG18_up.p3d";
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class Louetta_SF: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[Louetta] Matty's Opscore Fast SF";
		picture="tfl_headgear\textures\logo.paa";
		model="Louetta\Helmet\Fast_SF.p3d";
		hiddenSelections[]=
		{
			"comtac3",
			"Earpiece"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="Louetta\Helmet\Fast_SF.p3d";
			modelSides[]={3,1};
			armor="3*0.6";
			passThrough=0.60000002;
			hiddenSelections[]=
			{
				"comtac3",
				"Earpiece"
			};
		};
	};
	class Louetta_SF_up: ItemCore
	{
		scope=2;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[Louetta] Matty's Opscore Fast SF";
		picture="tfl_headgear\textures\logo.paa";
		model="Louetta\Helmet\Fast_SF.p3d";
		hiddenSelections[]=
		{
			"comtac2",
			"Earpiece"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="Louetta\Helmet\Fast_SF.p3d";
			modelSides[]={3,1};
			armor="3*0.6";
			passThrough=0.60000002;
			hiddenSelections[]=
			{
				"comtac2",
				"Earpiece"
			};
		};
	};
	class Louetta_SF_off: ItemCore
	{
		scope=2;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		displayName="[Louetta] Matty's Opscore Fast SF";
		picture="tfl_headgear\textures\logo.paa";
		model="Louetta\Helmet\Fast_SF.p3d";
		hiddenSelections[]=
		{
			"comtac3",
			"comtac"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="Louetta\Helmet\Fast_SF.p3d";
			modelSides[]={3,1};
			armor="3*0.6";
			passThrough=0.60000002;
			hiddenSelections[]=
			{
				"comtac3",
				"comtac"
			};
		};
	};
	class Louetta_Maritime_Hayden: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[Louetta] Hayden's Opscore Maritime";
		picture="tfl_headgear\textures\logo.paa";
		model="Louetta\Helmet\Maritime_Lopez.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="Louetta\Helmet\Maritime_Lopez.p3d";
			modelSides[]={3,1};
			armor="3*0.6";
			passThrough=0.60000002;
			hiddenSelections[]={};
		};
	};
	class Louetta_Maritime_Hayden_tilted_down: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[Louetta] Hayden's Maritime Tilted Test";
		picture="tfl_headgear\textures\logo.paa";
		model="Louetta\Helmet\Maritime_Lopez_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="Louetta\Helmet\Maritime_Lopez_2.p3d";
			modelSides[]={3,1};
			armor="3*0.6";
			passThrough=0.60000002;
			hiddenSelections[]={};
		};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1616897519";
};

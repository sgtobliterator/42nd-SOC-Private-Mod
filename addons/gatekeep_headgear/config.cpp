#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class gatekeep_headgear
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
			"Extended_EventHandlers"
		};
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
	class GateKeep_XP_Y19: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y19";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y19.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y19.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y19_2: GateKeep_XP_Y19
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y19.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y02: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y02";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y02.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y02.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y02_2: GateKeep_XP_Y02
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y02.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y26: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y26";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y26.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y26.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y26_2: GateKeep_XP_Y26
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y26.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y16: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y16";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y16.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y16.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y16_2: GateKeep_XP_Y16
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y16.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y15: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y15";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y15.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y15.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y15_2: GateKeep_XP_Y15
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y15.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y25: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y25";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y25.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y25.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y25_2: GateKeep_XP_Y25
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y25.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y48: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y48";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y48.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y48.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y48_2: GateKeep_XP_Y48
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y48.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y42: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y42";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y42.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y42.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y42_2: GateKeep_XP_Y42
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y42.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y57: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y57";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y57.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y57.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_Y57_2: GateKeep_XP_Y57
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y57.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_2_Y15: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] XP Y15 2";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\xp\XP_Y15_2.p3d";
		hiddenSelections[]=
		{
			"strap2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y15_2.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap2"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_XP_2_Y15_2: GateKeep_XP_2_Y15
	{
		scope=1;
		scopeArsenal=0;
		hiddenSelections[]=
		{
			"strap"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\xp\XP_Y15_2.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]=
			{
				"strap"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
		};
	};
	class GateKeep_SF_Y16: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] SF Y16";
		picture="tfl_headgear\textures\logo.paa";
		model="gatekeep_headgear\models\sf\sf_Y16.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="gatekeep_headgear\models\sf\sf_Y16.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]={};
		};
	};
	class GateKeep_MT_Y26: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		displayName="[GateKeep] MT Y26";
		picture="tfl_headgear\textures\logo.paa";
		model="hollywood\gear\MT.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		author="Louetta";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="hollywood\gear\MT.p3d";
			modelSides[]={3,1};
			armor="3000";
			passThrough=0.0099999998;
			hiddenSelections[]={};
		};
	};
	class GateKeep_NVG_Y16: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[GateKeep] Y16 GPNVG";
		model="gatekeep_headgear\models\nvg\Y16_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
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
			uniformModel="gatekeep_headgear\models\nvg\Y16_down.p3d";
			modelOff="gatekeep_headgear\models\nvg\Y16_up.p3d";
			hiddenSelections[]=
			{
				"",
				"hiddenSelectionsTextures[]={"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class GateKeep_NVG_Y26: NVGoggles
	{
		author="Louetta x Zahra";
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[GateKeep] Y26 GPNVG";
		model="hollywood\gear\Y26_up.p3d";
		picture="\tfl_nvg\ui\18.paa";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\tfl_nvg\optics\pvs_Optic";
		nameSound="nvgoggles";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
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
			uniformModel="hollywood\gear\Y26_down.p3d";
			modelOff="hollywood\gear\Y26_up.p3d";
			hiddenSelections[]=
			{
				"",
				"hiddenSelectionsTextures[]={"
			};
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1628131370";
};

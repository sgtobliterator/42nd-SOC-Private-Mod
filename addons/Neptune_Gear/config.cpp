class CfgPatches
{
	class Neptune_Gear
	{
		units[]={};
		weapons[]=
		{
			"H_OpscoreB_1",
			"NVGoggles_GPNVG"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
	};
};
class cfgWeapons
{
	class H_HelmetB;
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class ItemInfo;
	class NVGoggles;
	class H_OpscoreB_1: ItemCore
	{
		author="Sonny";
		_generalMacro="H_OpscoreB";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[S] Ops-Core (D) 1-1";
		picture="\Neptune_Gear\ui\helmet.paa";
		model="\Neptune_Gear\data\opscore_helmet";
		descriptionShort="$STR_A3_SP_AL_II";
		hiddenSelections[]=
		{
			"_Chops",
			"_Manta1"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			hiddenSelections[]=
			{
				"_Chops",
				"_Manta1"
			};
			hiddenSelectionsTextures[]={};
			uniformModel="\Neptune_Gear\data\opscore_helmet";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class H_OpscoreB_2: ItemCore
	{
		author="Sonny";
		_generalMacro="H_OpscoreB";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[S] Ops-Core (D) 1-2";
		picture="\Neptune_Gear\ui\helmet.paa";
		model="\Neptune_Gear\data\opscore_helmet";
		descriptionShort="$STR_A3_SP_AL_II";
		hiddenSelections[]=
		{
			"_Chops",
			"_Manta2",
			"_RearPack"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			hiddenSelections[]=
			{
				"_Chops",
				"_Manta2",
				"_RearPack"
			};
			hiddenSelectionsTextures[]={};
			uniformModel="\Neptune_Gear\data\opscore_helmet";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class H_OpscoreB_3: ItemCore
	{
		author="Sonny";
		_generalMacro="H_OpscoreB";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[S] Ops-Core (D) 1-3";
		picture="\Neptune_Gear\ui\helmet.paa";
		model="\Neptune_Gear\data\opscore_helmet";
		descriptionShort="$STR_A3_SP_AL_II";
		hiddenSelections[]=
		{
			"_CommsRail",
			"_Manta1"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			hiddenSelections[]=
			{
				"_CommsRail",
				"_Manta1"
			};
			hiddenSelectionsTextures[]={};
			uniformModel="\Neptune_Gear\data\opscore_helmet";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class H_OpscoreB_4: ItemCore
	{
		author="Sonny";
		_generalMacro="H_OpscoreB";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[S] Ops-Core (D) 1-4";
		picture="\Neptune_Gear\ui\helmet.paa";
		model="\Neptune_Gear\data\opscore_helmet";
		descriptionShort="$STR_A3_SP_AL_II";
		hiddenSelections[]=
		{
			"_CommsRail",
			"_Manta2",
			"_RearPack"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			hiddenSelections[]=
			{
				"_CommsRail",
				"_Manta2",
				"_RearPack"
			};
			hiddenSelectionsTextures[]={};
			uniformModel="\Neptune_Gear\data\opscore_helmet";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class NVGoggles_GPNVG: NVGoggles
	{
		dlc="";
		Scope=2;
		ScopeCurator=2;
		displayName="[S] GPNVG-18";
		modelOptics="";
		model="\Neptune_Gear\data\nvg";
		picture="\Neptune_Gear\ui\helmet.paa";
		ace_nightvision_generation=4;
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_quad_4096";
		ace_nightvision_bluRadius=0.15000001;
		descriptionShort="Ground Panoramic Night Vision Goggles";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\Neptune_Gear\data\nvg_down";
			modelOff="\Neptune_Gear\data\nvg";
			mass=20;
		};
	};
};
class cfgMods
{
	author="MaL";
	timepacked="1548101186";
};

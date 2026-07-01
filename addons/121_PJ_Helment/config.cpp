class CfgPatches
{
	class 121_PJ_Helment
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class PJ_XP1: ItemCore
	{
		author="Toka";
		scope=2;
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[17th STS] OpsCore XP";
		model="\121_PJ_Helment\121_PJ_Helment.p3d";
		Headlamps_Preset="Headlamps_Preset_Helmet_Surefire_HL1_Right_ARC";
		descriptionShort="OpsCore Bump Helmet, 3M Peltor Comtac III Headset";
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\121_PJ_Helment\121_PJ_Helment.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.94999999;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_PJ_Helment";
			packType="basic_1";
		};
	};
	class PJ_XP2: ItemCore
	{
		author="Toka";
		scope=2;
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[17th STS] OpsCore XP2";
		model="\121_PJ_Helment\121_PJ_Helment2.p3d";
		descriptionShort="OpsCore Maritime Cut Helmet, First-Spear MC Cover, OpsCore RAC Headset";
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\121_PJ_Helment\121_PJ_Helment2.p3d";
			modelSides[]={3,1};
			armor=10;
			passThrough=0.5;
			ace_hearing_protection=0.94999999;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_PJ_Helment";
			packType="basic_2";
		};
	};
	class PJ_Hat: ItemCore
	{
		author="Toka";
		scope=2;
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.15000001;
		displayName="[17th STS] Baseball Cap";
		model="\121_PJ_Helment\121_PJ_Hat.p3d";
		descriptionShort="PJ Drip";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			uniformModel="\121_PJ_Helment\121_PJ_Hat.p3d";
			modelSides[]={3,1};
			armor=0;
			passThrough=0;
			ace_hearing_protection=0.94999999;
			ace_hearing_lowerVolume=0.15000001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0;
				};
			};
		};
	};
};
class XtdGearModels
{
	class cfgWeapons
	{
		class 121_PJ_Helment
		{
			label="Customise";
			author="Toka";
			options[]=
			{
				"packType"
			};
			class packType
			{
				label="Accessories";
				values[]=
				{
					"basic_1",
					"basic_2"
				};
				class basic_1
				{
					label="Variant 1";
				};
				class basic_2
				{
					label="Variant 2";
				};
			};
		};
	};
};
class cfgMods
{
	author="Toka";
	timepacked="1659495258";
};

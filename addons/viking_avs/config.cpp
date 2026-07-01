#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class VIKING_Vest
	{
		units[]=
		{
			"viking_avs_5"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};

class XtdGearModels {

	class CfgWeapons {

		class viking_avs {
			label="Viking AVS";
			author="Sergeant";
			options[]= {
				"loadout",
				"variant"
			};
			class loadout {
				label="Loadout";
				changeingame=0;
				values[]= {
					"one",
					"two",
					"three",
					"four",
					"five",
					"six",
					"seven",
					"eight",
					"nine",
					"ten",
					"eleven",
					"twelve",
					"thirteen",
					"fourteen",
					"fifteen",
					"sixteen",
					"seventeen"
				};
				class one {
					label="1";
				};
				class two {
					label="2";
				};
				class three {
					label="3";
				};
				class four {
					label="4";
				};
				class five {
					label="5";
				};
				class six {
					label="6";
				};
				class seven {
					label="7";
				};
				class eight {
					label="8";
				};
				class nine {
					label="9";
				};
				class ten {
					label="10";
				};
				class eleven {
					label="11";
				};
				class twelve {
					label="12";
				};
				class thirteen {
					label="13";
				};
				class fourteen {
					label="14";
				};
				class fifteen {
					label="15";
				};
				class sixteen {
					label="16";
				};
				class seventeen {
					label="17";
				};
			};
			class variant {
				label="variant";
				changeingame=0;
				values[]= {
					"assaulter",
					"jtac",
					"grenadier",
					"lmg",
					"mk17",
					"medic",
					"breacher",
					"killzone",
					"belt"
				};
				class assaulter {
					label="Assaulter";
				};
				class jtac {
					label="JTAC";
				};
				class grenadier {
					label="Grenadier";
				};
				class lmg {
					label="LMG";
				};
				class mk17 {
					label="MK17";
				};
				class medic {
					label="Medic";
				};
				class breacher {
					label="Breacher";
				};
				class killzone {
					label="KillZone";
				};
				class belt {
					label="Belt";
				};
			};
		};
	};
};

class XtdGearInfo
		{
			model="viking_panel";
			loadout="breacher";
			variant="1";
		};

class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Viking_viking_avs_555: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 4 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS1.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="twelve";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_556: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 5 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS2.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="thirteen";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_557: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 6 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS3.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="fourteen";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_558: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 7 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS4.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS4.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="fifteen";
			variant="assaulter";
		};

	};
	class Viking_viking_avs_559: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 8 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS5.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS5.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="sixteen";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_560: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 9 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS6.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS6.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="seventeen";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_561: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 10 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS7.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS7.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_562: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 11 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS8.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS8.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="two";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_563: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 12 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS9.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS9.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="three";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_564: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 13 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS10.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS10.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="four";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_565: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 14 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS11.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS11.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="five";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_566: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 15 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS12.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS12.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="six";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_567: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 16 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS13.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS13.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="seven";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_568: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 17 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS14.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS14.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="eight";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_569: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC JTAC  - 1 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS15.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS15.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="jtac";
		};
		
	};
	class Viking_viking_avs_570: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC JTAC  - 2  ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS16.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS16.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="two";
			variant="jtac";
		};
	};
	class Viking_viking_avs_571: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC JTAC  - 3 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS17.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS17.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="three";
			variant="jtac";
		};
	};
	class Viking_viking_avs_572: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC JTAC  - 4 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS18.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS18.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="four";
			variant="jtac";
		};
	};
	class Viking_viking_avs_573: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC JTAC  - 5  ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS19.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS19.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="five";
			variant="jtac";
		};
	};
	class Viking_viking_avs_574: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 18 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS20.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS20.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="nine";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_575: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC MK17  - 1 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS21.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS21.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="mk17";
		};
	};
	class Viking_viking_avs_576: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC LMG  - 1 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS22.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS22.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="lmg";
		};
	};
	class Viking_viking_avs_578: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC LMG  - 2 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS23.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS23.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="two";
			variant="lmg";
		};
	};
	class Viking_viking_avs_579: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Grenadier  - 1 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS24.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS24.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="grenadier";
		};
	};
	class Viking_viking_avs_580: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Grenadier  - 2 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS25.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS25.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="two";
			variant="grenadier";
		};
	};
	class Viking_viking_avs_581: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 19 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS26.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS26.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="ten";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_582: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Assaulter  - 20 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS27.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS27.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="eleven";
			variant="assaulter";
		};
	};
	class Viking_viking_avs_583: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC Medic  - 1 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS28.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS28.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="medic";
		};
	};
	class Viking_viking_avs_584: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] MC MK17  - 2 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS29.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS29.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="two";
			variant="mk17";
		};
	};
	class Viking_viking_avs_585: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] KillZone ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS30.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS30.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="killzone";
		};
	};
	class Viking_viking_avs_586: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayname="[42nd SOC] breacher ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS31.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS31.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="breacher";
		};
	};
	class Viking_viking_avs_587: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayName=" [3rd] battlebelt 1 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_belt1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_belt1.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="one";
			variant="belt";
		};
	};
	class Viking_viking_avs_588: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayName=" [3rd] battlebelt 2 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_belt2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_belt2.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="two";
			variant="belt";
		};
	};
	class Viking_viking_avs_589: ItemCore
	{
		scope=2;
maximumLoad=200;
		displayName=" [3rd] battlebelt 3 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_belt3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_belt3.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
		class XtdGearInfo
		{
			model="viking_avs";
			loadout="three";
			variant="belt";
		};
	};
	class Viking_viking_avs_590: ItemCore
	{
		scope=1;
		displayName=" [3rd] folded antenna 1 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS15b.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS15b.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class Viking_viking_avs_591: ItemCore
	{
		scope=1;
		displayName=" [3rd] folded antenna 2 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS17b.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS17b.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class Viking_viking_avs_592: ItemCore
	{
		scope=1;
		displayName=" [3rd] folded antenna 3 ";
		author="Viking";
		picture="viking_avs\ui\logo.paa";
		logo="viking_avs\ui\logo.paa";
		model="viking_avs\Viking_AVS19b.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="viking_avs\Viking_AVS19b.p3d";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
};
class CfgVehicles
{
	class Man;
	class ContainerSupply;
	class Supply400: ContainerSupply
	{
		maximumLoad=200;
	};
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class Viking_3rdSFGZ_Equipment_Actions
				{
					displayName="Vest Modifications";
					icon="helmet\UI\ui_dot.paa";
					class viking_AVS15_Fold
					{
						displayName="Fold Antenna";
						condition="vest player == 'Viking_viking_avs_569'";
						exceptions[]={};
						statement="_player addVest 'Viking_viking_avs_590'";
						icon="helmet\UI\ui_dot.paa";
					};
					class viking_AVS15_UnFold
					{
						displayName="Unfold Antenna";
						condition="vest player == 'Viking_viking_avs_590'";
						exceptions[]={};
						statement="_player addVest 'Viking_viking_avs_569'";
						icon="helmet\UI\ui_dot.paa";
					};
					class viking_AVS17_Fold
					{
						displayName="Fold Antenna";
						condition="vest player == 'Viking_viking_avs_571'";
						exceptions[]={};
						statement="_player addVest 'Viking_viking_avs_591'";
						icon="helmet\UI\ui_dot.paa";
					};
					class viking_AVS17_UnFold
					{
						displayName="Unfold Antenna";
						condition="vest player == 'Viking_viking_avs_591'";
						exceptions[]={};
						statement="_player addVest 'Viking_viking_avs_571'";
						icon="helmet\UI\ui_dot.paa";
					};
					class viking_AVS19_Fold
					{
						displayName="Fold Antenna";
						condition="vest player == 'Viking_viking_avs_573'";
						exceptions[]={};
						statement="_player addVest 'Viking_viking_avs_592'";
						icon="helmet\UI\ui_dot.paa";
					};
					class viking_AVS19_UnFold
					{
						displayName="Unfold Antenna";
						condition="vest player == 'Viking_viking_avs_592'";
						exceptions[]={};
						statement="_player addVest 'Viking_viking_avs_573'";
						icon="helmet\UI\ui_dot.paa";
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="viking";
	timepacked="1615289528";
};

class CfgPatches
{
	class AVS_2
	{
		units[]=
		{
			"AVS_3rd"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
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
	class AVS_1: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 1 ODA ";
		author="Viking";
		picture="";
		model="AVS\AVS1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS1.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_2: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 2 Alabama ";
		author="Viking";
		picture="";
		model="AVS\AVS1.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\Alabama_Flag_Patch.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS1.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\Alabama_Flag_Patch.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_3: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 3 california ";
		author="Viking";
		picture="";
		model="AVS\AVS1.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\California_Flag_patch.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS1.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\California_Flag_patch.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_4: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 4 infidel ";
		author="Viking";
		picture="";
		model="AVS\AVS2.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\infidel.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS2.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\infidel.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_5: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 5 liberty or death ";
		author="Viking";
		picture="";
		model="AVS\AVS2.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\liberty_or_death.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS2.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\liberty_or_death.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_6: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 6 MAGA  ";
		author="Viking";
		picture="";
		model="AVS\AVS2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS2.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_7: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 7 Teutonic ";
		author="Viking";
		picture="";
		model="AVS\AVS1.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\US_Teutonic_flag.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS1.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\US_Teutonic_flag.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_8: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 8 US IR ";
		author="Viking";
		picture="";
		model="AVS\AVS1.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\USflagir.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS1.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\USflagir.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_9: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 10  ";
		author="Viking";
		picture="";
		model="AVS\AVS3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS3.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_10: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 11 ODA  ";
		author="Viking";
		picture="";
		model="AVS\AVS4.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS4.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_11: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 12 Alabama ";
		author="Viking";
		picture="";
		model="AVS\AVS4.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\Alabama_Flag_Patch.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS4.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\Alabama_Flag_Patch.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_12: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 13 Teutonic ";
		author="Viking";
		picture="";
		model="AVS\AVS4.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\US_Teutonic_flag.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS4.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\US_Teutonic_flag.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_13: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 14 MAGA ";
		author="Viking";
		picture="";
		model="AVS\AVS5.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS5.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_14: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 15 liberty or death ";
		author="Viking";
		picture="";
		model="AVS\AVS5.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\liberty_or_death.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS5.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\liberty_or_death.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_15: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 16 Liberty or Death ";
		author="Viking";
		picture="";
		model="AVS\AVS5.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS5.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_16: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 17 Liberty or Death ";
		author="Viking";
		picture="";
		model="AVS\AVS6.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS6.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_17: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 17 infidel ";
		author="Viking";
		picture="";
		model="AVS\AVS6.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\infidel.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS6.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\infidel.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_18: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 18 ODA ";
		author="Viking";
		picture="";
		model="AVS\AVS7.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS7.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_19: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 19 Teutonic ";
		author="Viking";
		picture="";
		model="AVS\AVS7.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\US_Teutonic_flag.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS7.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\US_Teutonic_flag.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_20: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 1 Confederate ";
		author="Viking";
		picture="";
		model="AVS\AVS1.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\confederateFlag_ca.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS1.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\confederateFlag_ca.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_21: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 2 Confederate ";
		author="Viking";
		picture="";
		model="AVS\AVS4.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\confederateFlag_ca.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS4.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\confederateFlag_ca.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_22: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 3 Confederate ";
		author="Viking";
		picture="";
		model="AVS\AVS4.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\confederateFlag_ca.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS4.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\confederateFlag_ca.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_23: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 4 Confederate ";
		author="Viking";
		picture="";
		model="AVS\AVS7.p3d";
		hiddenSelections[]=
		{
			"flag_patch"
		};
		hiddenSelectionsTextures[]=
		{
			"AVS\tex\confederateFlag_ca.paa"
		};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS7.p3d";
			hiddenSelections[]=
			{
				"flag_patch"
			};
			hiddenSelectionsTextures[]=
			{
				"AVS\tex\confederateFlag_ca.paa"
			};
			containerClass="Supply420";
			mass=40;
			passThrough=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_24: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult MEDIC  ";
		author="Viking";
		picture="";
		model="AVS\AVS8.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS8.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class AVS_25: ItemCore
	{
		scope=2;
		displayName=" [3rd] AVS Assult 20 ";
		author="Viking";
		picture="";
		model="AVS\AVS9.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		descriptionShort="";
		class ItemInfo: VestItem
		{
			uniformModel="AVS\AVS9.p3d";
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
					armor=80;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=80;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};
class cfgMods
{
	author="viking";
	timepacked="1616078687";
};

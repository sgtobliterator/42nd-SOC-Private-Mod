class CfgPatches
{
	class CIUSMC_Vests
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class VestItem;
	class CIUSMC_PCG3_Alpha_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Alpha/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
			picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest1";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Alpha: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Alpha/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
			picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest1";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Alpha_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Alpha";
		model="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
			picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest1";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Alpha_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Alpha";
		model="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
			picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest1";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Alpha_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Alpha";
		model="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Alpha.p3d";
			picture="\26th_USMC_Vests\Data\Icon\PCG_A.paa";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest1";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Bravo_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Bravo/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_B.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
			picture="\26th_USMC_Vests\Data\Icon\PCG_B.paa";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest2";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Bravo: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Bravo/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_B.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
			picture="\26th_USMC_Vests\Data\Icon\PCG_B.paa";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest2";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Bravo_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Bravo";
		model="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_B.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest2";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Bravo_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Bravo";
		model="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_B.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest2";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Bravo_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Bravo";
		model="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_B.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Bravo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest2";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Charlie_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Charlie/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_C.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest3";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Charlie: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Charlie/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_C.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest3";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Charlie_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Charlie";
		model="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_C.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest3";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Charlie_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Charlie";
		model="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_C.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest3";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Charlie_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Charlie";
		model="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_C.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Charlie.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest3";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Delta_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Delta/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_D.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest4";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Delta: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Delta/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_D.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest4";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Delta_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Delta";
		model="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_D.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest4";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Delta_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Delta";
		model="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_D.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest4";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Delta_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Delta";
		model="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_D.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Delta.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest4";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Echo_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Echo/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_E.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest5";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Echo: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Echo/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_E.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest5";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Echo_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Echo";
		model="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_E.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest5";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Echo_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Echo";
		model="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_E.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest5";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Echo_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Echo";
		model="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_E.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Echo.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest5";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Foxtrot_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Foxtrot/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_F.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest6";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Foxtrot: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Foxtrot/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_F.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest6";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Foxtrot_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Foxtrot";
		model="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_F.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest6";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Foxtrot_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Foxtrot";
		model="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_F.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest6";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Foxtrot_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Foxtrot";
		model="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_F.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Foxtrot.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest6";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Golf_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Golf/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_G.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest7";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Golf: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Golf/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_G.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest7";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Golf_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Golf";
		model="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_G.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest7";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Golf_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Golf";
		model="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_G.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest7";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Golf_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Golf";
		model="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_G.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Golf.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest7";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Hotel_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Hotel/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_H.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest8";
			Vest="On";
			ATAK="On";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Hotel: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Hotel/Belt";
		model="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_H.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest8";
			Vest="On";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_PCG3_Hotel_ATAK_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Hotel";
		model="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_H.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest8";
			Vest="On";
			ATAK="On";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Hotel_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] PC GEN III/Hotel";
		model="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_H.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest8";
			Vest="On";
			ATAK="Off";
			Belt="Off";
		};
	};
	class CIUSMC_PCG3_Hotel_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Hotel";
		model="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
		picture="\26th_USMC_Vests\Data\Icon\PCG_H.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_PCG3_Hotel.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_PCG3";
			Kit="Vest8";
			Vest="Off";
			ATAK="Off";
			Belt="On";
		};
	};
	class CIUSMC_JPC_1: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_1_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_1_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_1_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_1_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Alpha";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_1_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_1_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_1_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_1_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Alpha/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_1_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Alpha";
		model="26th_USMC_Vests\model\USMC_JPC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_A.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest1";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_2: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_2_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_2_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_2_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_2_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Bravo";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_2_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_2_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_2_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_2_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Bravo/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_2_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Bravo";
		model="26th_USMC_Vests\model\USMC_JPC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_B.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest2";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_3: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_3_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_3_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_3_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_3_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Charlie";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_3_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_3_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_3_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_3_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Charlie/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_3_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Charlie";
		model="26th_USMC_Vests\model\USMC_JPC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_C.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest3";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_4: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_4_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_4_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_4_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_4_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Delta";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_4_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_4_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_4_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_4_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Delta/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_4_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Delta";
		model="26th_USMC_Vests\model\USMC_JPC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_D.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest4";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_5: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_5_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_5_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_5_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_5_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Echo";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_5_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_5_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_5_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_5_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Echo/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_5_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Echo";
		model="26th_USMC_Vests\model\USMC_JPC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_E.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest5";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_6: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_6_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_6_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_6_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_6_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Foxtrot";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_6_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_6_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_6_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_6_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Foxtrot/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_6_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Foxtrot";
		model="26th_USMC_Vests\model\USMC_JPC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_F.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest6";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_7: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_7_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_7_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_7_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_7_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Golf";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_7_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_7_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_7_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_7_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Golf/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_7_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Golf";
		model="26th_USMC_Vests\model\USMC_JPC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_G.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest7";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_8: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_8_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_8_P: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="On";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_8_P_NB: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="Off";
			ATAK="Off";
			PECI="On";
		};
	};
	class CIUSMC_JPC_8_Belt: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Hotel";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="Off";
			Belt="On";
			ATAK="Off";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_8_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_8_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_JPC_8_P_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel/PECI/Belt";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="On";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_8_P_NB_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] JPC/Hotel/PECI";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="On";
			Belt="Off";
			ATAK="On";
			PECI="On";
		};
	};
	class CIUSMC_JPC_8_Belt_ATAK: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Belt/Hotel";
		model="26th_USMC_Vests\model\USMC_JPC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\JPC_H.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_peci"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformModel="26th_USMC_Vests\model\USMC_JPC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_peci"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_JPC";
			Kit="Vest8";
			Vest="Off";
			Belt="On";
			ATAK="On";
			PECI="Off";
		};
	};
	class CIUSMC_ARC_1: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Alpha/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_A.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest1";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_1_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Alpha";
		model="26th_USMC_Vests\model\USMC_ARC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_A.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest1";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_1_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Alpha";
		model="26th_USMC_Vests\model\USMC_ARC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_A.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest1";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_1_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Alpha/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_A.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest1";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_1_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Alpha";
		model="26th_USMC_Vests\model\USMC_ARC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_A.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest1";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_1_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Alpha";
		model="26th_USMC_Vests\model\USMC_ARC_1.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_A.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_1.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest1";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_2: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Bravo/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_B.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest2";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_2_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Bravo";
		model="26th_USMC_Vests\model\USMC_ARC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_B.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest2";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_2_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Bravo";
		model="26th_USMC_Vests\model\USMC_ARC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_B.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest2";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_2_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Bravo/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_B.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest2";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_2_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Bravo";
		model="26th_USMC_Vests\model\USMC_ARC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_B.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest2";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_2_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Bravo";
		model="26th_USMC_Vests\model\USMC_ARC_2.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_B.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_2.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest2";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_3: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Charlie/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_C.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest3";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_3_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Charlie";
		model="26th_USMC_Vests\model\USMC_ARC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_C.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest3";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_3_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Charlie";
		model="26th_USMC_Vests\model\USMC_ARC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_C.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest3";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_3_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Charlie/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_C.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest3";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_3_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Charlie";
		model="26th_USMC_Vests\model\USMC_ARC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_C.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest3";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_3_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Charlie";
		model="26th_USMC_Vests\model\USMC_ARC_3.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_C.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_3.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest3";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_4: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Delta/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_DARC_D.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest4";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_4_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Delta";
		model="26th_USMC_Vests\model\USMC_ARC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_D.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest4";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_4_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Delta";
		model="26th_USMC_Vests\model\USMC_ARC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_D.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest4";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_4_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Delta/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_D.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest4";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_4_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Delta";
		model="26th_USMC_Vests\model\USMC_ARC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_D.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest4";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_4_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Delta";
		model="26th_USMC_Vests\model\USMC_ARC_4.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_D.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_4.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest4";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_5: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Echo/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_E.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest5";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_5_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Echo";
		model="26th_USMC_Vests\model\USMC_ARC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_E.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest5";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_5_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Echo";
		model="26th_USMC_Vests\model\USMC_ARC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_E.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest5";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_5_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Echo/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_E.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest5";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_5_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Echo";
		model="26th_USMC_Vests\model\USMC_ARC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_E.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest5";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_5_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Echo";
		model="26th_USMC_Vests\model\USMC_ARC_5.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_E.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_5.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest5";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_6: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Foxtrot/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_F.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest6";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_6_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Foxtrot";
		model="26th_USMC_Vests\model\USMC_ARC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_F.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest6";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_6_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Foxtrot";
		model="26th_USMC_Vests\model\USMC_ARC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_F.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest6";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_6_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Foxtrot/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_F.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest6";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_6_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Foxtrot";
		model="26th_USMC_Vests\model\USMC_ARC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_F.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest6";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_6_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Foxtrot";
		model="26th_USMC_Vests\model\USMC_ARC_6.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_F.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_6.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest6";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_7: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Golf/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_G.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest7";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_7_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Golf";
		model="26th_USMC_Vests\model\USMC_ARC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_G.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest7";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_7_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Golf";
		model="26th_USMC_Vests\model\USMC_ARC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_G.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest7";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_7_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Golf/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_G.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest7";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_7_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Golf";
		model="26th_USMC_Vests\model\USMC_ARC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_G.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest7";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_7_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Golf";
		model="26th_USMC_Vests\model\USMC_ARC_7.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_G.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_7.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest7";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_8: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Hotel/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_H.paa";
		hiddenSelections[]=
		{
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest8";
			Vest="On";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_8_NB: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Hotel";
		model="26th_USMC_Vests\model\USMC_ARC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_H.paa";
		hiddenSelections[]=
		{
			"_belt",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest8";
			Vest="On";
			Belt="Off";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_8_Belt: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Hotel";
		model="26th_USMC_Vests\model\USMC_ARC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_H.paa";
		hiddenSelections[]=
		{
			"_vest",
			"_atak"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest",
				"_atak"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest8";
			Vest="Off";
			Belt="On";
			ATAK="Off";
		};
	};
	class CIUSMC_ARC_8_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Hotel/Belt";
		model="26th_USMC_Vests\model\USMC_ARC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_H.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest8";
			Vest="On";
			Belt="On";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_8_NB_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] ARC/Hotel";
		model="26th_USMC_Vests\model\USMC_ARC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_H.paa";
		hiddenSelections[]=
		{
			"_belt"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_belt"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest8";
			Vest="On";
			Belt="Off";
			ATAK="On";
		};
	};
	class CIUSMC_ARC_8_Belt_ATAK: ItemCore
	{
		author="Anthony";
		scope=2;
		displayName="[USMC] Belt/Hotel";
		model="26th_USMC_Vests\model\USMC_ARC_8.p3d";
		picture="\26th_USMC_Vests\Data\Icon\ARC_H.paa";
		hiddenSelections[]=
		{
			"_vest"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=3;
			uniformmodel="26th_USMC_Vests\model\USMC_ARC_8.p3d";
			containerClass="Supply200";
			modelSides[]={3,1};
			armor=24;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"_vest"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					PassThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.1;
				};
			};
		};
		class XtdGearInfo
		{
			model="CIUSMC_ARC";
			Kit="Vest8";
			Vest="Off";
			Belt="On";
			ATAK="On";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class CIUSMC_JPC
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"Kit",
				"Vest",
				"Belt",
				"ATAK",
				"PECI"
			};
			class Kit
			{
				alwaysSelectable=1;
				label="Kit";
				values[]=
				{
					"Vest1",
					"Vest2",
					"Vest3",
					"Vest4",
					"Vest5",
					"Vest6",
					"Vest7",
					"Vest8"
				};
				class Vest1
				{
					label="Alpha";
				};
				class Vest2
				{
					label="Bravo";
				};
				class Vest3
				{
					label="Charlie";
				};
				class Vest4
				{
					label="Delta";
				};
				class Vest5
				{
					label="Echo";
				};
				class Vest6
				{
					label="Foxtrot";
				};
				class Vest7
				{
					label="Golf";
				};
				class Vest8
				{
					label="Hotel";
				};
			};
			class Vest
			{
				alwaysSelectable=1;
				label="Vest";
				values[]=
				{
					"On",
					"Off"
				};
				changeingame=0;
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class Belt
			{
				alwaysSelectable=1;
				label="Belt";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class ATAK
			{
				alwaysSelectable=1;
				label="ATAK";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class PECI
			{
				alwaysSelectable=1;
				label="Maritime";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
		};
		class CIUSMC_PCG3
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"Kit",
				"Vest",
				"ATAK",
				"Belt"
			};
			class Kit
			{
				alwaysSelectable=1;
				label="Kit";
				values[]=
				{
					"Vest1",
					"Vest2",
					"Vest3",
					"Vest4",
					"Vest5",
					"Vest6",
					"Vest7",
					"Vest8"
				};
				class Vest1
				{
					label="Alpha";
				};
				class Vest2
				{
					label="Bravo";
				};
				class Vest3
				{
					label="Charlie";
				};
				class Vest4
				{
					label="Delta";
				};
				class Vest5
				{
					label="Echo";
				};
				class Vest6
				{
					label="Foxtrot";
				};
				class Vest7
				{
					label="Golf";
				};
				class Vest8
				{
					label="Hotel";
				};
			};
			class Vest
			{
				alwaysSelectable=1;
				label="Vest";
				values[]=
				{
					"On",
					"Off"
				};
				changeingame=0;
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class Belt
			{
				alwaysSelectable=1;
				label="Belt";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class ATAK
			{
				alwaysSelectable=1;
				label="ATAK";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
		};
		class CIUSMC_ARC
		{
			label="Customize";
			author="Anthony";
			options[]=
			{
				"Kit",
				"Vest",
				"Belt",
				"ATAK"
			};
			class Kit
			{
				alwaysSelectable=1;
				label="Kit";
				values[]=
				{
					"Vest1",
					"Vest2",
					"Vest3",
					"Vest4",
					"Vest5",
					"Vest6",
					"Vest7",
					"Vest8"
				};
				class Vest1
				{
					label="Alpha";
				};
				class Vest2
				{
					label="Bravo";
				};
				class Vest3
				{
					label="Charlie";
				};
				class Vest4
				{
					label="Delta";
				};
				class Vest5
				{
					label="Echo";
				};
				class Vest6
				{
					label="Foxtrot";
				};
				class Vest7
				{
					label="Golf";
				};
				class Vest8
				{
					label="Hotel";
				};
			};
			class Vest
			{
				alwaysSelectable=1;
				label="Vest";
				values[]=
				{
					"On",
					"Off"
				};
				changeingame=0;
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class Belt
			{
				alwaysSelectable=1;
				label="Belt";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
			class ATAK
			{
				alwaysSelectable=1;
				label="ATAK";
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
				};
				class Off
				{
					label="Off";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777919500";
};

class CfgPatches
{
	class CIUSMC_MAW_Vests
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
	class CIUSMC_Airlite_1: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Flight Rig/Alpha";
		model="26th_USMC_MAW_Vests\model\USMC_Airlite_1.p3d";
		picture="\26th_USMC_MAW_Vests\Data\Icon\Flight_A.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=5;
			uniformModel="26th_USMC_MAW_Vests\model\USMC_Airlite_1.p3d";
			containerClass="Supply500";
			modelSides[]={3,1};
			armor=5;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=5;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=5;
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
			model="CIUSMC_Rig";
			Kit="Rig1";
		};
	};
	class CIUSMC_Airlite_2: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Flight Rig/Bravo";
		model="26th_USMC_MAW_Vests\model\USMC_Airlite_2.p3d";
		picture="\26th_USMC_MAW_Vests\Data\Icon\Flight_B.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=5;
			uniformModel="26th_USMC_MAW_Vests\model\USMC_Airlite_2.p3d";
			containerClass="Supply500";
			modelSides[]={3,1};
			armor=5;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=5;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=5;
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
			model="CIUSMC_Rig";
			Kit="Rig2";
		};
	};
	class CIUSMC_Airlite_3: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Flight Rig/Charlie";
		model="26th_USMC_MAW_Vests\model\USMC_Airlite_3.p3d";
		picture="\26th_USMC_MAW_Vests\Data\Icon\Flight_C.paa";
		hiddenSelections[]=
		{
			"_lv"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=5;
			uniformModel="26th_USMC_MAW_Vests\model\USMC_Airlite_3.p3d";
			containerClass="Supply500";
			modelSides[]={3,1};
			armor=5;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=5;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=5;
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
			model="CIUSMC_Rig";
			Kit="Rig3";
		};
	};
	class CIUSMC_Airlite_4: ItemCore
	{
		author="Coal";
		scope=2;
		displayName="[USMC] Flight Rig/Delta";
		model="26th_USMC_MAW_Vests\model\USMC_Airlite_4.p3d";
		picture="\26th_USMC_MAW_Vests\Data\Icon\Flight_D.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			mass=5;
			uniformModel="26th_USMC_MAW_Vests\model\USMC_Airlite_4.p3d";
			containerClass="Supply500";
			modelSides[]={3,1};
			armor=5;
			passThrough=0.5;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=5;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=5;
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
			model="CIUSMC_Rig";
			Kit="Rig4";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class CIUSMC_Rig
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"Kit"
			};
			class Kit
			{
				label="Kit";
				values[]=
				{
					"Rig1",
					"Rig2",
					"Rig3",
					"Rig4"
				};
				class Rig1
				{
					label="Alpha";
				};
				class Rig2
				{
					label="Bravo";
				};
				class Rig3
				{
					label="Charlie";
				};
				class Rig4
				{
					label="Delta";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1777952274";
};

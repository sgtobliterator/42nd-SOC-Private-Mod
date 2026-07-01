class CfgPatches
{
	class 121_PJ_Vest
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
	class VestItem;
	class PJ_JPC1: ItemCore
	{
		author="Toka";
		scope=2;
		displayName="[17th STS] Crye JPC";
		model="\121_PJ_Vest\121_PJ_Vest.p3d";
		descriptionShort="Crye Precision JPC Plate Carrier, Standard SAPI-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_PJ_Vest\121_PJ_Vest.p3d";
			containerClass="Supply230";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					PassThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=20;
					PassThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_PJ_Vest";
			vestType="Basic 1";
		};
	};
	class PJ_JPC2: ItemCore
	{
		author="Toka";
		scope=2;
		displayName="[17th STS] Crye JPC NCO";
		model="\121_PJ_Vest\121_PJ_Vest2.p3d";
		descriptionShort="Crye Precision JPC Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_PJ_Vest\121_PJ_Vest2.p3d";
			containerClass="Supply230";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					PassThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=20;
					PassThrough=0.30000001;
				};
			};
		};
		class XtdGearInfo
		{
			model="121_PJ_Vest";
			vestType="NCO 1";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 121_PJ_Vest
		{
			label="Customise";
			author="Toka";
			options[]=
			{
				"vestType"
			};
			class vestType
			{
				label="Vest Type";
				values[]=
				{
					"Basic 1",
					"NCO 1"
				};
				class PJ_JPC1
				{
					label="Basic 1";
				};
				class PJ_JPC2
				{
					label="NCO 1";
				};
			};
		};
	};
};
class cfgMods
{
	author="Toka";
	timepacked="1659895623";
};

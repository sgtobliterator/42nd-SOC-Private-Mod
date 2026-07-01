#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 121_75th_Vests
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
	class InventoryItem_Base_F;
	class VestItem;
	class B_AssaultPack_mcamo;
	class ranger_avs_1sg: ItemCore
	{
		author="Visco X Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_1SG.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_1SG.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_command";
			vestType="first_sergeant";
			beltType="yes";
		};
	};
	class ranger_avs_1sg_noBelt: ItemCore
	{
		author="Visco X Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_1SG.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_1SG.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_command";
			vestType="first_sergeant";
			beltType="no";
		};
	};
	class ranger_avs_xo: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_XO.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_XO.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_command";
			vestType="executive_officer";
			beltType="yes";
		};
	};
	class ranger_avs_xo_noBelt: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_XO.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_XO.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_command";
			vestType="executive_officer";
			beltType="no";
		};
	};
	class ranger_avs_1pl: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_1PL.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_1PL.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_command";
			vestType="1platoon_lead";
			beltType="yes";
		};
	};
	class ranger_avs_1pl_noBelt: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_1PL.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_1PL.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_command";
			vestType="1platoon_lead";
			beltType="no";
		};
	};
	class ranger_avs_2pl: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_2PL.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_2PL.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_command";
			vestType="2platoon_lead";
			beltType="yes";
		};
	};
	class ranger_avs_2pl_noBelt: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_2PL.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_2PL.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_command";
			vestType="2platoon_lead";
			beltType="no";
		};
	};
	class ranger_avs_T: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_T.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_T.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_command";
			vestType="T";
			beltType="yes";
		};
	};
	class ranger_avs_T_noBelt: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_T.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_T.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_command";
			vestType="T";
			beltType="no";
		};
	};
	class ranger_avs_1ps: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_1PS.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_1PS.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_command";
			vestType="1platoon_sgt";
			beltType="yes";
		};
	};
	class ranger_avs_1ps_noBelt: ItemCore
	{
		author="Visco x Keepsrunning";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_COM_1PS.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_COM_1PS.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_command";
			vestType="1platoon_sgt";
			beltType="no";
		};
	};
	class ranger_avs1: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV2.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV2.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="basic_1";
			beltType="yes";
		};
	};
	class ranger_avs1_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV2.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV2.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="basic_1";
			beltType="no";
		};
	};
	class ranger_avs2: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV3.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV3.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="basic_2";
			beltType="yes";
		};
	};
	class ranger_avs2_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV3.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV3.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="basic_2";
			beltType="no";
		};
	};
	class ranger_avs3: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV4.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV4.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="basic_3";
			beltType="yes";
		};
	};
	class ranger_avs3_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV4.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV4.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="basic_3";
			beltType="no";
		};
	};
	class ranger_avs5: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV5.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV5.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="dmr";
			beltType="yes";
		};
	};
	class ranger_avs5_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV5.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV5.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="dmr";
			beltType="no";
		};
	};
	class ranger_avs6: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV6.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV6.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="nco_1";
			beltType="yes";
		};
	};
	class ranger_avs6_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV6.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV6.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="nco_1";
			beltType="no";
		};
	};
	class ranger_avs7: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV7.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV7.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="nco_2";
			beltType="yes";
		};
	};
	class ranger_avs7_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV7.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV7.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="nco_2";
			beltType="no";
		};
	};
	class ranger_avs8: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV8.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV8.p3d";
			containerClass="Supply250";
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
			model="ranger_avs_mbav";
			vestType="mg";
			beltType="yes";
		};
	};
	class ranger_avs8_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV8.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV8.p3d";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="mg";
			beltType="no";
		};
	};
	class ranger_avs9: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_JTAC.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_JTAC.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="jtac";
			beltType="yes";
		};
	};
	class ranger_avs9_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV_JTAC.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV_JTAC.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="jtac";
			beltType="no";
		};
	};
	class ranger_avs10: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV9.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV9.p3d";
			containerClass="Supply200";
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
			model="ranger_avs_mbav";
			vestType="breacher_1";
			beltType="yes";
		};
	};
	class ranger_avs10_noBelt: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Crye AVS MBAV [No Belt]";
		picture="\121_75th_Vests\121_ranger_vest_ca.paa";
		model="\121_75th_Vests\AVS_MBAV9.p3d";
		descriptionShort="Crye Precision AVS Plate Carrier, MBAV-cut Ballistic Inserts";
		hiddenSelections[]=
		{
			"__hideBelt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\AVS_MBAV9.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				"__hideBelt"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
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
			model="ranger_avs_mbav";
			vestType="breacher_1";
			beltType="no";
		};
	};
	class ranger_belt1: ItemCore
	{
		author="Visco";
		scope=2;
		displayName="[42nd SOC] Training Instructor's Belt";
		picture="\121_75th_Vests\121_ranger_belt_ca.paa";
		model="\121_75th_Vests\Belt_1.p3d";
		descriptionShort="Battle Belt, IDK what it is";
		class ItemInfo: VestItem
		{
			mass=80;
			uniformModel="\121_75th_Vests\Belt_1.p3d";
			containerClass="Supply50";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=0;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=0;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					PassThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					PassThrough=0.30000001;
				};
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class ranger_avs_mbav
		{
			label="Customise";
			author="Visco";
			options[]=
			{
				"vestType",
				"beltType"
			};
			class vestType
			{
				label="Vest Type";
				values[]=
				{
					"basic_1",
					"basic_2",
					"basic_3",
					"dmr",
					"nco_1",
					"nco_2",
					"jtac",
					"mg",
					"breacher_1"
				};
				changeingame=0;
				class basic_1
				{
					label="Basic 1";
				};
				class basic_2
				{
					label="Basic 2";
				};
				class basic_3
				{
					label="Basic 3";
				};
				class dmr
				{
					label="DMR";
				};
				class nco_1
				{
					label="NCO 1";
				};
				class nco_2
				{
					label="NCO 2";
				};
				class jtac
				{
					label="JTAC";
				};
				class mg
				{
					label="Belt Fed";
				};
				class breacher_1
				{
					label="Breacher";
				};
			};
			class beltType
			{
				label="Belt";
				values[]=
				{
					"yes",
					"no"
				};
				changeingame=0;
				class yes
				{
					label="Yes";
				};
				class no
				{
					label="No";
				};
			};
		};
		class ranger_avs_command
		{
			label="Member";
			author="Visco";
			options[]=
			{
				"vestType",
				"beltType"
			};
			class vestType
			{
				label="Vest Type";
				values[]=
				{
					"executive_officer",
					"1platoon_lead",
					"first_sergeant",
					"T",
					"2platoon_lead",
					"1platoon_sgt"
				};
				changeingame=0;
				class executive_officer
				{
					label="Keeps";
				};
				class 1platoon_lead
				{
					label="Sparks";
				};
				class first_sergeant
				{
					label="Gunslinger";
				};
				class T
				{
					label="Timber";
				};
				class 2platoon_lead
				{
					label="John";
				};
				class 1platoon_sgt
				{
					label="Anubis";
				};
			};
			class beltType
			{
				label="Belt";
				values[]=
				{
					"yes",
					"no"
				};
				changeingame=0;
				class yes
				{
					label="Yes";
				};
				class no
				{
					label="No";
				};
			};
		};
	};
};
class cfgMods
{
	author="KeepsRunning";
	timepacked="1667770190";
};

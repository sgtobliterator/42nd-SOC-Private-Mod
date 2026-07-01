#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Apr 11 05:50:37 2023 : 'file' last modified on Wed Aug 17 08:43:21 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SOAR_Helmets
	{
		units[] = {};
		weapons[] = {"maritime"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class XtdGearModels {

	class CfgWeapons {

		class SOAR_helmets {
			label="SOAR Helmets";
			author="Sergeant";
			options[]= {
				"variations",
				"visor",
				"mask",
				"lights"
			};
			class variations {
				label="Variations"
				changeingame=0;
				values[]= {
					"SOAR1",
					"SOAR2",
					"SOAR3",
					"SOAR4",
					"SOAR5",
					"SOAR6",
					"SOAR7",
					"SOAR8",
					"SOAR9"
				};
				class SOAR1 {
					label="1";
				};
				class SOAR2 {
					label="2";
				};
				class SOAR3 {
					label="3";
				};
				class SOAR4 {
					label="4";
				};
				class SOAR5 {
					label="5";
				};
				class SOAR6 {
					label="6";
				};
				class SOAR7 {
					label="7";
				};
				class SOAR8 {
					label="8";
				};
				class SOAR9 {
					label="9";
				};
			};
			class visor {
				label="Visor";
				changeingame=1;
				values[]= {
					"Up",
					"Down"
				};
				class Up {
					label="Up";
				};
				class Down {
					label="Down";
				};
			};
			class mask {
				label="Mask";
				changeingame=1;
				values[]= {
					"On",
					"Off",
					"SOTR"
				};
				class On {
					label="On";
				};
				class Off {
					label="Off";
				};
				class SOTR {
					label="SOTR";
				};
			};
			class lights {
				label="Lights";
				changeingame=1;
				values[]= {
					"On",
					"Off"
				};
				class On {
					label="On";
				};
				class Off {
					label="Off";
				};
			};
		};
	};
};
class cfgWeapons
{
	class rhsusf_hgu56p;
	class rhsusf_hgu56p_visor;
	class rhsusf_hgu56p_mask;
	class rhsusf_hgu56p_visor_mask;
	class avteg_helmet_fitz: rhsusf_hgu56p
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 1 Mask/Vis Off)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_fitz";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_fitz.paa","\SOAR_Helmets\data\Set_One\hgu_fitz_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR2";
			visor="Up";
			mask="Off";
			lights="Off";
		};
	};
	class avteg_helmet_fitz_visor: rhsusf_hgu56p_visor
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 1 Mask OFf)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_fitz_visor";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_fitz.paa","\SOAR_Helmets\data\Set_One\hgu_fitz_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR2";
			visor="Down";
			mask="Off";
			lights="Off";
		};
	};
	class avteg_helmet_fitz_mask: rhsusf_hgu56p_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 1 Visor Up)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_fitz_mask";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_fitz.paa","\SOAR_Helmets\data\Set_One\hgu_fitz_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR2";
			visor="Up";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_fitz_visor_mask: rhsusf_hgu56p_visor_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 1 Full)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_fitz_visor_mask";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_fitz.paa","\SOAR_Helmets\data\Set_One\hgu_fitz_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR2";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_church: rhsusf_hgu56p
	{
		scope = 2;
		displayName = "[SOAR] HGU56/GRY (Cus 2 Mask/Vis Off)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_church";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_church.paa","\SOAR_Helmets\data\Set_One\hgu_church_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR8";
			visor="Up";
			mask="Off";
			lights="Off";
		};
	};
	class avteg_helmet_church_visor: rhsusf_hgu56p_visor
	{
		scope = 2;
		displayName = "[SOAR] HGU56/GRY (Cus 2 Mask Off)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_church_visor";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_church.paa","\SOAR_Helmets\data\Set_One\hgu_church_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR8";
			visor="Down";
			mask="Off";
			lights="Off";
		};
	};
	class avteg_helmet_church_mask: rhsusf_hgu56p_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/GRY (Cus 2 Visor Up)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_church_mask";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_church.paa","\SOAR_Helmets\data\Set_One\hgu_church_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR8";
			visor="Up";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_church_visor_mask: rhsusf_hgu56p_visor_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/GRY (Cus 2 Full)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_church_visor_mask";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_church.paa","\SOAR_Helmets\data\Set_One\hgu_church_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR8";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_frsot: rhsusf_hgu56p
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 3 Mask/Vis Off)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_frost";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_frost.paa","\SOAR_Helmets\data\Set_One\hgu_frost_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR3";
			visor="Up";
			mask="Off";
			lights="Off";
		};
	};
	class avteg_helmet_frost_visor: rhsusf_hgu56p_visor
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 3 Mask Off)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_frost_visor";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_frost.paa","\SOAR_Helmets\data\Set_One\hgu_frost_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR3";
			visor="Down";
			mask="Off";
			lights="Off";
		};
	};
	class avteg_helmet_frost_mask: rhsusf_hgu56p_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 3 Visor Up)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_frost_mask";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_frost.paa","\SOAR_Helmets\data\Set_One\hgu_frost_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR3";
			visor="Up";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_frost_visor_mask: rhsusf_hgu56p_visor_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 3 Full)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_frost_visor_mask";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_One\hgu_frost.paa","\SOAR_Helmets\data\Set_One\hgu_frost_patches.paa"};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR3";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_Cannibal: rhsusf_hgu56p_visor_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 5 Cannibal)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_Cannibal";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_Two\hgu56_blk_Cannible.paa",""};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR4";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_Clown: rhsusf_hgu56p_visor_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 6 Clown)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_Clown";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_Two\hgu56_blk_clown.paa",""};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR5";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_Skullface: rhsusf_hgu56p_visor_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 7 Skullface)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_Skullface";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_Two\hgu56_blk_skullface.paa",""};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR6";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class avteg_helmet_Venom: rhsusf_hgu56p_visor_mask
	{
		scope = 2;
		displayName = "[SOAR] HGU56/BLK (Cus 8 Venom)";
		author = "75thRRC Mod Team";
		picture = "\SOAR_Helmets\hgu.paa";
		baseWeapon = "avteg_helmet_Venom";
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] = {"\SOAR_Helmets\data\Set_Two\hgu56_blk_venom.paa",""};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR7";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class H_HelmetB;
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class ItemInfo;
	class NVGoggles;
	class HGU_Tundra: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		displayName = "[SOAR]  HGU56/BLK (Tundra Full)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\warhammer_patch.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Down";
			mask="On";
			lights="Off";
		};
	};
	class Tundra_Mask_Off: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 0;
		scopeArsenal = 0;
		displayName = "[SOAR]  HGU56/BLK (Tundra Mask Off)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\warhammer_patch.paa","","","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
	};
	class HGU_Tundra_LightOn: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 0;
		scopeArsenal = 2;
		displayName = "[SOAR]  Tundra -Light On";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","","soar_helmets\data\vlite_red_co.paa","soar_helmets\data\warhammer_patch.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Down";
			mask="On";
			lights="On";
		};
	};
	class Tundra_VisUpMaskOff: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		scopeArsenal = 2;
		displayName = "[SOAR]  HGU56/BLK (Tundra Mask/Vis Off)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\warhammer_patch.paa","","","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Up";
			mask="Off";
			lights="Off";
		};
	};
	class Tundra_VisUp: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		scopeArsenal = 2;
		displayName = "[SOAR]  HGU56/BLK (Tundra Visor Up)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\warhammer_patch.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Up";
			mask="On";
			lights="Off";
		};
	};
	class Tundra_SOTR: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		scopeArsenal = 2;
		displayName = "[SOAR]  HGU56/BLK (Tundra SOTR)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\respmask_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\warhammer_patch.paa","","","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Down";
			mask="SOTR";
			lights="Off";
		};
	};
	class Tundra_Mask_OffLight: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 0;
		scopeArsenal = 2;
		displayName = "[SOAR]  Tundra - Mask Off Light";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","","soar_helmets\data\vlite_red_co.paa","soar_helmets\data\warhammer_patch.paa","","","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Down";
			mask="Off";
			lights="On";
		};
	};
	class Tundra_SOTRLight: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 0;
		scopeArsenal = 0;
		displayName = "[SOAR]  Tundra -SOTR Light";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\respmask_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","","soar_helmets\data\vlite_red_co.paa","soar_helmets\data\warhammer_patch.paa","","","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Down";
			mask="SOTR";
			lights="On";
		};
	};
	class Tundra_VisUpLight: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 0;
		scopeArsenal = 0;
		displayName = "[SOAR]  Tundra -VisUp Light";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","","soar_helmets\data\vlite_red_co.paa","soar_helmets\data\warhammer_patch.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Up";
			mask="On";
			lights="On";
		};
	};
	class Tundra_VisUpMaskOffLight: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 0;
		scopeArsenal = 0;
		displayName = "[SOAR]  Tundra -VisUpMaskOff Light";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\mando_patch2.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\paittokillpatch.paa","soar_helmets\data\predator_patch.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","","soar_helmets\data\shitbrief.paa","soar_helmets\data\tundra_callsign.paa","","soar_helmets\data\vlite_red_co.paa","soar_helmets\data\warhammer_patch.paa","","","soar_helmets\data\rhs_hgu56_tundra2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Tundra_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"T1_Batt","T2_Mando","T3_MS200","T4_PTK","T5_Pred","T6_NVGPK","T7_SOTR","T8_hgu56_blk","T9_HelmetInternals","T10_SOTRInternals","T11_Visor","T12_Shit","T13_Call","T14_VGreen","T15_VRed","T16_War","T17_Mask","T18_Buckles","T19_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR1";
			visor="Up";
			mask="Off";
			lights="On";
		};
	};
	class Kenobi_Flight_Helmet: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		displayName = "[SOAR] HGU56/OLV (Cus 4 Full)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Kenobi_Flight_Helmet.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\data\baphonteme.paa","soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\bodieszu_patch.paa","soar_helmets\data\Head_Patch_Clean.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\no_quater.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\yoshi_patch.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa","","","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Kenobi_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR9";
			visor="Down";
			mask="On";
			lights="Off";
		};

	};
	class Kenobi_Mask_Off: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		scopeArsenal = 2;
		displayName = "[SOAR] HGU56/OLV (Cus 4 Mask Off)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Kenobi_MaskOff.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\data\baphonteme.paa","soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\bodieszu_patch.paa","soar_helmets\data\Head_Patch_Clean.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\no_quater.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\yoshi_patch.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","","","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Kenobi_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR9";
			visor="Down";
			mask="Off";
			lights="Off";
		};
	};
	class Kenobi_HGU_LightOn: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 0;
		scopeArsenal = 2;
		displayName = "[SOAR]  HGU56 Olive Custom 1";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Kenobi_Flight_Helmet_LightOn.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\data\baphonteme.paa","soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\bodieszu_patch.paa","soar_helmets\data\Head_Patch_Clean.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\no_quater.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_visor_ca.paa","","soar_helmets\data\vlite_red_co.paa","soar_helmets\data\yoshi_patch.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa","","","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Kenobi_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR9";
			visor="Down";
			mask="On";
			lights="On";
		};
	};
	class Kenobi_VisUpMaskOff: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		scopeArsenal = 2;
		displayName = "[SOAR] HGU56/OLV (Cus 4 Mask/Vis Off)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Kenobi_VisUpMaskOff.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\data\baphonteme.paa","soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\bodieszu_patch.paa","soar_helmets\data\Head_Patch_Clean.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\no_quater.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\yoshi_patch.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","","","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Kenobi_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR9";
			visor="Up";
			mask="Off";
			lights="Off";
		};
	};
	class Kenobi_VisUp: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		scopeArsenal = 2;
		displayName = "[SOAR] HGU56/OLV (Cus 4 Visor Up)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Kenobi_VisUp.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\data\baphonteme.paa","soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\bodieszu_patch.paa","soar_helmets\data\Head_Patch_Clean.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\no_quater.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\yoshi_patch.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa","","","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Kenobi_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR9";
			visor="Up";
			mask="On";
			lights="Off";
		};
	};
	class Kenobi_SOTR: H_HelmetB
	{
		author = "75thRRC Mod Team";
		scope = 2;
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.5;
		weaponPoolAvailable = 2;
		scopeArsenal = 2;
		displayName = "[SOAR] HGU56/OLV (Cus 4 SOTR)";
		picture = "\SOAR_Helmets\hgu.paa";
		model = "\SOAR_Helmets\models\Kenobi_SOTR.p3d";
		descriptionShort = "Maritime";
		hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		hiddenSelectionsTextures[] = {"soar_helmets\data\baphonteme.paa","soar_helmets\tex\battery_pack_blk_co.paa","soar_helmets\data\bodieszu_patch.paa","soar_helmets\data\Head_Patch_Clean.paa","soar_helmets\tex\ms_2000_co.paa","soar_helmets\data\no_quater.paa","soar_helmets\data\pvs31_bat_wraith_co.paa","soar_helmets\data\rhs_hgu56_back_patch_co.paa","soar_helmets\data\rhs_hgu56_visor_ca.paa","soar_helmets\data\vlite_green_co.paa","","soar_helmets\data\yoshi_patch.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","","","soar_helmets\data\respmask_co.paa","soar_helmets\data\rhs_hgu56_olv_co.paa","soar_helmets\data\rhs_hgu56_olv_mo_kenobi.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "\SOAR_Helmets\models\Kenobi_Flight_Helmet.p3d";
			modelSides[] = {3,1};
			ace_hearing_protection = 1;
			ace_hearing_lowerVolume = 0.00100001;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.4;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.4;
				};
			};
			hiddenSelections[] = {"K1_Baph","K2_Batt","K3_Bodies","K4_Call","K5_Ms2000","K6_NoQ","K7_NVGBat","K8_HBlack","K9_Visor","K10_VGreen","K11_VRed","K12_Yoshi","K13_Buckle","K14_HelmetInternal","K15_Mask","K16_SOTR","K17_SOTRInternal","K18_Helmet"};
		};
		class XtdGearInfo
		{
			model="SOAR_helmets";
			variations="SOAR9";
			visor="Down";
			mask="SOTR";
			lights="Off";
		};
	};
};

#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Thu Apr 06 22:05:00 2023 : 'file' last modified on Fri Sep 30 08:12:55 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SOAR_Uniforms
	{
		magazines[] = {};
		ammo[] = {};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","Extended_EventHandlers"};
	};
};

class XtdGearModels {

	class CfgWeapons {

		class SOAR_flight_suit {
			label="SOAR Flight Suit";
			author="Sergeant";
			options[]= {
				"Color",
				"Rolled"
			};
			class Color {
				label="Camo";
				changeingame=0;
				values[]= {
					"Black",
					"Grey",
					"Khaki",
					"OCP",
					"OD",
					"Tan"
				};
				class Black {
					label="Black";
				};
				class Grey {
					label="Grey";
				};
				class Khaki {
					label="KHaki";
				};
				class OCP {
					label="OCP";
				};
				class OD {
					label="OD";
				};
				class Tan {
					label="Tan";
				};
			};
			class Rolled {
				label="Rolled";
				changeingame=1;
				values[]= {
					"Yes",
					"No"
				};
				class Yes {
					label="Yes";
				};
				class No {
					label="No";
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_diver_F;
	class SOAR_Flight_1: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit.p3d";
		uniforMClass = "SOAR_Flight_1";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\usaf_overalls_top_co.paa","SOAR_Uniforms\data\usaf_overalls_pants_co.paa"};
	};
	class SOAR_Flight_2: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit.p3d";
		uniforMClass = "SOAR_Flight_2";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerBlack_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerBlack_co.paa"};
	};
	class SOAR_Flight_3: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit.p3d";
		uniforMClass = "SOAR_Flight_3";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerGrey_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerGrey_co.paa"};
	};
	class SOAR_Flight_4: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit.p3d";
		uniforMClass = "SOAR_Flight_4";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerKhaki_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerKhaki_co.paa"};
	};
	class SOAR_Flight_5: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit.p3d";
		uniforMClass = "SOAR_Flight_5";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerTan_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerTan_co.paa"};
	};
	class SOAR_Flight_6: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit_2.p3d";
		uniforMClass = "SOAR_Flight_6";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\usaf_overalls_top_co.paa","SOAR_Uniforms\data\usaf_overalls_pants_co.paa"};
	};
	class SOAR_Flight_7: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit_2.p3d";
		uniforMClass = "SOAR_Flight_7";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerBlack_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerBlack_co.paa"};
	};
	class SOAR_Flight_8: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit_2.p3d";
		uniforMClass = "SOAR_Flight_8";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerGrey_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerGrey_co.paa"};
	};
	class SOAR_Flight_9: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit_2.p3d";
		uniforMClass = "SOAR_Flight_9";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerKhaki_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerKhaki_co.paa"};
	};
	class SOAR_Flight_10: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "Rangers";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "SOAR_Uniforms\models\flight_suit_2.p3d";
		uniforMClass = "SOAR_Flight_10";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SOAR_Uniforms\data\USAF_Overalls_Top_RangerTan_co.paa","SOAR_Uniforms\data\USAF_Overalls_pants_RangerTan_co.paa"};
	};
	class FlightSuit_OCP: B_Soldier_F
	{
		scope = 2;
		camouflage = 0;
		displayName = "[SOAR] Flight Suit OCP";
		scopeArsenal = 2;
		faction = "sof_rangers";
		author = "75thRRC Mod Team";
		model = "\SOAR_Uniforms\models\Flight_Suit3.p3d";
		uniforMClass = "FlightSuit_OCP";
		identityTypes[] = {"G_NATO_diver"};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
};
class CfgWeapons
{
	class Vest_Camo_Base;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class ItemCore;
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class Uniform_Base;
	class SOAR_Flight_1_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit OD";
		picture = "\SOAR_Uniforms\data\160th3.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_1";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="OD";
			Rolled="No";
		};
	};
	class SOAR_Flight_2_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Black";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_2";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Black";
			Rolled="No";
		};
	};
	class SOAR_Flight_3_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Gray";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_3";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Grey";
			Rolled="No";
		};
	};
	class SOAR_Flight_4_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Khaki";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_4";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Khaki";
			Rolled="No";
		};
	};
	class SOAR_Flight_5_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Tan";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_5";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Tan";
			Rolled="No";
		};
	};
	class SOAR_Flight_6_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit OD (Rolled)";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_6";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="OD";
			Rolled="Yes";
		};
	};
	class SOAR_Flight_7_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Black (Rolled)";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_7";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Black";
			Rolled="Yes";
		};
	};
	class SOAR_Flight_8_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Gray (Rolled)";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_8";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Grey";
			Rolled="Yes";
		};
	};
	class SOAR_Flight_9_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Khaki (Rolled)";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_9";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Khaki";
			Rolled="Yes";
		};
	};
	class SOAR_Flight_10_uniform: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit Tan (Rolled)";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniforMClass = "SOAR_Flight_10";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="Tan";
			Rolled="Yes";
		};
	};
	class FlightSuit_OCP: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "75thRRC Mod Team";
		displayName = "[SOAR] Flight Suit OCP";
		picture = "\SOAR_Uniforms\data\160th2.paa";
		model = "\SOAR_Uniforms\models\Flight_Suit3.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "\SOAR_Uniforms\models\Flight_Suit3.p3d";
			uniforMClass = "FlightSuit_OCP";
			containerClass = "Supply100";
			mass = 5;
			uniformType = "Neopren";
		};
		class XtdGearInfo
		{
			model="SOAR_flight_suit";
			Color="OCP";
			Rolled="No";
		};
	};
};
class cfgMods
{
	author = "75thRRC Mod Team";
	timepacked = "1664529174";
};

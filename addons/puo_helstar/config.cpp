#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class puo_helstar
	{
        name = "Helstar Strobe";
        author = "IDK";
        requiredVersion = 2.14;
		requiredAddons[]=
		{
			"ace_common"
		};
		units[]={};
		weapons[]={};
	};
};
class Extended_PreInit_EventHandlers
{
	puo_helstar_XEH_preInit="call compile preprocessFileLineNumbers '\puo_helstar\preInit.sqf'";
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class puo_helstar_on
				{
					displayName="Disable HEL-STAR";
					icon="\puo_helstar\data\helstar.paa";
					statement="call puo_helstar_fnc_disable";
					condition="call puo_helstar_fnc_canDisable";
					exceptions[]=
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					class puo_helstar_mode_b
					{
						displayName="Switch to VIS mode";
						icon="";
						statement="ace_player setVariable ['puo_helstar_mode' , false , true]; call puo_helstar_fnc_enable;";
						condition="ace_player getVariable ['puo_helstar_mode' , true]";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
					class puo_helstar_mode_a
					{
						displayName="Switch to IR mode";
						icon="";
						statement="ace_player setVariable ['puo_helstar_mode' , true , true]; call puo_helstar_fnc_enable;";
						condition="not (ace_player getVariable ['puo_helstar_mode' , true])";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
					class puo_helstar_function_1
					{
						displayName="Switch to function 2";
						icon="";
						statement="ace_player setVariable ['puo_helstar_function' , 2 , true]; call puo_helstar_fnc_enable;";
						condition="(ace_player getVariable ['puo_helstar_function' , 1]) == 1";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
					class puo_helstar_function_2
					{
						displayName="Switch to function 1";
						icon="";
						statement="ace_player setVariable ['puo_helstar_function' , 1 , true]; call puo_helstar_fnc_enable;";
						condition="(ace_player getVariable ['puo_helstar_function' , 1]) == 2";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
				};
				class puo_helstar_off
				{
					displayName="Enable HEL-STAR";
					icon="\puo_helstar\data\helstar.paa";
					statement="call puo_helstar_fnc_enable";
					condition="call puo_helstar_fnc_canEnable";
					exceptions[]=
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					class puo_helstar_mode_b
					{
						displayName="Switch to VIS mode";
						icon="";
						statement="ace_player setVariable ['puo_helstar_mode' , false , true]; playSound 'ace_map_flashlightClick';";
						condition="ace_player getVariable ['puo_helstar_mode' , true]";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
					class puo_helstar_mode_a
					{
						displayName="Switch to IR mode";
						icon="";
						statement="ace_player setVariable ['puo_helstar_mode' , true , true]; playSound 'ace_map_flashlightClick';";
						condition="not (ace_player getVariable ['puo_helstar_mode' , true])";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
					class puo_helstar_function_1
					{
						displayName="Switch to function 2";
						icon="";
						statement="ace_player setVariable ['puo_helstar_function' , 2 , true]; playSound 'ace_map_flashlightClick';";
						condition="(ace_player getVariable ['puo_helstar_function' , 1]) == 1";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
					class puo_helstar_function_2
					{
						displayName="Switch to function 1";
						icon="";
						statement="ace_player setVariable ['puo_helstar_function' , 1 , true]; playSound 'ace_map_flashlightClick';";
						condition="(ace_player getVariable ['puo_helstar_function' , 1]) == 2";
						exceptions[]=
						{
							"isNotInside",
							"isNotSwimming",
							"isNotSitting"
						};
					};
				};
			};
		};
	};
};
class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class puo_helstar_helstar: CBA_MiscItem
	{
		author="Puotek";
		scope=2;
		displayName="HEL-STAR 6";
		descriptionShort="CORE Survival HEL-STAR 6® Gen III+ Marker Light";
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
		picture="\puo_helstar\data\helstar.paa";
		ACE_asItem=1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1.4;
		};
	};
};

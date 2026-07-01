/***********************************************************************************************
 * Copyright (C) 2016-2018 {Iván Expósito - "By-Jokese"} <{byjokese@gmail.com}> - Rights Reserved
 *
 * This file is part of {FSG Medic Bag} Addon.
 *
 * FSG Medic Bag Addon can not be copied and/or distributed without the express
 * permission of Iván Expósito - "By-Jokese"
 ***********************************************************************************************/

#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class FSGm_MedicBag
	{
		name = "My Addon";
		author = "By-Jokese";
		url = "https://frontsidegaming.com";

		units[] = {"FSGm_MedicBag"};
		weapons[] = {"FSGm_ItemMedicBag"};
		requiredVersion = 1.0;
		requiredAddons[] = {"cba_settings"};
	};
};

/*class Extended_PreInit_EventHandlers
{
	class FSGm_MedicBag_preInit
	{
		init="call compile preProcessFileLineNumbers 'FSG_MedicBag\XEH_preInit.sqf'";
	};
};*/

class CfgVehicles
{
	class Man; // Extern
	class NATO_Box_Base; // Extern
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class FSGm_Place_MedicBag
				{
					displayName = "Place Medic Bag";
					//condition = "'FSG_ItemMedicBag' in (items ACE_player)";
					condition = "[_player,'FSGm_ItemMedicBag'] call ace_common_fnc_hasItem";
					//exceptions = {"notOnMap", "isNotInside", "isNotHandcuffed", "isNotSurrendering", "isNotSwimming", "isNotOnLadder"};
					statement = "[_player, 'FSGm_ItemMedicBag', 'FSGm_MedicBag', true] execVM '\FSG_MedicBag\fnc\fn_placePlaceables.sqf';";
					//statement = "[_player, 'FSG_ItemMedicBag', 'FSG_MedicBag', true] call FSG_fnc_placeObjects;";
					icon = "FSG_MedicBag\ui\menuicon.paa";
					showDisabled = 0;
					priority = 2.500000;
				};

				class FSGm_Place_MedicBagMil
				{
					displayName = "Place Mil. Medic Bag";
					//condition = "'FSG_ItemMedicBag' in (items ACE_player)";
					condition = "[_player,'FSGm_ItemMedicBagMil'] call ace_common_fnc_hasItem";
					//exceptions = {"notOnMap", "isNotInside", "isNotHandcuffed", "isNotSurrendering", "isNotSwimming", "isNotOnLadder"};
					statement = "[_player, 'FSGm_ItemMedicBagMil', 'FSGm_MedicBagMil', true] execVM '\FSG_MedicBag\fnc\fn_placePlaceables.sqf';";
					//statement = "[_player, 'FSG_ItemMedicBag', 'FSG_MedicBag', true] call FSG_fnc_placeObjects;";
					icon = "FSG_MedicBag\ui\menuicon.paa";
					showDisabled = 0;
					priority = 2.500000;
				};
			};
		};
	};

	class FSGm_MedicBag: NATO_Box_Base {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "By-Jokese";
		vehicleClass = "Ammo";
		displayName = "FSG Medic Bag";
		model = "\FSG_MedicBag\data\medicbag.p3d";
		editorPreview = "\FSG_MedicBag\ui\editorpreview.jpg";
		icon = "iconCrateWpns";
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
				distance = 5;
				condition = "true";
				class FSGm_Pickup {
					displayName = "Pick Up";
					distance = 5;
					condition = "true";
					statement = "[_player,_target,'FSGm_ItemMedicBag'] execVM '\FSG_MedicBag\fnc\fn_pickUp.sqf';";
					//statement = "_unit addItemToBackpack 'FSG_mItemMedicBag';_has_item = [_unit,'FSGm_ItemMedicBag'] call ace_common_fnc_hasItem;if(_has_item) then {	deleteVehicle _item;	hint 'Medic Bag saved inside Backpack';}else{	hint 'Backpack is full, the Medic Bag won't fit.';}";
					//statement = "deleteVehicle _target; _player addItemToBackpack ""FSGm_ItemMedicBag"";";
					showDisabled = 0;
					priority = 5;
					//icon = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
				};
			};
		};
		// Dragging
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 0;

        // Carrying
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};
        ace_dragging_carryDirection = 0;
	};

	class FSGm_MedicBagMil: NATO_Box_Base {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "By-Jokese";
		vehicleClass = "Ammo";
		displayName = "FSG Medic Bag Mil";
		model = "\FSG_MedicBag\data\medicbagMil.p3d";
		editorPreview = "\FSG_MedicBag\ui\editorpreview.jpg";
		icon = "iconCrateWpns";
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
				distance = 5;
				condition = "true";
				class FSGm_Pickup {
					displayName = "Pick Up";
					distance = 5;
					condition = "true";
					statement = "[_player,_target,'FSGm_ItemMedicBagMil'] execVM '\FSG_MedicBag\fnc\fn_pickUp.sqf';";
					//statement = "_unit addItemToBackpack 'FSG_mItemMedicBag';_has_item = [_unit,'FSGm_ItemMedicBag'] call ace_common_fnc_hasItem;if(_has_item) then {	deleteVehicle _item;	hint 'Medic Bag saved inside Backpack';}else{	hint 'Backpack is full, the Medic Bag won't fit.';}";
					//statement = "deleteVehicle _target; _player addItemToBackpack ""FSGm_ItemMedicBag"";";
					showDisabled = 0;
					priority = 5;
					//icon = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
				};
			};
		};
		// Dragging
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 0;

        // Carrying
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};
        ace_dragging_carryDirection = 0;
	};
};
class CfgWeapons {
	class ItemCore; // Extern
	class InventoryItem_Base_F; // Extern

	class FSGm_ItemCore: ItemCore {
		type = 4096;
		detectRange = -1;
		simulation = "ItemMineDetector";
		scope = 2;
		cost = 1000;
		side = 3;
		author = "By-Jokese";
	};

	class FSGm_ItemMedicBag: FSGm_ItemCore {
		displayName = "FSG - Medic Bag";
		scope = 2;
		author = "By-Jokese";
		model = "\FSG_MedicBag\data\medicbag.p3d";
		editorPreview = "\FSG_MedicBag\ui\editorpreview.jpg";
		picture = "\FSG_MedicBag\ui\icon.paa";
		class ItemInfo: InventoryItem_Base_F {
			mass = 45;
		};
	};

	class FSGm_ItemMedicBagMil: FSGm_ItemCore {
		displayName = "FSG - Medic Bag Mil";
		scope = 2;
		author = "By-Jokese";
		model = "\FSG_MedicBag\data\medicbagMil.p3d";
		editorPreview = "\FSG_MedicBag\ui\editorpreview.jpg";
		picture = "\FSG_MedicBag\ui\icon.paa";
		class ItemInfo: InventoryItem_Base_F {
			mass = 45;
		};
	};
};

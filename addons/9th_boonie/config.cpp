#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class 9th_boonie
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class nidboonie1: ItemCore
	{
		scope = 2;
		author = "9SFG Aux Team";
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Boonie Hat (MC)";
		picture = "\9th_boonie\ui\icon_booniehats_mc_ca.paa";
		ace_hearing_protection = 0.95;
		ace_hearing_lowerVolume = 0.5;
		model = "\9th_boonie\booniemc.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\9th_boonie\booniemc.p3d";
			modelSides[] = {3,1};
			armor = 75;
			passThrough = 0.5;
			ace_hearing_protection = 0.75;
			ace_hearing_lowerVolume = 0.15;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 75;
					passThrough = 0.5;
				};
			};
		};
	};
	class nidboonie4: ItemCore
	{
		scope = 2;
		author = "9SFG Aux Team";
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Boonie Hat (OD)";
		picture = "\9th_boonie\ui\icon_booniehats_mc_ca.paa";
		ace_hearing_protection = 0.95;
		ace_hearing_lowerVolume = 0.5;
		model = "\9th_boonie\boonieaor2.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\9th_boonie\boonieod.p3d";
			modelSides[] = {3,1};
			armor = 75;
			passThrough = 0.5;
			ace_hearing_protection = 0.75;
			ace_hearing_lowerVolume = 0.15;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 75;
					passThrough = 0.5;
				};
			};
		};
	};
	class nidboonie5: ItemCore
	{
		scope = 2;
		author = "9SFG Aux Team";
		weaponPoolAvailable = 1;
		displayName = "[2 Batt 75th Ranger] Boonie Hat (Tan)";
		picture = "\9th_boonie\ui\icon_booniehats_mc_ca.paa";
		ace_hearing_protection = 0.95;
		ace_hearing_lowerVolume = 0.5;
		model = "\9th_boonie\boonieaor2.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\9th_boonie\boonietan.p3d";
			modelSides[] = {3,1};
			armor = 75;
			passThrough = 0.5;
			ace_hearing_protection = 0.75;
			ace_hearing_lowerVolume = 0.15;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 75;
					passThrough = 0.5;
				};
			};
		};
	};
};

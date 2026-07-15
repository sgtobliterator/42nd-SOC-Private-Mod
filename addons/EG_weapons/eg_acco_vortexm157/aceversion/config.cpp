#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class EG_weapons_EG_ACCO_VortexM157_FCS
	{
		weapons[] = {"EG_ACCO_VortexM157","EG_ACCO_VortexM157_M250"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_xm157"};
		skipWhenMissingDependencies = 1;
		units[] = {"Item_EG_ACCO_VortexM157","Item_EG_ACCO_VortexM157_M250"};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class EG_ACCO_VortexM157: ItemCore
	{
		author = "eg&真红战队";
		scope = 1;
		displayName = "Vortex M157 (FCS)";
		descriptionShort = "";
		picture = "\EG_weapons\EG_ACCO_VortexM157\data\UI\icon.paa";
		model = "\EG_weapons\EG_ACCO_VortexM157\EG_ACCO_VortexM157";
		inertia = 0.3;
		ACE_ScopeHeightAboveRail = 5.52874;
		class CBA_ScriptedOptic
		{
			bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
			bodyTextureSize = 1;
			hideMagnification = 1;
			disableTilt = 0;
		};
		weaponInfoType = "ace_xm157_info";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
			class OpticsModes
			{
				class lpvo
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class EG_ACCO_VortexM157_m250: ItemCore
	{
		author = "eg&真红战队";
		scope = 2;
		displayName = "Vortex M157 (FCS/M250)";
		descriptionShort = "";
		picture = "\EG_weapons\EG_ACCO_VortexM157\data\UI\icon.paa";
		model = "\EG_weapons\EG_ACCO_VortexM157\EG_ACCO_VortexM157";
		inertia = 0.3;
		ACE_ScopeHeightAboveRail = 5.52874;
		class CBA_ScriptedOptic
		{
			bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
			bodyTextureSize = 1;
			hideMagnification = 1;
			disableTilt = 0;
		};
		weaponInfoType = "ace_xm157_info";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
			class OpticsModes
			{
				class lpvo
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class iron
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsZoomMin = 0.275;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Item_EG_ACCO_VortexM157: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "VortexM157 (FCS)";
		author = "eg&真红战队";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class EG_ACCO_VortexM157
			{
				name = "EG_ACCO_VortexM157";
				count = 1;
			};
		};
	};
	class Item_EG_ACCO_VortexM157_m250: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "VortexM157 (FCS/M250)";
		author = "eg&真红战队";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class EG_ACCO_VortexM157_m250
			{
				name = "EG_ACCO_VortexM157_m250";
				count = 1;
			};
		};
	};
};
class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
	class compatibleItems
	{
		EG_ACCO_VortexM157 = 1;
		EG_ACCO_VortexM157_m250 = 1;
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		EG_ACCO_VortexM157 = 1;
		EG_ACCO_VortexM157_m250 = 1;
	};
};
class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		EG_ACCO_VortexM157 = 1;
		EG_ACCO_VortexM157_m250 = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		EG_ACCO_VortexM157 = 1;
		EG_ACCO_VortexM157_m250 = 1;
	};
};
class cfgMods
{
	author = "YRUSoPractised";
	timepacked = "1759676247";
};

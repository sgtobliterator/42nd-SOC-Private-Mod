class CfgPatches
{
	class EG_weapons_EG_ACCO_VortexM157
	{
		weapons[] = {"EG_ACCO_VortexM157_NF_pip","EG_ACCO_VortexM157_NF_2D","EG_ACCO_VortexM157_M250_NF_pip","EG_ACCO_VortexM157_M250_NF_2D"};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_optics"};
		units[] = {"Item_EG_ACCO_VortexM157_NF_PIP","Item_EG_ACCO_VortexM157_NF_2D","Item_EG_ACCO_VortexM157_M250_NF_PIP","Item_EG_ACCO_VortexM157_M250_NF_2D"};		
		author = "YRUSoPractised";
	};
};
class CBA_PIPItems
{
	EG_ACCO_VortexM157_NF_2D = "EG_ACCO_VortexM157_NF_pip";
	EG_ACCO_VortexM157_m250_NF_2D = "EG_ACCO_VortexM157_m250_NF_pip";
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class EG_ACCO_VortexM157_NF_pip: ItemCore
	{
		author = "eg&真红战队";
		scope = 1;
		displayName = "Vortex M157 (PIP)";
		model = "\EG_weapons\EG_ACCO_VortexM157\EG_ACCO_VortexM157";
		picture = "\EG_weapons\EG_ACCO_VortexM157\data\UI\icon.paa";
		descriptionShort = "";
		ACE_ScopeHeightAboveRail = 4.8;
		ACE_ScopeAdjust_Vertical[] = {-4,20};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		inertia = 0.052;
		class CBA_ScriptedOptic
		{
			bodyTexture = "\EG_weapons\EG_ACCO_VortexM157\data\Scope_Body_ca.paa";
			bodyTextureSize = 1;
			opticsPPEffects[] = {"CBA_OpticsRadBlur1"};
			reticleDetailTextures[] = {{0,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Blur_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Blur_ca.paa"},{2,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_ca.paa"},{4,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Detailed_ca.paa",0.5,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Detailed_ca.paa"}};
			minMagnificationReticleScale[] = {1,0.3};
			maxMagnificationReticleScale[] = {8,2.4};
			manualReticleNightSwitch = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			optics = 1;
			opticType = 1;
			modelOptics = "\EG_weapons\EG_ACCO_VortexM157\cba_optic_small_pip.p3d";
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
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400};
					discreteDistanceInitIndex = "0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 1400;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
				};
			};
		};
	};
	class EG_ACCO_VortexM157_m250_NF_pip: ItemCore
	{
		author = "eg&真红战队";
		scope = 1;
		displayName = "Vortex M157 (M250/PIP)";
		model = "\EG_weapons\EG_ACCO_VortexM157\EG_ACCO_VortexM157";
		picture = "\EG_weapons\EG_ACCO_VortexM157\data\UI\icon.paa";
		descriptionShort = "";
		ACE_ScopeHeightAboveRail = 4.8;
		ACE_ScopeAdjust_Vertical[] = {-4,20};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		inertia = 0.052;
		class CBA_ScriptedOptic
		{
			bodyTexture = "\EG_weapons\EG_ACCO_VortexM157\data\Scope_Body_ca.paa";
			bodyTextureSize = 1;
			opticsPPEffects[] = {"CBA_OpticsRadBlur1"};
			reticleDetailTextures[] = {{0,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Blur_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Blur_ca.paa"},{2,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_ca.paa"},{4,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Detailed_ca.paa",0.5,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Detailed_ca.paa"}};
			minMagnificationReticleScale[] = {1,0.3};
			maxMagnificationReticleScale[] = {8,2.4};
			manualReticleNightSwitch = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			optics = 1;
			opticType = 1;
			modelOptics = "\EG_weapons\EG_ACCO_VortexM157\cba_optic_small_pip.p3d";
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
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400};
					discreteDistanceInitIndex = "0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 1400;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
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
	class EG_ACCO_VortexM157_NF_2D: ItemCore
	{
		author = "eg&真红战队";
		scope = 1;
		displayName = "Vortex M157 (2D)";
		model = "\EG_weapons\EG_ACCO_VortexM157\EG_ACCO_VortexM157";
		picture = "\EG_weapons\EG_ACCO_VortexM157\data\UI\icon.paa";
		descriptionShort = "";
		ACE_ScopeHeightAboveRail = 4.8;
		ACE_ScopeAdjust_Vertical[] = {-4,20};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		inertia = 0.052;
		class CBA_ScriptedOptic
		{
			bodyTexture = "\EG_weapons\EG_ACCO_VortexM157\data\Scope_Body_ca.paa";
			bodyTextureSize = 1;
			opticsPPEffects[] = {"CBA_OpticsRadBlur1"};
			reticleDetailTextures[] = {{0,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Blur_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Blur_ca.paa"},{2,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_ca.paa"},{4,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Detailed_ca.paa",0.5,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Detailed_ca.paa"}};
			minMagnificationReticleScale[] = {1,0.3};
			maxMagnificationReticleScale[] = {8,2.4};
			manualReticleNightSwitch = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			optics = 1;
			opticType = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_small_70.p3d";
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
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400};
					discreteDistanceInitIndex = "0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 1400;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
				};
			};
		};
	};
	class EG_ACCO_VortexM157_m250_NF_2D: ItemCore
	{
		author = "eg&真红战队";
		scope = 2;
		displayName = "Vortex M157 (M250/2D)";
		model = "\EG_weapons\EG_ACCO_VortexM157\EG_ACCO_VortexM157";
		picture = "\EG_weapons\EG_ACCO_VortexM157\data\UI\icon.paa";
		descriptionShort = "";
		ACE_ScopeHeightAboveRail = 4.8;
		ACE_ScopeAdjust_Vertical[] = {-4,20};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		inertia = 0.052;
		class CBA_ScriptedOptic
		{
			bodyTexture = "\EG_weapons\EG_ACCO_VortexM157\data\Scope_Body_ca.paa";
			bodyTextureSize = 1;
			opticsPPEffects[] = {"CBA_OpticsRadBlur1"};
			reticleDetailTextures[] = {{0,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Blur_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Blur_ca.paa"},{2,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_ca.paa",1,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_ca.paa"},{4,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Illum_Detailed_ca.paa",0.5,"\EG_weapons\EG_ACCO_VortexM157\data\Reticles\M157_Reticle_Detailed_ca.paa"}};
			minMagnificationReticleScale[] = {1,0.3};
			maxMagnificationReticleScale[] = {8,2.4};
			manualReticleNightSwitch = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			optics = 1;
			opticType = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_small_70.p3d";
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
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400};
					discreteDistanceInitIndex = "0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 1400;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
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
	class Item_EG_ACCO_VortexM157_NF_PIP: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "VortexM157 (PIP)";
		author = "eg&真红战队";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_TopSlot_Optics";
		vehicleClass = "WeaponAccessories";
		class TransportItems
		{
			class EG_ACCO_VortexM157_NF_pip
			{
				name = "EG_ACCO_VortexM157_NF_pip";
				count = 1;
			};
		};
	};
	class Item_EG_ACCO_VortexM157_NF_2D: Item_EG_ACCO_VortexM157_NF_PIP
	{
		displayName = "VortexM157 (2D)";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class EG_ACCO_VortexM157_NF_2D
			{
				name = "EG_ACCO_VortexM157_NF_2D";
				count = 1;
			};
		};
	};
	class Item_EG_ACCO_VortexM157_m250_NF_PIP: Item_EG_ACCO_VortexM157_NF_PIP
	{
		displayName = "VortexM157 (M250/PIP)";
		class TransportItems
		{
			class EG_ACCO_VortexM157_m250_NF_pip
			{
				name = "EG_ACCO_VortexM157_m250_NF_pip";
				count = 1;
			};
		};
	};
	class Item_EG_ACCO_VortexM157_m250_NF_2D: Item_EG_ACCO_VortexM157_NF_PIP
	{
		displayName = "VortexM157 (M250/2D)";
		class TransportItems
		{
			class EG_ACCO_VortexM157_m250_NF_2D
			{
				name = "EG_ACCO_VortexM157_m250_NF_2D";
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
		EG_ACCO_VortexM157_NF_2D = 1;
		EG_ACCO_VortexM157_NF_pip = 1;
		EG_ACCO_VortexM157_m250_NF_2D = 1;
		EG_ACCO_VortexM157_m250_NF_pip = 1;
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		EG_ACCO_VortexM157_NF_2D = 1;
		EG_ACCO_VortexM157_NF_pip = 1;
		EG_ACCO_VortexM157_m250_NF_2D = 1;
		EG_ACCO_VortexM157_m250_NF_pip = 1;
	};
};
class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		EG_ACCO_VortexM157_NF_2D = 1;
		EG_ACCO_VortexM157_NF_pip = 1;
		EG_ACCO_VortexM157_m250_NF_2D = 1;
		EG_ACCO_VortexM157_m250_NF_pip = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		EG_ACCO_VortexM157_NF_2D = 1;
		EG_ACCO_VortexM157_NF_pip = 1;
		EG_ACCO_VortexM157_m250_NF_2D = 1;
		EG_ACCO_VortexM157_m250_NF_pip = 1;
	};
};
class cfgMods
{
	author = "YRUSoPractised";
	timepacked = "1759676247";
};

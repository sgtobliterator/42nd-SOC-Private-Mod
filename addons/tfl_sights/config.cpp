class CfgPatches
{
	class tfl_sights
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"asdg_jointrails",
			"cba_main"
		};
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		Louetta_vortex=1;
		louetta_wilcox_g33_xps3=1;
		louetta_wilcox_g33_xps3_flip=1;
		louetta_matty_wilcox_g33_xps3=1;
		louetta_matty_wilcox_g33_xps3_flip=1;
		louetta_wilcox_g33_xps3_b=1;
		louetta_wilcox_g33_xps3_flip_b=1;
		Louetta_wilcox_g33_T2=1;
		Louetta_wilcox_g33_T2_flip=1;
		Louetta_acc_g33_T2=1;
		Louetta_acc_g33_T2_flip=1;
		louetta_t2_larue=1;
		louetta_t2_wilcox=1;
		louetta_t2_unity=1;
		louetta_exps3=1;
		louetta_t2_unity_blk=1;
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class optic_Holosight;
	class Louetta_vortex: ItemCore
	{
		displayName="Vortex Razor GEN III";
		author="Louetta";
		picture="tfl_sights\ui\vortex.paa";
		model="\tfl_sights\vortex.p3d";
		scope=2;
		descriptionShort="Sponsored by bLaCkOuT $21 0 Cents";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\RH_acc\RH_LWTS_optic";
			class OpticsModes
			{
				class scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsFlare="false";
					opticsDisablePeripherialVision=1;
					opticsZoomMin="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					modelOptics="tfl_sights\ret\Vortex_1x.p3d";
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					distanceZoomMin=300;
					distanceZoomMax=1200;
				};
			};
		};
		inertia=0.1;
	};
	class louetta_wilcox_g33_xps3: ItemCore
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_xps3_ca.paa";
		scope=2;
		displayName="Wilcox G33 XPS3";
		author="Louetta";
		descriptionShort="";
		weaponInfoType="rhs_rscOptics_combo_optics";
		model="tfl_sights\xps_wilcox.p3d";
		rhs_accessory_next="louetta_wilcox_g33_xps3_flip";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=6;
			RMBhint="Magnifier";
			weaponInfoType="RscWeaponZeroing";
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech";
			class OpticsModes
			{
				class MAG
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_g33_Blur"
					};
					opticsZoomMin=0.083329998;
					opticsZoomMax=0.083329998;
					opticsZoomInit=0.083329998;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class louetta_wilcox_g33_xps3_flip: optic_Holosight
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_xps3_flip_ca.paa";
		scope=1;
		displayName="Wilcox G33 XPS3";
		author="Louetta";
		descriptionShort="";
		weaponInfoType="rhs_rscOptics_combo_optics";
		model="tfl_sights\xps_wilcox_flip.p3d";
		rhs_accessory_next="louetta_wilcox_g33_xps3";
		inertia=0;
	};
	class louetta_wilcox_g33_xps3_b: ItemCore
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_xps3_ca.paa";
		scope=2;
		displayName="Wilcox G33 XPS3 Black";
		author="Louetta";
		descriptionShort="";
		weaponInfoType="rhs_rscOptics_combo_optics";
		model="tfl_sights\xps_wilcox_b.p3d";
		rhs_accessory_next="louetta_wilcox_g33_xps3_flip_b";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=6;
			RMBhint="Magnifier";
			weaponInfoType="RscWeaponZeroing";
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech";
			class OpticsModes
			{
				class MAG
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_g33_Blur"
					};
					opticsZoomMin=0.083329998;
					opticsZoomMax=0.083329998;
					opticsZoomInit=0.083329998;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class louetta_wilcox_g33_xps3_flip_b: optic_Holosight
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_xps3_flip_ca.paa";
		scope=1;
		displayName="Wilcox G33 XPS3 Black";
		author="Louetta";
		descriptionShort="";
		weaponInfoType="rhs_rscOptics_combo_optics";
		model="tfl_sights\xps_wilcox_flip_b.p3d";
		rhs_accessory_next="louetta_wilcox_g33_xps3_b";
		inertia=0;
	};
	class louetta_t2_larue: ItemCore
	{
		scope=2;
		author="Louetta";
		displayName="LT751 T2";
		model="tfl_sights\LT751.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0.1;
	};
	class louetta_t2_wilcox: ItemCore
	{
		scope=2;
		author="Louetta";
		displayName="Wilcox LT751 T2";
		model="tfl_sights\LT751_wilcox.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0.1;
	};
	class louetta_t2_unity: ItemCore
	{
		scope=2;
		author="Louetta";
		displayName="Unity T2";
		model="tfl_sights\Unity.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0.1;
	};
	class louetta_t2_unity_blk: ItemCore
	{
		scope=2;
		author="Louetta";
		displayName="Unity T2 Black";
		model="tfl_sights\Unity_blk.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0.1;
	};
	class Louetta_acc_g33_T2: louetta_wilcox_g33_xps3_b
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_T1_ca.paa";
		scope=2;
		displayName="LT752 T2 + G33";
		model="tfl_sights\LT751_G33.p3d";
		rhs_accessory_next="Louetta_acc_g33_T2_flip";
	};
	class Louetta_acc_g33_T2_flip: louetta_wilcox_g33_xps3_flip_b
	{
		scope=1;
		displayName="LT752 T2 + G33";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_T1_flip_ca.paa";
		model="tfl_sights\LT751_G33_flip.p3d";
		rhs_accessory_next="Louetta_acc_g33_T2";
	};
	class Louetta_wilcox_g33_T2: louetta_wilcox_g33_xps3_b
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_T1_ca.paa";
		scope=2;
		displayName="Wilcox LT752 T2 + G33";
		model="tfl_sights\LT_wilcox_g33.p3d";
		rhs_accessory_next="Louetta_wilcox_g33_T2_flip";
	};
	class Louetta_wilcox_g33_T2_flip: louetta_wilcox_g33_xps3_flip_b
	{
		scope=1;
		displayName="Wilcox LT752 T2 + G33";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_T1_flip_ca.paa";
		model="tfl_sights\LT_wilcox_G33_flip.p3d";
		rhs_accessory_next="Louetta_wilcox_g33_T2";
	};
	class louetta_exps3: optic_Holosight
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_EOTECH_ca.paa";
		scope=2;
		displayName="EXPS3 Tano";
		author="Louetta";
		descriptionShort="";
		weaponInfoType="rhs_rscOptics_combo_optics";
		model="tfl_sights\exps3.p3d";
		inertia=0;
	};
	class louetta_matty_wilcox_g33_xps3: ItemCore
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_xps3_ca.paa";
		scope=2;
		displayName="Wilcox Matty G33 XPS3";
		author="Louetta";
		descriptionShort="";
		weaponInfoType="rhs_rscOptics_combo_optics";
		model="gatekeep_weapons\matty\matty_wilcox.p3d";
		rhs_accessory_next="louetta_matty_wilcox_g33_xps3_flip";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=6;
			RMBhint="Magnifier";
			weaponInfoType="RscWeaponZeroing";
			optics=1;
			modelOptics="\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech";
			class OpticsModes
			{
				class MAG
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1",
						"rhs_g33_Blur"
					};
					opticsZoomMin=0.083329998;
					opticsZoomMax=0.083329998;
					opticsZoomInit=0.083329998;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class louetta_matty_wilcox_g33_xps3_flip: optic_Holosight
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_g33_xps3_flip_ca.paa";
		scope=1;
		displayName="Wilcox Matty G33 XPS3";
		author="Louetta";
		descriptionShort="";
		weaponInfoType="rhs_rscOptics_combo_optics";
		model="gatekeep_weapons\matty\matty_wilcox_flip.p3d";
		rhs_accessory_next="louetta_matty_wilcox_g33_xps3";
		inertia=0;
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1627099617";
};

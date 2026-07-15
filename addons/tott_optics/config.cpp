class CfgPatches
{
	class TOTT_Optics
	{
		requiredaddons[]=
		{
			"A3_Data_F",
			"cba_main",
			"cba_optics"
		};
		requiredversion=0.1;
		units[]={};
		weapons[]=
		{
			"TOTT_Razor_16_Geissele",
			"TOTT_Razor_16_T2_Geissele",
			"TOTT_Razor_16_RMR_Geissele",
			"TOTT_Razor_110_Geissele",
			"TOTT_Razor_110_T2_Geissele",
			"TOTT_Razor_110_RMR_Geissele",
			"TOTT_Leu_CQBSS_Geissele"
		};
		author="TOTT";
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		TOTT_t2_lt751=1;
		TOTT_t2_lt751_fts=1;
		TOTT_t2_lt751_g33=1;
		TOTT_t2_lt751_g33_f=1;
		TOTT_t2_lt660=1;
		TOTT_t2_lt660_tan_g33=1;
		TOTT_t2_lt660_tan_g33_f=1;
		TOTT_t2_gmicro13=1;
		TOTT_t2_gmicro193=1;
		TOTT_XPS3=1;
		TOTT_XPS3_FTS=1;
		TOTT_XPS3_g33=1;
		TOTT_XPS3_g33_f=1;
		TOTT_XPS3_LT101=1;
		TOTT_XPS3_LT101_FTS=1;
		TOTT_XPS3_LT101_g33=1;
		TOTT_XPS3_LT101_g33_f=1;
		TOTT_EXPS3_Tan=1;
		TOTT_EXPS3_Tan_G33=1;
		TOTT_EXPS3_Tan_G33_f=1;
		TOTT_Razor_16_Geissele=1;
		TOTT_Razor_16_Geissele_PIP=1;
		TOTT_Razor_16_T2_Geissele=1;
		TOTT_Razor_16_T2_Geissele_PIP=1;
		TOTT_Razor_16_RMR_Geissele=1;
		TOTT_Razor_16_RMR_Geissele_PIP=1;
		TOTT_Razor_110_Geissele=1;
		TOTT_Razor_110_Geissele_PIP=1;
		TOTT_Razor_110_T2_Geissele=1;
		TOTT_Razor_110_T2_Geissele_PIP=1;
		TOTT_Razor_110_RMR_Geissele=1;
		TOTT_Razor_110_RMR_Geissele_PIP=1;
		TOTT_Leu_CQBSS_Geissele=1;
		TOTT_Leu_CQBSS_Geissele_PIP=1;
		TOTT_Leu_CQBSS_RMR_Geissele=0;
		TOTT_Leu_CQBSS_RMR_Geissele_PIP=0;
		TOTT_Leu_CQBSS_T2_Geissele=0;
		TOTT_Leu_CQBSS_T2_Geissele_PIP=0;
		TOTT_t2_unity=1;
		TOTT_t2_unity_g33=1;
		TOTT_t2_unity_g33_f=1;
		TOTT_t2_unity_blk=1;
		TOTT_t2_unity_blk_g33=1;
		TOTT_t2_unity_blk_g33_f=1;
		TOTT_romeo4t=1;
		TOTT_romeo4t_fts=1;
		TOTT_romeo4t_g33=1;
		TOTT_romeo4t_g33_f=1;
		TOTT_romeo4t_2=1;
		TOTT_romeo4t_fts_2=1;
		TOTT_romeo4t_g33_2=1;
		TOTT_romeo4t_g33_f_2=1;
		TOTT_t2_leap=1;
		TOTT_t2_leap_g33=1;
		TOTT_t2_leap_g33_f=1;
		TOTT_t2_leap_caps=1;
	};
};
class TOTT_Wilcox: asdg_OpticRail
{
	class compatibleItems
	{
		TOTT_t2_lt751=1;
		TOTT_t2_lt751_fts=1;
		TOTT_t2_lt751_g33=1;
		TOTT_t2_lt751_g33_f=1;
		TOTT_XPS3=1;
		TOTT_XPS3_FTS=1;
		TOTT_XPS3_g33=1;
		TOTT_XPS3_g33_f=1;
		TOTT_romeo4t=1;
		TOTT_romeo4t_fts=1;
		TOTT_romeo4t_g33=1;
		TOTT_romeo4t_g33_f=1;
		TOTT_romeo4t_2=1;
		TOTT_romeo4t_fts_2=1;
		TOTT_romeo4t_g33_2=1;
		TOTT_romeo4t_g33_f_2=1;
	};
};
class CBA_PIPItems
{
	TOTT_Razor_16_Geissele="TOTT_Razor_16_Geissele_PIP";
	TOTT_Razor_16_T2_Geissele="TOTT_Razor_16_T2_Geissele_PIP";
	TOTT_Razor_110_Geissele="TOTT_Razor_110_Geissele_PIP";
	TOTT_Razor_110_T2_Geissele="TOTT_Razor_110_T2_Geissele_PIP";
	TOTT_Razor_110_RMR_Geissele="TOTT_Razor_110_RMR_Geissele_PIP";
	TOTT_Razor_16_RMR_Geissele="TOTT_Razor_16_RMR_Geissele_PIP";
	TOTT_Leu_CQBSS_Geissele="TOTT_Leu_CQBSS_Geissele_PIP";
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	class optic_Arco;
	class TOTT_Razor_16_Geissele: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="Razor 1-6 Geissele";
		picture="\tott_optics\UI\Razor6_CA.paa";
		model="\tott_optics\lpvo\razor6.p3d";
		descriptionShort="Razor 1-6";
		weaponInfoType="CBA_ScriptedOptic_zooming";
		ACE_ScopeHeightAboveRail=3.9116001;
		ACE_ScopeAdjust_Vertical[]={-4,20};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		inertia=0.050000001;
		class CBA_ScriptedOptic
		{
			opticsPPEffects[]=
			{
				"CBA_OpticsRadBlur4"
			};
			minMagnificationReticleScale[]={1,1};
			maxMagnificationReticleScale[]={1,1};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\tott_optics\data\Razor\Razor16_Reticle_CA.paa",
					1
				}
			};
			bodyTexture="\tott_optics\data\Razor\Scope_Body_CA.paa";
			bodyTextureSize=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex="0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					cameraDir="";
				};
				class Ironsights: Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.47499999;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
				};
			};
		};
	};
	class TOTT_Razor_16_Geissele_PIP: TOTT_Razor_16_Geissele
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_16_T2_Geissele: TOTT_Razor_16_Geissele
	{
		scope=2;
		scopeArsenal=2;
		author="TOTT";
		displayname="Razor 1-6 Geissle + T2";
		descriptionShort="Razor 1-6 T2";
		picture="\tott_optics\UI\Razor6_CA.paa";
		model="\tott_optics\lpvo\razor6_t2.p3d";
	};
	class TOTT_Razor_16_T2_Geissele_PIP: TOTT_Razor_16_T2_Geissele
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_16_RMR_Geissele: TOTT_Razor_16_Geissele
	{
		scope=2;
		scopeArsenal=2;
		author="TOTT";
		displayname="Razor 1-6 Geissle + RMR";
		descriptionShort="Razor 1-6 RMR";
		picture="\tott_optics\UI\Razor6_CA.paa";
		model="\tott_optics\lpvo\razor6_rmr.p3d";
	};
	class TOTT_Razor_16_RMR_Geissele_PIP: TOTT_Razor_16_RMR_Geissele
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_110_Geissele: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="Razor 1-10 Geissele";
		picture="\tott_optics\UI\Razor10_CA.paa";
		model="\tott_optics\lpvo\razor10.p3d";
		descriptionShort="Razor 1-10";
		weaponInfoType="CBA_ScriptedOptic_zooming";
		ACE_ScopeHeightAboveRail=3.9116001;
		ACE_ScopeAdjust_Vertical[]={-4,20};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		inertia=0.050000001;
		class CBA_ScriptedOptic
		{
			opticsPPEffects[]=
			{
				"CBA_OpticsRadBlur4"
			};
			minMagnificationReticleScale[]={1,0.30000001};
			maxMagnificationReticleScale[]={10,3};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\tott_optics\data\Razor\Razor110_Reticle_Blur_ca.paa",
					1,
					"\tott_optics\data\Razor\Razor110_Reticle_Blur_ca.paa"
				},
				
				{
					2.5,
					"\tott_optics\data\Razor\Razor110_Reticle_ca.paa",
					1,
					"\tott_optics\data\Razor\Razor110_Reticle_ca.paa"
				},
				
				{
					5,
					"\tott_optics\data\Razor\Razor110_Reticle_Detailed_ca.paa",
					0.5,
					"\tott_optics\data\Razor\Razor110_Reticle_Detailed_ca.paa"
				}
			};
			manualReticleNightSwitch=1;
			hideRedDotMagnification=1.1;
			bodyTexture="\tott_optics\data\Razor\Scope_Body_CA.paa";
			bodyTextureSize=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="10 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex="0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					cameraDir="";
				};
				class Ironsights: Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.47499999;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
				};
			};
		};
	};
	class TOTT_Razor_110_Geissele_PIP: TOTT_Razor_110_Geissele
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_110_T2_Geissele: TOTT_Razor_110_Geissele
	{
		scope=2;
		scopeArsenal=2;
		author="TOTT";
		displayname="Razor 1-10 Geissle + T2";
		descriptionShort="Razor 1-10 T2";
		picture="\tott_optics\UI\Razor10_CA.paa";
		model="\tott_optics\lpvo\razor10_t2.p3d";
	};
	class TOTT_Razor_110_T2_Geissele_PIP: TOTT_Razor_110_T2_Geissele
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_110_RMR_Geissele: TOTT_Razor_110_Geissele
	{
		scope=2;
		scopeArsenal=2;
		author="TOTT";
		displayname="Razor 1-10 Geissle + RMR";
		descriptionShort="Razor 1-10 RMR";
		picture="\tott_optics\UI\Razor10_CA.paa";
		model="\tott_optics\lpvo\razor10_rmr.p3d";
	};
	class TOTT_Razor_110_RMR_Geissele_PIP: TOTT_Razor_110_RMR_Geissele
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Leu_CQBSS_Geissele: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="CQBSS 1.1-8 Geissele";
		picture="\tott_optics\UI\CQBSS_CA.paa";
		model="\tott_optics\lpvo\cqbss.p3d";
		descriptionShort="CQBSS 1.1-8";
		weaponInfoType="CBA_ScriptedOptic_zooming";
		ACE_ScopeHeightAboveRail=3.9116001;
		ACE_ScopeAdjust_Vertical[]={-4,20};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		inertia=0.050000001;
		class CBA_ScriptedOptic
		{
			opticsPPEffects[]=
			{
				"CBA_OpticsRadBlur4"
			};
			minMagnificationReticleScale[]={1,0.60000002};
			maxMagnificationReticleScale[]={8,4};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\tott_optics\data\CQBSS\h27_blurred_ca.paa",
					1,
					"\tott_optics\data\CQBSS\h27_blurred_ca.paa"
				},
				
				{
					2.5,
					"\tott_optics\data\CQBSS\h27_ca.paa",
					1,
					"\tott_optics\data\CQBSS\h27_ca.paa"
				},
				
				{
					5,
					"\tott_optics\data\CQBSS\h27_detailed_ca.paa",
					0.33329999,
					"\tott_optics\data\CQBSS\h27_detailed_ca.paa"
				}
			};
			manualReticleNightSwitch=1;
			hideRedDotMagnification=1.2;
			bodyTexture="\tott_optics\data\CQBSS\Scope_Body_CA.paa";
			bodyTextureSize=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex="0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					cameraDir="";
				};
				class Ironsights: Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.47499999;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
				};
			};
		};
	};
	class TOTT_Leu_CQBSS_Geissele_PIP: TOTT_Leu_CQBSS_Geissele
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_optic_base: optic_Arco
	{
		author="TOTT";
		descriptionshort="";
		displayname="optic base";
		model="";
		tmr_optics_enhanced=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.47499999;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
	};
	class TOTT_t2_lt751: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 LT751";
		descriptionshort="";
		model="TOTT_Optics\t2\T2.p3d";
	};
	class TOTT_t2_lt751_fts: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 LT751 FTS";
		descriptionshort="";
		model="TOTT_Optics\t2\T2_fts.p3d";
	};
	class TOTT_t2_lt751_g33: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 LT751 G33";
		model="TOTT_Optics\t2\T2_g33.p3d";
		MRT_SwitchItemNextClass="TOTT_t2_lt751_g33_f";
		MRT_SwitchItemPrevClass="TOTT_t2_lt751_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_t2_lt751_g33_f: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 LT751 G33";
		descriptionshort="";
		scope=1;
		MRT_SwitchItemNextClass="TOTT_t2_lt751_g33";
		MRT_SwitchItemPrevClass="TOTT_t2_lt751_g33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\t2\T2_G33_F.p3d";
	};
	class TOTT_t2_lt660: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 LT660";
		descriptionshort="";
		model="TOTT_Optics\t2\lt660\T2.p3d";
	};
	class TOTT_t2_lt660_Tan_G33: TOTT_optic_base
	{
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 LT660 + G33 (Tan)";
		model="TOTT_Optics\t2\lt660\T2_tan_g33.p3d";
		MRT_SwitchItemNextClass="TOTT_t2_lt660_Tan_g33_f";
		MRT_SwitchItemPrevClass="TOTT_t2_lt660_Tan_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_t2_lt660_Tan_G33_f: TOTT_optic_base
	{
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 LT660 + G33 (Tan)";
		descriptionshort="";
		scope=1;
		MRT_SwitchItemNextClass="TOTT_t2_lt660_Tan_g33";
		MRT_SwitchItemPrevClass="TOTT_t2_lt660_Tan_g33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\t2\lt660\T2_tan_g33_f.p3d";
	};
	class TOTT_t2_gmicro13: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 Geissele SP";
		descriptionshort="";
		model="TOTT_Optics\t2\g\T2.p3d";
	};
	class TOTT_t2_gmicro193: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 Geissele SP 193";
		descriptionshort="";
		model="TOTT_Optics\t2\g\T2_2.p3d";
	};
	class TOTT_t2_unity: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 Unity (Tan)";
		descriptionshort="";
		model="TOTT_Optics\t2\u\T2.p3d";
	};
	class TOTT_t2_unity_G33: TOTT_optic_base
	{
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 Unity + G33 (Tan)";
		model="TOTT_Optics\t2\u\T2_G33.p3d";
		MRT_SwitchItemNextClass="TOTT_t2_unity_g33_f";
		MRT_SwitchItemPrevClass="TOTT_t2_unity_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_t2_unity_G33_f: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 Unity + G33 (Tan)";
		descriptionshort="";
		MRT_SwitchItemNextClass="TOTT_t2_unity_g33";
		MRT_SwitchItemPrevClass="TOTT_t2_unity_g33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\t2\u\T2_G33_f.p3d";
	};
	class TOTT_t2_unity_blk: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 Unity (Blk)";
		descriptionshort="";
		model="TOTT_Optics\t2\u\T2_blk.p3d";
	};
	class TOTT_t2_unity_blk_G33: TOTT_optic_base
	{
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 Unity + G33 (Blk)";
		model="TOTT_Optics\t2\u\T2_Blk_G33.p3d";
		MRT_SwitchItemNextClass="TOTT_t2_unity_blk_g33_f";
		MRT_SwitchItemPrevClass="TOTT_t2_unity_blk_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_t2_unity_blk_G33_f: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 Unity + G33 (Blk)";
		descriptionshort="";
		MRT_SwitchItemNextClass="TOTT_t2_unity_blk_g33";
		MRT_SwitchItemPrevClass="TOTT_t2_unity_blk_g33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\t2\u\T2_Blk_G33_f.p3d";
	};
	class TOTT_t2_leap: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 LEAP";
		descriptionshort="";
		model="TOTT_Optics\t2\s\T2.p3d";
	};
	class TOTT_t2_leap_G33: TOTT_optic_base
	{
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 LEAP + G33";
		model="TOTT_Optics\t2\s\T2_G33.p3d";
		MRT_SwitchItemNextClass="TOTT_t2_leap_g33_f";
		MRT_SwitchItemPrevClass="TOTT_t2_leap_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_t2_leap_G33_f: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\t2_CA.paa";
		displayname="T2 LEAP + G33";
		descriptionshort="";
		MRT_SwitchItemNextClass="TOTT_t2_leap_G33";
		MRT_SwitchItemPrevClass="TOTT_t2_leap_G33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\t2\s\T2_G33_f.p3d";
	};
	class TOTT_t2_leap_Caps: TOTT_optic_base
	{
		picture="\tott_optics\UI\T2_CA.paa";
		displayname="T2 LEAP (Caps)";
		descriptionshort="";
		model="TOTT_Optics\t2\s\T2_Cap.p3d";
	};
	class TOTT_romeo4t: TOTT_optic_base
	{
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T";
		descriptionshort="";
		model="TOTT_Optics\4t\4t.p3d";
		MRT_SwitchItemNextClass="TOTT_romeo4t_2";
		MRT_SwitchItemPrevClass="TOTT_romeo4t_2";
		MRT_switchItemHintText="Reticle Changed";
	};
	class TOTT_romeo4t_2: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T (NR)";
		descriptionshort="";
		model="TOTT_Optics\4t\4t_2.p3d";
		MRT_SwitchItemNextClass="TOTT_romeo4t";
		MRT_SwitchItemPrevClass="TOTT_romeo4t";
		MRT_switchItemHintText="Reticle Changed";
	};
	class TOTT_romeo4t_fts: TOTT_optic_base
	{
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T Wilcox FTS";
		descriptionshort="";
		model="TOTT_Optics\4t\4t_fts.p3d";
		MRT_SwitchItemNextClass="TOTT_romeo4t_fts_2";
		MRT_SwitchItemPrevClass="TOTT_romeo4t_fts_2";
		MRT_switchItemHintText="Reticle Changed";
	};
	class TOTT_romeo4t_fts_2: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T Wilcox FTS (NR)";
		descriptionshort="";
		model="TOTT_Optics\4t\4t_fts_2.p3d";
		MRT_SwitchItemNextClass="TOTT_romeo4t_fts";
		MRT_SwitchItemPrevClass="TOTT_romeo4t_fts";
		MRT_switchItemHintText="Reticle Changed";
	};
	class TOTT_romeo4t_g33: TOTT_optic_base
	{
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T Wilcox G33";
		model="TOTT_Optics\4t\4t_g33.p3d";
		MRT_SwitchItemNextClass="TOTT_romeo4t_g33_f";
		MRT_SwitchItemPrevClass="TOTT_romeo4t_g33_2";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_romeo4t_g33_2: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T Wilcox G33 (NR)";
		model="TOTT_Optics\4t\4t_g33_2.p3d";
		MRT_SwitchItemNextClass="TOTT_romeo4t_g33_f_2";
		MRT_SwitchItemPrevClass="TOTT_romeo4t_g33";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_romeo4t_g33_f: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T Wilcox G33";
		descriptionshort="";
		MRT_SwitchItemNextClass="TOTT_romeo4t_g33";
		MRT_SwitchItemPrevClass="TOTT_romeo4t_g33_f_2";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\4t\4t_G33_F.p3d";
	};
	class TOTT_romeo4t_g33_f_2: TOTT_optic_base
	{
		scope=1;
		picture="\tott_optics\UI\4T_CA.paa";
		displayname="Romeo 4T Wilcox G33 (NR)";
		descriptionshort="";
		MRT_SwitchItemNextClass="TOTT_romeo4t_g33_2";
		MRT_SwitchItemPrevClass="TOTT_romeo4t_g33_f";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\4t\4t_G33_F_2.p3d";
	};
	class TOTT_XPS3: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3";
		descriptionshort="XPS3";
		model="TOTT_Optics\xps3\XPS3.p3d";
	};
	class TOTT_XPS3_FTS: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3 FTS";
		descriptionshort="XPS3";
		model="TOTT_Optics\xps3\XPS3_FTS.p3d";
	};
	class TOTT_XPS3_g33: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3 G33";
		model="TOTT_Optics\xps3\XPS3_g33.p3d";
		MRT_SwitchItemNextClass="TOTT_XPS3_g33_f";
		MRT_SwitchItemPrevClass="TOTT_XPS3_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_XPS3_g33_f: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3 G33";
		descriptionshort="";
		scope=1;
		MRT_SwitchItemNextClass="TOTT_XPS3_g33";
		MRT_SwitchItemPrevClass="TOTT_XPS3_g33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\xps3\XPS3_g33_f.p3d";
	};
	class TOTT_XPS3_LT101: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3 (LT101)";
		descriptionshort="XPS3";
		model="TOTT_Optics\xps3\XPS3_LT101.p3d";
	};
	class TOTT_XPS3_LT101_FTS: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3 FTS (LT101)";
		descriptionshort="XPS3";
		model="TOTT_Optics\xps3\XPS3_LT101_FTS.p3d";
	};
	class TOTT_XPS3_LT101_g33: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3 G33 (LT101)";
		model="TOTT_Optics\xps3\XPS3_LT101_g33.p3d";
		MRT_SwitchItemNextClass="TOTT_XPS3_LT101_g33_f";
		MRT_SwitchItemPrevClass="TOTT_XPS3_LT101_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_XPS3_LT101_g33_f: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="XPS-3 G33 (LT101)";
		descriptionshort="";
		scope=1;
		MRT_SwitchItemNextClass="TOTT_XPS3_LT101_g33";
		MRT_SwitchItemPrevClass="TOTT_XPS3_LT101_g33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\xps3\XPS3_LT101_g33_f.p3d";
	};
	class TOTT_EXPS3_Tan: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="EXPS-3 (Tan)";
		descriptionshort="EXPS3";
		model="TOTT_Optics\Exps3\EXPS3_Tan.p3d";
	};
	class TOTT_EXPS3_Tan_G33: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="EXPS-3 G33 (Tan)";
		model="TOTT_Optics\Exps3\EXPS3_Tan_g33.p3d";
		MRT_SwitchItemNextClass="TOTT_EXPS3_Tan_g33_f";
		MRT_SwitchItemPrevClass="TOTT_EXPS3_Tan_g33_f";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=0;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.1075;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={200};
					discreteDistanceInitIndex=1;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class TOTT_EXPS3_tan_g33_f: TOTT_optic_base
	{
		picture="\tott_optics\UI\XPS3_CA.paa";
		displayname="EXPS-3 G33 (Tan)";
		descriptionshort="";
		scope=1;
		MRT_SwitchItemNextClass="TOTT_EXPS3_Tan_g33";
		MRT_SwitchItemPrevClass="TOTT_EXPS3_Tan_g33";
		MRT_switchItemHintText="Magnifier Down";
		model="TOTT_Optics\Exps3\EXPS3_tan_g33_f.p3d";
	};
};

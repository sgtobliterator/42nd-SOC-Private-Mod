class CfgPatches
{
	class TOTT_Optics_2
	{
		requiredaddons[]=
		{
			"A3_Data_F",
			"cba_main",
			"cba_optics",
			"TOTT_Optics",
			"TOTT_Thermals"
		};
		requiredversion=0.1;
		units[]={};
		weapons[]=
		{
			"TOTT_atacr18_nsw",
			"TOTT_atacr18_t2_nsw",
			"TOTT_Razor_16_Geissele_LT101",
			"TOTT_atacr18_nsw_voodoo",
			"TOTT_Razor_16_Geissele_voodoo",
			"TOTT_Razor_110_Geissele_voodoo",
			"TOTT_Leu_CQBSS_Geissele_voodoo"
		};
		author="TOTT";
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		TOTT_atacr18_nsw=1;
		TOTT_atacr18_nsw_PIP=1;
		TOTT_atacr18_t2_nsw=1;
		TOTT_atacr18_t2_nsw_PIP=1;
		TOTT_atacr18_nsw_voodoo=1;
		TOTT_atacr18_nsw_voodoo_f=1;
		TOTT_Razor_16_Geissele_LT101=1;
		TOTT_Razor_16_Geissele_LT101_PIP=1;
		TOTT_Razor_16_Geissele_voodoo=1;
		TOTT_Razor_16_Geissele_voodoo_f=1;
		TOTT_Razor_110_Geissele_voodoo=1;
		TOTT_Razor_110_Geissele_voodoo_f=1;
		TOTT_Leu_CQBSS_Geissele_voodoo=1;
		TOTT_Leu_CQBSS_Geissele_voodoo_f=1;
	};
};
class CBA_PIPItems
{
	TOTT_atacr18_nsw="TOTT_atacr18_nsw_PIP";
	TOTT_atacr18_t2_nsw="TOTT_atacr18_t2_nsw_PIP";
	TOTT_atacr18_nsw_voodoo="TOTT_atacr18_nsw_voodoo_PIP";
	TOTT_atacr18_nsw_voodoo_f="TOTT_atacr18_nsw_voodoo_f_PIP";
	TOTT_Razor_16_Geissele_LT101="TOTT_Razor_16_Geissele_LT101_PIP";
	TOTT_Razor_16_Geissele_voodoo="TOTT_Razor_16_Geissele_voodoo_PIP";
	TOTT_Razor_16_Geissele_voodoo_f="TOTT_Razor_16_Geissele_voodoo_f_PIP";
	TOTT_Razor_110_Geissele_voodoo="TOTT_Razor_110_Geissele_voodoo_PIP";
	TOTT_Razor_110_Geissele_voodoo_f="TOTT_Razor_110_Geissele_voodoo_f_PIP";
	TOTT_Leu_CQBSS_Geissele_voodoo="TOTT_Leu_CQBSS_Geissele_voodoo_PIP";
	TOTT_Leu_CQBSS_Geissele_voodoo_f="TOTT_Leu_CQBSS_Geissele_voodoo_f_PIP";
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	class optic_Arco;
	class TOTT_atacr18_nsw: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="ATACR 1-8 NSWDG";
		picture="\tott_optics_2\UI\ATACR_CA.paa";
		model="\tott_optics_2\lpvo\ATACR18_NSW.p3d";
		descriptionShort="NF ATACR 1-8";
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
			maxMagnificationReticleScale[]={8,8};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\tott_optics_2\data\ATACR\TREMOR8_Blurred_ca.paa",
					0.28999999,
					"\tott_optics_2\data\ATACR\TREMOR8_Blurred_Illum_ca.paa"
				},
				
				{
					2.5,
					"\tott_optics_2\data\ATACR\TREMOR8_ca.paa",
					0.36000001,
					"\tott_optics_2\data\ATACR\TREMOR8_Illum_ca.paa"
				},
				
				{
					4,
					"\tott_optics_2\data\ATACR\TREMOR8_Detailed_ca.paa",
					0.14,
					"\tott_optics_2\data\ATACR\TREMOR8_Detailed_Illum_ca.paa"
				}
			};
			manualReticleNightSwitch=1;
			hideRedDotMagnification=0;
			bodyTexture="\tott_optics_2\data\ATACR\Scope_Body_CA.paa";
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
	class TOTT_atacr18_nsw_PIP: TOTT_atacr18_nsw
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_atacr18_t2_nsw: TOTT_atacr18_nsw
	{
		scope=2;
		scopeArsenal=2;
		author="TOTT";
		displayName="ATACR 1-8 + T2 NSWDG";
		descriptionShort="NF ATACR 1-8 T2";
		picture="\tott_optics_2\UI\ATACR_CA.paa";
		model="\tott_optics_2\lpvo\ATACR18_t2_NSW.p3d";
	};
	class TOTT_atacr18_t2_nsw_PIP: TOTT_atacr18_t2_nsw
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_16_Geissele;
	class TOTT_Razor_16_Geissele_LT101: TOTT_Razor_16_Geissele
	{
		scope=2;
		displayName="Razor 1-6 Geissele LT101";
		model="\tott_optics_2\lpvo\Razor6_LT101.p3d";
		ACE_ScopeHeightAboveRail=5.4991002;
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
	class TOTT_Razor_16_Geissele_LT101_PIP: TOTT_Razor_16_Geissele_LT101
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_atacr18_nsw_voodoo: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="ATACR 1-8 NSWDG + VooDoo-S";
		picture="\tott_optics_2\UI\ATACR_CA.paa";
		model="\tott_optics_2\lpvo\ATACR18_VoodooS_NSW.p3d";
		descriptionShort="NF ATACR 1-8 (VooDoo)";
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
			maxMagnificationReticleScale[]={8,8};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\tott_optics_2\data\ATACR\TREMOR8_Blurred_ca.paa",
					0.28999999,
					"\tott_optics_2\data\ATACR\TREMOR8_Blurred_Illum_ca.paa"
				},
				
				{
					2.5,
					"\tott_optics_2\data\ATACR\TREMOR8_ca.paa",
					0.36000001,
					"\tott_optics_2\data\ATACR\TREMOR8_Illum_ca.paa"
				},
				
				{
					4,
					"\tott_optics_2\data\ATACR\TREMOR8_Detailed_ca.paa",
					0.14,
					"\tott_optics_2\data\ATACR\TREMOR8_Detailed_Illum_ca.paa"
				}
			};
			manualReticleNightSwitch=1;
			hideRedDotMagnification=2;
			bodyTexture="\tott_optics_2\data\ATACR\Scope_Body_Thermal_2_CA.paa";
			bodyTextureSize=1;
		};
		MRT_SwitchItemNextClass="TOTT_atacr18_nsw_voodoo_f";
		MRT_SwitchItemPrevClass="TOTT_atacr18_nsw_voodoo_f";
		MRT_switchItemHintText="VooDoo Up";
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
					opticsZoomMax="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					memoryPointCamera="eye";
					visionMode[]=
					{
						"Ti"
					};
					thermalMode[]={9,10};
					thermalNoise[]={0.30000001,1.21,0,1.88,1.42,0,0,0.80000001};
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
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
				};
			};
		};
	};
	class TOTT_atacr18_nsw_voodoo_PIP: TOTT_atacr18_nsw_voodoo
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_atacr18_nsw_voodoo_f: TOTT_atacr18_nsw
	{
		scope=1;
		author="TOTT";
		displayName="ATACR 1-8 NSWDG + VooDoo-S";
		descriptionShort="NF ATACR 1-8 (VooDoo)";
		picture="\tott_optics_2\UI\ATACR_CA.paa";
		model="\tott_optics_2\lpvo\ATACR18_VoodooS_F_NSW.p3d";
		MRT_SwitchItemNextClass="TOTT_atacr18_nsw_voodoo";
		MRT_SwitchItemPrevClass="TOTT_atacr18_nsw_voodoo";
		MRT_switchItemHintText="VooDoo Down";
	};
	class TOTT_atacr18_nsw_voodoo_F_PIP: TOTT_atacr18_nsw_voodoo_f
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_16_Geissele_voodoo: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="Razor 1-6 Geissele + VooDoo-S";
		picture="\tott_optics\UI\Razor6_CA.paa";
		model="\tott_optics_2\lpvo\Razor6_VoodooS.p3d";
		descriptionShort="Razor 1-6 (VooDoo)";
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
			bodyTexture="\tott_optics\data\Razor\Scope_Body_Thermal_CA.paa";
			bodyTextureSize=1;
		};
		MRT_SwitchItemNextClass="TOTT_Razor_16_Geissele_voodoo_f";
		MRT_SwitchItemPrevClass="TOTT_Razor_16_Geissele_voodoo_f";
		MRT_switchItemHintText="VooDoo Up";
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
						"Ti"
					};
					thermalMode[]={9,10};
					thermalNoise[]={0.30000001,1.21,0,1.88,1.42,0,0,0.80000001};
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
	class TOTT_Razor_16_Geissele_voodoo_PIP: TOTT_Razor_16_Geissele_voodoo
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_16_Geissele_voodoo_f: TOTT_Razor_16_Geissele
	{
		scope=1;
		author="TOTT";
		displayName="Razor 1-6 Geissele + VooDoo-S";
		picture="\tott_optics\UI\Razor6_CA.paa";
		model="\tott_optics_2\lpvo\Razor6_VoodooS_f.p3d";
		descriptionShort="Razor 1-6 (VooDoo)";
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
		MRT_SwitchItemNextClass="TOTT_Razor_16_Geissele_voodoo";
		MRT_SwitchItemPrevClass="TOTT_Razor_16_Geissele_voodoo";
		MRT_switchItemHintText="VooDoo Down";
	};
	class TOTT_Razor_16_Geissele_voodoo_F_PIP: TOTT_Razor_16_Geissele_voodoo_f
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_110_Geissele_voodoo: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="Razor 1-10 Geissele + VooDoo-S";
		picture="\tott_optics\UI\Razor10_CA.paa";
		model="\tott_optics_2\lpvo\Razor10_VoodooS.p3d";
		descriptionShort="Razor 1-10 (VooDoo)";
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
			bodyTexture="\tott_optics\data\Razor\Scope_Body_Thermal_CA.paa";
			bodyTextureSize=1;
		};
		MRT_SwitchItemNextClass="TOTT_Razor_110_Geissele_voodoo_f";
		MRT_SwitchItemPrevClass="TOTT_Razor_110_Geissele_voodoo_f";
		MRT_switchItemHintText="VooDoo Up";
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
						"Ti"
					};
					thermalMode[]={9,10};
					thermalNoise[]={0.30000001,1.21,0,1.88,1.42,0,0,0.80000001};
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
	class TOTT_Razor_110_Geissele_voodoo_PIP: TOTT_Razor_110_Geissele_voodoo
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Razor_110_Geissele;
	class TOTT_Razor_110_Geissele_voodoo_f: TOTT_Razor_110_Geissele
	{
		scope=1;
		author="TOTT";
		displayName="Razor 1-10 Geissele + VooDoo-S";
		picture="\tott_optics\UI\Razor10_CA.paa";
		model="\tott_optics_2\lpvo\Razor10_VoodooS_f.p3d";
		descriptionShort="Razor 1-10 (VooDoo)";
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
		MRT_SwitchItemNextClass="TOTT_Razor_110_Geissele_voodoo";
		MRT_SwitchItemPrevClass="TOTT_Razor_110_Geissele_voodoo";
		MRT_switchItemHintText="VooDoo Down";
	};
	class TOTT_Razor_110_Geissele_voodoo_f_PIP: TOTT_Razor_110_Geissele_voodoo_f
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Leu_CQBSS_Geissele_voodoo: ItemCore
	{
		author="TOTT";
		scope=2;
		displayName="CQBSS 1.1-8 Geissele + VooDoo-S";
		picture="\tott_optics\UI\CQBSS_CA.paa";
		model="\tott_optics_2\lpvo\CQBSS_VoodooS.p3d";
		descriptionShort="CQBSS 1.1-8 (VooDoo)";
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
			bodyTexture="\tott_optics\data\CQBSS\Scope_Body_Thermal_CA.paa";
			bodyTextureSize=1;
		};
		MRT_SwitchItemNextClass="TOTT_Leu_CQBSS_Geissele_voodoo_f";
		MRT_SwitchItemPrevClass="TOTT_Leu_CQBSS_Geissele_voodoo_f";
		MRT_switchItemHintText="VooDoo Up";
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
						"Ti"
					};
					thermalMode[]={9,10};
					thermalNoise[]={0.30000001,1.21,0,1.88,1.42,0,0,0.80000001};
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
	class TOTT_Leu_CQBSS_Geissele_voodoo_PIP: TOTT_Leu_CQBSS_Geissele_voodoo
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class TOTT_Leu_CQBSS_Geissele;
	class TOTT_Leu_CQBSS_Geissele_voodoo_f: TOTT_Leu_CQBSS_Geissele
	{
		scope=1;
		author="TOTT";
		displayName="CQBSS 1.1-8 Geissele + VooDoo-S";
		picture="\tott_optics\UI\CQBSS_CA.paa";
		model="\tott_optics_2\lpvo\CQBSS_VoodooS_f.p3d";
		descriptionShort="CQBSS 1.1-8 (VooDoo)";
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
		MRT_SwitchItemNextClass="TOTT_Leu_CQBSS_Geissele_voodoo";
		MRT_SwitchItemPrevClass="TOTT_Leu_CQBSS_Geissele_voodoo";
		MRT_switchItemHintText="VooDoo Down";
	};
	class TOTT_Leu_CQBSS_Geissele_voodoo_f_PIP: TOTT_Leu_CQBSS_Geissele_voodoo_f
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
};

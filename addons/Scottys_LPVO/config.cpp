class CfgPatches
{
	class Scotty_LPVO
	{
		requiredaddons[]=
		{
			"A3_Data_F",
			"cba_main",
			"cba_optics",
			"A3Data"
		};
		requiredversion=0.1;
		units[]={};
		weapons[]=
		{
			"Scot_Trij_Accu",
			"Scot_SigT6",
			"Scot_NForce_Atcr",
			"Scot_LEU_MK8",
			"Scot_EO_Vudu"
		};
		author="Scotty";
	};
};
class asdg_SlotInfo;
class asdg_OpticRail: asdg_SlotInfo
{
};
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		Scot_Trij_Accu=1;
		Scot_SigT6=1;
		Scot_NForce_Atcr=1;
		Scot_LEU_MK8=1;
		Scot_EO_Vudu=1;
	};
};
class CBA_PIPItems
{
	Scot_LPVO_enable="-";
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class Scot_Trij_Accu: ItemCore
	{
		scope=2;
		displayName="Trijicon AccuPower";
		author="Scotty";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Scottys_LPVO\Trij_Accu\Trij_Accu.p3d";
		descriptionShort="Trijicon AccuPower 1-8x Magnification";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[]={1,1.026};
			maxMagnificationReticleScale[]=
			{
				8,
				"(8*1.026)"
			};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\Scottys_LPVO\Trij_Accu\data\rs27c-mil-reticle-red.paa",
					"1/6"
				},
				
				{
					2,
					"\Scottys_LPVO\Trij_Accu\data\rs27c-mil-reticle-red.paa",
					"1/6"
				}
			};
			reticleSafezoneSize=0.83999997;
			bodyTexture="\Scottys_LPVO\Trij_Accu\data\Scope_Body_ca.paa";
			bodyTextureNight="\Scottys_LPVO\Trij_Accu\data\Scope_Body_ca.paa";
			bodyTextureSize=1;
		};
		weaponInfoType="CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=15;
			RMBhint="1-8x24 Short Dot";
			optics=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="(0.25/8)";
					opticsZoomMax="(0.25/1)";
					opticsZoomInit="(0.25/1)";
					discreteDistance[]={100};
					discreteDistanceInitIndex=3;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.125;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Scot_SigT6: ItemCore
	{
		scope=2;
		displayName="Sig Tango 6";
		author="Scotty";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Scottys_LPVO\SigT6\SIG_Tango6.p3d";
		descriptionShort="Sig Sauer Tango 6 1-6x  Magnification";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[]={1,1.026};
			maxMagnificationReticleScale[]={6,1.026};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\Scottys_LPVO\SigT6\data\mrad_sfp_reticle_dark.paa",
					"1/6",
					"\Scottys_LPVO\SigT6\data\mrad_sfp_reticle_illum.paa"
				},
				
				{
					2,
					"\Scottys_LPVO\SigT6\data\mrad_sfp_reticle_dark.paa",
					"1/6",
					"\Scottys_LPVO\SigT6\data\mrad_sfp_reticle_illum.paa"
				}
			};
			reticleSafezoneSize=0.83999997;
			bodyTexture="\Scottys_LPVO\SigT6\data\Scope_Body_ca.paa";
			bodyTextureNight="\Scottys_LPVO\SigT6\data\Scope_Body_ca.paa";
			bodyTextureSize=1;
		};
		weaponInfoType="CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=15;
			RMBhint="1-6x24 Short Dot";
			optics=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="(0.25/6)";
					opticsZoomMax="(0.25/1)";
					opticsZoomInit="(0.25/1)";
					discreteDistance[]={100};
					discreteDistanceInitIndex=3;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.125;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Scot_NForce_Atcr: ItemCore
	{
		scope=2;
		displayName="Nightforce ATACR F1";
		author="Scotty";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Scottys_LPVO\NForce_Atkr\NF_Atcr.p3d";
		descriptionShort="Nightforce ATACR 1-8x  Magnification";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[]={1,1.026};
			maxMagnificationReticleScale[]=
			{
				8,
				"(8*1.026)"
			};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\Scottys_LPVO\NForce_Atkr\data\NF-FC-DM-reticle-illuminated.paa",
					"1/6"
				},
				
				{
					4,
					"\Scottys_LPVO\NForce_Atkr\data\NF-FC-DM-reticle-illuminated.paa",
					"1/6"
				}
			};
			reticleSafezoneSize=0.83999997;
			bodyTexture="\Scottys_LPVO\NForce_Atkr\data\Scope_Body_ca.paa";
			bodyTextureNight="\Scottys_LPVO\NForce_Atkr\data\Scope_Body_ca.paa";
			bodyTextureSize=1;
		};
		weaponInfoType="CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=15;
			RMBhint="1-6x24 Short Dot";
			optics=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="(0.25/8)";
					opticsZoomMax="(0.25/1)";
					opticsZoomInit="(0.25/1)";
					discreteDistance[]={100};
					discreteDistanceInitIndex=3;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.125;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Scot_LEU_MK8: ItemCore
	{
		scope=2;
		displayName="Leupold MK8 CQBSS";
		author="Scotty";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Scottys_LPVO\LEU_MK8\LEU_CQBSS.p3d";
		descriptionShort="Leupold MK8 CQBSS 1-8x Magnification";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[]={1.1,1.026};
			maxMagnificationReticleScale[]=
			{
				8,
				"(8*1.026)"
			};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\Scottys_LPVO\LEU_MK8\data\reticle_dark_low_zoom.paa",
					"1/6"
				},
				
				{
					2,
					"\Scottys_LPVO\LEU_MK8\data\reticle_dark_low_zoom.paa",
					"1/6"
				}
			};
			reticleSafezoneSize=0.83999997;
			bodyTexture="\Scottys_LPVO\LEU_MK8\data\Scope_Body_ca.paa";
			bodyTextureNight="\Scottys_LPVO\LEU_MK8\data\Scope_Body_ca.paa";
			bodyTextureSize=1;
		};
		weaponInfoType="CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=15;
			RMBhint="1-8x24 Short Dot";
			optics=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="(0.25/8)";
					opticsZoomMax="(0.25/1.1)";
					opticsZoomInit="(0.25/1.1)";
					discreteDistance[]={100};
					discreteDistanceInitIndex=3;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.125;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class Scot_EO_Vudu: ItemCore
	{
		scope=2;
		displayName="EoTech Vudu";
		author="Scotty";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="\Scottys_LPVO\EO_Vudu\EO_Vudu.p3d";
		descriptionShort="EoTech Vudu 1-6x Magnification";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[]={1,1.026};
			maxMagnificationReticleScale[]=
			{
				6,
				"(4*1.026)"
			};
			reticleDetailTextures[]=
			{
				
				{
					0,
					"\Scottys_LPVO\EO_Vudu\data\Vudu_Redical_Mil.paa",
					"1/8"
				},
				
				{
					2,
					"\Scottys_LPVO\EO_Vudu\data\Vudu_Redical_Mil_Himag.paa",
					"1/8"
				},
				
				{
					5,
					"\Scottys_LPVO\EO_Vudu\data\Vudu_Redical_Mil_Himag_No_Ring.paa",
					"1/8"
				}
			};
			reticleSafezoneSize=0.83999997;
			bodyTexture="\Scottys_LPVO\EO_Vudu\data\Scope_Body_ca.paa";
			bodyTextureNight="\Scottys_LPVO\EO_Vudu\data\Scope_Body_ca.paa";
			bodyTextureSize=1;
		};
		weaponInfoType="CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=15;
			RMBhint="1-6x24 Short Dot";
			optics=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="(0.25/6)";
					opticsZoomMax="(0.25/1)";
					opticsZoomInit="(0.25/1)";
					discreteDistance[]={100};
					discreteDistanceInitIndex=3;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class RMR
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.125;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
};

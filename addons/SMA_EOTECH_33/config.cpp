class CfgPatches
{
	class SMA_Eotech33
	{
		units[]={};
		weapons[]=
		{
			"SMA_eotech",
			"SMA_eotech_T",
			"SMA_eotech_G",
			"SMA_eotechG33_3XDOWN",
			"SMA_eotechG33_3XUP",
			"SMA_eotechG33_tan_3XDOWN",
			"SMA_eotechG33_grn_3XDOWN",
			"SMA_eotechG33_tan_3XUP",
			"SMA_eotechG33_grn_3XUP"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"cba_jr"
		};
		version="0.1";
		author="Specialist Military Arms";
	};
};
class asdg_OpticRail;
class asdg_FrontSideRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		SMA_eotech=1;
		SMA_eotech_T=1;
		SMA_eotech_G=1;
		SMA_eotechG33_3XDOWN=1;
		SMA_eotechG33_3XUP=1;
		SMA_eotechG33_tan_3XDOWN=1;
		SMA_eotechG33_tan_3XUP=1;
		SMA_eotechG33_grn_3XDOWN=1;
		SMA_eotechG33_grn_3XUP=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_H;
	class SMA_eotech: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="EOTech EXPS2-2";
		author="Specialist Military Arms";
		picture="\SMA_EOTECH_33\ui\SMA_eotech_ca.paa";
		model="\SMA_EOTECH_33\SMA_eotech_G33.p3d";
		descriptionShort="Holographic Weapon Sight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class AIM
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					opticsFlare=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class SMA_eotech_T: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="EOTech EXPS2-2 Tan";
		author="Specialist Military Arms";
		picture="\SMA_EOTECH_33\ui\SMA_eotech_Tn_ca.paa";
		model="\SMA_EOTECH_33\SMA_eotechTan_G33.p3d";
		descriptionShort="Holographic Weapon Sight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class AIM
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					opticsFlare=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class SMA_eotech_G: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="EOTech EXPS2-2 OD";
		author="Specialist Military Arms";
		picture="\SMA_EOTECH_33\ui\SMA_eotech_Gr_ca.paa";
		model="\SMA_EOTECH_33\SMA_eotechgrn_G33.p3d";
		descriptionShort="Holographic Weapon Sight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class AIM
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					opticsFlare=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class SMA_eotechG33_3XDOWN: SMA_eotech
	{
		scope=2;
		dlc="SMA";
		displayName="EOTech EXPS2-2 + G33STS Magnifier";
		author="Specialist Military Arms";
		picture="\SMA_EOTECH_33\ui\SMA_eotechG33_3XDOWN_ca.paa";
		model="\SMA_EOTECH_33\SMA_eotech_G33DOWN";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotechG33_3XUP";
		MRT_SwitchItemNextClass="SMA_eotechG33_3XUP";
		MRT_switchItemHintText="Magnifier Down";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class AIM
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					opticsFlare=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class SMA_eotechG33_3XUP: SMA_eotechG33_3XDOWN
	{
		scope=1;
		displayName="EOTech EXPS2-2 + G33STS Magnifier";
		author="Specialist Military Arms";
		model="\SMA_EOTECH_33\SMA_eotech_G33UP";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotechG33_3XDOWN";
		MRT_SwitchItemNextClass="SMA_eotechG33_3XDOWN";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Magnified
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
	class SMA_eotechG33_tan_3XDOWN: SMA_eotech
	{
		scope=2;
		displayName="EOTech EXPS2-2 + G33STS Magnifier Tan";
		author="Specialist Military Arms";
		picture="\SMA_EOTECH_33\ui\SMA_eotechG33_tan_3XDOWN_ca.paa";
		model="\SMA_EOTECH_33\SMA_eotechtan_G33DOWN";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotechG33_tan_3XUP";
		MRT_SwitchItemNextClass="SMA_eotechG33_tan_3XUP";
		MRT_switchItemHintText="Magnifier Down";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class AIM
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					opticsFlare=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class SMA_eotechG33_grn_3XDOWN: SMA_eotech
	{
		scope=2;
		displayName="EOTech EXPS2-2 + G33STS Magnifier OD";
		author="Specialist Military Arms";
		picture="\SMA_EOTECH_33\ui\SMA_eotechG33_grn_3XDOWN_ca.paa";
		model="\SMA_EOTECH_33\SMA_eotechgrn_G33DOWN";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotechG33_grn_3XUP";
		MRT_SwitchItemNextClass="SMA_eotechG33_grn_3XUP";
		MRT_switchItemHintText="Magnifier Down";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class AIM
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					opticsFlare=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
	};
	class SMA_eotechG33_tan_3XUP: SMA_eotechG33_3XDOWN
	{
		scope=1;
		displayName="EOTech EXPS2-2 + G33STS Magnifier Tan";
		author="Specialist Military Arms";
		model="\SMA_EOTECH_33\SMA_eotechtan_G33UP";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotechG33_tan_3XDOWN";
		MRT_SwitchItemNextClass="SMA_eotechG33_tan_3XDOWN";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Magnified
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
	class SMA_eotechG33_grn_3XUP: SMA_eotechG33_3XDOWN
	{
		scope=1;
		displayName="EOTech EXPS2-2 + G33STS Magnifier OD";
		author="Specialist Military Arms";
		model="\SMA_EOTECH_33\SMA_eotechgrn_G33UP";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotechG33_grn_3XDOWN";
		MRT_SwitchItemNextClass="SMA_eotechG33_grn_3XDOWN";
		MRT_switchItemHintText="Magnifier Up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Magnified
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
};

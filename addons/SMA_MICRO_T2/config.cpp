class CfgPatches
{
	class SMA_MICRO_T2
	{
		units[]={};
		weapons[]=
		{
			"SMA_MICRO_T2",
			"SMA_MICRO_T2_LM",
			"SMA_MICRO_T2_3XDOWN",
			"SMA_MICRO_T2_3XUP"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"cba_jr"
		};
		version=0.1;
		author="Specialist Military Arms";
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		SMA_MICRO_T2=1;
		SMA_MICRO_T2_LM=1;
		SMA_MICRO_T2_3XDOWN=1;
		SMA_MICRO_T2_3XUP=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class muzzle_snds_H;
	class InventoryMuzzleItem_Base_F;
	class SMA_MICRO_T2: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="MICRO T2 Aimpoint";
		picture="\SMA_MICRO_T2\ui\SMA_MICRO_T2_ca.paa";
		model="\SMA_MICRO_T2\SMA_MICRO_T2.p3d";
		descriptionShort="MICRO T2";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=5;
			RMBhint="Aim-Point Optics";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			memoryPointCamera="eyeAim";
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
					memoryPointCamera="eyeAim";
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
	class SMA_MICRO_T2_LM: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="MICRO T2 Low mount Aimpoint";
		model="\SMA_MICRO_T2\SMA_MICRO_T2_LM";
		picture="\SMA_MICRO_T2\ui\SMA_MICRO_T2_LM_ca.paa";
		descriptionShort="Micro T2 LM";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=5;
			RMBhint="Aim-Point Optics";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			memoryPointCamera="eyeAim";
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
					memoryPointCamera="eyeAim";
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
	class SMA_MICRO_T2_3XDOWN: SMA_MICRO_T2
	{
		scope=2;
		dlc="SMA";
		displayName="MICRO T2 Aimpoint + Magnifier";
		author="Specialist Military Arms";
		picture="\SMA_MICRO_T2\ui\SMA_MICRO_T2_3XDOWN_ca.paa";
		model="\SMA_MICRO_T2\SMA_MICRO_T2_MAG33_DOWN.p3d";
		descriptionShort="MICRO T2 + Flip up Magnifier";
		MRT_SwitchItemPrevClass="SMA_MICRO_T2_3XUP";
		MRT_SwitchItemNextClass="SMA_MICRO_T2_3XUP";
		MRT_switchItemHintText="Magnifier Down";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eyeAim";
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
					memoryPointCamera="eyeAim";
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
	class SMA_MICRO_T2_3XUP: SMA_MICRO_T2_3XDOWN
	{
		scope=1;
		displayName="MICRO T2 Aimpoint + Magnifier";
		author="Specialist Military Arms";
		model="\SMA_MICRO_T2\SMA_MICRO_T2_MAG33_UP.p3d";
		descriptionShort="MICRO T2 + Flip up Magnifier";
		MRT_SwitchItemPrevClass="SMA_MICRO_T2_3XDOWN";
		MRT_SwitchItemNextClass="SMA_MICRO_T2_3XDOWN";
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

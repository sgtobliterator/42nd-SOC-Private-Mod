class CfgPatches
{
	class SMA_Aimpoint
	{
		units[]={};
		weapons[]=
		{
			"SMA_AIMPOINT",
			"SMA_AIMPOINT_GLARE"
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
		SMA_AIMPOINT=1;
		SMA_AIMPOINT_GLARE=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class muzzle_snds_H;
	class InventoryMuzzleItem_Base_F;
	class SMA_AIMPOINT: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="SMA Tasco Green dot";
		picture="\SMA_AIMPOINT\ui\sma_aimpoint_ca.paa";
		model="\SMA_AIMPOINT\SMA_Aimpoint.p3d";
		descriptionShort="SMA Aim-point";
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
	class SMA_AIMPOINT_GLARE: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="SMA Tasco Green dot Glare";
		model="\SMA_AIMPOINT\SMA_Aimpoint_Glare";
		picture="\SMA_AIMPOINT\ui\sma_aimpoint_ca.paa";
		descriptionShort="SMA Aim-point";
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
};

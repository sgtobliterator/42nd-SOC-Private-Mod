class CfgPatches
{
	class SMA_ELCAN_C
	{
		units[]={};
		weapons[]=
		{
			"SMA_ELCAN_SPECTER",
			"SMA_ELCAN_SPECTER3",
			"SMA_ELCAN_SPECTER5",
			"SMA_ELCAN_SPECTER6",
			"SMA_ELCAN_SPECTER_TAN",
			"SMA_ELCAN_SPECTER_TAN3",
			"SMA_ELCAN_SPECTER_TAN5",
			"SMA_ELCAN_SPECTER_TAN6",
			"SMA_ELCAN_SPECTER_GREEN",
			"SMA_ELCAN_SPECTER_GREEN3",
			"SMA_ELCAN_SPECTER_GREEN5",
			"SMA_ELCAN_SPECTER_GREEN6",
			"SMA_ELCAN_SPECTER_ARDRDS",
			"SMA_ELCAN_SPECTER3_ARDRDS",
			"SMA_ELCAN_SPECTER5_ARDRDS",
			"SMA_ELCAN_SPECTER6_ARDRDS",
			"SMA_ELCAN_SPECTER_TAN_ARDRDS",
			"SMA_ELCAN_SPECTER_TAN3_ARDRDS",
			"SMA_ELCAN_SPECTER_TAN5_ARDRDS",
			"SMA_ELCAN_SPECTER_TAN6_ARDRDS",
			"SMA_ELCAN_SPECTER_GREEN_ARDRDS",
			"SMA_ELCAN_SPECTER_GREEN3_ARDRDS",
			"SMA_ELCAN_SPECTER_GREEN5_ARDRDS",
			"SMA_ELCAN_SPECTER_GREEN6_ARDRDS",
			"SMA_ELCAN_SPECTER_RDS",
			"SMA_ELCAN_SPECTER3_RDS",
			"SMA_ELCAN_SPECTER5_RDS",
			"SMA_ELCAN_SPECTER6_RDS",
			"SMA_ELCAN_SPECTER_TAN_RDS",
			"SMA_ELCAN_SPECTER_TAN3_RDS",
			"SMA_ELCAN_SPECTER_TAN5_RDS",
			"SMA_ELCAN_SPECTER_TAN6_RDS",
			"SMA_ELCAN_SPECTER_GREEN_RDS",
			"SMA_ELCAN_SPECTER_GREEN3_RDS",
			"SMA_ELCAN_SPECTER_GREEN5_RDS",
			"SMA_ELCAN_SPECTER_GREEN6_RDS"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"cba_jr",
			"SMA_ELCAN"
		};
		version=0.1;
		author="Specialist Military Arms";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		SMA_ELCAN_SPECTER=1;
		SMA_ELCAN_SPECTER3=1;
		SMA_ELCAN_SPECTER5=1;
		SMA_ELCAN_SPECTER6=1;
		SMA_ELCAN_SPECTER_TAN=1;
		SMA_ELCAN_SPECTER_TAN3=1;
		SMA_ELCAN_SPECTER_TAN5=1;
		SMA_ELCAN_SPECTER_TAN6=1;
		SMA_ELCAN_SPECTER_GREEN=1;
		SMA_ELCAN_SPECTER_GREEN3=1;
		SMA_ELCAN_SPECTER_GREEN5=1;
		SMA_ELCAN_SPECTER_GREEN6=1;
		SMA_ELCAN_SPECTER_RDS=1;
		SMA_ELCAN_SPECTER3_RDS=1;
		SMA_ELCAN_SPECTER5_RDS=1;
		SMA_ELCAN_SPECTER6_RDS=1;
		SMA_ELCAN_SPECTER_TAN_RDS=1;
		SMA_ELCAN_SPECTER_TAN3_RDS=1;
		SMA_ELCAN_SPECTER_TAN5_RDS=1;
		SMA_ELCAN_SPECTER_TAN6_RDS=1;
		SMA_ELCAN_SPECTER_GREEN_RDS=1;
		SMA_ELCAN_SPECTER_GREEN3_RDS=1;
		SMA_ELCAN_SPECTER_GREEN5_RDS=1;
		SMA_ELCAN_SPECTER_GREEN6_RDS=1;
		SMA_ELCAN_SPECTER_ARDRDS=1;
		SMA_ELCAN_SPECTER3_ARDRDS=1;
		SMA_ELCAN_SPECTER5_ARDRDS=1;
		SMA_ELCAN_SPECTER6_ARDRDS=1;
		SMA_ELCAN_SPECTER_TAN_ARDRDS=1;
		SMA_ELCAN_SPECTER_TAN3_ARDRDS=1;
		SMA_ELCAN_SPECTER_TAN5_ARDRDS=1;
		SMA_ELCAN_SPECTER_TAN6_ARDRDS=1;
		SMA_ELCAN_SPECTER_GREEN_ARDRDS=1;
		SMA_ELCAN_SPECTER_GREEN3_ARDRDS=1;
		SMA_ELCAN_SPECTER_GREEN5_ARDRDS=1;
		SMA_ELCAN_SPECTER_GREEN6_ARDRDS=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class SMA_ELCAN_SPECTER: ItemCore
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER.p3d";
		descriptionShort="4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER6";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER3";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER3: SMA_ELCAN_SPECTER
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER5";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER3.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER5: SMA_ELCAN_SPECTER
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER3";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER6";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER5.p3d";
		descriptionShort="4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER6: SMA_ELCAN_SPECTER
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER5";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER6.p3d";
		descriptionShort="4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN: SMA_ELCAN_SPECTER
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1(TAN)";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_TAN_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN.p3d";
		descriptionShort="1-4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN6";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN3";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER_TAN3: SMA_ELCAN_SPECTER_TAN
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN5";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN3.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN5: SMA_ELCAN_SPECTER_TAN
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN3";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN6";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN5.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN6: SMA_ELCAN_SPECTER_TAN
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN5";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN6.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN: SMA_ELCAN_SPECTER
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1(FDE)";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_GREEN_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN.p3d";
		descriptionShort="1-4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN6";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN3";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER_GREEN3: SMA_ELCAN_SPECTER_GREEN
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN5";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN3.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN5: SMA_ELCAN_SPECTER_GREEN
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN3";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN6";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN5.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN6: SMA_ELCAN_SPECTER_GREEN
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN5";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN6.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_ARDRDS: ItemCore
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1 RDS-ARD";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_ARDRDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER_ARDRDS.p3d";
		descriptionShort="4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER6_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER3_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER3_ARDRDS: SMA_ELCAN_SPECTER_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER5_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER3_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER5_ARDRDS: SMA_ELCAN_SPECTER_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER3_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER6_ARDRDS";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER5_ARDRDS.p3d";
		descriptionShort="4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER6_ARDRDS: SMA_ELCAN_SPECTER_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER5_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER6_ARDRDS.p3d";
		descriptionShort="4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN_ARDRDS: SMA_ELCAN_SPECTER_ARDRDS
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1(TAN) RDS-ARD";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_TAN_ARDRDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN6_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN3_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER_TAN3_ARDRDS: SMA_ELCAN_SPECTER_TAN_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN5_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN3_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN5_ARDRDS: SMA_ELCAN_SPECTER_TAN_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN3_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN6_ARDRDS";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN5_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN6_ARDRDS: SMA_ELCAN_SPECTER_TAN_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN5_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN6_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN_ARDRDS: SMA_ELCAN_SPECTER_ARDRDS
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1(FDE) RDS-ARD";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_GREEN_ARDRDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN6_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN3_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER_GREEN3_ARDRDS: SMA_ELCAN_SPECTER_GREEN_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN5_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN3_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN5_ARDRDS: SMA_ELCAN_SPECTER_GREEN_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN3_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN6_ARDRDS";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN5_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN6_ARDRDS: SMA_ELCAN_SPECTER_GREEN_ARDRDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN5_ARDRDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN_ARDRDS";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN6_ARDRDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_RDS: ItemCore
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1 RDS";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_RDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER_RDS.p3d";
		descriptionShort="4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER6_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER3_RDS";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER3_RDS: SMA_ELCAN_SPECTER_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER5_RDS";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER3_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER5_RDS: SMA_ELCAN_SPECTER_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER3_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER6_RDS";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER5_RDS.p3d";
		descriptionShort="4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER6_RDS: SMA_ELCAN_SPECTER_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER5_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_RDS";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTER6_RDS.p3d";
		descriptionShort="4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN_RDS: SMA_ELCAN_SPECTER_RDS
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1(TAN) RDS";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_TAN_RDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN6_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN3_RDS";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER_TAN3_RDS: SMA_ELCAN_SPECTER_TAN_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN5_RDS";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN3_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN5_RDS: SMA_ELCAN_SPECTER_TAN_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN3_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN6_RDS";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN5_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_TAN6_RDS: SMA_ELCAN_SPECTER_TAN_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_TAN5_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_TAN_RDS";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERTAN6_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN_RDS: SMA_ELCAN_SPECTER_RDS
	{
		scope=2;
		displayName="ELCAN SpecterDR DFOV14-C1(FDE) RDS";
		picture="\SMA_ELCAN\ui\SMA_ELCAN_SPECTER_GREEN_RDS_ca.paa";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			RMBhint="Aim-Point Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=3;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					discretedistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=0.80000001;
					opticsZoomInit=0.40000001;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class RedDotSight: IronSight
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
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN6_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN3_RDS";
		MRT_switchItemHintText="Dot Intensity Low";
	};
	class SMA_ELCAN_SPECTER_GREEN3_RDS: SMA_ELCAN_SPECTER_GREEN_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN5_RDS";
		MRT_switchItemHintText="Dot Intensity Medium";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN3_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN5_RDS: SMA_ELCAN_SPECTER_GREEN_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN3_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN6_RDS";
		MRT_switchItemHintText="Dot Intensity High";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN5_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
	class SMA_ELCAN_SPECTER_GREEN6_RDS: SMA_ELCAN_SPECTER_GREEN_RDS
	{
		scope=1;
		MRT_SwitchItemPrevClass="SMA_ELCAN_SPECTER_GREEN5_RDS";
		MRT_SwitchItemNextClass="SMA_ELCAN_SPECTER_GREEN_RDS";
		MRT_switchItemHintText="Dot Intensity Off";
		model="\SMA_ELCAN\SMA_ELCAN_SPECTERGREEN6_RDS.p3d";
		descriptionShort="1-4x Combat Optic";
	};
};

class CfgPatches
{
	class sma_vortex_optics_03
	{
		units[]={};
		weapons[]=
		{
			"sma_spitfire_03_sc_closed",
			"sma_spitfire_03_sc_black",
			"sma_spitfire_03_sc_green",
			"sma_spitfire_03_sc_red",
			"sma_spitfire_03_black",
			"sma_spitfire_03_green",
			"sma_spitfire_03_red",
			"sma_spitfire_03_rds_black",
			"sma_spitfire_03_rds_red",
			"sma_spitfire_03_rds_green",
			"sma_spitfire_03_rds_low_ard_red",
			"sma_spitfire_03_rds_low_ard_green",
			"sma_spitfire_03_rds_low_black",
			"sma_spitfire_03_rds_low_red",
			"sma_spitfire_03_rds_low_green",
			"sma_spitfire_03_rds_low_ard_black"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"sma_vortex_optics"
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
		sma_spitfire_03_sc_closed=1;
		sma_spitfire_03_sc_black=1;
		sma_spitfire_03_sc_green=1;
		sma_spitfire_03_sc_red=1;
		sma_spitfire_03_black=1;
		sma_spitfire_03_green=1;
		sma_spitfire_03_red=1;
		sma_spitfire_03_rds_black=1;
		sma_spitfire_03_rds_red=1;
		sma_spitfire_03_rds_green=1;
		sma_spitfire_03_rds_low_black=1;
		sma_spitfire_03_rds_low_red=1;
		sma_spitfire_03_rds_low_green=1;
		sma_spitfire_03_rds_low_ard_black=1;
		sma_spitfire_03_rds_low_ard_red=1;
		sma_spitfire_03_rds_low_ard_green=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class sma_spitfire_03_sc_black: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="Vortex Spitfire 3x (Lens Covers)";
		picture="\sma\sma_vortex_optics\spitfire_03\ui\vortex_spitfire03_sc_ca.paa";
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_sc_black.p3d";
		descriptionShort="Vortex Spitfire 3x: Prism EBR Optics";
		weaponInfoType="RscWeaponZeroing";
		author="Specialist Military Arms";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Aim-Point Optics";
			optics=1;
			opticType=1;
			modelOptics="\A3\Weapons_F\empty";
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
					opticsZoomMin=0.15625;
					opticsZoomMax=0.15625;
					opticsZoomInit=0.15625;
					memoryPointCamera="eye";
					discretedistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
			};
		};
		MRT_SwitchItemPrevClass="sma_spitfire_03_sc_closed";
		MRT_SwitchItemNextClass="sma_spitfire_03_sc_green";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_03_sc_green: sma_spitfire_03_sc_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_sc_green.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_sc_black";
		MRT_SwitchItemNextClass="sma_spitfire_03_sc_red";
		MRT_switchItemHintText="Illuminated Green";
	};
	class sma_spitfire_03_sc_red: sma_spitfire_03_sc_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_sc_red.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_sc_green";
		MRT_SwitchItemNextClass="sma_spitfire_03_sc_closed";
		MRT_switchItemHintText="Illuminated Red";
	};
	class sma_spitfire_03_sc_closed: sma_spitfire_03_sc_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_sc_closed.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_sc_red";
		MRT_SwitchItemNextClass="sma_spitfire_03_sc_black";
		MRT_switchItemHintText="Lens Caps Closed";
	};
	class sma_spitfire_03_black: sma_spitfire_03_sc_black
	{
		scope=2;
		displayName="Vortex Spitfire 3x";
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_black.p3d";
		picture="\sma\sma_vortex_optics\spitfire_03\ui\vortex_spitfire03_ca.paa";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_red";
		MRT_SwitchItemNextClass="sma_spitfire_03_green";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_03_green: sma_spitfire_03_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_green.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_black";
		MRT_SwitchItemNextClass="sma_spitfire_03_red";
		MRT_switchItemHintText="Illuminated Green";
	};
	class sma_spitfire_03_red: sma_spitfire_03_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_red.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_green";
		MRT_SwitchItemNextClass="sma_spitfire_03_black";
		MRT_switchItemHintText="Illuminated Red";
	};
	class sma_spitfire_03_rds_black: sma_spitfire_03_black
	{
		scope=2;
		dlc="SMA";
		displayName="Vortex Spitfire 3x + RDS";
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_black.p3d";
		author="Specialist Military Arms";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			optics=1;
			opticType=1;
			RMBhint="Aim-Point Optics";
			modelOptics="\A3\Weapons_F\empty";
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
					opticsZoomMin=0.15625;
					opticsZoomMax=0.15625;
					opticsZoomInit=0.15625;
					memoryPointCamera="eye";
					discretedistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				class RedDotSight: Magnified
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
			inertia=0.1;
		};
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_green";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_red";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_03_rds_red: sma_spitfire_03_rds_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_red.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_black";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_green";
		MRT_switchItemHintText="Illuminated Red";
	};
	class sma_spitfire_03_rds_green: sma_spitfire_03_rds_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_green.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_red";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_black";
		MRT_switchItemHintText="Illuminated Green";
	};
	class sma_spitfire_03_rds_low_black: sma_spitfire_03_rds_black
	{
		scope=2;
		dlc="SMA";
		displayName="Vortex Spitfire 3x + RDS Low Mount";
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_low_black.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_low_green";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_low_red";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_03_rds_low_red: sma_spitfire_03_rds_low_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_low_red.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_low_black";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_low_green";
		MRT_switchItemHintText="Illuminated Red";
	};
	class sma_spitfire_03_rds_low_green: sma_spitfire_03_rds_low_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_low_green.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_low_red";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_low_black";
		MRT_switchItemHintText="Illuminated Green";
	};
	class sma_spitfire_03_rds_low_ard_black: sma_spitfire_03_rds_low_black
	{
		scope=2;
		displayName="Vortex Spitfire 3x + RDS + ARD Low Mount";
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_low_ard_black.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_low_ard_green";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_low_ard_red";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_03_rds_low_ard_red: sma_spitfire_03_rds_low_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_low_ard_red.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_low_ard_black";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_low_ard_green";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_03_rds_low_ard_green: sma_spitfire_03_rds_low_black
	{
		scope=1;
		model="\sma\sma_vortex_optics\spitfire_03\sma_spitfire_03_rds_low_ard_green.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_03_rds_low_ard_red";
		MRT_SwitchItemNextClass="sma_spitfire_03_rds_low_ard_black";
		MRT_switchItemHintText="Illumination Off";
	};
};

class CfgPatches
{
	class sma_vortex_optics_01
	{
		units[]={};
		weapons[]=
		{
			"sma_spitfire_01_sc_black",
			"sma_spitfire_01_sc_green",
			"sma_spitfire_01_sc_red",
			"sma_spitfire_01_sc_closed",
			"sma_spitfire_01_black",
			"sma_spitfire_01_green",
			"sma_spitfire_01_red"
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
		sma_spitfire_01_sc_black=1;
		sma_spitfire_01_sc_green=1;
		sma_spitfire_01_sc_red=1;
		sma_spitfire_01_sc_closed=1;
		sma_spitfire_01_black=1;
		sma_spitfire_01_green=1;
		sma_spitfire_01_red=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class sma_spitfire_01_sc_black: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="Vortex Spitfire 1x (Lens Covers)";
		picture="\sma\sma_vortex_optics\spitfire_01\ui\vortex_spitfire01_sc_ca.paa";
		UiPicture="\sma\sma_vortex_optics\spitfire_01\ui\vortex_spitfire01_sc_ca.paa";
		model="\sma\sma_vortex_optics\spitfire_01\sma_spitfire_01_sc_black.p3d";
		descriptionShort="Vortex Spitfire: Prism Red Dot Optics";
		weaponInfoType="RscWeaponZeroing";
		author="Specialist Military Arms";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
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
					opticsFlare=1;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					opticsDisablePeripherialVision=0;
				};
			};
		};
		MRT_SwitchItemPrevClass="sma_spitfire_01_sc_closed";
		MRT_SwitchItemNextClass="sma_spitfire_01_sc_green";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_01_sc_green: sma_spitfire_01_sc_black
	{
		scope=1;
		model="sma\sma_vortex_optics\spitfire_01\sma_spitfire_01_sc_green.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_01_sc_black";
		MRT_SwitchItemNextClass="sma_spitfire_01_sc_red";
		MRT_switchItemHintText="Green Illuminated";
	};
	class sma_spitfire_01_sc_red: sma_spitfire_01_sc_black
	{
		scope=1;
		model="sma\sma_vortex_optics\spitfire_01\sma_spitfire_01_sc_red.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_01_sc_green";
		MRT_SwitchItemNextClass="sma_spitfire_01_sc_closed";
		MRT_switchItemHintText="Red Illuminated";
	};
	class sma_spitfire_01_sc_closed: sma_spitfire_01_sc_black
	{
		scope=1;
		model="sma\sma_vortex_optics\spitfire_01\sma_spitfire_01_sc_closed.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_01_sc_red";
		MRT_SwitchItemNextClass="sma_spitfire_01_sc_black";
		MRT_switchItemHintText="Lens Cap Closed";
	};
	class sma_spitfire_01_black: sma_spitfire_01_sc_black
	{
		scope=2;
		dlc="SMA";
		displayName="Vortex Spitfire 1x";
		picture="\sma\sma_vortex_optics\spitfire_01\ui\vortex_spitfire01_ca.paa";
		UiPicture="\sma\sma_vortex_optics\spitfire_01\ui\vortex_spitfire01_ca.paa";
		model="sma\sma_vortex_optics\spitfire_01\sma_spitfire_01_black.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_01_red";
		MRT_SwitchItemNextClass="sma_spitfire_01_green";
		MRT_switchItemHintText="Illumination Off";
	};
	class sma_spitfire_01_green: sma_spitfire_01_black
	{
		scope=1;
		model="sma\sma_vortex_optics\spitfire_01\sma_spitfire_01_green.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_01_black";
		MRT_SwitchItemNextClass="sma_spitfire_01_red";
		MRT_switchItemHintText="Green Illuminated";
	};
	class sma_spitfire_01_red: sma_spitfire_01_black
	{
		scope=1;
		model="sma\sma_vortex_optics\spitfire_01\sma_spitfire_01_red.p3d";
		author="Specialist Military Arms";
		MRT_SwitchItemPrevClass="sma_spitfire_01_green";
		MRT_SwitchItemNextClass="sma_spitfire_01_black";
		MRT_switchItemHintText="Red Illuminated";
	};
};

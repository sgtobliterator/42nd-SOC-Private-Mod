class CfgPatches
{
	class SMA_Eotech_552
	{
		units[]={};
		weapons[]={};
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
		SMA_eotech552=1;
		SMA_eotech552_kf=1;
		SMA_eotech552_kf_wdl=1;
		SMA_eotech552_kf_des=1;
		SMA_eotech552_3XDOWN=1;
		SMA_eotech552_3XDOWN_wdl=1;
		SMA_eotech552_3XDOWN_des=1;
		SMA_eotech552_3XUP=1;
		SMA_eotech552_3XUP_wdl=1;
		SMA_eotech552_3XUP_des=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_H;
	class SMA_eotech552: ItemCore
	{
		scope=2;
		dlc="SMA";
		displayName="EOTech 552";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br/&gt; No Magnification CQB Optic";
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
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class SMA_eotech552_kf: SMA_eotech552
	{
		scope=2;
		displayName="EOTech 552 + Killflash";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_kf_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_kf.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br/&gt; No Magnification CQB Optic &lt;br/&gt; wth Killflash";
	};
	class SMA_eotech552_kf_des: SMA_eotech552
	{
		scope=2;
		displayName="EOTech 552 + Killflash (Desert)";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_kf_des_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_kf_des.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br/&gt; No Magnification CQB Optic &lt;br/&gt; wth Killflash";
	};
	class SMA_eotech552_kf_wdl: SMA_eotech552
	{
		scope=2;
		displayName="EOTech 552 + Killflash (Woodland)";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_kf_wdl_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_kf_wdl.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br/&gt; No Magnification CQB Optic &lt;br/&gt; wth Killflash";
	};
	class SMA_eotech552_3XDOWN: SMA_eotech552
	{
		scope=2;
		displayName="EOTech 552 + 3x Magnifier";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_3XDOWN_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_3XDown.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotech552_3XUP";
		MRT_SwitchItemNextClass="SMA_eotech552_3XUP";
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
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class SMA_eotech552_3XDOWN_wdl: SMA_eotech552_3XDOWN
	{
		scope=2;
		displayName="EOTech 552 + 3x Magnifier (Woodland)";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_3XDOWN_wdl_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_3XDown_wdl.p3d";
		MRT_SwitchItemPrevClass="SMA_eotech552_3XUP_wdl";
		MRT_SwitchItemNextClass="SMA_eotech552_3XUP_wdl";
		MRT_switchItemHintText="Magnifier Down";
	};
	class SMA_eotech552_3XDOWN_des: SMA_eotech552_3XDOWN
	{
		scope=2;
		displayName="EOTech 552 + 3x Magnifier (Desert)";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_3XDOWN_des_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_3XDown_des.p3d";
		MRT_SwitchItemPrevClass="SMA_eotech552_3XUP_des";
		MRT_SwitchItemNextClass="SMA_eotech552_3XUP_des";
		MRT_switchItemHintText="Magnifier Down";
	};
	class SMA_eotech552_3XUP: SMA_eotech552_3XDOWN
	{
		scope=1;
		displayName="EOTech 552 + 3x Magnifier";
		author="Specialist Military Arms";
		model="\SMA_eotech_552\SMA_eotech_552_3XUp.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		MRT_SwitchItemPrevClass="SMA_eotech552_3XDOWN";
		MRT_SwitchItemNextClass="SMA_eotech552_3XDOWN";
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
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class SMA_eotech552_3XUP_wdl: SMA_eotech552_3XUP
	{
		scope=1;
		displayName="EOTech 552 + 3x Magnifier (Woodland)";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_3XDOWN_wdl_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_3XUp_wdl.p3d";
		MRT_SwitchItemPrevClass="SMA_eotech552_3XDOWN_wdl";
		MRT_SwitchItemNextClass="SMA_eotech552_3XDOWN_wdl";
		MRT_switchItemHintText="Magnifier Up";
	};
	class SMA_eotech552_3XUP_des: SMA_eotech552_3XUP
	{
		scope=1;
		displayName="EOTech 552 + 3x Magnifier (Desert)";
		author="Specialist Military Arms";
		picture="\SMA_eotech_552\ui\SMA_eotech552_3XDOWN_des_ca.paa";
		model="\SMA_eotech_552\SMA_eotech_552_3XUp_des.p3d";
		MRT_SwitchItemPrevClass="SMA_eotech552_3XDOWN_des";
		MRT_SwitchItemNextClass="SMA_eotech552_3XDOWN_des";
		MRT_switchItemHintText="Magnifier Up";
	};
};
class cfgMods
{
	author="76561198046163831";
	timepacked="1476742353";
};

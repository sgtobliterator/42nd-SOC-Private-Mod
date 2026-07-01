class CfgPatches
{
	class CIUSMC_Backpacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class Bag_Base;
	class CIUSMC_Drybag_JPC: Bag_Base
	{
		scope=2;
		displayName="[USMC] Drybag";
		picture="\26th_USMC_Backpacks\data\icon\Drybag.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_Drybag.p3d";
		maximumLoad=600;
		mass=2;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Drybag";
		};
	};
	class CIUSMC_Backpack_TT_JPC: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpack/Tasmanian Tiger";
		picture="\26th_USMC_Backpacks\data\icon\Tiger.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_Tiger.p3d";
		hiddenSelections[]=
		{
			"_rig"
		};
		maximumLoad=300;
		mass=2;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Tiger";
		};
	};
	class CIUSMC_Backpack_FILBE_JPC: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpack/FILBE";
		picture="\26th_USMC_Backpacks\data\icon\FILBE.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_FILBE.p3d";
		hiddenSelections[]=
		{
			"_pouch",
			"_rig"
		};
		maximumLoad=600;
		mass=4;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="FILBE";
		};
	};
	class CIUSMC_Backpack_Radio_JPC: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpack/Radio";
		picture="\26th_USMC_Backpacks\data\icon\Radio.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_Radio.p3d";
		hiddenSelections[]=
		{
			"_rig"
		};
		maximumLoad=400;
		mass=3;
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Radio";
		};
	};
	class CIUSMC_Backpack_Assault_JPC: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpack/Assault";
		picture="\26th_USMC_Backpacks\data\icon\Assault.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_Assault.p3d";
		hiddenSelections[]=
		{
			"_rig"
		};
		maximumLoad=200;
		mass=3;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Assault";
		};
	};
	class CIUSMC_Fannypack: Bag_Base
	{
		scope=2;
		displayName="[USMC] Fanny Pack";
		picture="\26th_USMC_Backpacks\data\icon\Fanny.paa";
		model="\26th_USMC_Backpacks\model\USMC_Fannypack.p3d";
		maximumLoad=200;
		mass=1;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Fanny";
		};
	};
	class CIUSMC_Backpanel_Ferro: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpanel/Ferro Panel";
		picture="\26th_USMC_Backpacks\data\icon\Ferro.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpanel_Ferro.p3d";
		maximumLoad=150;
		mass=2;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Ferro";
		};
	};
	class CIUSMC_Backpanel_Mini: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpanel/GMR Minimap";
		picture="\26th_USMC_Backpacks\data\icon\Mini.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpanel_Mini.p3d";
		maximumLoad=150;
		mass=2;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Mini";
		};
	};
	class CIUSMC_Backpanel_Crye_1: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpanel/Crye Zipon 1.0";
		picture="\26th_USMC_Backpacks\data\icon\Crye1.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpanel_Crye_1.p3d";
		maximumLoad=150;
		mass=2;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Crye1";
		};
	};
	class CIUSMC_Backpanel_Crye_2: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpanel/Crye Zipon 2.0";
		picture="\26th_USMC_Backpacks\data\icon\Crye2.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpanel_Crye_2.p3d";
		maximumLoad=150;
		mass=2;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="Crye2";
		};
	};
	class CIUSMC_M320_Belt_JPC: Bag_Base
	{
		scope=2;
		displayName="[USMC] M320 Belt";
		picture="\26th_USMC_Backpacks\data\icon\M320.paa";
		model="\26th_USMC_Backpacks\model\USMC_M320_Belt.p3d";
		maximumLoad=150;
		mass=2;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="M320";
		};
	};
	class CIUSMC_Backpack_SATL_JPC: Bag_Base
	{
		scope=2;
		displayName="[USMC] Backpack/SATL";
		picture="\26th_USMC_Backpacks\data\icon\SATL.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_SATL.p3d";
		hiddenSelections[]=
		{
			"_rig"
		};
		maximumLoad=1000;
		mass=6;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="SATL";
		};
	};
	class B_Parachute;
	class ACE_ReserveParachute;
	class CIUSMC_RESERVEPARACHUTE: ACE_ReserveParachute
	{
		author="Coal";
		scope=1;
		mass=10;
		picture="\26th_USMC_Backpacks\data\icon\HALO.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_HALO.p3d";
		displayName="[USMC] Backpack/HALO (Reserve)";
		ParachuteClass="Steerable_Parachute_F";
		ace_reserveParachute="";
		ace_hasReserveParachute=0;
		maximumLoad=0;
	};
	class CIUSMC_PARACHUTE_JPC: B_Parachute
	{
		author="Coal";
		scope=2;
		mass=10;
		picture="\26th_USMC_Backpacks\data\icon\HALO.paa";
		model="\26th_USMC_Backpacks\model\USMC_Backpack_HALO.p3d";
		displayName="[USMC] Backpack/HALO";
		ace_hasReserveParachute=1;
		ace_reserveParachute="CIUSMC_RESERVEPARACHUTE";
		maximumLoad=0;
		class XtdGearInfo
		{
			model="USMC_Backpacks";
			Backpacks="HALO";
		};
	};
};
class XtdGearModels
{
	class CfgVehicles
	{
		class USMC_Backpacks
		{
			label="Customize";
			author="Coal";
			options[]=
			{
				"Backpacks"
			};
			class Backpacks
			{
				label="Bags/Panels";
				values[]=
				{
					"Ferro",
					"Mini",
					"Crye1",
					"Crye2",
					"Tiger",
					"FILBE",
					"Assault",
					"Radio",
					"SATL",
					"M320",
					"Fanny",
					"Drybag",
					"HALO"
				};
				changeingame=0;
				class Ferro
				{
					label="Ferro";
				};
				class Mini
				{
					label="Mini";
				};
				class Crye1
				{
					label="Crye1";
				};
				class Crye2
				{
					label="Crye2";
				};
				class Tiger
				{
					label="Tiger";
				};
				class FILBE
				{
					label="FILBE";
				};
				class Assault
				{
					label="Assault";
				};
				class Radio
				{
					label="Radio";
				};
				class SATL
				{
					label="SATL";
				};
				class M320
				{
					label="M320";
				};
				class Fanny
				{
					label="Fanny";
				};
				class Drybag
				{
					label="Drybag";
				};
				class HALO
				{
					label="HALO";
				};
			};
		};
	};
};
class cfgMods
{
	author="Coal";
	timepacked="1778206593";
};

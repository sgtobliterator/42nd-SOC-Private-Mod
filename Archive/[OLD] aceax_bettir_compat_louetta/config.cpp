class CfgPatches
{
	class aceax_bettir_compat_louetta
	{
		name="compat_louetta";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"louetta",
			"BettIR_Core"
		};
		author="wanoO";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class louetta_gsgm
		{
			label="[Louetta] GSGM";
			author="Louetta";
			options[]=
			{
				"nvg"
			};
			class nvg
			{
				label="NVG (ACE)";
				values[]=
				{
					"off",
					"on"
				};
				changeingame=1;
				icon="aceax_bettir_compat_louetta\data\gpnvg.paa";
				class off
				{
					label="Off";
					description="Dismount GPNVG";
					icon="aceax_bettir_compat_louetta\data\wilcoxGSGM.paa";
					actionlabel="Dismount GPNVG";
				};
				class on
				{
					label="On";
					description="Mount GPNVG";
					icon="aceax_bettir_compat_louetta\data\gpnvg.paa";
					actionlabel="Mount GPNVG";
				};
			};
		};
		class louetta_maritime
		{
			label="[Louetta] Maritime";
			author="Louetta";
			options[]=
			{
				"tilt"
			};
			class tilt
			{
				label="Tilt";
				values[]=
				{
					"no",
					"yes"
				};
				class no
				{
					label="No";
				};
				class yes
				{
					label="Yes";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class NVGoggles;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class Louetta_GSGM_Matty: NVGoggles
	{
		class XtdGearInfo
		{
			model="louetta_gsgm";
			nvg="off";
		};
		visionMode[]=
		{
			"Normal"
		};
	};
	class Louetta_GSGM_GPNVG_Matty: NVGoggles
	{
		class XtdGearInfo
		{
			model="louetta_gsgm";
			nvg="on";
		};
	};
	class Louetta_SF: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class Louetta_SF_up: ItemCore
	{
		ace_hearing_protection=0.40000001;
		ace_hearing_lowerVolume=0.2;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class Louetta_SF_off: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class Louetta_Maritime_Hayden: ItemCore
	{
		class XtdGearInfo
		{
			model="louetta_maritime";
			tilt="no";
		};
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class Louetta_Maritime_Hayden_tilted_down: ItemCore
	{
		class XtdGearInfo
		{
			model="louetta_maritime";
			tilt="yes";
		};
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class Louetta_Micoff
				{
					displayName="Take Off Headset";
					condition="[_player] call Louetta_fnc_headsetdownCheck";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[_player] call Louetta_fnc_Headsetoff";
					showDisabled=0;
					priority=2.5;
				};
				class Louetta_MiconHead
				{
					displayName="Put On Headset";
					condition="[_player] call Louetta_fnc_headsetoffCheck";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[_player] call Louetta_fnc_HeadsetonHead";
					showDisabled=0;
					priority=2.5;
				};
				class Louetta_headsetdown
				{
					displayName="Fold Headset Down";
					condition="[_player] call Louetta_fnc_headsetupCheck";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[_player] call Louetta_fnc_Headsetdown";
					showDisabled=0;
					priority=2.5;
				};
				class Louetta_headsetup
				{
					displayName="Fold Headset Up";
					condition="[_player] call Louetta_fnc_headsetdownCheck";
					exceptions[]=
					{
						"isNotInside"
					};
					statement="[_player] call Louetta_fnc_Headsetup";
					showDisabled=0;
					priority=2.5;
				};
			};
		};
	};
};
class BettIR_Config
{
	class CompatibleNightvisionGoggles
	{
		class __base_NVG;
		class Louetta_GSGM_GPNVG_Matty: __base_NVG
		{
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631793290";
};

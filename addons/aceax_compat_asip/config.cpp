class CfgPatches
{
	class aceax_compat_asip
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers",
			"gearcollectionbackpack"
		};
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgVehicles
	{
		class asip_radio
		{
			label="[TFL] ASIP Radio/Satcom";
			author="Vielmond";
			options[]=
			{
				"camo",
				"Antenna"
			};
			class camo: CamoBase
			{
				values[]=
				{
					"mc",
					"cb",
					"lv"
				};
				class cb
				{
					label="CB";
					description="Coyote Brown";
					image="aceax_compat_asip\data\cb.paa";
				};
				class lv
				{
					label="LV";
					description="Louis Vuitton";
					image="aceax_compat_asip\data\lv.paa";
				};
			};
			class Antenna
			{
				values[]=
				{
					"Radio",
					"Satcom"
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_rgr;
	class asip_a_01_mc: B_Kitbag_rgr
	{
		class XtdGearInfo
		{
			model="asip_radio";
			camo="mc";
			Antenna="Satcom";
		};
	};
	class asip_a_02_cb: B_Kitbag_rgr
	{
		class XtdGearInfo
		{
			model="asip_radio";
			camo="cb";
			Antenna="Satcom";
		};
	};
	class asip_a_03_lv: B_Kitbag_rgr
	{
		class XtdGearInfo
		{
			model="asip_radio";
			camo="lv";
			Antenna="Satcom";
		};
	};
	class asip_b_01_mc: B_Kitbag_rgr
	{
		class XtdGearInfo
		{
			model="asip_radio";
			camo="mc";
			Antenna="Radio";
		};
	};
	class asip_b_02_cb: B_Kitbag_rgr
	{
		class XtdGearInfo
		{
			model="asip_radio";
			camo="cb";
			Antenna="Radio";
		};
	};
	class asip_b_03_lv: B_Kitbag_rgr
	{
		class XtdGearInfo
		{
			model="asip_radio";
			camo="lv";
			Antenna="Radio";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1631793244";
};

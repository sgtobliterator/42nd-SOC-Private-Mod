#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class aceax_compat_tfl_rugby
	{
		name="compat_tfl_rugby";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"TFL_rugby"
		};
		author="wanoO";
		version="0.1.0.0";
		versionStr="0.1.0.0";
		versionAr[]={0,1,0,0};
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class tfl_rugby_shirt
		{
			label="[TFL] G3 Rugby";
			author="TFL";
			options[]=
			{
				"rugby",
				"pants",
				"pads",
				"gloves"
			};
			class rugby: CamoBase
			{
				label="Rugby Shirt";
				values[]=
				{
					"mc",
					"tan"
				};
			};
			class pants: CamoBase
			{
				label="Pants";
				values[]=
				{
					"mc",
					"aor1",
					"cb"
				};
				class cb
				{
					label="CB";
					description="Coyote Brown";
					image="aceax_compat_tfl_rugby\data\cb.paa";
				};
			};
			class pads
			{
				label="Knee Pads";
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
				};
				class off
				{
					label="Off";
				};
			};
			class gloves
			{
				label="Gloves (ACE)";
				changeingame=1;
				values[]=
				{
					"on",
					"off"
				};
				class on
				{
					label="On";
					description="Wear Gloves";
					icon="aceax_compat_tfl_rugby\data\gloves.paa";
					actionlabel="Wear Gloves";
				};
				class off
				{
					label="Off";
					description="Remove Gloves";
					icon="aceax_compat_tfl_rugby\data\nogloves.paa";
					actionlabel="Remove Gloves";
				};
			};
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class tfl_rugby_mc_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_rugby_mc_np_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_rugby_mc_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_rugby_mc_np_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_rugby_mc_mcrugby_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="mc";
			pants="mc";
			pads="on";
			gloves="off";
		};
	};
	class tfl_rugby_mc_np_mcrugby_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="mc";
			pants="mc";
			pads="off";
			gloves="off";
		};
	};
	class tfl_rugby_mc_g_mcrugby_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="mc";
			pants="mc";
			pads="on";
			gloves="on";
		};
	};
	class tfl_rugby_mc_np_g_mcrugby_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="mc";
			pants="mc";
			pads="off";
			gloves="on";
		};
	};
	class tfl_rugby_aor1_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="aor1";
			pads="on";
			gloves="off";
		};
	};
	class tfl_rugby_aor1_np_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="aor1";
			pads="off";
			gloves="off";
		};
	};
	class tfl_rugby_aor1_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="aor1";
			pads="on";
			gloves="on";
		};
	};
	class tfl_rugby_aor1_np_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="aor1";
			pads="off";
			gloves="on";
		};
	};
	class tfl_rugby_cb_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="cb";
			pads="on";
			gloves="off";
		};
	};
	class tfl_rugby_cb_np_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="cb";
			pads="off";
			gloves="off";
		};
	};
	class tfl_rugby_cb_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="cb";
			pads="on";
			gloves="on";
		};
	};
	class tfl_rugby_cb_np_g_uni: Uniform_Base
	{
		class XtdGearInfo
		{
			model="tfl_rugby_shirt";
			rugby="tan";
			pants="cb";
			pads="off";
			gloves="on";
		};
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1632018792";
};

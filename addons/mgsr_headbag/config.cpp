class CfgPatches
{
	class aa_headbag
	{
		name="AA Headbag";
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"ace_main",
			"ace_captives",
			"ace_interact_menu"
		};
		units[]={};
		weapons[]={};
	};
};
class Extended_PreInit_EventHandlers
{
	settings="call compile preprocessFileLineNumbers '\mgsr_headbag\functions\settings.sqf'";
};
class CfgFunctions
{
	class aa_headbag
	{
		class puotek
		{
			file="\mgsr_headbag\functions";
			class statement
			{
			};
			class condition
			{
			};
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_Head
			{
				class aa_putHeadbagOn
				{
					displayName="Put Headbag On";
					distance=4;
					condition="call aa_headbag_fnc_condition";
					statement="call aa_headbag_fnc_statement";
					exceptions[]=
					{
						"isNotSwimming"
					};
					icon="\mgsr_headbag\headbag_icon.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class HelmetBase;
	class HeadgearItem;
	class aa_headbag: HelmetBase
	{
		author="Rebel / Facel";
		scope=2;
		displayName="Headbag";
		model="\mgsr_headbag\mgsr_headbag.p3d";
		picture="\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";
		class ItemInfo: HeadgearItem
		{
			allowedSlots[]={901,801,701,605};
			mass=1;
			uniformModel="\mgsr_headbag\mgsr_headbag.p3d";
			modelSides[]={6};
		};
	};
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class aa_headbag_dummy: CBA_MiscItem
	{
		author="Puotek";
		scope=2;
		displayName="Headbag (Dummy)";
		model="\mgsr_headbag\mgsr_headbag.p3d";
		picture="\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
};
class CfgGlasses
{
	class None;
	class aa_headbag_goggles: None
	{
		author="Rebel / Facel";
		mass=1;
		displayName="Headbag";
		model="\mgsr_headbag\mgsr_headbag.p3d";
		picture="\mgsr_headbag\UI\gear_mgsr_headbag_x_ca";
		identityTypes[]={};
		ACE_Overlay="\mgsr_headbag\headbag_overlay.paa";
		ACE_OverlayCracked="\mgsr_headbag\headbag_overlayCracked.paa";
		ACE_Resistance=1;
		ACE_Protection=1;
	};
};

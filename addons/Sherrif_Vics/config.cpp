class CfgPatches
{
	class Sherrif_Vics
	{
		units[]=
		{
			"sheriff_m113",
			"sheriff_md500"
		};
		weapons[]=
		{};
		name="Sherrif Vics";
		author="42nd SOC";
		requiredVersion=2.12;
		requiredAddons[]=
		{
			"rhsusf_main"
		};
	};
};

class CfgFactionClasses {
	class sheriff_blue
	{
		displayName="Law Enforcement - Sheriff";
		icon="\Sherrif_Vics\palogosmall2b.paa";
		priority=1;
		side=1;
		flag="\a3\Data_f\Flags\flag_us_co.paa";
		primaryLanguage="EN";
	};
};

class CfgVehicles {
	class rhsusf_m113_usarmy_unarmed;
	class sheriff_m113: rhsusf_m113_usarmy_unarmed
	{
		side=1;
		scope=2;
		crew="rhsusf_army_ucp_crewman";
		author="42nd SOC";
		faction="Sheriff_blue";
		displayName="Sheriff M113";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"Sherrif_Vics\data_vehicles\m113\m113a3_01_sheriff_1.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
		};
	};
	class RHS_MELB_H6M;
	class sheriff_md500: RHS_MELB_H6M
	{
		side=1;
		scope=2;
		author="42nd SOC";
		crew="rhsusf_army_ocp_ah64_pilot";
		faction="sheriff_blue";
		displayName="Sheriff MD500";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Sherrif_Vics\data_vehicles\melb_ext_sheriff_co.paa"
		};
	};
	class RHS_MELB_AH6M;
	class sheriff_ah6: RHS_MELB_AH6M
	{
		side=1;
		scope=2;
		author="42nd SOC";
		crew="rhsusf_army_ocp_ah64_pilot";
		faction="sheriff_blue";
		displayName="Sheriff AH-6M";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Sherrif_Vics\data_vehicles\melb_ext_sheriff_co.paa"
		};
	};
};


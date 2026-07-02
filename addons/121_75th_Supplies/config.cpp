class CfgPatches
{
	class 121_75th_supplies
	{
		units[]=
		{
			"121_75th_supply_1"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F"
		};
	};
};
class CfgEditorSubcategories
{
	class Sub_EdCat_121_Rangers
	{
		displayName="PUNISHER";
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class 121_75th_supply_1: NATO_Box_Base
	{
		scope=2;
		scopecurator=2;
		vehicleClass="Ammo";
		displayName="[42nd SOC] Basic Supplies";
		model="121_75th_supplies\Pelican_Tan_1.p3d";
		icon="iconCrateWpns";
		transportMaxWeapons=25;
		transportMaxMagazines=250;
		maximumLoad=2000;
		editorCategory="EdCat_121_supplies_crate";
		editorSubcategory="Sub_EdCat_121_Rangers";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\121_75th_supplies\data\plp_ct_MilCaseMedTan_co.paa"
		};
		class TransportWeapons
		{
			class _xx_75th_at4
			{
				weapon="rhs_weap_m136";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_75th_blk_mags
			{
				magazine="ranger_30Rnd_556_M995_AP_Blk";
				count=20;
			};
			class _xx_75th_tan_mags
			{
				magazine="ranger_30Rnd_556_M995_AP_Tan";
				count=20;
			};
			class _xx_75th_m240_belt
			{
				magazine="ranger_200Rnd_762x51_m61_ap";
				count=4;
			};
			class _xx_75th_m249_belt
			{
				magazine="rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote";
				count=6;
			};
			class _xx_75th_40mmHE
			{
				magazine="rhs_mag_M441_HE";
				count=10;
			};
			class _xx_75th_m67
			{
				magazine="HandGrenade";
				count=8;
			};
			class _xx_75th_m84
			{
				magazine="ACE_M84";
				count=8;
			};
			class _xx_75th_smokeWhite
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_75th_smokeRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_75th_smokePurple
			{
				magazine="SmokeShellPurple";
				count=4;
			};
			class _xx_75th_smokeGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_75th_smokeBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_75th_demo
			{
				magazine="democharge_remote_mag";
				count=2;
			};
			class _xx_75th_paintkillers
			{
				magazine="kat_Painkiller";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_75th_aat
			{
				name="kat_aatkit";
				count=5;
			};
			class _xx_75th_packing
			{
				name="ace_packingbandage";
				count=30;
			};
			class _xx_75th_elastic
			{
				name="ace_elasticbandage";
				count=30;
			};
			class _xx_75th_iv1000
			{
				name="ace_salineiv";
				count=8;
			};
			class _xx_75th_iv500
			{
				name="ace_salineiv_500";
				count=8;
			};
			class _xx_75th_iv250
			{
				name="ace_salineiv_250";
				count=4;
			};
			class _xx_75th_kinglt
			{
				name="kat_larynx";
				count=5;
			};
			class _xx_75th_chestseal
			{
				name="kat_chestseal";
				count=5;
			};
			class _xx_75th_splint
			{
				name="ace_splint";
				count=4;
			};
			class _xx_75th_tourniquet
			{
				name="ace_tourniquet";
				count=4;
			};
			class _xx_75th_cableTies
			{
				name="ACE_CableTie";
				count=10;
			};
			class _xx_75th_clacker
			{
				name="ACE_M26_Clacker";
				count=1;
			};
			class _xx_75th_naloxone
			{
				name="kat_naloxone";
				count=10;
			};
			class _xx_75th_amiodarone
			{
				name="kat_amiodarone";
				count=10;
			};
			class _xx_75th_lidocaine
			{
				name="kat_lidocaine";
				count=10;
			};
			class _xx_75th_atropine
			{
				name="kat_atropine";
				count=10;
			};
			class _xx_75th_norepinephrine
			{
				name="kat_norepinephrine";
				count=10;
			};
			class _xx_75th_nitroglycerin
			{
				name="kat_nitroglycerin";
				count=10;
			};
			class _xx_75th_phenylephrine
			{
				name="kat_phenylephrine";
				count=10;
			};
			class _xx_75th_IO_FAST
			{
				name="kat_IO_FAST";
				count=10;
			};
			class _xx_75th_IV_16
			{
				name="kat_IV_16";
				count=10;
			};
		};
	};
};
class cfgMods
{
	author="viscoplastic";
	timepacked="1660522987";
};

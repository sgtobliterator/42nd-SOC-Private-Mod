#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class aceax_compat_tfl_cap
	{
		name="compat_tfl_cap";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"New_Cap_Who_Dis"
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
		class tfl_cap_mac
		{
			label="[TFL] Cap";
			author="Mac";
			options[]=
			{
				"cap",
				"coms"
			};
			class cap
			{
				label="Cap";
				values[]=
				{
					"Oregon",
					"Ohio",
					"Gold",
					"Browns",
					"CrusaderBLK",
					"CrusaderMCA",
					"Mets",
					"MetsMC",
					"Frogman",
					"UKentucky",
					"Raiders",
					"JTAC",
					"Hotshots",
					"Slim",
					"Mando",
					"HangLoose",
					"NightTime",
					"Blackhawks",
					"Blackbeard",
					"BlackbeardMC",
					"Marsoc",
					"SingleMoms",
					"Baylor",
					"Fox",
					"Aspis",
					"Giuseppes",
					"Seal",
					"SealTGS",
					"Freddy",
					"Dodgers",
					"9/11",
					"FDNYBlue",
					"FDNYRed",
					"Forward",
					"USAMC",
					"USAMCA",
					"USATGS",
					"TheWay",
					"Leafs",
					"FCBayern",
					"Slayer",
					"Kodiak",
					"MLGA",
					"Mariachi",
					"Pararescue",
					"EX17",
					"Patriots"
				};
			};
			class coms
			{
				label="Headset (ACE)";
				changeingame=1;
				values[]=
				{
					"On",
					"Off"
				};
				class On
				{
					label="On";
					description="Headset On";
					icon="aceax_compat_tfl_cap\data\headset.paa";
					actionlabel="Wear Headset";
				};
				class Off
				{
					label="Off";
					description="Headset Off";
					icon="aceax_compat_tfl_cap\data\noheadset.paa";
					actionlabel="Remove Headset";
				};
			};
		};
		class tfl_cap_jd: tfl_cap_mac
		{
			label="[TFL] Cap";
			author="JD";
			class cap
			{
				label="Cap";
				values[]=
				{
					"ArcBLK",
					"Texans",
					"Berry",
					"JohnDeere",
					"Nike",
					"Academi",
					"Carhartt",
					"SureFire",
					"Patagonia",
					"Texas",
					"Monarch",
					"MattyTexas",
					"MattyTan",
					"MattyGrey",
					"Hayden",
					"JD",
					"JDBlack",
					"Barry"
				};
			};
		};
		class tfl_cringe
		{
			label="[TFL] Bandana";
			author="Louetta";
			options[]=
			{
				"Color"
			};
			class Color
			{
				values[]=
				{
					"US",
					"Blue",
					"Red",
					"Black"
				};
				class US
				{
					image="aceax_compat_tfl_cap\data\us.paa";
				};
				class Blue
				{
					image="#(rgb,8,8,3)color(0,0.5,0.9,1)";
				};
				class Red
				{
					image="#(rgb,8,8,3)color(1,0,0,1)";
				};
				class Black
				{
					image="#(rgb,8,8,3)color(0.2,0.2,0.2,1)";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
	};
	class mac_cap_oregon: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Oregon";
			coms="Off";
		};
	};
	class mac_cap_oregon_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Oregon";
			coms="On";
		};
	};
	class mac_cap_ohio: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Ohio";
			coms="Off";
		};
	};
	class mac_cap_ohio_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Ohio";
			coms="On";
		};
	};
	class mac_cap_gold: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Gold";
			coms="Off";
		};
	};
	class mac_cap_gold_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Gold";
			coms="On";
		};
	};
	class mac_cap_browns: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Browns";
			coms="Off";
		};
	};
	class mac_cap_browns_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Browns";
			coms="On";
		};
	};
	class mac_cap_crusader2_black: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="CrusaderBLK";
			coms="Off";
		};
	};
	class mac_cap_crusader2_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="CrusaderBLK";
			coms="On";
		};
	};
	class mac_cap_crusader2_mcarid: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="CrusaderMCA";
			coms="Off";
		};
	};
	class mac_cap_crusader2_mcarid_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="CrusaderMCA";
			coms="On";
		};
	};
	class mac_cap_mets: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Mets";
			coms="Off";
		};
	};
	class mac_cap_mets_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Mets";
			coms="On";
		};
	};
	class mac_cap_metsmc: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="MetsMC";
			coms="Off";
		};
	};
	class mac_cap_metsmc_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="MetsMC";
			coms="On";
		};
	};
	class mac_cap_frogman: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Frogman";
			coms="Off";
		};
	};
	class mac_cap_frogman_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Frogman";
			coms="On";
		};
	};
	class mac_cap_ukentucky: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="UKentucky";
			coms="Off";
		};
	};
	class mac_cap_ukentucky_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="UKentucky";
			coms="On";
		};
	};
	class mac_cap_raiders: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Raiders";
			coms="Off";
		};
	};
	class mac_cap_raiders_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Raiders";
			coms="On";
		};
	};
	class mac_cap_jtac: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="JTAC";
			coms="Off";
		};
	};
	class mac_cap_jtac_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="JTAC";
			coms="On";
		};
	};
	class mac_cap_hotshots: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Hotshots";
			coms="Off";
		};
	};
	class mac_cap_hotshots_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Hotshots";
			coms="On";
		};
	};
	class mac_cap_slim: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Slim";
			coms="Off";
		};
	};
	class mac_cap_slim_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Slim";
			coms="On";
		};
	};
	class mac_cap_mando: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Mando";
			coms="Off";
		};
	};
	class mac_cap_mando_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Mando";
			coms="On";
		};
	};
	class mac_cap_hangloose: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="HangLoose";
			coms="Off";
		};
	};
	class mac_cap_hangloose_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="HangLoose";
			coms="On";
		};
	};
	class mac_cap_nighttime: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="NightTime";
			coms="Off";
		};
	};
	class mac_cap_nighttime_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="NightTime";
			coms="On";
		};
	};
	class mac_cap_blackhawks: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Blackhawks";
			coms="Off";
		};
	};
	class mac_cap_blackhawks_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Blackhawks";
			coms="On";
		};
	};
	class mac_cap_blackbeard: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Blackbeard";
			coms="Off";
		};
	};
	class mac_cap_blackbeard_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Blackbeard";
			coms="On";
		};
	};
	class mac_cap_blackbeardmc: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="BlackbeardMC";
			coms="Off";
		};
	};
	class mac_cap_blackbeardmc_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="BlackbeardMC";
			coms="On";
		};
	};
	class mac_cap_marsoc2: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Marsoc";
			coms="Off";
		};
	};
	class mac_cap_marsoc2_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Marsoc";
			coms="On";
		};
	};
	class mac_cap_singlemoms: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="SingleMoms";
			coms="Off";
		};
	};
	class mac_cap_singlemoms_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="SingleMoms";
			coms="On";
		};
	};
	class mac_cap_baylor: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Baylor";
			coms="Off";
		};
	};
	class mac_cap_baylor_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Baylor";
			coms="On";
		};
	};
	class mac_cap_fox: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Fox";
			coms="Off";
		};
	};
	class mac_cap_fox_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Fox";
			coms="On";
		};
	};
	class mac_cap_aspis: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Aspis";
			coms="Off";
		};
	};
	class mac_cap_aspis_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Aspis";
			coms="On";
		};
	};
	class mac_cap_giuseppes: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Giuseppes";
			coms="Off";
		};
	};
	class mac_cap_giuseppes_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Giuseppes";
			coms="On";
		};
	};
	class mac_cap_sealsniper: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Seal";
			coms="Off";
		};
	};
	class mac_cap_sealsniper_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Seal";
			coms="On";
		};
	};
	class mac_cap_sealsnipertgs: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="SealTGS";
			coms="Off";
		};
	};
	class mac_cap_sealsnipertgs_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="SealTGS";
			coms="On";
		};
	};
	class mac_cap_freddy: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Freddy";
			coms="Off";
		};
	};
	class mac_cap_freddy_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Freddy";
			coms="On";
		};
	};
	class mac_cap_dodgers: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Dodgers";
			coms="Off";
		};
	};
	class mac_cap_dodgers_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Dodgers";
			coms="On";
		};
	};
	class mac_cap_911: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="9/11";
			coms="Off";
		};
	};
	class mac_cap_911_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="9/11";
			coms="On";
		};
	};
	class mac_cap_fdny_blue: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="FDNYBlue";
			coms="Off";
		};
	};
	class mac_cap_fdny_blue_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="FDNYBlue";
			coms="On";
		};
	};
	class mac_cap_fdny_red: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="FDNYRed";
			coms="Off";
		};
	};
	class mac_cap_fdny_red_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="FDNYRed";
			coms="On";
		};
	};
	class mac_cap_frwd: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Forward";
			coms="Off";
		};
	};
	class mac_cap_frwd_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Forward";
			coms="On";
		};
	};
	class mac_cap_usamc: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="USAMC";
			coms="Off";
		};
	};
	class mac_cap_usamc_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="USAMC";
			coms="On";
		};
	};
	class mac_cap_usamca: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="USAMCA";
			coms="Off";
		};
	};
	class mac_cap_usamca_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="USAMCA";
			coms="On";
		};
	};
	class mac_cap_usatgs: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="USATGS";
			coms="Off";
		};
	};
	class mac_cap_usatgs_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="USATGS";
			coms="On";
		};
	};
	class mac_cap_theway: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="TheWay";
			coms="Off";
		};
	};
	class mac_cap_theway_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="TheWay";
			coms="On";
		};
	};
	class mac_cap_leafs: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Leafs";
			coms="Off";
		};
	};
	class mac_cap_leafs_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Leafs";
			coms="On";
		};
	};
	class mac_cap_fcbayern: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="FCBayern";
			coms="Off";
		};
	};
	class mac_cap_fcbayern_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="FCBayern";
			coms="On";
		};
	};
	class mac_cap_slayer: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Slayer";
			coms="Off";
		};
	};
	class mac_cap_slayer_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Slayer";
			coms="On";
		};
	};
	class mac_cap_kodiak: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Kodiak";
			coms="Off";
		};
	};
	class mac_cap_kodiak_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Kodiak";
			coms="On";
		};
	};
	class mac_cap_mlga_red: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="MLGA";
			coms="Off";
		};
	};
	class mac_cap_mlga_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="MLGA";
			coms="On";
		};
	};
	class mac_cap_mariachi: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Mariachi";
			coms="Off";
		};
	};
	class mac_cap_mariachi_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Mariachi";
			coms="On";
		};
	};
	class mac_cap_pararescue: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Pararescue";
			coms="Off";
		};
	};
	class mac_cap_pararescue_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Pararescue";
			coms="On";
		};
	};
	class mac_cap_ex17: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="EX17";
			coms="Off";
		};
	};
	class mac_cap_ex17_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="EX17";
			coms="On";
		};
	};
	class mac_cap_patriots: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Patriots";
			coms="Off";
		};
	};
	class mac_cap_patriots_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_mac";
			cap="Patriots";
			coms="On";
		};
	};
	class tfl_cap_arcblk: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="ArcBLK";
			coms="Off";
		};
	};
	class tfl_cap_arcblk_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="ArcBLK";
			coms="On";
		};
	};
	class tfl_cap_texans_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Texans";
			coms="Off";
		};
	};
	class tfl_cap_berry_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Berry";
			coms="On";
		};
	};
	class tfl_cap_johndeere: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="JohnDeere";
			coms="Off";
		};
	};
	class tfl_cap_johndeere_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="JohnDeere";
			coms="On";
		};
	};
	class tfl_cap_nike: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Nike";
			coms="Off";
		};
	};
	class tfl_cap_nike_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Nike";
			coms="On";
		};
	};
	class tfl_cap_academi: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Academi";
			coms="Off";
		};
	};
	class tfl_cap_academi_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Academi";
			coms="On";
		};
	};
	class tfl_cap_carhartt: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Carhartt";
			coms="Off";
		};
	};
	class tfl_cap_carhartt_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Carhartt";
			coms="On";
		};
	};
	class tfl_cap_surefire: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="SureFire";
			coms="Off";
		};
	};
	class tfl_cap_surefire_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="SureFire";
			coms="On";
		};
	};
	class tfl_cap_pat: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Patagonia";
			coms="Off";
		};
	};
	class tfl_cap_pat_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Patagonia";
			coms="On";
		};
	};
	class tfl_cap_texas: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Texas";
			coms="Off";
		};
	};
	class tfl_cap_texas_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Texas";
			coms="On";
		};
	};
	class tfl_cap_monarch_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Monarch";
			coms="Off";
		};
	};
	class tfl_cap_mattytexas_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="MattyTexas";
			coms="On";
		};
	};
	class tfl_cap_mattygry_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="MattyGrey";
			coms="Off";
		};
	};
	class tfl_cap_mattytan_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="MattyTan";
			coms="On";
		};
	};
	class tfl_cap_mattytan_ep: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="MattyTan";
			coms="Off";
		};
	};
	class tfl_cap_matty_ep: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="MattyGrey";
			coms="Off";
		};
	};
	class tfl_cap_hayden_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Hayden";
			coms="On";
		};
	};
	class tfl_cap_jd_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="JD";
			coms="Off";
		};
	};
	class tfl_cap_jd_ep: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="JD";
			coms="Off";
		};
	};
	class tfl_cap_jd_blk_coms: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="JD BLK";
			coms="On";
		};
	};
	class tfl_cap_jd_blk_ep: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="JD BLK";
			coms="Off";
		};
	};
	class tfl_cap_barry_mca: ItemCore
	{
		class XtdGearInfo
		{
			model="tfl_cap_jd";
			cap="Barry";
			coms="Off";
		};
	};
	class tfl_cringe_matty_us: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cringe";
			Color="US";
		};
	};
	class tfl_cringe_matty_blue: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cringe";
			Color="Blue";
		};
	};
	class tfl_cringe_matty_red: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cringe";
			Color="Red";
		};
	};
	class tfl_cringe_matty_blk: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
		class XtdGearInfo
		{
			model="tfl_cringe";
			Color="Black";
		};
	};
	class tfl_comtaciv: ItemCore
	{
		ace_hearing_protection=0.80000001;
		ace_hearing_lowerVolume=0.5;
	};
};
class cfgMods
{
	author="wanoO";
	timepacked="1632026329";
};

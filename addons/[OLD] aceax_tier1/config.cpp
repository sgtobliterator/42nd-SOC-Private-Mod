class CfgPatches
{
	class aceax_data_tier1
	{
		name="data_tier1";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="AUTHOR";
		version="0.7.0.0";
		versionStr="0.7.0.0";
		versionAr[]={0,7,0,0};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class Tier1_HK416D145
		{
			label="HK416 D14.5";
			author="Tier One";
			options[]=
			{
				"camo",
				"butt",
				"handguard"
			};
			class camo
			{
				values[]=
				{
					"STD",
					"DST",
					"BDS"
				};
				class STD
				{
					label="Standard";
				};
				class DST
				{
					label="Desert";
				};
				class BDS
				{
					label="Black/Desert";
				};
			};
			class butt
			{
				values[]=
				{
					"LMT",
					"CTR",
					"IMOD",
					"MFT"
				};
				class LMT
				{
					label="LMT";
				};
				class CTR
				{
					label="CTR";
				};
				class IMOD
				{
					label="IMOD";
				};
				class MFT
				{
					label="MFT";
				};
			};
			class handguard
			{
				values[]=
				{
					"STD",
					"SMR",
					"RAHG",
					"MW"
				};
				class STD
				{
					label="Standard";
				};
				class SMR
				{
					label="SMR";
				};
				class RAHG
				{
					label="RAHG";
				};
				class MW
				{
					label="Midwest";
				};
			};
		};
		class Tier1_HK416D10: Tier1_HK416D145
		{
			label="HK416 D10";
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Tier1_HK416D145_LMT
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="LMT";
			handguard="STD";
		};
		class Tier1_HK416D145_LMT_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="LMT";
			handguard="STD";
		};
		class Tier1_HK416D145_CTR
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="CTR";
			handguard="STD";
		};
		class Tier1_HK416D145_CTR_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="CTR";
			handguard="STD";
		};
		class Tier1_HK416D145_SMR_LMT
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="LMT";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_LMT_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="LMT";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_LMT_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="LMT";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_CTR
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="CTR";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_CTR_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="CTR";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_CTR_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="CTR";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_IMOD
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="IMOD";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_IMOD_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="IMOD";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_IMOD_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="IMOD";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_MFT
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="MFT";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_MFT_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="MFT";
			handguard="SMR";
		};
		class Tier1_HK416D145_SMR_MFT_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="MFT";
			handguard="SMR";
		};
		class Tier1_HK416D145_RAHG_LMT
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="LMT";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_LMT_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="LMT";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_LMT_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="LMT";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_CTR
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="CTR";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_CTR_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="CTR";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_CTR_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="CTR";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_IMOD
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="IMOD";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_IMOD_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="IMOD";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_IMOD_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="IMOD";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_MFT
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="MFT";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_MFT_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="MFT";
			handguard="RAHG";
		};
		class Tier1_HK416D145_RAHG_MFT_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="MFT";
			handguard="RAHG";
		};
		class Tier1_HK416D145_MW13_MFT
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="MFT";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_MFT_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="MFT";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_MFT_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="MFT";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_CTR
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="CTR";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_CTR_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="CTR";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_CTR_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="CTR";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_LMT
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="LMT";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_LMT_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="LMT";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_LMT_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="LMT";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_IMOD
		{
			model="Tier1_HK416D145";
			camo="STD";
			butt="IMOD";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_IMOD_Desert
		{
			model="Tier1_HK416D145";
			camo="DST";
			butt="IMOD";
			handguard="MW";
		};
		class Tier1_HK416D145_MW13_IMOD_BlackDesert
		{
			model="Tier1_HK416D145";
			camo="BDS";
			butt="IMOD";
			handguard="MW";
		};
		class Tier1_HK416D10_LMT
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="LMT";
			handguard="STD";
		};
		class Tier1_HK416D10_LMT_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="LMT";
			handguard="STD";
		};
		class Tier1_HK416D10_CTR
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="CTR";
			handguard="STD";
		};
		class Tier1_HK416D10_CTR_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="CTR";
			handguard="STD";
		};
		class Tier1_HK416D10_SMR_LMT
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="LMT";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_LMT_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="LMT";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_LMT_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="LMT";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_CTR
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="CTR";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_CTR_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="CTR";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_CTR_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="CTR";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_IMOD
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="IMOD";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_IMOD_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="IMOD";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_IMOD_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="IMOD";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_MFT
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="MFT";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_MFT_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="MFT";
			handguard="SMR";
		};
		class Tier1_HK416D10_SMR_MFT_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="MFT";
			handguard="SMR";
		};
		class Tier1_HK416D10_RAHG_LMT
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="LMT";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_LMT_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="LMT";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_LMT_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="LMT";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_CTR
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="CTR";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_CTR_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="CTR";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_CTR_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="CTR";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_IMOD
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="IMOD";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_IMOD_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="IMOD";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_IMOD_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="IMOD";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_MFT
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="MFT";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_MFT_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="MFT";
			handguard="RAHG";
		};
		class Tier1_HK416D10_RAHG_MFT_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="MFT";
			handguard="RAHG";
		};
		class Tier1_HK416D10_MW9_MFT
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="MFT";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_MFT_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="MFT";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_MFT_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="MFT";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_CTR
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="CTR";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_CTR_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="CTR";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_CTR_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="CTR";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_LMT
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="LMT";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_LMT_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="LMT";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_LMT_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="LMT";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_IMOD
		{
			model="Tier1_HK416D10";
			camo="STD";
			butt="IMOD";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_IMOD_Desert
		{
			model="Tier1_HK416D10";
			camo="DST";
			butt="IMOD";
			handguard="MW";
		};
		class Tier1_HK416D10_MW9_IMOD_BlackDesert
		{
			model="Tier1_HK416D10";
			camo="BDS";
			butt="IMOD";
			handguard="MW";
		};
	};
};

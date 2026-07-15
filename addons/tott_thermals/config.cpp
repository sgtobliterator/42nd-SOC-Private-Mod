class CfgPatches
{
	class TOTT_Thermals
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_Sams_Loadorder"};
	};
};
class CfgCoreData
{
	textureTIConversion = "TOTT_Thermals\Custom_Thermals.png";
	textureTIConversionDX11 = "TOTT_Thermals\Custom_Thermals.png";
};
	class CfgInGameUI
	{
		class FLIRModeNames
		{
			FLIRModeName[] = {
				"WHOT",//0, first row
				"BHOT",
				"GHOT",//2 3rd row
				"BHOT",
				"OHOT",//4
				"BHOT",
				"WHOT",//6
				"RAINBOW",
				"VOODOOWHOT",//8
				"VOODOOBHOT"
			};
		};
	};


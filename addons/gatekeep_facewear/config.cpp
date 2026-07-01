#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class gatekeep_facewear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F"
		};
	};
};
class cfgGlasses
{
	class None;
	class gk_m_frame_blackshaded: None
	{
		displayname="[GateKeep] M Frame Black/Shaded Purple";
		scope=2;
		author="Louetta";
		model="tfl_glasses\m_frame.p3d";
		picture="";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_glasses\data\glasses_m_frame_co.paa",
			"gatekeep_facewear\data\glasses_m_frame_glass_purple_ca.paa"
		};
		identityTypes[]={};
	};
	class gk_m_frame_ttclear: None
	{
		displayname="[GateKeep] M Frame Black Two Tone/Clear";
		scope=2;
		author="GateKeep";
		model="tfl_glasses\m_frame.p3d";
		picture="";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"gatekeep_facewear\data\glasses_m_frame_3_co.paa",
			"tfl_glasses\data\glasses_m_frame_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1618830874";
};

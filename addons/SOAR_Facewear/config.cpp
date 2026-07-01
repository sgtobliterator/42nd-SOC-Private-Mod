#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Apr 18 00:21:54 2023 : 'file' last modified on Mon Apr 17 19:52:07 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SOAR_Facewear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F"};
	};
};
class cfgGlasses
{
	class None;
	class SOAR_Cold_Eyepro_MC_MFrame: None
	{
		displayname = "[Rangers] RRC-Multi-Clear";
		scope = 2;
		author = "DirtySaSaLaa";
		model = "SOAR_Facewear\models\SOAR_Cold_Eyepro.p3d";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		picture = "SOAR_Uniforms\data\160th2.paa";
		identityTypes[] = {"NoGlasses",1000};
		hiddenSelections[] = {"M_Lens","M_Frame","G_Lens","G_Frame","Bala_Camo","Gloves"};
		hiddenSelectionsTextures[] = {"soar_facewear\data\glasses_m_frame_glass_2_ca.paa","soar_facewear\data\glasses_m_frame_co.paa","","","soar_facewear\data\arc_bala_mc_co.paa",""};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			hiddenSelections[] = {"M_Lens","M_Frame","G_Lens","G_Frame","Bala_Camo","Gloves"};
			hiddenSelectionsTextures[] = {"soar_facewear\data\glasses_m_frame_glass_2_ca.paa","soar_facewear\data\glasses_m_frame_co.paa","","","soar_facewear\data\arc_bala_mc_co.paa",""};
			uniformModel = "SOAR_Facewear\models\SOAR_Cold_Eyepro.p3d";
			mass = 4;
		};
	};
};
class cfgMods
{
	author = "DirtySaSaLaa";
	timepacked = "1680314242";
};

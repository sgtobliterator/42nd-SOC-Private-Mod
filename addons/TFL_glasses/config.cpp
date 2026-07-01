class CfgPatches
{
	class tfl_glasses
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
	class tfl_ess_blackshaded: None
	{
		displayname="[TFL] ESS CrossBow Black/Shaded";
		scope=2;
		author="Louetta";
		model="tfl_glasses\ESS.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_ess_co.paa",
			"tfl_glasses\data\glasses_ess_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_ess_blackclear: None
	{
		displayname="[TFL] ESS CrossBow Black/Clear";
		scope=0;
		author="Louetta";
		model="tfl_glasses\ESS.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_ess_co.paa",
			"tfl_glasses\data\glasses_ess_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_ess_tanshaded: None
	{
		displayname="[TFL] ESS CrossBow Tan/Shaded";
		scope=2;
		author="Louetta";
		model="tfl_glasses\ESS.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_ess_2_co.paa",
			"tfl_glasses\data\glasses_ess_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_ess_tanclear: None
	{
		displayname="[TFL] ESS CrossBow Tan\Clear";
		scope=0;
		author="Louetta";
		model="tfl_glasses\ESS.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_ess_2_co.paa",
			"tfl_glasses\data\glasses_ess_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_Duduma: None
	{
		displayname="[TFL] Duduma Glasses";
		scope=0;
		author="Louetta";
		model="tfl_glasses\duduma.p3d";
		picture="tfl_glasses\data\ui.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		identityTypes[]={};
	};
	class tfl_aviator: None
	{
		displayname="[TFL] Aviators";
		scope=2;
		author="Louetta";
		model="tfl_glasses\aviator.p3d";
		picture="tfl_glasses\data\ui.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		identityTypes[]={};
	};
	class tfl_tac_glas: None
	{
		displayname="[TFL] Tactical Glasses";
		scope=0;
		author="Louetta";
		model="tfl_glasses\tac.p3d";
		picture="tfl_glasses\data\ui.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		identityTypes[]={};
	};
	class tfl_m_frame_blackshaded: None
	{
		displayname="[TFL] M Frame Black/Shaded";
		scope=2;
		author="Louetta";
		model="tfl_glasses\m_frame.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_m_frame_glass_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_m_frame_blackclear: None
	{
		displayname="[TFL] M Frame Black/Clear";
		scope=2;
		author="Louetta";
		model="tfl_glasses\m_frame.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_m_frame_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_m_frame_tanshaded: None
	{
		displayname="[TFL] M Frame Tan/Shaded";
		scope=2;
		author="Louetta";
		model="tfl_glasses\m_frame.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_m_frame_2_co.paa",
			"tfl_glasses\data\glasses_m_frame_glass_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_m_frame_tanclear: None
	{
		displayname="[TFL] M Frame Tan/Clear";
		scope=2;
		author="Louetta";
		model="tfl_glasses\m_frame.p3d";
		picture="tfl_glasses\data\ui.paa";
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
			"tfl_glasses\data\glasses_m_frame_2_co.paa",
			"tfl_glasses\data\glasses_m_frame_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_rayban_black: None
	{
		displayname="[TFL] RayBan Black Tint";
		scope=0;
		author="Louetta";
		model="tfl_glasses\rayban.p3d";
		picture="tfl_glasses\data\ui.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_glasses\data\glasses_rayban_glass_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_rayban_silver: None
	{
		displayname="[TFL] RayBan Silver Tint";
		scope=0;
		author="Louetta";
		model="tfl_glasses\rayban.p3d";
		picture="tfl_glasses\data\ui.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_glasses\data\glasses_rayban_glass_2_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_rayban_orange: None
	{
		displayname="[TFL] RayBan Orange Tint";
		scope=0;
		author="Louetta";
		model="tfl_glasses\rayban.p3d";
		picture="tfl_glasses\data\ui.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_glasses\data\glasses_rayban_glass_3_ca.paa"
		};
		identityTypes[]={};
	};
	class tfl_rayban_green: None
	{
		displayname="[TFL] RayBan Blue/Green Tint";
		scope=0;
		author="Louetta";
		model="tfl_glasses\rayban.p3d";
		picture="tfl_glasses\data\ui.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		mass=5;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tfl_glasses\data\glasses_rayban_glass_4_ca.paa"
		};
		identityTypes[]={};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1612811637";
};

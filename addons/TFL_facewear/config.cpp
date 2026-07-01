class CfgPatches
{
	class tfl_fw
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers"
		};
	};
};
class CfgGlasses
{
	class None;
	class tfl_arc_bala: None
	{
		scope=2;
		displayname="[TFL] Arc'Teryx LEAF Balaclava";
		author="Katrina/Louetta";
		model="TFL_facewear\model\arc_bala.p3d";
		picture="";
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_facewear\model\arc_bala.p3d";
			mass=4;
		};
	};
	class tfl_arc_bala_glasses: None
	{
		scope=2;
		displayname="[TFL] Arc'Teryx LEAF Balaclava + JTF2 Safety Glasses";
		author="Katrina/Louetta";
		model="tfl_facewear\model\arc_bala_glass.p3d";
		picture="";
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_facewear\model\arc_bala_glass.p3d";
			mass=4;
		};
	};
	class tfl_arc_bala_blk: None
	{
		scope=2;
		displayname="[TFL] Arc'Teryx LEAF Balaclava Black";
		author="Katrina/Louetta";
		model="TFL_facewear\model\arc_bala.p3d";
		picture="";
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_facewear\data\arc_bala_blk_co.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"TFL_facewear\data\arc_bala_blk_co.paa"
			};
			uniformModel="tfl_facewear\model\arc_bala.p3d";
			mass=4;
		};
	};
	class tfl_arc_bala_glasses_blk: None
	{
		scope=2;
		displayname="[TFL] Arc'Teryx LEAF Balaclava Black + JTF2 Safety Glasses";
		author="Katrina/Louetta";
		model="tfl_facewear\model\arc_bala_glass.p3d";
		picture="";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"TFL_facewear\data\arc_bala_blk_co.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"TFL_facewear\data\arc_bala_blk_co.paa"
			};
			uniformModel="tfl_facewear\model\arc_bala_glass.p3d";
			mass=4;
		};
	};
	class tfl_jtf2_safety: None
	{
		scope=2;
		displayname="[TFL] JTF2 Safety Glasses";
		author="Katrina/Louetta";
		model="tfl_facewear\model\jtf2_glasses.p3d";
		picture="";
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_facewear\model\jtf2_glasses.p3d";
			mass=4;
		};
	};
	class tfl_solr: None
	{
		scope=2;
		displayname="[TFL] SOLR Mask";
		author="Louetta";
		model="tfl_facewear\model\solr.p3d";
		picture="";
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="tfl_facewear\model\solr.p3d";
			mass=4;
		};
	};
};

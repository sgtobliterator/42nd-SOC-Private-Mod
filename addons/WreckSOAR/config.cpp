class CfgPatches
{
	class 3RB_SOAR
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class WrecksSOAR: B_Soldier_base_F
	{
		author="Wrecker";
		scope=2;
		model="\WreckSOAR\models\WrecksSOAR.p3d";
		uniformClass="WrecksSOAR";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo3",
			"leftknee",
			"rightknee",
			"Insignia1"
		};
		hiddenSelectionsTextures[]=
		{
			"WreckSOAR\textures\Pants_MC.paa",
			"WreckSOAR\textures\fleece_brown.paa",
			"WreckSOAR\textures\salomon2_co.paa",
			"",
			"",
			"WreckSOAR\textures\160th_patch.paa"
		};
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class WrecksSOAR: Uniform_Base
	{
		author="Wrecker";
		scope=2;
		displayName="[2-75th] SOAR G3";
		picture="\WreckSOAR\textures\3RB.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WrecksSOAR";
			containerClass="Supply40";
			mass=40;
		};
	};
};
class cfgMods
{
	author="Wrecker";
	timepacked="1654451781";
};

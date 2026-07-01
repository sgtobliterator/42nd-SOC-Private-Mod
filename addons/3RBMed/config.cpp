class CfgPatches
{
	class MED_G3
	{
		requiredaddons[]=
		{
			"A3_Characters_F"
		};
		requiredversion=1;
		units[]={};
		weapons[]={};
		magazines[]={};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class G3_MED: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="S-4 Logistics";
		displayName="[10th LI] Multicam Crye G3 [MED]";
		picture="3RBMed\textures\3RB.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[]={0,1,2,3};
			uniformClass="G3_MED";
			containerClass="Supply80";
			mass=20;
			allowedSlots[]={"701","801","901"};
			armor=0;
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class G3_MED: B_Soldier_base_F
	{
		scope=1;
		dlc="";
		modelSides[]={0,1,2,3};
		displayName="Test Man";
		model="\3RBMed\models\3RBG3Med.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
};
class cfgMods
{
	author="Wrecker";
	timepacked="1654451294";
};

class CfgPatches
{
	class 121_75th_misc
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		author="Visco";
	};
};
class CfgFaces
{
	class Man_A3
	{
		class RussianHead_5;
		class 75th_ranger_visco_face: RussianHead_5
		{
			author="Visco";
			displayname="[121] Visco's head";
			texture="\121_75th_Misc\data\m_nanhaeHead_04_co.paa";
			material="\121_75th_Misc\data\m_nanhaeHead_04.rvmat";
			materialWounded1="\121_75th_Misc\data\m_nanhaeHead_04_injury.rvmat";
			materialWounded2="\121_75th_Misc\data\m_nanhaeHead_04_injury.rvmat";
			textureHL="121_75th_Misc\data\visco_arm_co.paa";
			textureHL2="121_75th_Misc\data\visco_arm_co.paa";
		};
	};
};
class cfgMods
{
	author="viscoplastic";
	timepacked="1660522927";
};

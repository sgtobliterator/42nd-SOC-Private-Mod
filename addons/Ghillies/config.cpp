class CfgPatches
{
	class a3_dgr_equipment
	{
		author="42nd SOC";
		name="42nd Ghillies";
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgGlasses {
	class G_Balaclava_blk;
	class 42nd_ghillie_base: G_Balaclava_blk {
		author = "42nd SOC";
		displayName = "Test";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
		picture = "\x\42nd_SOC_PrivateMod\addons\42nd_Ui\Images\FIXED_IT_DONT_WAKE_ME_UP_AGAIN_LOL.paa";
		model = "\x\42nd_SOC_PrivateMod\addons\Ghillies\Models\Ghillie.p3d";
		hiddenSelections[] = {"_head","_hat","_torso","_pants"};
		hiddenSelectionsTextures[] = {"\x\42nd_SOC_PrivateMod\addons\Ghillies\Textures"}
	};
};
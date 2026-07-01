class CfgPatches
{
	class 121_PJ_uniform
	{
		magazines[]={};
		ammo[]={};
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers"
		};
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_diver_F;
	class rhsusf_army_acu_uniform;
	class PJCryeG3: B_Soldier_F
	{
		scope=2;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=2;
		faction="sof_rangers";
		author="Toka";
		model="121_PJ_uniform\121_PJ_uniform.p3d";
		uniforMClass="PJCryeG3";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class PJCryeG2: B_Soldier_F
	{
		scope=2;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=2;
		faction="sof_rangers";
		author="Toka";
		model="121_PJ_uniform\121_PJ_uniform2.p3d";
		uniforMClass="PJCryeG2";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class PJRubgy: B_Soldier_F
	{
		scope=2;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=2;
		faction="sof_rangers";
		author="Toka";
		model="121_PJ_uniform\121_PJ_uniform3.p3d";
		uniforMClass="PJRubgy";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class PJPCU: B_Soldier_F
	{
		scope=2;
		camouflage=0;
		displayName="Rangers";
		scopeArsenal=2;
		faction="sof_rangers";
		author="Toka";
		model="121_PJ_uniform\121_PJ_uniform4.p3d";
		uniforMClass="PJPCU";
		identityTypes[]=
		{
			"G_NATO_diver"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
};
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class PJCryeG3: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Toka";
		displayName="[24th STS] Crye G3";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniforMClass="PJCryeG3";
			containerClass="Supply60";
			mass=5;
			uniformType="Neopren";
		};
		class XtdGearInfo
		{
			model="121_PJ_uniform";
			Uniforms="G3";
		};
	};
	class CryeG2: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Toka";
		displayName="[24th STS] Crye G2";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniforMClass="PJCryeG2";
			containerClass="Supply60";
			mass=5;
			uniformType="Neopren";
		};
		class XtdGearInfo
		{
			model="121_PJ_uniform";
			Uniforms="G2";
		};
	};
	class PJRubgy: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Toka";
		displayName="[24th STS] Tan Rugby";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniforMClass="PJRubgy";
			containerClass="Supply60";
			mass=5;
			uniformType="Neopren";
		};
		class XtdGearInfo
		{
			model="121_PJ_uniform";
			Uniforms="Rubgy";
		};
	};
	class PJPCU: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Toka";
		displayName="[24th STS] Tan PCU";
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniforMClass="PJPCU";
			containerClass="Supply60";
			mass=5;
			uniformType="Neopren";
		};
		class XtdGearInfo
		{
			model="121_PJ_uniform";
			Uniforms="PCU";
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class 121_PJ_uniform
		{
			label="Customise";
			author="Toka";
			options[]=
			{
				"Uniforms"
			};
			class Uniforms
			{
				label="Unifom Layout";
				values[]=
				{
					"G3",
					"G2",
					"Rubgy",
					"PCU"
				};
				class CryeG3
				{
					label="G3";
				};
				class CryeG2
				{
					label="G2";
				};
				class PJRubgy
				{
					label="Rugby";
				};
				class PJPCU
				{
					label="PCU";
				};
			};
		};
	};
};
class cfgMods
{
	author="Toka";
	timepacked="1659892269";
};

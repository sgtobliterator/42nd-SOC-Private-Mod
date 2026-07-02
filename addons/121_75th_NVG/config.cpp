class CfgPatches
{
	class 121_75th_NVG
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.0099999998;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class Binocular;
	class NVGoggles;
	class ranger_nvg1: NVGoggles
	{
		scope=1;
		displayName="[42nd SOC] AN/PVS-31 Night Vision Device 1 [On]";
		picture="\121_75th_NVG\121_ranger_nvg_ca.paa";
		model="121_75th_NVG\pvs31_down.p3d";
		simulation="NVGoggles";
		author="Visco";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\121_75th_NVG\optics\pvs_optic";
		nameSound="nvgoggles";
		descriptionShort="Use ACE self-interaction to take off NVG";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_75th_NVG\pvs31_down.p3d";
			modelOff="121_75th_NVG\pvs31_up_wide.p3d";
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class ranger_nvg2: NVGoggles
	{
		scope=2;
		displayName="[42nd SOC] AN/PVS-31 Night Vision Device";
		picture="\121_75th_NVG\121_ranger_nvg_ca.paa";
		model="121_75th_NVG\pvs31_up_mount.p3d";
		simulation="NVGoggles";
		author="Visco";
		modelOptics="";
		visionMode[]=
		{
			"Normal"
		};
		descriptionShort="Use ACE self-interaction to use the NVG";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_75th_NVG\pvs31_down.p3d";
			modelOff="121_75th_NVG\pvs31_up_mount.p3d";
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		class XtdGearInfo
		{
			model="ranger_pvs31";
			position="up";
		};
	};
	class ranger_nvg2_1: NVGoggles
	{
		scope=2;
		displayName="[42nd SOC] AN/PVS-31 Night Vision Device";
		picture="\121_75th_NVG\121_ranger_nvg_ca.paa";
		model="121_75th_NVG\pvs31_up_mount2.p3d";
		simulation="NVGoggles";
		author="Visco";
		modelOptics="";
		visionMode[]=
		{
			"Normal"
		};
		descriptionShort="Use ACE self-interaction to use the NVG";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_75th_NVG\pvs31_down.p3d";
			modelOff="121_75th_NVG\pvs31_up_mount2.p3d";
			mass=4;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
		class XtdGearInfo
		{
			model="ranger_pvs31";
			position="down";
		};
	};
	class ranger_nvg3: NVGoggles
	{
		scope=1;
		displayName="[42nd SOC] AN/PVS-31 Night Vision Device 2 [On]";
		picture="\121_75th_NVG\121_ranger_nvg_ca.paa";
		model="121_75th_NVG\pvs31_up_high.p3d";
		simulation="NVGoggles";
		author="Visco";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\121_75th_NVG\optics\pvs_optic";
		nameSound="nvgoggles";
		descriptionShort="Use ACE self-interaction to take off NVG";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_75th_NVG\pvs31_down.p3d";
			modelOff="121_75th_NVG\pvs31_up_high.p3d";
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
	class ranger_nvg4: NVGoggles
	{
		scope=1;
		displayName="[42nd SOC] AN/PVS-31 Night Vision Device 3 [On]";
		picture="\121_75th_NVG\121_ranger_nvg_ca.paa";
		model="121_75th_NVG\pvs31_up_normal.p3d";
		simulation="NVGoggles";
		author="Visco";
		ace_nightvision_generation=3;
		ace_nightvision_bluRadius=0.35000002;
		modelOptics="\121_75th_NVG\optics\pvs_optic";
		nameSound="nvgoggles";
		descriptionShort="Use ACE self-interaction to take off NVG";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="121_75th_NVG\pvs31_down.p3d";
			modelOff="121_75th_NVG\pvs31_up_normal.p3d";
			mass=1;
		};
		scopeCurator=2;
		weaponPoolAvailable=1;
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class 75th_Equipment_Actions
			{
				displayName="Night Vision Goggles";
				icon="121_75th_NVG\icon\goggles.paa";
				class 75th_NVG_remove_1
				{
					displayName="Remove AN/PVS-31 Night Vision";
					condition="hmd player == 'ranger_nvg1'";
					exceptions[]={};
					statement="_player linkItem (['ranger_nvg2','ranger_nvg2_1'] call BIS_fnc_selectRandom)";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_remove_2
				{
					displayName="Remove AN/PVS-31 Night Vision";
					condition="hmd player == 'ranger_nvg3'";
					exceptions[]={};
					statement="_player linkItem (['ranger_nvg2','ranger_nvg2_1'] call BIS_fnc_selectRandom)";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_remove_3
				{
					displayName="Remove AN/PVS-31 Night Vision";
					condition="hmd player == 'ranger_nvg4'";
					exceptions[]={};
					statement="_player linkItem (['ranger_nvg2','ranger_nvg2_1'] call BIS_fnc_selectRandom)";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_add_wide
				{
					displayName="Put on AN/PVS-31 Night Vision [Wide]";
					condition="hmd player == 'ranger_nvg2'";
					exceptions[]={};
					statement="_player linkItem 'ranger_nvg1'";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_add_high
				{
					displayName="Put on AN/PVS-31 Night Vision [High]";
					condition="hmd player == 'ranger_nvg2'";
					exceptions[]={};
					statement="_player linkItem 'ranger_nvg3'";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_add_normal
				{
					displayName="Put on AN/PVS-31 Night Vision [Normal]";
					condition="hmd player == 'ranger_nvg2'";
					exceptions[]={};
					statement="_player linkItem 'ranger_nvg4'";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_add_wide_1
				{
					displayName="Put on AN/PVS-31 Night Vision [Wide]";
					condition="hmd player == 'ranger_nvg2_1'";
					exceptions[]={};
					statement="_player linkItem 'ranger_nvg1'";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_add_high_1
				{
					displayName="Put on AN/PVS-31 Night Vision [High]";
					condition="hmd player == 'ranger_nvg2_1'";
					exceptions[]={};
					statement="_player linkItem 'ranger_nvg3'";
					icon="121_75th_NVG\icon\goggles.paa";
				};
				class 75th_NVG_add_normal_1
				{
					displayName="Put on AN/PVS-31 Night Vision [Normal]";
					condition="hmd player == 'ranger_nvg2_1'";
					exceptions[]={};
					statement="_player linkItem 'ranger_nvg4'";
					icon="121_75th_NVG\icon\goggles.paa";
				};
			};
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class ranger_pvs31
		{
			label="Customise";
			author="Visco";
			options[]=
			{
				"position"
			};
			class position
			{
				label="Position";
				values[]=
				{
					"up",
					"down"
				};
				class up
				{
					label="Up";
				};
				class down
				{
					label="Down";
				};
			};
		};
	};
};
class cfgMods
{
	author="Visco";
	timepacked="1662288848";
};

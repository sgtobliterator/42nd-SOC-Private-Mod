class CfgPatches
{
	class 121_75th_backpack
	{
		units[]=
		{
			""
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F"
		};
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class CfgVehicles
{
	class B_AssaultPack_mcamo;
	class ranger_pack_1: B_AssaultPack_mcamo
	{
		author="Visco";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		displayName="[75th Ranger] Eagle Industries YOTE Pack";
		picture="\121_75th_Backpack\121_ranger_pack_ca.paa";
		model="121_75th_Backpack\ranger_pack3.p3d";
		maximumLoad=350;
		mass=20;
		class XtdGearInfo
		{
			model="ranger_yote_pack";
			packType="basic_1";
		};
	};
	class ranger_pack_1_wc: B_AssaultPack_mcamo
	{
		author="Visco";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		displayName="[75th Ranger] Eagle Industries YOTE Pack";
		picture="\121_75th_Backpack\121_ranger_pack_ca.paa";
		model="121_75th_Backpack\ranger_pack3_wirecutter.p3d";
		maximumLoad=350;
		mass=20;
		class XtdGearInfo
		{
			model="ranger_yote_pack";
			packType="basic_2";
		};
	};
	class ranger_pack_3: B_AssaultPack_mcamo
	{
		author="Visco";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		displayName="[75th Ranger] Medic's M9 Pack";
		picture="\121_75th_Backpack\121_ranger_medpack_ca.paa";
		model="121_75th_Backpack\ranger_m9.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"121_75th_Backpack\Data\M9_Backpack_co.paa"
		};
		maximumLoad=350;
		mass=15;
	};
	class ranger_pack_4: B_AssaultPack_mcamo
	{
		author="Visco";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		displayName="[75th Ranger] Mystery Ranch ASAP Pack";
		picture="\121_75th_Backpack\121_ranger_asap_ca.paa";
		model="121_75th_Backpack\ranger_pack4.p3d";
		maximumLoad=350;
		mass=20;
	};
};
class XtdGearModels
{
	class CfgVehicles
	{
		class ranger_yote_pack
		{
			label="Customise";
			author="Visco";
			options[]=
			{
				"packType"
			};
			class packType
			{
				label="Accessories";
				values[]=
				{
					"basic_1",
					"basic_2"
				};
				class basic_1
				{
					label="Plain";
				};
				class basic_2
				{
					label="Wirecutter";
				};
			};
		};
	};
};
class cfgMods
{
	author="Visco";
	timepacked="1658701980";
};

class CfgPatches
{
	class moh_Parachute_addon
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"ace_common",
			"ace_parachute"
		};
	};
};
class cfgVehicles
{
	class AllVehicles;
	class Air;
	class Plane;
	class Helicopter;
	class ParachuteBase;
	class B_Parachute;
	class ReammoBox;
	class Parachute;
	class Paraglide;
	class ACE_ReserveParachute;
	class UKSF_ReserveParachute: ACE_ReserveParachute
	{
		author="UKSF";
		scope=1;
		mass=70;
		model="Devgru_para\Devgru_para_low.p3d";
		displayName="MC5 n HALO Gear High wo Bag";
		ParachuteClass="Steerable_Parachute_F";
		ace_reserveParachute="";
		ace_hasReserveParachute=0;
	};
	class moh_Parachute_1: B_Parachute
	{
		author="UKSF";
		scope=2;
		model="Devgru_para\Devgru_para.p3d";
		displayName="MC5 n HALO Gear High wo Bag2";
		maximumLoad=30;
		ace_hasReserveParachute=1;
		ace_reserveParachute="tog_ReserveParachute";
	};
	class moh_Parachute_high_2: B_Parachute
	{
		author="UKSF";
		scope=2;
		model="Devgru_para\Devgru_para_high.p3d";
		displayName="MC5 n HALO Gear w Bag";
		maximumLoad=70;
		ace_hasReserveParachute=1;
		ace_reserveParachute="tog_ReserveParachute";
	};
	class moh_Parachute_low: B_Parachute
	{
		author="UKSF";
		scope=2;
		model="Devgru_para\Devgru_para_low.p3d";
		displayName="MC5 n HALO Gear low";
		maximumLoad=70;
		ace_hasReserveParachute=1;
		ace_reserveParachute="tog_ReserveParachute";
	};
	class moh_Parachute_new: B_Parachute
	{
		author="UKSF";
		scope=2;
		model="Devgru_para\Devgru_para_new.p3d";
		displayName="MC5 Parachute";
		maximumLoad=30;
		ace_hasReserveParachute=1;
		ace_reserveParachute="tog_ReserveParachute";
	};
	class UKSF_Bag_Base2: ReammoBox
	{
		scope=1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
		displayName="DXD BAG";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		class DestructionEffects
		{
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"
		};
		maximumLoad=0;
		side=3;
	};
};
class cfgMods
{
	author="UKSF";
	timepacked="1554042979";
};

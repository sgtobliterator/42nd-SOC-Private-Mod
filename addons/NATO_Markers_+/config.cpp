class CfgPatches
{
	class plp_containers
	{
		requiredAddons[]=
		{
			"A3_Data_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMarkerClasses
{
	class Check_point_1
	{
		displayName="NATO Markers+";
	};
};
class CfgMarkers
{
	class marker_nato
	{
		name="Check Point";
		icon="\NATO_Markers_+\CP.paa";
		color[]={0,0,0,1};
		size=48;
		scope=2;
		scopeCurator=2;
		shadow=0;
		markerClass="Check_point_1";
	};
	class marker_cp: marker_nato
	{
		name="Contact Point";
		icon="\NATO_Markers_+\CP1.paa";
		texture="\NATO_Markers_+\CP1.paa";
	};
	class marker_fup: marker_nato
	{
		name="Forming Up Position";
		icon="\NATO_Markers_+\FUP.paa";
		texture="\NATO_Markers_+\FUP.paa";
	};
	class marker_lu: marker_nato
	{
		name="Linkup Point";
		icon="\NATO_Markers_+\LU.paa";
		texture="\NATO_Markers_+\LU.paa";
	};
	class marker_pp: marker_nato
	{
		name="Passage Point";
		icon="\NATO_Markers_+\PP.paa";
		texture="\ZULU_mapmarkers\PP.paa";
	};
	class marker_rly: marker_nato
	{
		name="Rally Point";
		icon="\NATO_Markers_+\RLY.paa";
		texture="\NATO_Markers_+\RLY.paa";
	};
	class marker_rp: marker_nato
	{
		name="Release Point";
		icon="\NATO_Markers_+\RP.paa";
		texture="\NATO_Markers_+\RP.paa";
	};
	class marker_sp: marker_nato
	{
		name="Start Point";
		icon="\NATO_Markers_+\SP.paa";
		texture="\NATO_Markers_+\SP.paa";
	};
	class marker_wp: marker_nato
	{
		name="Way Point";
		icon="\NATO_Markers_+\WP.paa";
		texture="\NATO_Markers_+\WP.paa";
	};
	class marker_ffs: marker_nato
	{
		name="Fire Support Station";
		icon="\NATO_Markers_+\FSS.paa";
		texture="\NATO_Markers_+\FSS.paa";
	};
	class marker_erp: marker_nato
	{
		name="Engineer Regulating Point";
		icon="\NATO_Markers_+\ERP.paa";
		texture="\NATO_Markers_+\ERP.paa";
	};
	class marker_afp: marker_nato
	{
		name="Attack by Fire Position";
		icon="\NATO_Markers_+\AFP.paa";
		texture="\NATO_Markers_+\AFP.paa";
	};
	class marker_sfp: marker_nato
	{
		name="Support by Fire Position";
		icon="\NATO_Markers_+\SFP.paa";
		texture="\NATO_Markers_+\SFP.paa";
	};
	class marker_poi: marker_nato
	{
		name="Point of Interest";
		icon="\NATO_Markers_+\POI.paa";
		texture="\NATO_Markers_+\POI.paa";
	};
	class marker_CBF: marker_nato
	{
		name="Counterattack by Fire";
		icon="\NATO_Markers_+\CBF.paa";
		texture="\NATO_Markers_+\CBF.paa";
		size=62;
	};
	class marker_CATK: marker_nato
	{
		name="Counterattack";
		icon="\NATO_Markers_+\CATK.paa";
		texture="\NATO_Markers_+\CATK.paa";
		size=62;
	};
	class marker_BLOCK: marker_nato
	{
		name="Block";
		icon="\NATO_Markers_+\Block.paa";
		texture="\NATO_Markers_+\Block.paa";
	};
	class marker_EZ: marker_nato
	{
		name="Extraction Zone";
		icon="\NATO_Markers_+\EZ.paa";
		texture="\NATO_Markers_+\EZ.paa";
	};
	class marker_LZ: marker_nato
	{
		name="Landing Zone";
		icon="\NATO_Markers_+\LZ.paa";
		texture="\NATO_Markers_+\LZ.paa";
	};
	class marker_FD: marker_nato
	{
		name="Friendly Ground Axis of Decisive Operations";
		icon="\NATO_Markers_+\FD.paa";
		texture="\NATO_Markers_+\FD.paa";
		size=62;
	};
	class marker_FS: marker_nato
	{
		name="Friendly Ground Axis of Shaping Operations";
		icon="\NATO_Markers_+\FH.paa";
		texture="\NATO_Markers_+\FH.paa";
		size=62;
	};
	class marker_DS: marker_nato
	{
		name="Destroy";
		icon="\NATO_Markers_+\DS.paa";
		texture="\NATO_Markers_+\DS.paa";
	};
	class marker_FIX: marker_nato
	{
		name="FIX";
		icon="\NATO_Markers_+\FIX.paa";
		texture="\NATO_Markers_+\FIX.paa";
		size=62;
	};
	class marker_NT: marker_nato
	{
		name="Neutralize";
		icon="\NATO_Markers_+\NT.paa";
		texture="\NATO_Markers_+\NT.paa";
	};
	class marker_OP: marker_nato
	{
		name="Observation Post";
		icon="\NATO_Markers_+\OP.paa";
		texture="\NATO_Markers_+\OP.paa";
	};
	class marker_PN: marker_nato
	{
		name="Penetration";
		icon="\NATO_Markers_+\PN.paa";
		texture="\NATO_Markers_+\PN.paa";
	};
	class marker_CCP: marker_nato
	{
		name="CCP";
		icon="\NATO_Markers_+\CCP.paa";
		texture="\NATO_Markers_+\CCP.paa";
	};
	class marker_dz: marker_nato
	{
		name="Drope Zone";
		icon="\NATO_Markers_+\DZ.paa";
		texture="\NATO_Markers_+\DZ.paa";
	};
	class marker_pz: marker_nato
	{
		name="Pickup Zone";
		icon="\NATO_Markers_+\PZ.paa";
		texture="\NATO_Markers_+\PZ.paa";
	};
};
class cfgMods
{
	author="I.Liar";
	timepacked="1522265234";
};

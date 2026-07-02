class CfgPatches
{
	class JAS_GPNVG18
	{
		units[]={};
		weapons[]=
		{
			""
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgWeapons
{
	class Default;
	class ItemCore: Default
	{
	};
	class InventoryItem_Base_F;
	class HeadgearItem;
	class NVGoggles;
	class JAS_GPNVG18_Tan: NVGoggles
	{
		displayName="GPNVG-18 (Tan)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Tan.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Tan_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Tan_OFF.p3d";
			mass=4;
		};
	};
	class JAS_GPNVG18_blk: NVGoggles
	{
		displayName="GPNVG-18 (Black)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Blk.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Blk_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Blk_OFF.p3d";
			mass=4;
		};
	};
	class JAS_GPNVG18_Tan_TI: NVGoggles
	{
		displayName="GPNVG-18 TI (Tan)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Tan.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Tan_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Tan_OFF.p3d";
			mass=4;
		};
	};
	class JAS_GPNVG18_blk_TI: NVGoggles
	{
		displayName="GPNVG-18 TI (Black)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\JAS_GPNVG18\NVG_Scene.p3d";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		picture="\JAS_GPNVG18\ui\GPNVG18_Blk.paa";
		descriptionUse="$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		descriptionShort="$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\JAS_GPNVG18\JAS_GPNVG18_Blk_ON.p3d";
			modelOff="\JAS_GPNVG18\JAS_GPNVG18_Blk_OFF.p3d";
			mass=4;
		};
	};
};

class BettIR_Config
{
	class CompatibleNightvisionGoggles
	{
		class __base_NVG;
		class JAS_GPNVG18_Tan: __base_NVG{};
		class JAS_GPNVG18_blk: __base_NVG{};
		class JAS_GPNVG18_Tan_TI: __base_NVG{};
		class JAS_GPNVG18_blk_TI: __base_NVG{};
		class JAS_GPNVG18_Full_Tan_TI: __base_NVG{};
		class JAS_GPNVG18_Full_blk_TI: __base_NVG{};
	};
};

class cfgMods
{
	author="Moltes";
	timepacked="1555418919";
};

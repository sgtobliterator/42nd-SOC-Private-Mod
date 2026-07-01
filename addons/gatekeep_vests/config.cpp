#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class GATEKEEP_VESTS
	{
		units[]={};
		weapons[]=
		{
			""
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgWeapons
{
	class Vest_Camo_Base;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class ItemCore;
	class gatekeep_y19_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y19 JPC";
		picture="";
		model="gatekeep_vests\model\y19_jpc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y19_jpc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y19_2_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y19 JPC No Belt";
		picture="";
		model="gatekeep_vests\model\y19_jpc_2.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y19_jpc_2.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y16_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y16 JPC";
		picture="";
		model="gatekeep_vests\model\y16_jpc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y16_jpc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y02_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y02 JPC";
		picture="";
		model="gatekeep_vests\model\y02_jpc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y02_jpc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y34_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y34 JPC";
		picture="";
		model="gatekeep_vests\model\y34_jpc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y34_jpc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y35_spc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y35 SPC";
		picture="";
		model="gatekeep_vests\model\y35_spc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y35_spc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y25_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y25 SPC";
		picture="";
		model="gatekeep_vests\model\y25_spc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y25_spc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y26_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y26 JPC Dev";
		picture="";
		model="gatekeep_vests\model\y26_jpc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y26_jpc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class gatekeep_y26_2_jpc: ItemCore
	{
		author="GateKeep";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="[GateKeep] Y26 JPC";
		picture="";
		model="gatekeep_vests\model\y26_2_jpc.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="gatekeep_vests\model\y26_2_jpc.p3d";
			containerClass="Supply200";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22+3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class GK_Backpack_Base: Bag_Base
	{
		scope=1;
		scopeCurator=0;
		author="TFL";
		DLC="SOCOM";
		displayName="";
		picture="";
		isbackpack=1;
		model="";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		maximumLoad=500;
		mass=30;
	};
	class GK_117G: GK_Backpack_Base
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[GateKeep] 117G MC";
		model="gatekeep_vests\model\back\117G.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		DLC="SOCOM";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class GK_117G_slingshot: GK_Backpack_Base
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[GateKeep] 117G Slingshot MC";
		model="gatekeep_vests\model\back\117G_slingshot.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		DLC="SOCOM";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class GK_Y19_Panel_1: GK_Backpack_Base
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[GateKeep] Y19 Panel MC";
		model="gatekeep_vests\model\back\y19_panel.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		DLC="SOCOM";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=500000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class GK_Y26_Panel_1: GK_Backpack_Base
	{
		scope=2;
		scopeArsenal=2;
		eden=2;
		displayName="[GateKeep] Y26 Panel";
		model="gatekeep_vests\model\back\y26_panel.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		DLC="SOCOM";
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1627361696";
};

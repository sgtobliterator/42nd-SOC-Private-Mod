class CfgPatches
{
	class gearcollectionbackpack
	{
		units[]={};
		weapons[]={};
		author="Gear Collection Team";
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgVehicles
{
	class B_Kitbag_rgr;
	class asip_a_01_mc: B_Kitbag_rgr
	{
		author="Vielmond";
		scope=2;
		model="\asip\model\asip_satcom.p3d";
		displayName="[VMND] ASIP Satcom + Radio [TFAR] [MC]";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\asip\data\asip\asip_MC_CO.paa"
		};
		maximumLoad=300;
		mass=20;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=5000000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class asip_a_02_cb: B_Kitbag_rgr
	{
		author="Vielmond";
		scope=2;
		model="\asip\model\asip_satcom.p3d";
		displayName="[VMND] ASIP Satcom + Radio [TFAR] [CB]";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\asip\data\asip\asip_CB_CO.paa"
		};
		maximumLoad=300;
		mass=20;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=5000000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class asip_a_03_lv: B_Kitbag_rgr
	{
		author="Vielmond";
		scope=2;
		model="\asip\model\asip_satcom.p3d";
		displayName="[VMND] ASIP Satcom + Radio [TFAR] [LV]";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\asip\data\asip\asip_LV_CO.paa"
		};
		maximumLoad=300;
		mass=20;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=5000000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class asip_b_01_mc: B_Kitbag_rgr
	{
		author="Vielmond";
		scope=2;
		model="\asip\model\asip_s.p3d";
		displayName="[VMND] ASIP Radio [TFAR] [MC]";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\asip\data\asip\asip_MC_CO.paa"
		};
		maximumLoad=300;
		mass=20;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=5000000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class asip_b_02_cb: B_Kitbag_rgr
	{
		author="Vielmond";
		scope=2;
		model="\asip\model\asip_s.p3d";
		displayName="[VMND] ASIP Radio [TFAR] [CB]";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\asip\data\asip\asip_CB_CO.paa"
		};
		maximumLoad=300;
		mass=20;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=5000000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class asip_b_03_lv: B_Kitbag_rgr
	{
		author="Vielmond";
		scope=2;
		model="\asip\model\asip_s.p3d";
		displayName="[VMND] ASIP Radio [TFAR] [LV]";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\asip\data\asip\asip_LV_CO.paa"
		};
		maximumLoad=300;
		mass=20;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=5000000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class satcom_01: B_Kitbag_rgr
	{
		author="Vielmond";
		scope=2;
		model="\asip\model\satcom_no_radio.p3d";
		displayName="[VMND] SATCOM [TFAR] [TAN]";
		maximumLoad=300;
		mass=20;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=5000000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
};
class cfgMods
{
	author="";
	timepacked="1606314951";
};

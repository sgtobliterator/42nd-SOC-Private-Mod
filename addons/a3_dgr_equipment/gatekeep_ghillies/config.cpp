class CfgPatches
{
	class a3_dgr_ghillienet
	{
		author="Dagger";
		requiredAddons[]=
		{
			"a3_dgr_equipment",
			"gatekeep_uniforms"
		};
		requiredVersion=0.1;
		skipWhenMissingDependencies = 1;
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};

class XtdGearModels
{
	class CfgGlasses
	{
		class dgr_ghillienet
		{
			label="DGR Ghillie Net";
			author="Dagger";
			options[]=
			{
				"variant",
				"camos"
			};
			class variant
			{
				label="Coverage";
				changeingame=1;
				values[]=
				{
					"low",
					"full",
					"top"
				};
				class low { label="Bottom"; };
				class full { label="Full"; };
				class top { label="Top"; };
			};
			class camos
			{
				label="Camos";
				changeingame=0;
				values[]=
				{
					"1",
					"2",
					"3",
					"4",
					"5",
					"6",
					"7",
					"8",
					"9",
					"10",
					"11",
					"12",
					"13",
					"14",
					"15",
					"16",
					"17",
					"18",
					"19",
					"20",
					"21",
					"22",
					"23",
					"24"
				};
				class 1
				{
					label="1";
				};
				class 2
				{
					label="2";
				};
				class 3
				{
					label="3";
				};
				class 4
				{
					label="4";
				};
				class 5
				{
					label="5";
				};
				class 6
				{
					label="6";
				};
				class 7
				{
					label="7";
				};
				class 8
				{
					label="8";
				};
				class 9
				{
					label="9";
				};
				class 10
				{
					label="10";
				};
				class 11
				{
					label="11";
				};
				class 12
				{
					label="12";
				};
				class 13
				{
					label="13";
				};
				class 14
				{
					label="14";
				};
				class 15
				{
					label="15";
				};
				class 16
				{
					label="16";
				};
				class 17
				{
					label="17";
				};
				class 18
				{
					label="18";
				};
				class 19
				{
					label="19";
				};
				class 20
				{
					label="20";
				};
				class 21
				{
					label="21";
				};
				class 22
				{
					label="22";
				};
				class 23
				{
					label="23";
				};
				class 24
				{
					label="24";
				};
			};
		};
		class gatekeep_ghillie_orig
		{
			label="GateKeep Ghillie (Original)";
			author="Dagger";
			options[]=
			{
				"variant",
				"camo"
			};
			class variant
			{
				label="Coverage";
				changeingame=0;
				values[]=
				{
					"low",
					"full",
					"top"
				};
				class low { label="Bottom"; };
				class full { label="Full"; };
				class top { label="Top"; };
			};
			class camo
			{
				label="Camo";
				changeingame=0;
				values[]=
				{
					"semi_arid",
					"arid",
					"lush"
				};
				class semi_arid { label="Semi-Arid"; };
				class arid { label="Arid"; };
				class lush { label="Lush"; };
			};
		};
	};
};

class CfgGlasses
{
	class None;
	class G_Tactical_Clear;

	class dgr_ghillienet1_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (01) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads1.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="1";
		};
	};
	class dgr_ghillienet1_full: dgr_ghillienet1_low
	{
		displayName="DGR Ghillie Net (01) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="1";
		};
	};
	class dgr_ghillienet1_top: dgr_ghillienet1_low
	{
		displayName="DGR Ghillie Net (01) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="1";
		};
	};

	class dgr_ghillienet2_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (02) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads2.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="2";
		};
	};
	class dgr_ghillienet2_full: dgr_ghillienet2_low
	{
		displayName="DGR Ghillie Net (02) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="2";
		};
	};
	class dgr_ghillienet2_top: dgr_ghillienet2_low
	{
		displayName="DGR Ghillie Net (02) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="2";
		};
	};

	class dgr_ghillienet3_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (03) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads3.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="3";
		};
	};
	class dgr_ghillienet3_full: dgr_ghillienet3_low
	{
		displayName="DGR Ghillie Net (03) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="3";
		};
	};
	class dgr_ghillienet3_top: dgr_ghillienet3_low
	{
		displayName="DGR Ghillie Net (03) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="3";
		};
	};

	class dgr_ghillienet4_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (04) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads4.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="4";
		};
	};
	class dgr_ghillienet4_full: dgr_ghillienet4_low
	{
		displayName="DGR Ghillie Net (04) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="4";
		};
	};
	class dgr_ghillienet4_top: dgr_ghillienet4_low
	{
		displayName="DGR Ghillie Net (04) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="4";
		};
	};

	class dgr_ghillienet5_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (05) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads5.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="5";
		};
	};
	class dgr_ghillienet5_full: dgr_ghillienet5_low
	{
		displayName="DGR Ghillie Net (05) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="5";
		};
	};
	class dgr_ghillienet5_top: dgr_ghillienet5_low
	{
		displayName="DGR Ghillie Net (05) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="5";
		};
	};

	class dgr_ghillienet6_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (06) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads6.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="6";
		};
	};
	class dgr_ghillienet6_full: dgr_ghillienet6_low
	{
		displayName="DGR Ghillie Net (06) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="6";
		};
	};
	class dgr_ghillienet6_top: dgr_ghillienet6_low
	{
		displayName="DGR Ghillie Net (06) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="6";
		};
	};

	class dgr_ghillienet7_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (07) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads7.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="7";
		};
	};
	class dgr_ghillienet7_full: dgr_ghillienet7_low
	{
		displayName="DGR Ghillie Net (07) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="7";
		};
	};
	class dgr_ghillienet7_top: dgr_ghillienet7_low
	{
		displayName="DGR Ghillie Net (07) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="7";
		};
	};

	class dgr_ghillienet8_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (08) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads8.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="8";
		};
	};
	class dgr_ghillienet8_full: dgr_ghillienet8_low
	{
		displayName="DGR Ghillie Net (08) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="8";
		};
	};
	class dgr_ghillienet8_top: dgr_ghillienet8_low
	{
		displayName="DGR Ghillie Net (08) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="8";
		};
	};

	class dgr_ghillienet9_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (09) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads9.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="9";
		};
	};
	class dgr_ghillienet9_full: dgr_ghillienet9_low
	{
		displayName="DGR Ghillie Net (09) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="9";
		};
	};
	class dgr_ghillienet9_top: dgr_ghillienet9_low
	{
		displayName="DGR Ghillie Net (09) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="9";
		};
	};

	class dgr_ghillienet10_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (10) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads10.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="10";
		};
	};
	class dgr_ghillienet10_full: dgr_ghillienet10_low
	{
		displayName="DGR Ghillie Net (10) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="10";
		};
	};
	class dgr_ghillienet10_top: dgr_ghillienet10_low
	{
		displayName="DGR Ghillie Net (10) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="10";
		};
	};

	class dgr_ghillienet11_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (11) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads11.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="11";
		};
	};
	class dgr_ghillienet11_full: dgr_ghillienet11_low
	{
		displayName="DGR Ghillie Net (11) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="11";
		};
	};
	class dgr_ghillienet11_top: dgr_ghillienet11_low
	{
		displayName="DGR Ghillie Net (11) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="11";
		};
	};

	class dgr_ghillienet12_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (12) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads12.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="12";
		};
	};
	class dgr_ghillienet12_full: dgr_ghillienet12_low
	{
		displayName="DGR Ghillie Net (12) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="12";
		};
	};
	class dgr_ghillienet12_top: dgr_ghillienet12_low
	{
		displayName="DGR Ghillie Net (12) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="12";
		};
	};

	class dgr_ghillienet13_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (13) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads13.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="13";
		};
	};
	class dgr_ghillienet13_full: dgr_ghillienet13_low
	{
		displayName="DGR Ghillie Net (13) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="13";
		};
	};
	class dgr_ghillienet13_top: dgr_ghillienet13_low
	{
		displayName="DGR Ghillie Net (13) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="13";
		};
	};

	class dgr_ghillienet14_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (14) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads14.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="14";
		};
	};
	class dgr_ghillienet14_full: dgr_ghillienet14_low
	{
		displayName="DGR Ghillie Net (14) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="14";
		};
	};
	class dgr_ghillienet14_top: dgr_ghillienet14_low
	{
		displayName="DGR Ghillie Net (14) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="14";
		};
	};

	class dgr_ghillienet15_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (15) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads15.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="15";
		};
	};
	class dgr_ghillienet15_full: dgr_ghillienet15_low
	{
		displayName="DGR Ghillie Net (15) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="15";
		};
	};
	class dgr_ghillienet15_top: dgr_ghillienet15_low
	{
		displayName="DGR Ghillie Net (15) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="15";
		};
	};

	class dgr_ghillienet16_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (16) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads16.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="16";
		};
	};
	class dgr_ghillienet16_full: dgr_ghillienet16_low
	{
		displayName="DGR Ghillie Net (16) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="16";
		};
	};
	class dgr_ghillienet16_top: dgr_ghillienet16_low
	{
		displayName="DGR Ghillie Net (16) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="16";
		};
	};

	class dgr_ghillienet17_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (17) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads17.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="17";
		};
	};
	class dgr_ghillienet17_full: dgr_ghillienet17_low
	{
		displayName="DGR Ghillie Net (17) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="17";
		};
	};
	class dgr_ghillienet17_top: dgr_ghillienet17_low
	{
		displayName="DGR Ghillie Net (17) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="17";
		};
	};

	class dgr_ghillienet18_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (18) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads18.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="18";
		};
	};
	class dgr_ghillienet18_full: dgr_ghillienet18_low
	{
		displayName="DGR Ghillie Net (18) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="18";
		};
	};
	class dgr_ghillienet18_top: dgr_ghillienet18_low
	{
		displayName="DGR Ghillie Net (18) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="18";
		};
	};

	class dgr_ghillienet19_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (19) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads19.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="19";
		};
	};
	class dgr_ghillienet19_full: dgr_ghillienet19_low
	{
		displayName="DGR Ghillie Net (19) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="19";
		};
	};
	class dgr_ghillienet19_top: dgr_ghillienet19_low
	{
		displayName="DGR Ghillie Net (19) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="19";
		};
	};

	class dgr_ghillienet20_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (20) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads20.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="20";
		};
	};
	class dgr_ghillienet20_full: dgr_ghillienet20_low
	{
		displayName="DGR Ghillie Net (20) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="20";
		};
	};
	class dgr_ghillienet20_top: dgr_ghillienet20_low
	{
		displayName="DGR Ghillie Net (20) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="20";
		};
	};

	class dgr_ghillienet21_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (21) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads21.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="21";
		};
	};
	class dgr_ghillienet21_full: dgr_ghillienet21_low
	{
		displayName="DGR Ghillie Net (21) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="21";
		};
	};
	class dgr_ghillienet21_top: dgr_ghillienet21_low
	{
		displayName="DGR Ghillie Net (21) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="21";
		};
	};

	class dgr_ghillienet22_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (22) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads22.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="22";
		};
	};
	class dgr_ghillienet22_full: dgr_ghillienet22_low
	{
		displayName="DGR Ghillie Net (22) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="22";
		};
	};
	class dgr_ghillienet22_top: dgr_ghillienet22_low
	{
		displayName="DGR Ghillie Net (22) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="22";
		};
	};

	class dgr_ghillienet23_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (23) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads23.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="23";
		};
	};
	class dgr_ghillienet23_full: dgr_ghillienet23_low
	{
		displayName="DGR Ghillie Net (23) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="23";
		};
	};
	class dgr_ghillienet23_top: dgr_ghillienet23_low
	{
		displayName="DGR Ghillie Net (23) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="23";
		};
	};

	class dgr_ghillienet24_low: G_Tactical_Clear
	{
		author="Dagger";
		scope=2;
		displayName="DGR Ghillie Net (24) - Low";
		model="\gatekeep_uniforms\ghillie\ghillie_low.p3d";
		picture="";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\a3_dgr_equipment\data\dgr_ghillie_threads24.paa"};
		hiddenSelectionsMaterials[]={"\a3_dgr_equipment\data\dgr_ghillie_threads.rvmat"};
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="low";
			camos="24";
		};
	};
	class dgr_ghillienet24_full: dgr_ghillienet24_low
	{
		displayName="DGR Ghillie Net (24) - Full";
		model="\gatekeep_uniforms\ghillie\ghillie_full.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="full";
			camos="24";
		};
	};
	class dgr_ghillienet24_top: dgr_ghillienet24_low
	{
		displayName="DGR Ghillie Net (24) - Top";
		model="\gatekeep_uniforms\ghillie\ghillie_top.p3d";
		class XtdGearInfo
		{
			model="dgr_ghillienet";
			variant="top";
			camos="24";
		};
	};


	class Louetta_Ghillie_2;
	class Louetta_Ghillie_3;
	class Louetta_Ghillie_4;
	class Louetta_Ghillie_5;
	class Louetta_Ghillie_6;
	class Louetta_Ghillie_7;
	class Louetta_Ghillie_8;
	class Louetta_Ghillie_9;
	class Louetta_Ghillie_10;

	class dgr_gk_semi_arid_low: Louetta_Ghillie_2
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Semi Arid) - Low";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="low";
			camo="semi_arid";
		};
	};
	class dgr_gk_semi_arid_full: Louetta_Ghillie_3
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Semi Arid) - Full";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="full";
			camo="semi_arid";
		};
	};
	class dgr_gk_semi_arid_top: Louetta_Ghillie_4
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Semi Arid) - Top";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="top";
			camo="semi_arid";
		};
	};
	class dgr_gk_arid_low: Louetta_Ghillie_5
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Arid) - Low";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="low";
			camo="arid";
		};
	};
	class dgr_gk_arid_full: Louetta_Ghillie_6
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Arid) - Full";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="full";
			camo="arid";
		};
	};
	class dgr_gk_arid_top: Louetta_Ghillie_7
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Arid) - Top";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="top";
			camo="arid";
		};
	};
	class dgr_gk_lush_low: Louetta_Ghillie_8
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Lush) - Low";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="low";
			camo="lush";
		};
	};
	class dgr_gk_lush_full: Louetta_Ghillie_9
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Lush) - Full";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="full";
			camo="lush";
		};
	};
	class dgr_gk_lush_top: Louetta_Ghillie_10
	{
		author="Dagger";
		displayName="GateKeep Ghillie (Lush) - Top";
		class XtdGearInfo
		{
			model="gatekeep_ghillie_orig";
			variant="top";
			camo="lush";
		};
	};
};


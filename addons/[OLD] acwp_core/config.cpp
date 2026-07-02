class CfgSoundShaders
{
	class ACWP_416Rifle_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\hk416_first",
				1
			},
			
			{
				"ACWP_core\snd\Generic\hk416_first",
				1
			}
		};
		range=35;
		volume=0.87;
		rangeCurve[]=
		{
			{0,1},
			{35,0}
		};
	};
	class ACWP_416Rifle_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_close1",
				1
			},
			
			{
				"ACWP_core\snd\rifle\rifle_close2",
				1
			},
			
			{
				"ACWP_core\snd\rifle\rifle_close3",
				1
			},
			
			{
				"ACWP_core\snd\rifle\rifle_close4",
				1
			}
		};
		volume=0.77999997;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class ACWP_416Rifle_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_mid",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class ACWP_416Rifle_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class ACWP_416Rifle_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class ACWP_416Rifle_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_forest",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Rifle_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_forest_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class ACWP_416Rifle_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_urban",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Rifle_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_urban_mid",
				1
			}
		};
		volume="2*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416Rifle_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_indoor",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,0.69999999},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Rifle_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_indoor_mid",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class ACWP_416Rifle_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_meadow",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Rifle_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_meadow_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416Rifle_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_trees",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Rifle_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\rifle\rifle_trees_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416Rifle_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\rifle_suppressed_close",
				1
			}
		};
		volume=0.69999999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class ACWP_416Rifle_silencerShot_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\rifle_suppressed_mid",
				1
			}
		};
		volume=1;
		range=250;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{250,0}
		};
	};
	class ACWP_416Rifle_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\rifle_suppressed_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416Rifle_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\rifle_suppressed_urban",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class ACWP_416Rifle_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\rifle_suppressed_indoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class ACWP_416Rifle_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\rifle_suppressed_meadow",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416Rifle_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\rifle_suppressed_trees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416Carbine_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\hk416_first",
				1
			},
			
			{
				"ACWP_core\snd\Generic\hk416_first",
				1
			}
		};
		range=35;
		volume=0.87;
		rangeCurve[]=
		{
			{0,1},
			{35,0}
		};
	};
	class ACWP_416Carbine_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_close1",
				1
			},
			
			{
				"ACWP_core\snd\carbine\carbine_close2",
				1
			},
			
			{
				"ACWP_core\snd\carbine\carbine_close3",
				1
			},
			
			{
				"ACWP_core\snd\carbine\carbine_close4",
				1
			}
		};
		volume=0.69999999;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class ACWP_416Carbine_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_mid",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class ACWP_416Carbine_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class ACWP_416Carbine_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class ACWP_416Carbine_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_forest",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Carbine_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_forest_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class ACWP_416Carbine_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_urban",
				1
			}
		};
		volume="2*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Carbine_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_urban_mid",
				1
			}
		};
		volume="2*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416Carbine_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_indoor",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,0.69999999},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Carbine_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_indoor_mid",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class ACWP_416Carbine_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_meadows",
				1
			},
			
			{
				"ACWP_core\snd\carbine\carbine_meadows",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Carbine_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_meadows_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416Carbine_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_trees",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416Carbine_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\carbine\carbine_trees_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416Carbine_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\carbine_suppressed_close",
				1
			}
		};
		volume=0.69999999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class ACWP_416Carbine_silencerShot_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\carbine_suppressed_mid",
				1
			}
		};
		volume=1;
		range=250;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{250,0}
		};
	};
	class ACWP_416Carbine_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\carbine_suppressed_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416Carbine_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\carbine_suppressed_urban",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class ACWP_416Carbine_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\carbine_suppressed_indoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class ACWP_416Carbine_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\carbine_suppressed_meadow",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416Carbine_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\carbine_suppressed_trees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416SBR_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\hk416_first",
				1
			},
			
			{
				"ACWP_core\snd\Generic\hk416_first",
				1
			}
		};
		range=35;
		volume=0.87;
		rangeCurve[]=
		{
			{0,1},
			{35,0}
		};
	};
	class ACWP_416SBR_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_close1",
				1
			},
			
			{
				"ACWP_core\snd\SBR\SBR_close2",
				1
			},
			
			{
				"ACWP_core\snd\SBR\SBR_close3",
				1
			},
			
			{
				"ACWP_core\snd\SBR\SBR_close4",
				1
			}
		};
		volume=0.77999997;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class ACWP_416SBR_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_mid",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class ACWP_416SBR_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class ACWP_416SBR_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class ACWP_416SBR_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_forest",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416SBR_tailForest_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_forest_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*Forest/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{1800,1}
		};
		range=1800;
		limitation=1;
	};
	class ACWP_416SBR_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_urban",
				1
			}
		};
		volume="2*((1-interior/1.4)*houses/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416SBR_tailHouses_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\sbr_urban_mid",
				1
			}
		};
		volume="2*((1-interior/1.4)*houses/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416SBR_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_indoor",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		range=250;
		rangeCurve[]=
		{
			{0,0.69999999},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416SBR_tailInterior_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_indoor_mid",
				1
			}
		};
		volume=" 2*((interior)*0.65)";
		rangeCurve[]=
		{
			{0,0},
			{250,0.40000001},
			{320,0}
		};
		range=500;
		limitation=1;
	};
	class ACWP_416SBR_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_meadow",
				1
			},
			
			{
				"ACWP_core\snd\SBR\SBR_meadow",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416SBR_tailMeadows_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_meadow_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416SBR_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_trees",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{250,0}
		};
		limitation=1;
	};
	class ACWP_416SBR_tailTrees_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\SBR\SBR_trees_mid",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		rangeCurve[]=
		{
			{0,0},
			{250,1},
			{2000,1}
		};
		range=2000;
		limitation=1;
	};
	class ACWP_416SBR_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\SBR_suppressed_close",
				1
			}
		};
		volume=0.69999999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class ACWP_416SBR_silencerShot_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\SBR_suppressed_mid",
				1
			}
		};
		volume=1;
		range=250;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{250,0}
		};
	};
	class ACWP_416SBR_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\SBR_suppressed_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416SBR_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\SBR_suppressed_urban",
				1
			}
		};
		volume="1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class ACWP_416SBR_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\SBR_suppressed_indoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class ACWP_416SBR_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\SBR_suppressed_meadow",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class ACWP_416SBR_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\Generic\SBR_suppressed_trees",
				1
			}
		};
		volume=" 2*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2269mm_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\p226_first",
				1
			},
			
			{
				"ACWP_core\snd\p226_first",
				1
			}
		};
		range=10;
		volume=1;
		rangeCurve[]=
		{
			{0,1},
			{10,0}
		};
	};
	class acwp_p2269mm_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_close",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class acwp_p2269mm_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_mid",
				1
			}
		};
		volume=1.6;
		range=1500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
	};
	class acwp_p2269mm_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p229_dist",
				1
			}
		};
		volume=1;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		};
	};
	class acwp_p2269mm_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant",
				1
			}
		};
		volume=0.40000001;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1500,1}
		};
		limitation=1;
	};
	class acwp_p2269mm_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest",
				1
			}
		};
		volume=" 1*((1-interior/1.4)*Forest/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2269mm_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{200,0.30000001},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2269mm_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_indoor",
				1
			}
		};
		volume="1*((interior)*0.65)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class acwp_p2269mm_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_meadows",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2269mm_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees",
				1
			}
		};
		volume="1*((1-interior/1.4)*trees/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2269mm_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_sil",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class acwp_p2269mm_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2269mm_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class acwp_p2269mm_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_siltailindoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class acwp_p2269mm_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_siltail",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2269mm_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_siltail",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2399mm_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p239_close",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class acwp_p2399mm_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p239_mid",
				1
			}
		};
		volume=1.6;
		range=1500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
	};
	class acwp_p2399mm_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p229_dist",
				1
			}
		};
		volume=1;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		};
	};
	class acwp_p2399mm_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant",
				1
			}
		};
		volume=0.40000001;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1500,1}
		};
		limitation=1;
	};
	class acwp_p2399mm_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest",
				1
			}
		};
		volume="1*((1-interior/1.4)*Forest/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2399mm_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{200,0.30000001},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2399mm_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p239_indoor",
				1
			}
		};
		volume="1*((interior)*0.65)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class acwp_p2399mm_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p226_meadows",
				1
			}
		};
		volume="1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p2399mm_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees",
				1
			}
		};
		volume="1*((1-interior/1.4)*trees/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_357_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\p226_first",
				1
			},
			
			{
				"ACWP_core\snd\p226_first",
				1
			}
		};
		range=10;
		volume=1;
		rangeCurve[]=
		{
			{0,1},
			{10,0}
		};
	};
	class acwp_p226_357_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_close",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class acwp_p226_357_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_mid",
				1
			}
		};
		volume=1.6;
		range=1500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
	};
	class acwp_p226_357_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p229_dist",
				1
			}
		};
		volume=1;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		};
	};
	class acwp_p226_357_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant",
				1
			}
		};
		volume=0.40000001;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1500,1}
		};
		limitation=1;
	};
	class acwp_p226_357_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest",
				1
			}
		};
		volume="1*((1-interior/1.4)*Forest/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_357_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{200,0.30000001},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_357_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_indoor",
				1
			}
		};
		volume="1*((interior)*0.65)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class acwp_p226_357_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_meadows",
				1
			}
		};
		volume="1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_357_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees",
				1
			}
		};
		volume="1*((1-interior/1.4)*trees/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_357_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_sil",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class acwp_p226_357_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_357_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class acwp_p226_357_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_siltailindoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class acwp_p226_357_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_siltail",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_357_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_siltail",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p239_357_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p239_close",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class acwp_p239_357_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p239_mid",
				1
			}
		};
		volume=1.6;
		range=1500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
	};
	class acwp_p239_357_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p229_dist",
				1
			}
		};
		volume=1;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		};
	};
	class acwp_p239_357_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant",
				1
			}
		};
		volume=0.40000001;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1500,1}
		};
		limitation=1;
	};
	class acwp_p239_357_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest",
				1
			}
		};
		volume="1*((1-interior/1.4)*Forest/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p239_357_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{200,0.30000001},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p239_357_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p239_indoor",
				1
			}
		};
		volume="1*((interior)*0.65)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class acwp_p239_357_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\357sig\p226_meadows",
				1
			}
		};
		volume="1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p239_357_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees",
				1
			}
		};
		volume="1*((1-interior/1.4)*trees/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_45_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\p226_first",
				1
			},
			
			{
				"ACWP_core\snd\p226_first",
				1
			}
		};
		range=10;
		volume=1;
		rangeCurve[]=
		{
			{0,1},
			{10,0}
		};
	};
	class acwp_p226_45_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_close",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class acwp_p226_45_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_mid",
				1
			}
		};
		volume=1.6;
		range=1500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
	};
	class acwp_p226_45_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\9mm\p229_dist",
				1
			}
		};
		volume=1;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		};
	};
	class acwp_p226_45_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant",
				1
			}
		};
		volume=0.40000001;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1500,1}
		};
		limitation=1;
	};
	class acwp_p226_45_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest",
				1
			}
		};
		volume="1*((1-interior/1.4)*Forest/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_45_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses",
				1
			}
		};
		volume="1*((1-interior/1.4)*houses/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{200,0.30000001},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_45_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_indoor",
				1
			}
		};
		volume="1*((interior)*0.65)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class acwp_p226_45_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_meadows",
				1
			}
		};
		volume="1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_45_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees",
				1
			}
		};
		volume="1*((1-interior/1.4)*trees/3)";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_45_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_sil",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class acwp_p226_45_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_45_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class acwp_p226_45_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_siltailindoor",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class acwp_p226_45_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_siltail",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class acwp_p226_45_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"ACWP_core\snd\soundshader\45acp\p226_siltail",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
};
class CfgSoundSets
{
	class ACWP_416Rifle_Shot_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Rifle_closeShot_SoundShader",
			"ACWP_416Rifle_midShot_SoundShader",
			"ACWP_416Rifle_distShot_SoundShader",
			"ACWP_416Rifle_Closure_SoundShader"
		};
		volumeFactor=1.25;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="ACWP_defaultDistanceFilter";
	};
	class ACWP_416Rifle_Tail_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Rifle_tailDistant_SoundShader",
			"ACWP_416Rifle_tailForest_SoundShader",
			"ACWP_416Rifle_tailForest_mid_SoundShader",
			"ACWP_416Rifle_tailHouses_SoundShader",
			"ACWP_416Rifle_tailHouses_mid_SoundShader",
			"ACWP_416Rifle_tailInterior_SoundShader",
			"ACWP_416Rifle_tailInterior_mid_SoundShader",
			"ACWP_416Rifle_tailMeadows_SoundShader",
			"ACWP_416Rifle_tailHouses_mid_SoundShader",
			"ACWP_416Rifle_tailTrees_SoundShader",
			"ACWP_416Rifle_tailTrees_mid_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="ACWP_rifleTailDistanceFilter";
	};
	class ACWP_416Rifle_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Rifle_silencerShot_SoundShader",
			"ACWP_416Rifle_Closure_SoundShader",
			"ACWP_416Rifle_silencerShot_mid_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
	};
	class ACWP_416Rifle_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Rifle_silencerTailTrees_SoundShader",
			"ACWP_416Rifle_silencerTailForest_SoundShader",
			"ACWP_416Rifle_silencerTailMeadows_SoundShader",
			"ACWP_416Rifle_silencerTailHouses_SoundShader",
			"ACWP_416Rifle_silencerTailInterior_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="ACWP_rifleTailDistanceFilter";
	};
	class ACWP_416Carbine_Shot_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Carbine_closeShot_SoundShader",
			"ACWP_416Carbine_midShot_SoundShader",
			"ACWP_416Carbine_distShot_SoundShader",
			"ACWP_416Carbine_Closure_SoundShader"
		};
		volumeFactor=1.3;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="ACWP_defaultDistanceFilter";
	};
	class ACWP_416Carbine_Tail_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Carbine_tailDistant_SoundShader",
			"ACWP_416Carbine_tailForest_SoundShader",
			"ACWP_416Carbine_tailHouses_SoundShader",
			"ACWP_416Carbine_tailInterior_SoundShader",
			"ACWP_416Carbine_tailMeadows_SoundShader",
			"ACWP_416Carbine_tailTrees_mid_SoundShader",
			"ACWP_416Carbine_tailForest_mid_SoundShader",
			"ACWP_416Carbine_tailHouses_mid_SoundShader",
			"ACWP_416Carbine_tailInterior_mid_SoundShader",
			"ACWP_416Carbine_tailMeadows_mid_SoundShader",
			"ACWP_416Carbine_tailTrees_mid_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="ACWP_rifleTailDistanceFilter";
	};
	class ACWP_416Carbine_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Carbine_silencerShot_SoundShader",
			"ACWP_416Carbine_Closure_SoundShader",
			"ACWP_416Carbine_silencerShot_mid_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
	};
	class ACWP_416Carbine_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416Carbine_silencerTailTrees_SoundShader",
			"ACWP_416Carbine_silencerTailForest_SoundShader",
			"ACWP_416Carbine_silencerTailMeadows_SoundShader",
			"ACWP_416Carbine_silencerTailHouses_SoundShader",
			"ACWP_416Carbine_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	};
	class ACWP_416SBR_Shot_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416SBR_tailDistant_SoundShader",
			"ACWP_416SBR_closeShot_SoundShader",
			"ACWP_416SBR_midShot_SoundShader",
			"ACWP_416SBR_distShot_SoundShader",
			"ACWP_416SBR_Closure_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="ACWP_defaultDistanceFilter";
	};
	class ACWP_416SBR_Tail_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416SBR_tailForest_SoundShader",
			"ACWP_416SBR_tailHouses_SoundShader",
			"ACWP_416SBR_tailInterior_SoundShader",
			"ACWP_416SBR_tailMeadows_SoundShader",
			"ACWP_416SBR_tailTrees_SoundShader",
			"ACWP_416SBR_tailForest_mid_SoundShader",
			"ACWP_416SBR_tailHouses_mid_SoundShader",
			"ACWP_416SBR_tailInterior_mid_SoundShader",
			"ACWP_416SBR_tailMeadows_mid_SoundShader",
			"ACWP_416SBR_tailTrees_mid_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="ACWP_rifleTailDistanceFilter";
	};
	class ACWP_416SBR_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416SBR_silencerShot_SoundShader",
			"ACWP_416SBR_Closure_SoundShader",
			"ACWP_416SBR_silencerShot_mid_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
	};
	class ACWP_416SBR_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"ACWP_416SBR_silencerTailTrees_SoundShader",
			"ACWP_416SBR_silencerTailForest_SoundShader",
			"ACWP_416SBR_silencerTailMeadows_SoundShader",
			"ACWP_416SBR_silencerTailHouses_SoundShader",
			"ACWP_416SBR_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="ACWP_rifleTailDistanceFilter";
	};
	class acwp_p2269mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p2269mm_closeShot_SoundShader",
			"acwp_p2269mm_midShot_SoundShader",
			"acwp_p2269mm_distShot_SoundShader",
			"acwp_p2269mm_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p2269mm_tail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p2269mm_tailTrees_SoundShader",
			"acwp_p2269mm_tailForest_SoundShader",
			"acwp_p2269mm_tailMeadows_SoundShader",
			"acwp_p2269mm_tailHouses_SoundShader",
			"acwp_p2269mm_tailInterior_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="acwp_rifleTailDistanceFilter";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
	class acwp_p2269mm_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p2269mm_silencerShot_SoundShader",
			"acwp_p2269mm_Closure_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p2269mm_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p2269mm_silencerTailTrees_SoundShader",
			"acwp_p2269mm_silencerTailForest_SoundShader",
			"acwp_p2269mm_silencerTailMeadows_SoundShader",
			"acwp_p2269mm_silencerTailHouses_SoundShader",
			"acwp_p2269mm_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	};
	class acwp_p2399mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p2399mm_closeShot_SoundShader",
			"acwp_p2399mm_midShot_SoundShader",
			"acwp_p2399mm_distShot_SoundShader",
			"acwp_p2269mm_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p2399mm_tail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p2399mm_tailTrees_SoundShader",
			"acwp_p2399mm_tailForest_SoundShader",
			"acwp_p2399mm_tailMeadows_SoundShader",
			"acwp_p2399mm_tailHouses_SoundShader",
			"acwp_p2399mm_tailInterior_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="acwp_rifleTailDistanceFilter";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
	class acwp_p226_357_Shot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_357_closeShot_SoundShader",
			"acwp_p226_357_midShot_SoundShader",
			"acwp_p226_357_distShot_SoundShader",
			"acwp_p226_357_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p226_357_tail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_357_tailTrees_SoundShader",
			"acwp_p226_357_tailForest_SoundShader",
			"acwp_p226_357_tailMeadows_SoundShader",
			"acwp_p226_357_tailHouses_SoundShader",
			"acwp_p226_357_tailInterior_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="acwp_rifleTailDistanceFilter";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
	class acwp_p226_357_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_357_silencerShot_SoundShader",
			"acwp_p226_357_Closure_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p226_357_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_357_silencerTailTrees_SoundShader",
			"acwp_p226_357_silencerTailForest_SoundShader",
			"acwp_p226_357_silencerTailMeadows_SoundShader",
			"acwp_p226_357_silencerTailHouses_SoundShader",
			"acwp_p226_357_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	};
	class acwp_p239_357_Shot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p239_357_closeShot_SoundShader",
			"acwp_p239_357_midShot_SoundShader",
			"acwp_p239_357_distShot_SoundShader",
			"acwp_p226_357_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p239_357_tail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p239_357_tailTrees_SoundShader",
			"acwp_p239_357_tailForest_SoundShader",
			"acwp_p239_357_tailMeadows_SoundShader",
			"acwp_p239_357_tailHouses_SoundShader",
			"acwp_p239_357_tailInterior_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="acwp_rifleTailDistanceFilter";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
	class acwp_p227_Shot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_45_closeShot_SoundShader",
			"acwp_p226_45_midShot_SoundShader",
			"acwp_p226_45_distShot_SoundShader",
			"acwp_p226_45_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		frequencyRandomizer=0.5;
		frequencyRandomizerMin=0.1;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p227_tail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_45_tailTrees_SoundShader",
			"acwp_p226_45_tailForest_SoundShader",
			"acwp_p226_45_tailMeadows_SoundShader",
			"acwp_p226_45_tailHouses_SoundShader",
			"acwp_p226_45_tailInterior_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="acwp_rifleTailDistanceFilter";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
	};
	class acwp_p227_silencerShot_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_45_silencerShot_SoundShader",
			"acwp_p226_45_Closure_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="acwp_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class acwp_p227_silencerTail_SoundSet
	{
		soundShaders[]=
		{
			"acwp_p226_45_silencerTailTrees_SoundShader",
			"acwp_p226_45_silencerTailForest_SoundShader",
			"acwp_p226_45_silencerTailMeadows_SoundShader",
			"acwp_p226_45_silencerTailHouses_SoundShader",
			"acwp_p226_45_silencerTailInterior_SoundShader"
		};
		volumeFactor=0.69999999;
		volumeCurve="InverseSquare2Curve";
		frequencyRandomizer=2;
		frequencyRandomizerMin=0.2;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	};
};
class CfgPatches
{
	class ACWP_core
	{
		requiredaddons[]=
		{
			"A3_Sounds_F_Arsenal",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Data_F_Mark",
			"A3_Weapons_F_Mark",
			"A3_Sounds_F_Exp",
			"A3_Sounds_F"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		author="ACWP team";
		versionDesc="Monk Accessories pack";
		versionAct="";
		version="1.4";
	};
	class Troy_4A5
	{
		requiredaddons[]={};
		units[]={};
		weapons[]={};
		magazines[]={};
		author="ACWP team";
		versionDesc="Depricated Classname";
		versionAct="";
		version="1.1";
	};
	class Troy_4A5_Acc
	{
		requiredaddons[]={};
		units[]={};
		weapons[]={};
		magazines[]={};
		author="ACWP team";
		versionDesc="Depricated Classname";
		versionAct="";
		version="1.1";
	};
	class Troy_USP
	{
		requiredaddons[]={};
		units[]={};
		weapons[]={};
		magazines[]={};
		author="ACWP team";
		versionDesc="Depricated Classname";
		versionAct="";
		version="1.1";
	};
	class s_kio_sr25
	{
		requiredaddons[]={};
		units[]={};
		weapons[]={};
		magazines[]={};
		author="ACWP team";
		versionDesc="Depricated Classname";
		versionAct="";
		version="1.1";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class asdg_SlotInfo;
class asdg_PistolUnderRail;
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
};
class acwp_pistol_toprail: asdg_SlotInfo
{
	linkProxy="\a3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	iconPicture="\a3\weapons_f\Data\ui\attachment_top";
	iconPinpoint="Bottom";
};
class ACWP_troy_underslot: asdg_SlotInfo
{
	linkProxy="\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture="\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint="Bottom";
};
class ACWP_RIS_underslot: asdg_SlotInfo
{
	linkProxy="\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture="\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint="Bottom";
};
class CfgDistanceFilters
{
	class ACWP_defaultDistanceFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=400;
		range=2600;
		powerFactor=32;
	};
	class ACWP_rifleTailDistanceFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=350;
		range=1800;
		powerFactor=32;
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ACWP_GestureReloadp226="ACWP_GestureReloadp226";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			ACWP_GestureReloadp226[]=
			{
				"ACWP_GestureReloadp226",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			ACWP_GestureReloadp226[]=
			{
				"ACWP_GestureReloadp226_prone",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			ACWP_GestureReloadp226[]=
			{
				"ACWP_GestureReloadp226_context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			ACWP_GestureReloadp226[]=
			{
				"ACWP_GestureReloadp226_context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			ACWP_GestureReloadp226[]=
			{
				"ACWP_GestureReloadp226",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class ACWP_GestureReloadP226: Default
		{
			file="acwp_core\anim\NIA\P226\reload\reload_p226_standing.rtm";
			speed=-3.5;
			looped=0;
			mask="handsWeapon_pst";
			headBobStrength=0.2;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.02,0,0.92000002,0,0.95999998,1};
		};
		class ACWP_GestureReloadP226_Prone: Default
		{
			file="acwp_core\anim\NIA\P226\reload\reload_p226_prone.rtm";
			speed=-3.5;
			looped=0;
			mask="handsWeapon_pst";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.02,0,0.92000002,0,0.95999998,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.76999998,0,0.91000003,1};
		};
		class ACWP_GestureReloadP226_Context: ACWP_GestureReloadP226
		{
			mask="handsWeapon_context";
		};
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class S_9x19_Ball: B_556x45_Ball
	{
		airFriction=-0.0027652001;
		caliber=0.36500001;
		cost=1;
		deflecting=27;
		typicalSpeed=390.20001;
		hit=4.9499998;
		indirecthit=0;
		indirecthitrange=0;
		cartridge="FxCartridge_9mm";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly=1;
		tracerendtime=1;
		tracerscale=1;
		tracerstarttime=0.059999999;
		ACE_caliber=9.0170002;
		ACE_bulletLength=15.494;
		ACE_bulletMass=8.0352001;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.16500001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={340,370,400};
		ACE_barrelLengths[]={101.6,127,228.60001};
		AB_caliber=0.35499999;
		AB_bulletLength=0.61000001;
		AB_bulletMass=124;
		AB_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		AB_ballisticCoefficients[]={0.16500001};
		AB_velocityBoundaries[]={};
		AB_standardAtmosphere="ASM";
		AB_dragModel=1;
		AB_muzzleVelocities[]={340,370,400};
		AB_barrelLengths[]={4,5,9};
	};
	class S_9x19_sim: S_9x19_Ball
	{
		typicalSpeed=190.2;
		hit=0.15000001;
	};
	class S_556NATO_EPR: B_556x45_Ball
	{
		hit=10.28;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed=974.79999;
		airFriction=-0.0012744;
		caliber=0.96399999;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
	};
	class S_556NATO_EPR_Tracer: S_556NATO_EPR
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime=0.072999999;
		tracerEndTime=1.5712301;
		nvgOnly=0;
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class acwp_rifle_base: Rifle_Base_F
	{
		author="ACWP team";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		scope=1;
		descriptionShort="Assault Rifle<br/>Caliber: 5.56mm NATO";
		AB_barrelTwist=7;
		ACE_barrelTwist=178;
		magazineReloadSwitchPhase=0.5;
		aidispersioncoefx=2;
		aidispersioncoefy=3;
		recoil="recoil_car";
		initspeed=-0.89999998;
		inertia=0.18000001;
		opticszoominit=0.75;
		opticszoommax=1.1;
		opticszoommin=0.25;
		maxRecoilSway=0.001;
		swayDecaySpeed=1.25;
		reloadTime=0.15000001;
		dispersion=0.00029;
		dexterity=3;
		aimTransitionSpeed=0.80000001;
		cameraDir="eye_look";
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118899,
			1,
			5
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL"
		};
		magazines[]=
		{
			"ACWP_30rnd_556x45_EPR_PMAG",
			"ACWP_30rnd_556x45_M_PMAG",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30rnd_556x45_MDim",
			"hlc_30rnd_556x45_TDim",
			"hlc_50rnd_556x45_EPR",
			"hlc_30rnd_556x45_S",
			"hlc_30rnd_556x45_M",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F"
		};
		reloadAction="GestureReloadSPAR_01";
		discretedistance[]={100};
		discreteDistanceCameraPoint[]=
		{
			"eye"
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.39810699,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.281838,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.281838,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.281838,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.39810699,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.39810699,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.39810699,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.281838,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.281838,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.281838,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.281838,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.281838,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=71.599998;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
			};
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="XMC";
			onHoverText="TODO XMC DSS";
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"ACWP_416SBR_Shot_SoundSet",
					"ACWP_416SBR_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"ACWP_416SBR_silencerShot_SoundSet",
					"ACWP_416SBR_silencerTail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.07;
			dispersion=0.00029;
			aiRateOfFire=1;
			aiRateOfFireDistance=350;
			aiRateOfFireDispersion=2;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"ACWP_416SBR_Shot_SoundSet",
					"ACWP_416SBR_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"ACWP_416SBR_silencerShot_SoundSet",
					"ACWP_416SBR_silencerTail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.07;
			dispersion=0.00029;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=1;
			midRangeProbab=0.80000001;
			maxRange=5;
			maxRangeProbab=0.1;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			aiRateOfFireDispersion=0.5;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=20;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=3;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=4;
			minRange=200;
			minRangeProbab=0.80000001;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.1;
		};
		class Library
		{
			libTextDesc="";
		};
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class acwp_pistol_base: Pistol_Base_F
	{
		author="ACWP team";
		magazineReloadSwitchPhase=0.67000002;
		scope=1;
		AB_barrelTwist=10;
		AB_barrelLength=4.4000001;
		ACE_barrelTwist=254;
		ACE_barrelLength=111.76;
		minRange=5;
		minRangeProbab=0.30000001;
		midRange=25;
		midRangeProbab=0.60000002;
		maxRange=50;
		maxRangeProbab=0.1;
		aiRateOfFire=2;
		aiRateOfFireDistance=25;
		reloadAction="ACWP_GestureReloadP226";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\acwp_core\anim\NIA\P226\handpose\handpose_P226.rtm"
		};
		recoil="recoil_pistol_p07";
		discretedistance[]={25};
		discretedistanceinitindex=0;
		cameradir="look_out";
		discreteDistanceCameraPoint[]=
		{
			"Eye"
		};
		inertia=0.07;
		dexterity=1.89867;
		aimTransitionSpeed=1.32907;
		class ItemInfo
		{
			priority=2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
		};
		descriptionShort="USP 9mm";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",
			0.22387211,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",
			0.22387211,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",
			0.22387211,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",
			0.22387211,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		drysound[]=
		{
			"acwp_core\snd\p226_dryfire",
			1,
			1,
			20
		};
		changeFiremodeSound[]=
		{
			"acwp_core\snd\p226_dryfire",
			1,
			1,
			8
		};
		reloadmagazinesound[]=
		{
			"acwp_core\snd\p226_reload",
			0.69999999,
			1,
			20
		};
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"\acwp_core\snd\p226_dryfire",
					0.75,
					1,
					10
				};
				closure2[]=
				{
					"\acwp_core\snd\p226_dryfire",
					0.75,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"acwp_p2269mm_Shot_SoundSet",
					"acwp_p2269mm_tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"acwp_p2269mm_silencerTail_SoundSet",
					"acwp_p2269mm_silencerShot_SoundSet"
				};
			};
			dispersion=0.00240865;
			reloadtime="(60/460)";
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class ACWP_30rnd_556x45_EPR_PMAG: 30Rnd_556x45_Stanag
	{
		author="Toadie,Spartan0536,Monk";
		ammo="S_556NATO_EPR";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname="5.56mm EPR 30Rnd PMAG";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		tracersevery=0;
		displaynameshort="M855A1 EPR";
		picture="\ACWP_core\tex\LOGO.paa";
		modelSpecial="\ACWP_core\mesh\proxies\30rnd_556_PMAG30.p3d";
		model="\ACWP_core\mesh\30rnd_556_PMAG30.p3d";
		modelSpecialIsProxy=1;
	};
	class ACWP_30rnd_556x45_EPR_PMAG_blue: 30Rnd_556x45_Stanag
	{
		author="Toadie,Spartan0536,Monk";
		ammo="S_9x19_sim";
		count=30;
		descriptionshort="";
		displayname="UTM Training 30Rnd PMAG";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=0;
		scope=2;
		tracersevery=0;
		displaynameshort="Blue Mag";
		picture="\ACWP_core\tex\LOGO.paa";
		modelSpecial="\ACWP_core\mesh\proxies\30rnd_556_PMAG30_blue.p3d";
		model="\ACWP_core\mesh\30rnd_556_PMAG30_blue.p3d";
		modelSpecialIsProxy=1;
	};
	class ACWP_30rnd_556x45_M_PMAG: ACWP_30rnd_556x45_EPR_PMAG
	{
		ammo="S_556NATO_EPR_Tracer";
		author="Toadie,Spartan0536,Monk";
		count=30;
		descriptionshort="Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: FMJ/Tracer<br />Rounds: 30";
		displayname="5.56mm EPR 30Rnd PMAG (Tracers every 4)";
		initspeed=974.79999;
		mass=11.6;
		lastroundstracer=3;
		scope=2;
		tracersevery=4;
		displaynameshort="EPR/Tracer";
		picture="\ACWP_core\tex\LOGO.paa";
	};
};
class CfgMagazineWells
{
	class CBA_556x45_STANAG
	{
		ACWP_Magazines[]=
		{
			"ACWP_30rnd_556x45_EPR_PMAG",
			"ACWP_30rnd_556x45_EPR_PMAG_blue",
			"ACWP_30rnd_556x45_M_PMAG"
		};
	};
};

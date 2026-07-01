class cfgsoundsets
{
	class jsrs_m134_shot_soundset: jsrs_basic_weapon_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_m134_shot_soundshader",
			"jsrs_m134_shot_medium_distance_soundshader",
			"jsrs_m134_shot_far_distance_soundshader"
		};
	};
};
class cfgsoundshaders
{
	class jsrs_m134_shot_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\m134\minigun_single_1.ogg",
				1
			}
		};
		volume=1;
		range=2500;
		rangecurve[]=
		{
			{0,1},
			{300,0},
			{2500,0}
		};
	};
	class jsrs_m134_shot_medium_distance_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\m134\minigun_single_2.ogg",
				1
			}
		};
		volume=0.75;
		range=2500;
		rangecurve[]=
		{
			{0,0},
			{300,1},
			{1000,0},
			{2500,0}
		};
	};
	class jsrs_m134_shot_far_distance_soundshader
	{
		samples[]=
		{
			
			{
				"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\m134\minigun_single_3.ogg",
				1
			}
		};
		volume=0.5;
		range=2500;
		rangecurve[]=
		{
			{0,0},
			{300,0},
			{1000,1},
			{2500,0}
		};
	};
};
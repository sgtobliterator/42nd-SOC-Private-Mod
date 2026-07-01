class CfgPatches
{
	class four_556_sounds
	{
		requiredAddons[]=
		{
			"A3_Sounds_F",
			"louetta_two",
			"louetta_seven",
			"A3_Data_F",
			"cba_main",
			"rhsusf_main",
			"rhsusf_c_weapons",
			"rhsusf_weapon_sounds",
			"Tier1_Weapons",
			"Tier1_Weapons_cfg",
			"ACWP_core",
			"niarms_416"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class cfgweapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Pistol_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
	};
	class Rifle_Short_Base_F;
	class Rifle_Long_Base_F;
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F;
	class MGun;
	class LMG_RCWS;
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
	};
	class launch_O_Titan_F;
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class Single: mode_semiauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class rhs_weap_m4a1: rhs_weap_m4_Base
	{
		class Single;
		class FullAuto;
	};
	class rhs_weap_hk416d10: rhs_weap_m4a1
	{
		class single: Single
		{
			class BaseSoundModeType
			{
			};
			class standardsound
			{
				soundsetshot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class fullauto: FullAuto
		{
			class BaseSoundModeType
			{
			};
			class standardsound
			{
				soundsetshot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		class Single: Single
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class acwp_rifle_base: Rifle_Base_F
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class hlc_HK416_base: Rifle_Base_F
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class hlc_rifle_416D145: hlc_HK416_base
	{
	};
	class hlc_rifle_416D10: hlc_rifle_416D145
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class hlc_rifle_416C: hlc_rifle_416D10
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class hlc_rifle_M27IAR: hlc_rifle_416D145
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class hlc_rifle_416D165: hlc_rifle_416D145
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class hlc_rifle_416D20: hlc_rifle_416D145
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class Tier1_HK416_base: Rifle_Base_F
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class Tier1_HK416D145_LMT: Tier1_HK416_base
	{
		class Single: mode_semiauto
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
					"\Tier1_Weapons\Sound\acr_first",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\Tier1_Weapons\Sound\acr_first",
					1,
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"\Tier1_Weapons\Sound\acr_first",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\Tier1_Weapons\Sound\acr_first",
					1,
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class Tier1_HK416D10_LMT: Tier1_HK416D145_LMT
	{
		class Single: mode_semiauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
		class FullAuto: mode_fullauto
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
					"m4_Shot_SoundSet",
					"FRAME_CALIBER_5x56MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_5x56MM_SILENCED"
				};
			};
		};
	};
	class Tier1_SAW_Base: Rifle_Base_F
	{
		class FullAuto: mode_fullauto
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
					"\Tier1_Weapons\Sound\SAWsaw_first",
					0.69999999,
					1,
					10
				};
				closure2[]=
				{
					"\Tier1_Weapons\Sound\SAWsaw_first",
					0.69999999,
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
					"MG_Shot_SoundSet",
					"FRAME_CALIBER_7x62MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_7x62MM_SILENCED"
				};
			};
		};
	};
	class Tier1_MK48_Mod0: Tier1_SAW_Base
	{
		class FullAuto: mode_fullauto
		{
			sound[]=
			{
				"",
				10,
				1
			};
			soundBegin[]=
			{
				"sound",
				1
			};
			soundBeginWater[]=
			{
				"sound",
				1
			};
			soundBurst=0;
			soundClosure[]=
			{
				"sound",
				1
			};
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			soundLoop[]={};
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
					"MG_Shot_SoundSet",
					"FRAME_CALIBER_7x62MM",
					"ALL_DIST_TAIL"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"m4_silencerShot_SoundSet",
					"FRAME_CALIBER_7x62MM_SILENCED"
				};
			};
		};
	};
};
class cfgMods
{
	author="MattyIce";
	timepacked="1618624195";
};

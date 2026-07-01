////////////////////////////////////////////////////////////////////
//DeRap: framework\config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 17 14:18:21 2022 : 'file' last modified on Mon Mar 15 23:55:08 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Four_FrameWork
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Sounds_F","A3_Weapons_F"};
		version = "1";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgSoundSets
{
	class FRAME_CALIBER_5x56MM
	{
		soundShaders[] = {"Shell_Inroom_SoundShader","interior_SoundShader","RIFLE_REFLECTOR_FOREST","RIFLE_REFLECTOR_HOUSES","RIFLE_REFLECTOR_MEADOW"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		frequencyRandomizer = 2;
		soundShadersLimit = 9;
	};
	class FRAME_CALIBER_5x56MM_SILENCED
	{
		soundShaders[] = {"Shell_Inroom_SoundShader","SD_interior_SoundShader","SD_RIFLE_REFLECTOR_FOREST","SD_RIFLE_REFLECTOR_HOUSES","SD_RIFLE_REFLECTOR_MEADOW"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		frequencyRandomizer = 2;
		soundShadersLimit = 9;
	};
	class FRAME_CALIBER_7x62MM
	{
		soundShaders[] = {"Shell_Inroom_SoundShader","interior_SoundShader","RIFLE_REFLECTOR_FOREST","RIFLE_REFLECTOR_HOUSES","RIFLE_REFLECTOR_MEADOW"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		frequencyRandomizer = 2;
		soundShadersLimit = 9;
	};
	class FRAME_CALIBER_7x62MM_SILENCED
	{
		soundShaders[] = {"Shell_Inroom_SoundShader","SD_interior_SoundShader","SD_RIFLE_REFLECTOR_FOREST","SD_RIFLE_REFLECTOR_HOUSES","SD_RIFLE_REFLECTOR_MEADOW"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		frequencyRandomizer = 2;
		soundShadersLimit = 9;
	};
	class FRAME_CALIBER_12x7MM
	{
		soundShaders[] = {"interior_SoundShader","SNIPER_REFLECTOR_FOREST","SNIPER_REFLECTOR_HOUSES","SNIPER_REFLECTOR_MEADOW"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		frequencyRandomizer = 2;
		soundShadersLimit = 9;
	};
	class FRAME_CALIBER_12x7MM_SILENCED
	{
		soundShaders[] = {"SD_interior_SoundShader","SD_SNIPER_REFLECTOR_FOREST","SD_SNIPER_REFLECTOR_HOUSES","SD_SNIPER_REFLECTOR_MEADOW"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		frequencyRandomizer = 2;
		soundShadersLimit = 9;
	};
	class ALL_DIST_TAIL
	{
		soundShaders[] = {"ALL_DIST_TAIL_MEADOWS","ALL_DIST_TAIL_HOUSES","ALL_DIST_TAIL_FOREST"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		soundShadersLimit = 4;
		frequencyRandomizer = 3;
	};
};
class CfgSoundShaders
{
	class interior_SoundShader
	{
		samples[] = {{"four\tails\interior\shot.ogg",1}};
		volume = "2*interior";
		range = 30;
		limitation = 1;
	};
	class interior_50_SoundShader
	{
		samples[] = {{"four\tails\interior\shot.ogg",1}};
		volume = "2*interior";
		range = 30;
		limitation = 1;
	};
	class SD_interior_SoundShader
	{
		samples[] = {{"four\tails\interior\SD_shot.ogg",1}};
		volume = "2*interior";
		range = 30;
		limitation = 1;
	};
	class SD_interior_50_SoundShader
	{
		samples[] = {{"four\tails\interior\SD_shot.ogg",1}};
		volume = "2*interior";
		range = 30;
		limitation = 1;
	};
	class Shell_Inroom_SoundShader
	{
		samples[] = {{"four\tails\interior\shells\shell1.ogg",1},{"four\tails\interior\shells\shell2.ogg",1},{"four\tails\interior\shells\shell3.ogg",1},{"four\tails\interior\shells\shell4.ogg",1}};
		volume = "0.35*interior";
		range = 30;
		limitation = 1;
	};
	class ALL_DIST_TAIL_MEADOWS
	{
		samples[] = {{"four\tails\distant_tails\Meadows1.ogg",1},{"four\tails\distant_tails\Meadows2.ogg",1},{"four\tails\distant_tails\Meadows3.ogg",1},{"four\tails\distant_tails\Meadows4.ogg",1}};
		volume = "1*(1-houses)*(1-forest)";
		range = 1500;
		rangeCurve[] = {{0,0},{100,1},{1500,1}};
		limitation = 1;
	};
	class ALL_DIST_TAIL_FOREST
	{
		samples[] = {{"four\tails\distant_tails\Forest1.ogg",1},{"four\tails\distant_tails\Forest2.ogg",1},{"four\tails\distant_tails\Forest3.ogg",1},{"four\tails\distant_tails\Forest4.ogg",1}};
		volume = "1*forest";
		range = 1500;
		rangeCurve[] = {{0,0},{100,1},{1500,1}};
		limitation = 1;
	};
	class ALL_DIST_TAIL_HOUSES
	{
		samples[] = {{"four\tails\distant_tails\Houses1.ogg",1},{"four\tails\distant_tails\Houses2.ogg",1},{"four\tails\distant_tails\Houses3.ogg",1},{"four\tails\distant_tails\Houses4.ogg",1}};
		volume = "1*houses";
		range = 1500;
		rangeCurve[] = {{0,0},{100,1},{1500,1}};
		limitation = 1;
	};
	class RIFLE_REFLECTOR_FOREST
	{
		samples[] = {{"four\tails\forest_tails\rifle1.ogg",1},{"four\tails\forest_tails\rifle2.ogg",1},{"four\tails\forest_tails\rifle3.ogg",1},{"four\tails\forest_tails\rifle4.ogg",1}};
		volume = "2*forest";
		range = 200;
		rangeCurve[] = {{0,1},{100,0.25},{200,0}};
		limitation = 1;
	};
	class RIFLE_REFLECTOR_HOUSES
	{
		samples[] = {{"four\tails\houses_tails\rifle1.ogg",1},{"four\tails\houses_tails\rifle2.ogg",1},{"four\tails\houses_tails\rifle3.ogg",1},{"four\tails\houses_tails\rifle4.ogg",1}};
		volume = "2*houses";
		range = 200;
		rangeCurve[] = {{0,1},{100,0.25},{200,0}};
		limitation = 1;
	};
	class RIFLE_REFLECTOR_MEADOW
	{
		samples[] = {{"four\tails\meadow_tails\rifle1.ogg",1},{"four\tails\meadow_tails\rifle2.ogg",1},{"four\tails\meadow_tails\rifle3.ogg",1},{"four\tails\meadow_tails\rifle4.ogg",1}};
		volume = "2*(meadows/2 max sea/2)/3";
		range = 200;
		rangeCurve[] = {{0,1},{100,0.25},{200,0}};
		limitation = 1;
	};
	class SNIPER_REFLECTOR_FOREST
	{
		samples[] = {{"four\tails\forest_tails\rifle1.ogg",1},{"four\tails\forest_tails\rifle2.ogg",1},{"four\tails\forest_tails\rifle3.ogg",1},{"four\tails\forest_tails\rifle4.ogg",1}};
		volume = "2*forest";
		range = 300;
		rangeCurve[] = {{0,1},{100,0.25},{300,0}};
		limitation = 1;
	};
	class SNIPER_REFLECTOR_HOUSES
	{
		samples[] = {{"four\tails\houses_tails\sniper1.ogg",1},{"four\tails\houses_tails\sniper2.ogg",1},{"four\tails\houses_tails\sniper3.ogg",1},{"four\tails\houses_tails\sniper4.ogg",1}};
		volume = "2*houses";
		range = 300;
		rangeCurve[] = {{0,1},{100,0.25},{300,0}};
		limitation = 1;
	};
	class SNIPER_REFLECTOR_MEADOW
	{
		samples[] = {{"four\tails\meadow_tails\sniper1.ogg",1},{"four\tails\meadow_tails\sniper2.ogg",1},{"four\tails\meadow_tails\sniper3.ogg",1},{"four\tails\meadow_tails\sniper4.ogg",1}};
		volume = "2*(meadows/2 max sea/2)/3";
		range = 300;
		rangeCurve[] = {{0,1},{100,0.25},{300,0}};
		limitation = 1;
	};
	class MG_REFLECTOR_FOREST
	{
		samples[] = {{"four\tails\forest_tails\rifle1.ogg",1},{"four\tails\forest_tails\rifle2.ogg",1},{"four\tails\forest_tails\rifle3.ogg",1},{"four\tails\forest_tails\rifle4.ogg",1}};
		volume = "2*forest";
		range = 200;
		rangeCurve[] = {{0,1},{100,0.25},{200,0}};
		limitation = 1;
	};
	class MG_REFLECTOR_HOUSES
	{
		samples[] = {{"four\tails\houses_tails\rifle1.ogg",1},{"four\tails\houses_tails\rifle2.ogg",1},{"four\tails\houses_tails\rifle3.ogg",1},{"four\tails\houses_tails\rifle4.ogg",1}};
		volume = "2*houses";
		range = 200;
		rangeCurve[] = {{0,1},{100,0.25},{200,0}};
		limitation = 1;
	};
	class MG_REFLECTOR_MEADOW
	{
		samples[] = {{"four\tails\meadow_tails\rifle1.ogg",1},{"four\tails\meadow_tails\rifle2.ogg",1},{"four\tails\meadow_tails\rifle3.ogg",1},{"four\tails\meadow_tails\rifle4.ogg",1}};
		volume = "2*(meadows/2 max sea/2)/3";
		range = 200;
		rangeCurve[] = {{0,1},{100,0.25},{200,0}};
		limitation = 1;
	};
	class SD_RIFLE_REFLECTOR_FOREST
	{
		samples[] = {{"four\tails\sd_forest tails\rifle1.ogg",1},{"four\tails\sd_forest tails\rifle2.ogg",1},{"four\tails\sd_forest tails\rifle3.ogg",1},{"four\tails\sd_forest tails\rifle4.ogg",1}};
		volume = "2*forest";
		range = 100;
		limitation = 1;
	};
	class SD_RIFLE_REFLECTOR_HOUSES
	{
		samples[] = {{"four\tails\sd_houses tails\rifle1.ogg",1},{"four\tails\sd_houses tails\rifle2.ogg",1},{"four\tails\sd_houses tails\rifle3.ogg",1},{"four\tails\sd_houses tails\rifle4.ogg",1}};
		volume = "2*houses";
		range = 100;
		limitation = 1;
	};
	class SD_RIFLE_REFLECTOR_MEADOW
	{
		samples[] = {{"four\tails\sd_meadow tails\rifle1.ogg",1},{"four\tails\sd_meadow tails\rifle2.ogg",1},{"four\tails\sd_meadow tails\rifle3.ogg",1},{"four\tails\sd_meadow tails\rifle4.ogg",1}};
		volume = "2*(meadows/2 max sea/2)/3";
		range = 100;
		limitation = 1;
	};
	class SD_SNIPER_REFLECTOR_FOREST
	{
		samples[] = {{"four\tails\sd_forest tails\rifle1.ogg",1},{"four\tails\sd_forest tails\rifle2.ogg",1},{"four\tails\sd_forest tails\rifle3.ogg",1},{"four\tails\sd_forest tails\rifle4.ogg",1}};
		volume = "2*forest";
		range = 150;
		limitation = 1;
	};
	class SD_SNIPER_REFLECTOR_HOUSES
	{
		samples[] = {{"four\tails\sd_houses tails\rifle1.ogg",1},{"four\tails\sd_houses tails\rifle2.ogg",1},{"four\tails\sd_houses tails\rifle3.ogg",1},{"four\tails\sd_houses tails\rifle4.ogg",1}};
		volume = "2*houses";
		range = 150;
		limitation = 1;
	};
	class SD_SNIPER_REFLECTOR_MEADOW
	{
		samples[] = {{"four\tails\sd_meadow tails\rifle1.ogg",1},{"four\tails\sd_meadow tails\rifle2.ogg",1},{"four\tails\sd_meadow tails\rifle3.ogg",1},{"four\tails\sd_meadow tails\rifle4.ogg",1}};
		volume = "2*(meadows/2 max sea/2)/3";
		range = 150;
		limitation = 1;
	};
	class SD_MG_REFLECTOR_FOREST
	{
		samples[] = {{"four\tails\sd_forest tails\rifle1.ogg",1},{"four\tails\sd_forest tails\rifle2.ogg",1},{"four\tails\sd_forest tails\rifle3.ogg",1},{"four\tails\sd_forest tails\rifle4.ogg",1}};
		volume = "2*forest";
		range = 100;
		limitation = 1;
	};
	class SD_MG_REFLECTOR_HOUSES
	{
		samples[] = {{"four\tails\sd_houses tails\rifle1.ogg",1},{"four\tails\sd_houses tails\rifle2.ogg",1},{"four\tails\sd_houses tails\rifle3.ogg",1},{"four\tails\sd_houses tails\rifle4.ogg",1}};
		volume = "2*houses";
		range = 100;
		limitation = 1;
	};
	class SD_MG_REFLECTOR_MEADOW
	{
		samples[] = {{"four\tails\sd_meadow tails\rifle1.ogg",1},{"four\tails\sd_meadow tails\rifle2.ogg",1},{"four\tails\sd_meadow tails\rifle3.ogg",1},{"four\tails\sd_meadow tails\rifle4.ogg",1}};
		volume = "2*(meadows/2 max sea/2)/3";
		range = 100;
		limitation = 1;
	};
};
class cfgMods
{
	author = "MattyIce";
	timepacked = "1615852507";
};

////////////////////////////////////////////////////////////////////
//DeRap: 556_sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 17 14:18:20 2022 : 'file' last modified on Mon Mar 15 23:55:08 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class four_556_sounds
	{
		requiredAddons[] = {"A3_Sounds_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgSoundShaders
{
	class m4_closure_SoundShader
	{
		samples[] = {{"\four\shot\core\5x56mm\core (1).ogg",1},{"\four\shot\core\5x56mm\core (2).ogg",1},{"\four\shot\core\5x56mm\core (3).ogg",1},{"\four\shot\core\5x56mm\core (4).ogg",1}};
		range = 5;
		volume = 1;
	};
	class m4_closeShot_SoundShader
	{
		samples[] = {{"four\556_sounds\1stperson\closeShot1.ogg",1},{"four\556_sounds\1stperson\closeShot2.ogg",1},{"four\556_sounds\1stperson\closeShot3.ogg",1},{"four\556_sounds\1stperson\closeShot4.ogg",1}};
		volume = 1.2;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class m4_midShot_SoundShader
	{
		samples[] = {{"\four\556_sounds\3rdperson\mid1.ogg",1},{"\four\556_sounds\3rdperson\mid2.ogg",1},{"\four\556_sounds\3rdperson\mid3.ogg",1},{"\four\556_sounds\3rdperson\mid4.ogg",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{15,0},{50,1},{150,1},{300,0},{2000,0}};
	};
	class m4_distShot_SoundShader
	{
		samples[] = {{"\four\556_sounds\3rdperson\dist1.ogg",1},{"\four\556_sounds\3rdperson\dist2.ogg",1},{"\four\556_sounds\3rdperson\dist3.ogg",1},{"\four\556_sounds\3rdperson\dist4.ogg",1}};
		volume = 2;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,0.25},{2000,0}};
	};
	class m4_silencerShot_SoundShader
	{
		samples[] = {{"four\556_sounds\1stperson\sd\silencerShot1.ogg",1},{"four\556_sounds\1stperson\sd\silencerShot2.ogg",1},{"four\556_sounds\1stperson\sd\silencerShot3.ogg",1},{"four\556_sounds\1stperson\sd\silencerShot4.ogg",1}};
		volume = 1.5;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class m4_SD_midShot_SoundShader
	{
		samples[] = {{"\four\556_sounds\3rdperson\sd\mid1.ogg",1},{"\four\556_sounds\3rdperson\sd\mid2.ogg",1},{"\four\556_sounds\3rdperson\sd\mid3.ogg",1},{"\four\556_sounds\3rdperson\sd\mid4.ogg",1}};
		volume = 0.5011872;
		range = 2000;
		rangeCurve[] = {{0,0},{50,1},{150,1},{300,0},{2000,0}};
	};
	class m4_SD_distShot_SoundShader
	{
		samples[] = {{"\four\556_sounds\3rdperson\sd\dist.ogg",1}};
		volume = 0.85;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
};
class CfgSoundSets
{
	class m4_Shot_SoundSet
	{
		soundShaders[] = {"m4_Closure_SoundShader","m4_closeShot_SoundShader","m4_midShot_SoundShader","m4_distShot_SoundShader"};
		volumeFactor = 2.7;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class m4_silencerShot_SoundSet
	{
		soundShaders[] = {"m4_Closure_SoundShader","m4_silencerShot_SoundShader","m4_SD_midShot_SoundShader","m4_SD_distShot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
};
class cfgMods
{
	author = "MattyIce";
	timepacked = "1615852507";
};

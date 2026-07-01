////////////////////////////////////////////////////////////////////
//DeRap: M107_sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.90
//https://mikero.bytex.digital/Downloads
//'now' is Mon Oct 17 14:18:21 2022 : 'file' last modified on Mon Mar 15 23:55:08 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Four_M107
	{
		requiredAddons[] = {"A3_Data_F","A3_Anims_F","A3_Weapons_F","Four_FrameWork"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgSoundShaders
{
	class M107_closure_SoundShader
	{
		samples[] = {{"\four\shot\core\12x7mm\core (1).ogg",1},{"\four\shot\core\12x7mm\core (2).ogg",1},{"\four\shot\core\12x7mm\core (3).ogg",1},{"\four\shot\core\12x7mm\core (4).ogg",1}};
		range = 5;
		volume = 1;
	};
	class M107_closeShot_SoundShader
	{
		samples[] = {{"four\M107_sounds\1stperson\closeShot1.ogg",1},{"four\M107_sounds\1stperson\closeShot2.ogg",1},{"four\M107_sounds\1stperson\closeShot3.ogg",1},{"four\M107_sounds\1stperson\closeShot4.ogg",1}};
		volume = 2.25;
		range = 30;
		rangeCurve = "closeShotCurve";
	};
	class M107_midShot_SoundShader
	{
		samples[] = {{"\four\M107_sounds\3rdperson\mid1.ogg",1},{"\four\M107_sounds\3rdperson\mid2.ogg",1},{"\four\M107_sounds\3rdperson\mid3.ogg",1},{"\four\M107_sounds\3rdperson\mid4.ogg",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{15,0},{50,1},{150,1},{200,0},{2000,0}};
	};
	class M107_distShot_SoundShader
	{
		samples[] = {{"\four\M107_sounds\3rdperson\dist1.ogg",1},{"\four\M107_sounds\3rdperson\dist2.ogg",1},{"\four\M107_sounds\3rdperson\dist3.ogg",1},{"\four\M107_sounds\3rdperson\dist4.ogg",1}};
		volume = 1.5;
		range = 4500;
		rangeCurve[] = {{0,0},{50,0},{200,1},{4500,1}};
	};
	class M107_silencerShot_SoundShader
	{
		samples[] = {{"four\M107_sounds\1stperson\sd\closeShot1.ogg",1},{"four\M107_sounds\1stperson\sd\closeShot2.ogg",1},{"four\M107_sounds\1stperson\sd\closeShot3.ogg",1},{"four\M107_sounds\1stperson\sd\closeShot4.ogg",1}};
		volume = 1.5;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class M107_SD_midShot_SoundShader
	{
		samples[] = {{"\four\M107_sounds\3rdperson\sd\mid1.ogg",1},{"\four\M107_sounds\3rdperson\sd\mid2.ogg",1},{"\four\M107_sounds\3rdperson\sd\mid3.ogg",1},{"\four\M107_sounds\3rdperson\sd\mid4.ogg",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,1},{150,1},{300,0},{2000,0}};
	};
	class M107_SD_distShot_SoundShader
	{
		samples[] = {{"\four\M107_sounds\3rdperson\sd\dist1.ogg",1},{"\four\M107_sounds\3rdperson\sd\dist2.ogg",1},{"\four\M107_sounds\3rdperson\sd\dist3.ogg",1},{"\four\M107_sounds\3rdperson\sd\dist4.ogg",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
};
class CfgSoundSets
{
	class M107_Shot_SoundSet
	{
		soundShaders[] = {"M107_Closure_SoundShader","M107_closeShot_SoundShader","M107_midShot_SoundShader","M107_distShot_SoundShader"};
		volumeFactor = 2.7;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class M107_silencerShot_SoundSet
	{
		soundShaders[] = {"M107_Closure_SoundShader","M107_silencerShot_SoundShader","M107_SD_midShot_SoundShader","M107_SD_distShot_SoundShader"};
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

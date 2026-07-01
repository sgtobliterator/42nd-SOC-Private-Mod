
class CfgSoundSets
{
    class ACWP_416Rifle_Shot_SoundSet {
        soundShaders[] = { "ACWP_416Rifle_closeShot_SoundShader", "ACWP_416Rifle_midShot_SoundShader", "ACWP_416Rifle_distShot_SoundShader", "ACWP_416Rifle_Closure_SoundShader" };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "ACWP_defaultDistanceFilter";
    };
    class ACWP_416Rifle_Tail_SoundSet {
        soundShaders[] = { "ACWP_416Rifle_tailDistant_SoundShader","ACWP_416Rifle_tailForest_SoundShader", "ACWP_416Rifle_tailForest_mid_SoundShader", "ACWP_416Rifle_tailHouses_SoundShader", "ACWP_416Rifle_tailHouses_mid_SoundShader", "ACWP_416Rifle_tailInterior_SoundShader", "ACWP_416Rifle_tailInterior_mid_SoundShader", "ACWP_416Rifle_tailMeadows_SoundShader", "ACWP_416Rifle_tailHouses_mid_SoundShader", "ACWP_416Rifle_tailTrees_SoundShader", "ACWP_416Rifle_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "ACWP_rifleTailDistanceFilter";
    };
    class ACWP_416Rifle_silencerShot_SoundSet {
        soundShaders[] = { "ACWP_416Rifle_silencerShot_SoundShader", "ACWP_416Rifle_Closure_SoundShader", "ACWP_416Rifle_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class ACWP_416Rifle_silencerTail_SoundSet {
        soundShaders[] = { "ACWP_416Rifle_silencerTailTrees_SoundShader", "ACWP_416Rifle_silencerTailForest_SoundShader", "ACWP_416Rifle_silencerTailMeadows_SoundShader", "ACWP_416Rifle_silencerTailHouses_SoundShader", "ACWP_416Rifle_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "ACWP_rifleTailDistanceFilter";
    };

    class ACWP_416Carbine_Shot_SoundSet {
        soundShaders[] = { "ACWP_416Carbine_closeShot_SoundShader", "ACWP_416Carbine_midShot_SoundShader", "ACWP_416Carbine_distShot_SoundShader", "ACWP_416Carbine_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "ACWP_defaultDistanceFilter";
    };
    class ACWP_416Carbine_Tail_SoundSet {
        soundShaders[] = { "ACWP_416Carbine_tailDistant_SoundShader","ACWP_416Carbine_tailForest_SoundShader", "ACWP_416Carbine_tailHouses_SoundShader", "ACWP_416Carbine_tailInterior_SoundShader", "ACWP_416Carbine_tailMeadows_SoundShader", "ACWP_416Carbine_tailTrees_mid_SoundShader", "ACWP_416Carbine_tailForest_mid_SoundShader", "ACWP_416Carbine_tailHouses_mid_SoundShader", "ACWP_416Carbine_tailInterior_mid_SoundShader", "ACWP_416Carbine_tailMeadows_mid_SoundShader", "ACWP_416Carbine_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "ACWP_rifleTailDistanceFilter";
    };
    class ACWP_416Carbine_silencerShot_SoundSet {
        soundShaders[] = { "ACWP_416Carbine_silencerShot_SoundShader", "ACWP_416Carbine_Closure_SoundShader", "ACWP_416Carbine_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class ACWP_416Carbine_silencerTail_SoundSet {
        soundShaders[] = { "ACWP_416Carbine_silencerTailTrees_SoundShader", "ACWP_416Carbine_silencerTailForest_SoundShader", "ACWP_416Carbine_silencerTailMeadows_SoundShader", "ACWP_416Carbine_silencerTailHouses_SoundShader", "ACWP_416Carbine_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };


    class ACWP_416SBR_Shot_SoundSet {
        soundShaders[] = { "ACWP_416SBR_tailDistant_SoundShader","ACWP_416SBR_closeShot_SoundShader", "ACWP_416SBR_midShot_SoundShader", "ACWP_416SBR_distShot_SoundShader", "ACWP_416SBR_Closure_SoundShader" };
        volumeFactor = 1.35;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = ACWP_defaultDistanceFilter;
    };
    class ACWP_416SBR_Tail_SoundSet {
        soundShaders[] = { "ACWP_416SBR_tailForest_SoundShader", "ACWP_416SBR_tailHouses_SoundShader", "ACWP_416SBR_tailInterior_SoundShader", "ACWP_416SBR_tailMeadows_SoundShader", "ACWP_416SBR_tailTrees_SoundShader", "ACWP_416SBR_tailForest_mid_SoundShader", "ACWP_416SBR_tailHouses_mid_SoundShader", "ACWP_416SBR_tailInterior_mid_SoundShader", "ACWP_416SBR_tailMeadows_mid_SoundShader", "ACWP_416SBR_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "ACWP_rifleTailDistanceFilter";
    };
    class ACWP_416SBR_silencerShot_SoundSet {
        soundShaders[] = { "ACWP_416SBR_silencerShot_SoundShader", "ACWP_416SBR_Closure_SoundShader", "ACWP_416SBR_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class ACWP_416SBR_silencerTail_SoundSet {
        soundShaders[] = { "ACWP_416SBR_silencerTailTrees_SoundShader", "ACWP_416SBR_silencerTailForest_SoundShader", "ACWP_416SBR_silencerTailMeadows_SoundShader", "ACWP_416SBR_silencerTailHouses_SoundShader", "ACWP_416SBR_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "ACWP_rifleTailDistanceFilter";
    };
    class acwp_p2269mm_Shot_SoundSet
    {
        soundShaders[] = { "acwp_p2269mm_closeShot_SoundShader", "acwp_p2269mm_midShot_SoundShader", "acwp_p2269mm_distShot_SoundShader", "acwp_p2269mm_Closure_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
         frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p2269mm_tail_SoundSet
    {
        soundShaders[] = { "acwp_p2269mm_tailTrees_SoundShader", "acwp_p2269mm_tailForest_SoundShader", "acwp_p2269mm_tailMeadows_SoundShader", "acwp_p2269mm_tailHouses_SoundShader", "acwp_p2269mm_tailInterior_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "acwp_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class acwp_p2269mm_silencerShot_SoundSet
    {
        soundShaders[] = { "acwp_p2269mm_silencerShot_SoundShader", "acwp_p2269mm_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p2269mm_silencerTail_SoundSet
    {
        soundShaders[] = { "acwp_p2269mm_silencerTailTrees_SoundShader", "acwp_p2269mm_silencerTailForest_SoundShader", "acwp_p2269mm_silencerTailMeadows_SoundShader", "acwp_p2269mm_silencerTailHouses_SoundShader", "acwp_p2269mm_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class acwp_p2399mm_Shot_SoundSet
    {
        soundShaders[] = { "acwp_p2399mm_closeShot_SoundShader", "acwp_p2399mm_midShot_SoundShader", "acwp_p2399mm_distShot_SoundShader", "acwp_p2269mm_Closure_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p2399mm_tail_SoundSet
    {
        soundShaders[] = {  "acwp_p2399mm_tailTrees_SoundShader", "acwp_p2399mm_tailForest_SoundShader", "acwp_p2399mm_tailMeadows_SoundShader", "acwp_p2399mm_tailHouses_SoundShader", "acwp_p2399mm_tailInterior_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "acwp_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
   


    class acwp_p226_357_Shot_SoundSet
    {
        soundShaders[] = { "acwp_p226_357_closeShot_SoundShader", "acwp_p226_357_midShot_SoundShader", "acwp_p226_357_distShot_SoundShader", "acwp_p226_357_Closure_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p226_357_tail_SoundSet
    {
        soundShaders[] = { "acwp_p226_357_tailTrees_SoundShader", "acwp_p226_357_tailForest_SoundShader", "acwp_p226_357_tailMeadows_SoundShader", "acwp_p226_357_tailHouses_SoundShader", "acwp_p226_357_tailInterior_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "acwp_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class acwp_p226_357_silencerShot_SoundSet
    {
        soundShaders[] = { "acwp_p226_357_silencerShot_SoundShader", "acwp_p226_357_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p226_357_silencerTail_SoundSet
    {
        soundShaders[] = { "acwp_p226_357_silencerTailTrees_SoundShader", "acwp_p226_357_silencerTailForest_SoundShader", "acwp_p226_357_silencerTailMeadows_SoundShader", "acwp_p226_357_silencerTailHouses_SoundShader", "acwp_p226_357_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class acwp_p239_357_Shot_SoundSet
    {
        soundShaders[] = { "acwp_p239_357_closeShot_SoundShader", "acwp_p239_357_midShot_SoundShader", "acwp_p239_357_distShot_SoundShader", "acwp_p226_357_Closure_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p239_357_tail_SoundSet
    {
        soundShaders[] = {  "acwp_p239_357_tailTrees_SoundShader", "acwp_p239_357_tailForest_SoundShader", "acwp_p239_357_tailMeadows_SoundShader", "acwp_p239_357_tailHouses_SoundShader", "acwp_p239_357_tailInterior_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "acwp_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };


    class acwp_p227_Shot_SoundSet
    {
        soundShaders[] = { "acwp_p226_45_closeShot_SoundShader", "acwp_p226_45_midShot_SoundShader", "acwp_p226_45_distShot_SoundShader", "acwp_p226_45_Closure_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p227_tail_SoundSet
    {
        soundShaders[] = { "acwp_p226_45_tailTrees_SoundShader", "acwp_p226_45_tailForest_SoundShader", "acwp_p226_45_tailMeadows_SoundShader", "acwp_p226_45_tailHouses_SoundShader", "acwp_p226_45_tailInterior_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "acwp_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class acwp_p227_silencerShot_SoundSet
    {
        soundShaders[] = { "acwp_p226_45_silencerShot_SoundShader", "acwp_p226_45_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "acwp_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class acwp_p227_silencerTail_SoundSet
    {
        soundShaders[] = { "acwp_p226_45_silencerTailTrees_SoundShader", "acwp_p226_45_silencerTailForest_SoundShader", "acwp_p226_45_silencerTailMeadows_SoundShader", "acwp_p226_45_silencerTailHouses_SoundShader", "acwp_p226_45_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
};

#define private		0
#define protected	1
#define public		2

#define true	1
#define false	0

#define __145inch ACE_barrelLength = 368.3;\
    AB_barrelLength = 14.5;

#define __105inch ACE_barrelLength = 266.7;\
    AB_barrelLength = 10.5;

#define __OPTICSZOOM_1X opticsZoomMin = 0.25; opticsZoomMax = 1.25; opticsZoomInit = 0.75

#define __WEAPONHOLDER(gat,mag,dispname,mod,author,editorsubcat)    class Weapon_##gat : Weapon_Base_F {\
        dlc = ##mod;\
        scope = 2;\
        scopeCurator = 2;\
        displayName = ##dispname;\
        author = ##author;\
		editorCategory = "EdCat_Weapons";\
		editorSubcategory = EdSubcat_##editorsubcat;\
        vehicleClass = "WeaponsPrimary";\
        class TransportWeapons {\
            class ##gat { weapon = ##gat; count = 1; };\
        };\
        class TransportMagazines {\
            class ##mag { magazine = ##mag; count = 1; };\
        };\
    }

#define __556STANAG_MAGS "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_MDim", "hlc_30rnd_556x45_TDim", "hlc_50rnd_556x45_EPR", "hlc_30rnd_556x45_S","hlc_30rnd_556x45_M"
#define __556STANAG_BI_MAGS "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red"
#define __556NATO_BI_DRUMS "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F"


#define TEast				0
#define TWest				1
#define TGuerrila			2
#define TCivilian			3
#define TSideUnknown		4
#define TEnemy				5
#define TFriendly			6
#define TLogic				7

#define private				0
#define protected			1
#define public				2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly			2
#define ReadOnlyVerified	3

#define true				1
#define false				0

enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1
};

class CBA_Extended_EventHandlers_base;

class CfgPatches {
    class STY_Equipment {
        author = "Styles2304";
        requiredVersion = 0.1;
        units[] = {
            "STY_CamoNet_BLUFOR",
            "STY_CamoNet_OPFOR",
            "STY_CamoNet_INDP"
        };
        weapons[] = {
            "STY_Item_CamoNet_BLUFOR",
            "STY_Item_CamoNet_OPFOR",
            "STY_Item_CamoNet_INDP",
            "STY_Item_Pruners",
            "STY_Item_BL500",
            "STY_Item_IP68"
        };
    };
};

class CfgEditorCategories {
    class STY_Cat_SniperTools { displayName = "Sniper Tools"; };
};

class CfgEditorSubcategories {
    class STY_SubCat_Equipment { displayName = "Equipment"; };
    class STY_SubCat_Structures { displayName = "Structures"; };
};

class CfgModels {
    #include "models\cfg_models.hpp"
};

class CfgFunctions {
    #include "functions\cfg_functions.hpp"
};

class CfgVehicles {
    #include "vehicles\cfg_vehicles.hpp"
    #include "aceSelf\cfg_ace.hpp"
};

class CfgWeapons {
    #include "weapons\cfg_weapons.hpp"
};

class RscPicture;
class RscStructuredText;
class RscTitles {
    #include "titles\cfg_titles.hpp"
};
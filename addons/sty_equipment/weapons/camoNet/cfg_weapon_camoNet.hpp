class STY_Item_CamoNet: ItemCore {
    author = "Styles2304";
    scope = 0;
    scoreCurator = 0;
    scopeArsenal = 0;
    simulation= "ItemMineDetector";
    displayName = "";
    descriptionShort = "Two-man hide made from camo netting";
    model = "\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F.p3d";
    picture = "\sty_equipment\weapons\camoNet\ui\camoNet_icon.paa";
    class ItemInfo: InventoryItem_Base_F {
        mass = 100;
    };
};

class STY_Item_CamoNet_BLUFOR: STY_Item_CamoNet {
    author = "Styles2304";
    displayName = "Two-Man CamoNet (BLUFOR)";
    scope = 2;
    scoreCurator = 2;
    scopeArsenal = 2;
};

class STY_Item_CamoNet_OPFOR: STY_Item_CamoNet {
    author = "Styles2304";
    displayName = "Two-Man CamoNet (OPOR)";
    scope = 2;
    scoreCurator = 2;
    scopeArsenal = 2;
};

class STY_Item_CamoNet_INDP: STY_Item_CamoNet {
    author = "Styles2304";
    displayName = "Two-Man CamoNet (INDP)";
    scope = 2;
    scoreCurator = 2;
    scopeArsenal = 2;
};
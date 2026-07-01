class UTAG(rugby_base) : TAG(uniform_base) {
    picture = "\121_75th_Uniform\121_ranger_rugby_ca.paa";
    class ItemInfo : ItemInfo {
        mass = 55;
    };
};

class UTAG(rugby_blk) : UTAG(rugby_base) {
    scope = 2;
    displayName = "Rugby Shirt (Black)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(rugby_blk);
    };
};

class UTAG(rugby_khk) : UTAG(rugby_base) {
    scope = 2;
    displayName = "Rugby Shirt (Khaki)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(rugby_khk);
    };
};

class UTAG(rugby_rg) : UTAG(rugby_base) {
    scope = 2;
    displayName = "Rugby Shirt (Ranger Green)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(rugby_rg);
    };
};

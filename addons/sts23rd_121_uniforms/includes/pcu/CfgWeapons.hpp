class UTAG(pcu_base) : TAG(uniform_base) {
    picture = "\121_75th_Uniform\121_ranger_pcu_ca.paa";
    class ItemInfo : ItemInfo {
        mass = 80;
    };
};

class UTAG(pcu_blk) : UTAG(pcu_base) {
    scope = 2;
    displayName = "PCU Jacket (Black)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(pcu_blk);
    };
};

class UTAG(pcu_cb) : UTAG(pcu_base) {
    scope = 2;
    displayName = "PCU Jacket (Coyote Brown)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(pcu_cb);
    };
};

class UTAG(pcu_khk) : UTAG(pcu_base) {
    scope = 2;
    displayName = "PCU Jacket (Khaki)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(pcu_khk);
    };
};

class UTAG(pcu_rg) : UTAG(pcu_base) {
    scope = 2;
    displayName = "PCU Jacket (Ranger Green)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(pcu_rg);
    };
};

class UTAG(pcu_dnc) : UTAG(pcu_base) {
    scope = 2;
    displayName = "PCU Jacket (D-Night Camo)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(pcu_dnc);
    };
};

class UTAG(pcu_m81) : UTAG(pcu_base) {
    scope = 2;
    displayName = "PCU Jacket (M81 Camo)";
    class ItemInfo : ItemInfo {
        uniformClass = TAG(pcu_m81);
    };
};

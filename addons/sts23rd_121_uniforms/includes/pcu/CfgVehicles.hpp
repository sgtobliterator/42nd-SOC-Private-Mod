class TAG(pcu_base) : TAG(soldier_base) {
    model = "\121_75th_Uniform\ranger_pcu.p3d";
    hiddenSelections[] = {
        "Camo",
        "Camo1",
        "rightflag"
    };
}

class TAG(pcu_khk) : TAG(pcu_base) {
    hiddenSelectionsTextures[] = {
        "121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
        "121_75th_Uniform\Data\pcu\pcu_beyond_co.paa",
        ""
    };
};

class TAG(pcu_blk): TAG(pcu_base) {
    hiddenSelectionsTextures[] = {
        "121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
        PAA(pcu\blk_co),
        ""
    };
};

class TAG(pcu_cb) : TAG(pcu_base) {
    hiddenSelectionsTextures[] = {
        "121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
        PAA(pcu\cb_co),
        ""
    };
};
class TAG(pcu_rg) : TAG(pcu_base) {
    hiddenSelectionsTextures[] = {
        "121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
        PAA(pcu\rg_co),
        ""
    };
};


class TAG(pcu_dnc) : TAG(pcu_base) {
    hiddenSelectionsTextures[] = {
        "121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
        PAA(pcu\dnc_co),
        ""
    };
};

class TAG(pcu_m81) : TAG(pcu_base) {
    hiddenSelectionsTextures[] = {
        "121_75th_Uniform\Data\G3s\mw_g3_mc.paa",
        PAA(pcu\m81_co),
        ""
    };
};

class TAG(rugby_base) : TAG(soldier_base) {
    model = "\121_75th_Uniform\ranger_rugby1.p3d";
    hiddenSelections[] = {
        "injury_body"
    };
}

class TAG(rugby_blk) : TAG(rugby_base) {
    hiddenSelectionsTextures[] = {
        PAA(rugby\blk_co)
    };
};

class TAG(rugby_khk) : TAG(rugby_base) {
    hiddenSelectionsTextures[] = {
        PAA(rugby\khk_co)
    };
};

class TAG(rugby_rg) : TAG(rugby_base) {
    hiddenSelectionsTextures[] = {
        PAA(rugby\rg_co)
    };
};

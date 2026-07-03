class CfgVehicles
{
    class FlagCarrier;

    class SOR_55th_Flagpole : FlagCarrier
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (55th SOR)";
        author = "55th SOR";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Flag_NATO_F.jpg";
        hiddenSelectionsTextures[] =  { "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
        hiddenSelectionsMaterials[] = { "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat" };

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture 'x\BFSQN_PrivateMod\addons\55th_Icons\images\55th_sor_flag.paa';";
        };
    };
    class SOC_42nd_Flagpole : FlagCarrier
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (42nd SOC)";
        author = "42nd SOC";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Flag_NATO_F.jpg";
        hiddenSelectionsTextures[] =  { "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
        hiddenSelectionsMaterials[] = { "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat" };

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture 'x\BFSQN_PrivateMod\addons\55th_Icons\images\42nd_flag.paa';";
        };
    };
};
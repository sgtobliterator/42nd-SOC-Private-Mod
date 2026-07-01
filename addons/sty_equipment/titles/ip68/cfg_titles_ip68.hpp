class STY_IP68 {
    idd = 230401;
    duration = 1e9;
    fadein = 0;
    fadeout = 0;
    name = "STY_IP68";
    onLoad = "uiNamespace setVariable ['STY_IP68_idd', _this select 0]";
    controls[] = {
        "STY_IP68_background",
        "STY_IP68_windCur",
        "STY_IP68_windMax",
        "STY_IP68_windAvg",
        "STY_IP68_tempCur",
        "STY_IP68_tempMax",
        "STY_IP68_tempAvg",
        "STY_IP68_humCur",
        "STY_IP68_humMax",
        "STY_IP68_humAvg",
        "STY_IP68_barCur",
        "STY_IP68_barMax",
        "STY_IP68_barAvg",
        "STY_IP68_time"
    };

    class STY_IP68_background: RscPicture
    {
        idc = 1200;
        text = "";
        x = 0.0075786 * safezoneW + safezoneX;
        y = 0.534375 * safezoneH + safezoneY;
        w = 0.255234 * safezoneW;
        h = 0.45375 * safezoneH;
        colorText[] = {1,1,1,1};

        // ["0.0075786 * safezoneW + safezoneX","0.534375 * safezoneH + safezoneY","0.255234 * safezoneW","0.45375 * safezoneH"]
    };
    class STY_IP68_windCur: RscStructuredText
    {
        idc = 1100;
        text = ""; //--- ToDo: Localize;
        x = 0.0875 * safezoneW + safezoneX;
        y = 0.64245 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_windMax: RscStructuredText
    {
        idc = 1101;
        text = ""; //--- ToDo: Localize;
        x = 0.0875 * safezoneW + safezoneX;
        y = 0.67215 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_windAvg: RscStructuredText
    {
        idc = 1102;
        text = ""; //--- ToDo: Localize;
        x = 0.0875 * safezoneW + safezoneX;
        y = 0.70185 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_tempCur: RscStructuredText
    {
        idc = 1103;
        text = ""; //--- ToDo: Localize;
        x = 0.136484 * safezoneW + safezoneX;
        y = 0.64245 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_tempMax: RscStructuredText
    {
        idc = 1104;
        text = ""; //--- ToDo: Localize;
        x = 0.136484 * safezoneW + safezoneX;
        y = 0.67215 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_tempAvg: RscStructuredText
    {
        idc = 1105;
        text = ""; //--- ToDo: Localize;
        x = 0.136484 * safezoneW + safezoneX;
        y = 0.70185 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_humCur: RscStructuredText
    {
        idc = 1106;
        text = ""; //--- ToDo: Localize;
        x = 0.0875 * safezoneW + safezoneX;
        y = 0.785175 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_humMax: RscStructuredText
    {
        idc = 1107;
        text = ""; //--- ToDo: Localize;
        x = 0.0875 * safezoneW + safezoneX;
        y = 0.8157 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_humAvg: RscStructuredText
    {
        idc = 1108;
        text = ""; //--- ToDo: Localize;
        x = 0.0875 * safezoneW + safezoneX;
        y = 0.846225 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_barCur: RscStructuredText
    {
        idc = 1109;
        text = ""; //--- ToDo: Localize;
        x = 0.136484 * safezoneW + safezoneX;
        y = 0.786 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_barMax: RscStructuredText
    {
        idc = 1110;
        text = ""; //--- ToDo: Localize;
        x = 0.136484 * safezoneW + safezoneX;
        y = 0.8157 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_barAvg: RscStructuredText
    {
        idc = 1111;
        text = ""; //--- ToDo: Localize;
        x = 0.136484 * safezoneW + safezoneX;
        y = 0.846225 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.020625 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
    class STY_IP68_time: RscStructuredText
    {
        idc = 1112;
        text = ""; //--- ToDo: Localize;
        x = 0.163294 * safezoneW + safezoneX;
        y = 0.593775 * safezoneH + safezoneY;
        w = 0.0232031 * safezoneW;
        h = 0.0165 * safezoneH;
        colorBackground[] = {0,0,0,0};
        shadow = 0;
    };
};

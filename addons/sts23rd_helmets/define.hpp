#define PREFIX sts23rd
#define COMPONENT helmets
#define PRETTY 23rd STS Helmets

////////////////////////////////

#define QPRETTY #PRETTY
#define FLOOR(var1,var2) var1##_##var2
#define ADDON FLOOR(PREFIX,COMPONENT)
#define COMMA(var1,var2) var1,var2
#define Q(var) #var
#define RAWTAG(var) FLOOR(PREFIX,var)
#define TAG(var) FLOOR(ADDON,var)
#define QTAG(var) #TAG(var)
#define SETTING(var) TAG(FLOOR(setting,var))
#define QSETTING(var) #SETTING(var)
#define EVENT(var) #TAG(FLOOR(event,var))
#define FNC(var) TAG(FLOOR(fnc,var))
#define QFNC(var) #FNC(var)
#define PATH(var) \ADDON\var
#define QPATH(var) #PATH(var)
#define PREP(var) ['PATH(functions\FLOOR(fnc,var).sqf)', 'FNC(var)'] call CBA_fnc_compileFunction
#define COMPILE(var) compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define CALL_COMPILE(var) call compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define XEH(var) TAG(FLOOR(XEH,var)) = Q(CALL_COMPILE(var))

////////////////////////////////

///////// GEAR CONFIGS /////////

#define PAA(var) #PATH(data\var.paa)
#define PATCH(var) #PATH(data\patches\var.paa)
#define TEXTURE(var) #PATH(data\textures\var.paa)
#define MODEL(var) #\121_75th_helmet\FLOOR(75th,var).p3d

#define OPSCORE(var) RAWTAG(FLOOR(opscore,var))

#define HPINFO \
    class HitpointsProtectionInfo {     \
        class Head {                    \
            hitpointName="HitHead";     \
            armor=12;                   \
            passThrough=0.4;            \
        };                              \
    }

#define EHP_ON \
ace_hearing_protection = 1;      \
ace_hearing_lowerVolume = 0;     \
ace_hearing_hasEHP = 1

#define EHP_OFF \
ace_hearing_protection = 0.66;    \
ace_hearing_lowerVolume = 0;      \
ace_hearing_hasEHP = 0

#define ACE_HIDE ace_arsenal_hide = 1

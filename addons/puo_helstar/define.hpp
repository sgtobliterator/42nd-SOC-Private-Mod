#define PREFIX puo
#define COMPONENT helstar
#define PRETTY Puotek's Helstar



#define QPRETTY #PRETTY
#define FLOOR(var1,var2) var1##_##var2
#define COMMA ,
#define Q(var) #var
#define ADDON FLOOR(PREFIX,COMPONENT)
#define TAG(var) FLOOR(ADDON,var)
#define QTAG(var) #TAG(var)
#define SETTING(var) TAG(FLOOR(setting,var))
#define QSETTING(var) #SETTING(var)
#define KEYBIND(var) TAG(FLOOR(keybind,var))
#define QKEYBIND(var) #KEYBIND(var)
#define EVENT(var) #TAG(FLOOR(event,var))
#define FNC(var) TAG(FLOOR(fnc,var))
#define QFNC(var) #FNC(var)
#define PATH(var) \ADDON\var
#define QPATH(var) #PATH(var)
#define PREP(var) ['PATH(functions\FLOOR(fnc,var).sqf)', 'FNC(var)'] call CBA_fnc_compileFunction
#define COMPILE(var) compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define CALL_COMPILE(var) call compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define XEH(var) TAG(FLOOR(XEH,var)) = Q(CALL_COMPILE(var))

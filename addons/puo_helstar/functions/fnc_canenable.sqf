#include "..\define.hpp"

SETTING(enable) and
(SETTING(showDuringDaytime) or (sunOrMoon < 1)) and
(not SETTING(requireItem) or (QTAG(helstar) in (items ace_player))) and
(headgear ace_player != "") and
not (call FNC(canDisable))

#include "..\define.hpp"

private _helmet = headgear ace_player;
private _count = count _helmet;

if (_helmet select [_count - 4] == "_off") then {
    ace_player addHeadgear (_helmet select [0, _count - 4]);
} else {
    ace_player addHeadgear (_helmet + "_off");
};

aa_headbag_enabled &&
{captive _target} &&
goggles _target != "aa_headbag_goggles" &&
headgear _target != "aa_headbag" &&
{
    !aa_headbag_requireHeadbag ||
    {"aa_headbag" in items _player} ||
    {"aa_headbag_goggles" in items _player}
}

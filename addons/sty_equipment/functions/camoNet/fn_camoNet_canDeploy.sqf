/*
* Author: Styles2304
* Determines whether or not a camoNet can be deployed
* 
* Arguments:
* 	0: _camoNet <OBJECT>
* 
* Return Value:
* 	<BOOL>
* 
* Example:
* 	[ camoNet ] call STY_fnc_camoNet_canDeploy
*/

private [ "_camoNet" ];
(_this select 0) params [ "_camoNet" ];

((_camoNet in uniformItems ACE_player) || (_camoNet in vestItems ACE_player) || (_camoNet in backpackItems ACE_player)) && !(underwater ACE_player);
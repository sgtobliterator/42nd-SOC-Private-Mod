/*
* Author: Styles2304
* Determines whether or not a player open the IP68
* 
* Arguments:
* 	<NONE>
* 
* Return Value:
* 	<BOOL>
* 
* Example:
* 	[] call STY_fnc_ip68_canShow
*/

(("STY_Item_IP68" in (uniformItems ACE_player)) || ("STY_Item_IP68" in (vestItems ACE_player))) && !(underwater ACE_player);
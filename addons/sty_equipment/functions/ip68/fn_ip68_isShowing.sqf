/*
* Author: Styles2304
* Determines whether or not a player's IP68 is open
* 
* Arguments:
* 	<NONE>
* 
* Return Value:
* 	<BOOL>
* 
* Example:
* 	[] call STY_fnc_ip68_isShowing
*/

// (ACE_player getVariable ["STY_IP68_Open", false]);

(!isNull (uiNamespace getVariable ["STY_IP68_idd", displayNull]))
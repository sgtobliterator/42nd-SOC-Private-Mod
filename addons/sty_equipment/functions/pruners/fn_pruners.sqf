disableSerialization;

private [ "_cutter1", "_cutter2", "_cutter3" ];

_cutter1 = "";
_cutter2 = "";
_cutter3 = "";

_cutter1 = "Land_ClutterCutter_small_F" createVehicle [0,0,0];
_cutter2 = "Land_ClutterCutter_small_F" createVehicle [0,0,0];
_cutter3 = "Land_ClutterCutter_small_F" createVehicle [0,0,0];

_cutter1 setDir (getDir ACE_player);
_cutter2 setDir (getDir ACE_player);
_cutter3 setDir (getDir ACE_player);

_cutter1 setPos (ACE_player getRelPos[0.8, 0]);
_cutter2 setPos (_cutter1 getRelPos[0.8, 270]);
_cutter3 setPos (_cutter1 getRelPos[0.8, 90]);
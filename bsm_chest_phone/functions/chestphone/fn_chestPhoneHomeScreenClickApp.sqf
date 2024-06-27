params ["_iconFrameIdc"];
private _display = (findDisplay 9999);
if (isNull _display) exitWith { diag_log format ["BSM (APP CLICK): Display NOt fOund (9999);"]; };
private _frameIconCtrl = _display displayCtrl (_iconFrameIdc + 1000);
if (isNull _frameIconCtrl) exitWith { diag_log format ["BSM (APP CLICK): NO FRAME ICON (%1);", _iconFrameIdc]; };
private _appInfo = _frameIconCtrl getVariable ["bsm_appInfo", []];
if (count _appInfo <= 0) exitWith { diag_log "BSM (APP CLICK): NO APP INFO;"; };
// [[1],[""Test App"",""\bsm_chest_phone\data\icons\App_Icon_BSM.paa"",{ hint ""Cracked Skull""; }]]
private _name = _appInfo select 0;
private _icon = _appInfo select 1;
private _action = _appInfo select 2;
diag_log "BSM (APP CLICK): CLICKING";
if (typeName _action == "STRING") exitWith { 
    createDialog _action;
};
if (typeName _action == "CODE") exitWith { [] spawn _action; };
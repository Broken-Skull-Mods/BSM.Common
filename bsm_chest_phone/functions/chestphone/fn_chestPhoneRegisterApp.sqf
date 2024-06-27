params ["_name", "_icon", "_action"];

/*
    _name: Title of The App.
    _icon: path to icon.
    _action: code or dialog.
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_BSM.paa", { [] call BrokenSkullMods_fnc_chestPhoneExit; hint "Cracked Skull"; }] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_Debug.paa", { hint "For Debugging!!!"; }] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_Settings.paa", { hint "For SETTNGS"; }] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_Settings.paa", "BSM_Polyliner_Tool"] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 
 
 
    for "_i" from 0 to 13 do { 
        ["Test App", "\tftm\icons\brain.paa"] call BrokenSkullMods_fnc_chestPhoneRegisterApp; 
    };
*/
private _allApplications = missionNamespace getVariable ["BSM_ChestPhone_Applications", []];
_allApplications pushback [[1], [_name, _icon, _action]];
missionNamespace setVariable ["BSM_ChestPhone_Applications", _allApplications];

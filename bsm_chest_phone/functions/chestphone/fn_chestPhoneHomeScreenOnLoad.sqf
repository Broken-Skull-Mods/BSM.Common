params ["_display"];


private _allApplications = missionNamespace getVariable ["BSM_ChestPhone_Applications", []];
_allApplications = [_allApplications, [], {(_x select 0) select 0; }, "ASCEND"] call BIS_fnc_sortBy;
private _totalPages = missionNamespace getVariable ["BSM_ChestPhone_HomeMaxPages", 1];
private _currentPage = missionNamespace getVariable ["BSM_ChestPhone_HomeCurrentPage", 1];
private _appSlotsInOrder = [
    1727,1704,1705,1706,1707,
    1708,1709,1710,1711,1712,
    1713,1714,1715,1716,1717,
    1718,1719,1720,1721,1722,
    1723,1724,1725,1726
]; // 24 = 23 Indexes

// Hide All Icons at start;
{ 
    private _idc = _x;
    private _ctrl = (_display displayCtrl _idc);
    private _ctrl2 = (_display displayCtrl (_idc + 1000));
    _ctrl2 ctrlShow false;
    _ctrl ctrlShow false;
    _ctrl2 ctrlSetTooltip "";
    _ctrl2 setVariable ["bsm_appInfo", nil];
    _ctrl2 setVariable ["bsm_appOptions", nil];  
} forEach (_appSlotsInOrder);

// Compile Pages
[] call BrokenSkullMods_fnc_chestPhoneRecompilePages;

private _lastPage = -1;
private _countedApps = count _allApplications;
if (_countedApps <= 0 ) exitWith { diag_log "BSM (Chest Phone): No Registered Apps."; };

while {uiSleep 0.05; !isNull _display;} do {
    private _currentPage = missionNamespace getVariable ["BSM_ChestPhone_HomeCurrentPage", 1];
    if (_lastPage == _currentPage) then { continue; };
    _lastPage = _currentPage;
    // if page is not changed ignored and continue;
    { 
        private _ctrl = (_display displayCtrl _x);
        private _ctrl2 = (_display displayCtrl (_x + 1000));
        _ctrl2 ctrlShow false;
        _ctrl ctrlShow false; 
        _ctrl2 ctrlSetTooltip "";
        _ctrl2 setVariable ["bsm_appInfo", nil];
        _ctrl2 setVariable ["bsm_appOptions", nil]; 
    } forEach (_appSlotsInOrder);
    private _toAssign = _appSlotsInOrder;
    private _currentPageApp = _allApplications select { ((_x select 0) select 0) == _currentPage; };
    diag_log format ["BSM (Chest Phone): Loading App Listing: %1", _currentPageApp];
    { // 
        // No more app space? Cancel populating
        if (count _toAssign <= 0) then { break; };
        private _idc = _toAssign select 0;
        private _ctrl2 = (_display displayCtrl (_idc + 1000));
        private _ctrl = (_display displayCtrl _idc);
        _toAssign = _toAssign - [_idc];

        private _appOptions = _x select 0;
        private _appInfo = _x select 1;
        private _name = _appInfo select 0;
        private _icon = _appInfo select 1;
        _ctrl ctrlSetText _icon;
        _ctrl2 ctrlSetTooltip _name;
        _ctrl2 ctrlShow true;
        _ctrl ctrlShow true;
        _ctrl2 setVariable ["bsm_appInfo", _appInfo];
        _ctrl2 setVariable ["bsm_appOptions", _appOptions];
    } forEach (_currentPageApp);
};
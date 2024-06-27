private _allApplications = missionNamespace getVariable ["BSM_ChestPhone_Applications", []];
private _pages = 0;
private _counter = 0;

_allApplications = _allApplications apply {
    if (_pages <= 0) then { _pages = 1; };
    if (_counter > 23) then { _counter = 0; _pages = _pages + 1; };
    private _appInfo = _x select 1;
    private _name = _appInfo select 0;
    private _icon = _appInfo select 1;
    private _action = _appInfo select 3;
    _counter = _counter + 1;
    [[_pages], _appInfo];
};
missionNamespace setVariable ["BSM_ChestPhone_Applications", _allApplications];
missionNamespace setVariable ["BSM_ChestPhone_HomeMaxPages", _pages];


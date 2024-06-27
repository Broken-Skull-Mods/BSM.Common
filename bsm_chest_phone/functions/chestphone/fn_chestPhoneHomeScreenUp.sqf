private _totalPages = missionNamespace getVariable ["BSM_ChestPhone_HomeMaxPages", 1];
private _currentPage = missionNamespace getVariable ["BSM_ChestPhone_HomeCurrentPage", 1];
if ((_currentPage - 1) <= 0 ) exitWith { missionNamespace setVariable ["BSM_ChestPhone_HomeCurrentPage", _totalPages]; }; 
missionNamespace setVariable ["BSM_ChestPhone_HomeCurrentPage", (_currentPage - 1)];

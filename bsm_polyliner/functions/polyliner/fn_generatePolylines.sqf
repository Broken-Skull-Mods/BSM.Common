/*
    [] call BrokenSkullMods_fnc_generatePolylines;
*/
if (!isServer) exitWith { };
private _toCopy = "";
private _br = toString [13,10];
{
    private _markerType = getMarkerType  _x;
    private _name = format ["'_USER_DEFINED %1 #%2/1/%3'", hashValue (str _x), 0, 1];
    if (_markerType != '') then { continue; };
    private _color = str (getMarkerColor _x);
    private _lines = markerPolyline _x;
    if (count _lines <= 0) then { continue; };
    _toCopy = _toCopy + format ["createMarkerLocal [%1, [0,0,0], 1, player];%2", _name, _br];
    _toCopy = _toCopy + format ["%1 setMarkerShapeLocal 'POLYLINE'; %2", _name, _br];
    _toCopy = _toCopy + format ["%1 setMarkerPolylineLocal %2; %3", _name, _lines, _br];
    _toCopy = _toCopy + format ["%1 setMarkerColor %2; %3", _name, _color, _br];
} forEach(allMapMarkers);

copyToClipboard _toCopy;
format["OK (%1)", ([1000, 9999] call BIS_fnc_randomNum)];

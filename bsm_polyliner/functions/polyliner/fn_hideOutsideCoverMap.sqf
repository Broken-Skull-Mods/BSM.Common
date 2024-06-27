 
if (!hasInterface) exitWith {};
if (isNil "bs_hider") exitWith {  };
private _typeCheck = typeof bs_hider;
if (_typeCheck != "ModuleCoverMap_F") exitWith {};

private _objectArea = bs_hider getvariable ["objectArea", [0,0,0,false,0]];
private _pos = getPos bs_hider;

private _elements = nearestTerrainObjects [ [worldSize / 2, worldSize / 2], [], worldSize * sqrt 2 / 2, false ];
{
    private _isActive = _x inArea [_pos, (_objectArea select 0), (_objectArea select 1), (_objectArea select 2), (_objectArea select 3), (_objectArea select 4)];
    if (!_isActive) then { _x hideObject true; };
} forEach (_elements);

#include "script_component.hpp"

if (!GVARMAIN(moduleMortar) || GVARMAIN(isTvT)) exitWith {};

if (isServer) then {
    [QGVAR(mortarFire), {
        params ["_trigger", "_shellCount", "_safeDistance", ["_shellType", "Sh_82mm_AMOS"]];

        [_trigger, _shellCount, _safeDistance, _shellType] spawn MF_mortar_fnc_mortarFire;
    }] call CFUNC(addEventHandler);
};

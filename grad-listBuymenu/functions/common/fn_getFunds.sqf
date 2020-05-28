params ["_account"];

_funds = if (typeName _account == "OBJECT") then {
    _account getVariable ["grad_lbm_myFunds",0];
} else {
    switch (_account) do {
        case (SIDEUNKNOWN): {0};
        case (WEST): {missionNamespace getVariable ["grad_lbm_teamFunds_WEST",0]};
        case (EAST): {missionNamespace getVariable ["grad_lbm_teamFunds_EAST",0]};
        case (INDEPENDENT): {missionNamespace getVariable ["grad_lbm_teamFunds_INDEPENDENT",0]};
        case (CIVILIAN): {missionNamespace getVariable ["grad_lbm_teamFunds_CIVILIAN",0]};
    };
};


_funds

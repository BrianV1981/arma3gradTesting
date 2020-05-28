    //buyables set/store:
    class scriptsStore {

        //category:
		class scripts {
            displayName = "Scripts";
            kindOf = "other";

			class B_Quadbike_01_F {
                displayName = "execute 500k.sqf";
                description = "execute 500k.sqf";
                price = 0;
                stock = 10000;
				code = [player,"scripts\500k.sqf"] call BIS_fnc_execVM;
            };
			class C_Kart_01_black_F {
                displayName = "execute 500kWEST";
                description = "execute 500kWEST";
                price = 0;
                stock = 10000;
				code = [player,"scripts\500kWEST.sqf"] call BIS_fnc_execVM;
            };
			class C_Hatchback_01_sport_F {
                displayName = "execute moneyMenuAddFundsPlayers.sqf";
                description = "execute moneyMenuAddFundsPlayers.sqf";
                price = 0;
                stock = 10000;
				code = [player,"scripts\moneyMenuAddFundsPlayers.sqf"] call BIS_fnc_execVM;
            };
			class C_Offroad_02_unarmed_F {
                displayName = "execute moneyMenuAddFundsStorage.sqf";
                description = "execute moneyMenuAddFundsStorage.sqf";
                price = 0;
                stock = 10000;
				code = [player,"scripts\moneyMenuAddFundsStorage.sqf"] call BIS_fnc_execVM;
            };
			class B_G_Van_02_transport_F {
                displayName = "execute grad_persistence_fnc_saveMission";
                description = "execute grad_persistence_fnc_saveMission";
                price = 0;
                stock = 10000;
				code = [true,30] call grad_persistence_fnc_saveMission;
            };
			class B_G_Van_02_vehicle_F {
                displayName = "execute [] call grad_persistence_fnc_loadMission";
                description = "execute [] call grad_persistence_fnc_loadMission";
                price = 0;
                stock = 10000;
				code = [] call grad_persistence_fnc_loadMission;
            };
        };
};

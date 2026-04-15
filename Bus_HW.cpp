//
// Created by MacBook_Air_Maks on 16.04.2026.
//

#include "Bus_HW.h"

Bus_HW::Bus_HW(Time_ start, int Duration, int restRoute, Time_ end) {
    startRoute = start; //Старт маршрута
    durationRoute = Duration; // Протяжність маршруту
    rest = restRoute; // Час відпочинку на кінцевій
    endRoute = end; // Кінець маршруту
}

void Bus_HW::generateSchedule() const {

    int reis = 1;
    Time_ start = startRoute;

    cout << "=========================================\n";
    cout << "         РОЗКЛАД АВТОБУСУ №729:\n";
    cout << "=========================================\n";

    while (start < endRoute){

        cout << "-----------------------------------------\n";
        cout << "Рейс №" << reis++ << " | ";
        cout << "Юності -> Кінцева: " << endl;
        cout << "         |";
        cout << start << " - ";

        Time_ currentTime = start;
        currentTime += durationRoute;

        if (currentTime > endRoute)
            break;

        cout << currentTime << endl;

        start = currentTime;

        start += rest;
    }
    }


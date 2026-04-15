//
// Created by MacBook_Air_Maks on 16.04.2026.
//

#ifndef HW__TEMA_22_BUS_HW_H
#define HW__TEMA_22_BUS_HW_H

#include "Time.h"



class Bus_HW {

private:
    Time_ startRoute;
    int durationRoute;
    int rest;
    Time_ endRoute;

public:
    Bus_HW(Time_ start, int Duration, int restRoute, Time_ end);

    void generateSchedule()const;

};



#endif //HW__TEMA_22_BUS_HW_H

//
// Created by MacBook_Air_Maks on 15.04.2026.
//

#ifndef HW__TEMA_22_BUS_HW_H
#define HW__TEMA_22_BUS_HW_H

#include "Time.h"



class Schedule {
private:
    Time_ startTime;
    int lessonDuration;
    int shortBreak;
    int longBreak;
    int longBreakAfter;
    int totalLessons;

public:
    Schedule(Time_ start, int lessonDur, int shortBr, int longBr, int longAfter, int lessons);

    void generateSchedule()const;
};



#endif //HW__TEMA_22_BUS_HW_H

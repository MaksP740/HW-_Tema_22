//
// Created by MacBook_Air_Maks on 15.04.2026.
//

#include "Schedule_HW.h"

Schedule::Schedule(Time_ start, int lessonDur, int shortBr, int longBr, int longAfter, int lessons) {
    startTime = start;
    lessonDuration = lessonDur;
    shortBreak = shortBr;
    longBreak = longBr;
    longBreakAfter = longAfter;
    totalLessons = lessons;
}

void Schedule::generateSchedule() const {

    Time_ start = startTime;

    cout << "=============================================\n";
    cout << "              РОЗКЛАД ДЗВІНКІВ:\n";
    cout << "=============================================\n";

    for (int i = 1; i <= totalLessons; i++)
    {
        cout << "Пара " << i << ": ";

        start.showTime();

        Time_ end = start;
        end += lessonDuration;

        cout << " - ";
        end.showTime();

        start = end;

        if (i != totalLessons)
        {
            if (i == longBreakAfter)
            {
                start += longBreak;
                cout << "   (Велика перерва " << longBreak << " хв)\n";
            }
            else
            {
                start += shortBreak;
                cout << "   (Перерва " << shortBreak << " хв)\n";
            }
        }
    }
}

#include <iostream>

#include "Time.h"
#include "Schedule_HW.h"

int main() {

    // Time_ a(17, 20, 43, false);
    // Time_ b;
    //
    // a.showTime();
    // b.showTime();
    //
    // cout << "===============================" << endl;
    //
    // a.untickTime();
    // a.showTime();
    //
    // cout << "===============================" << endl;
    //
    // cout << "A == B: " << boolalpha << (a == b) << endl;
    // cout << "A != B: " << boolalpha << (a != b) << endl;
    // cout << "A >= B: " << boolalpha << (a >= b) << endl;
    // cout << "A <= B: " << boolalpha << (a <= b) << endl;
    // cout << "A < B: " << boolalpha << (a < b) << endl;
    // cout << "A > B: " << boolalpha << (a > b) << endl;
    //
    // cout << "============ [ За програмований час ] ================" << endl;
    //
    // cout << "Час без змін: ";
    // a.showTime();
    //
    // cout << "Час +20 секунд: ";
    // a += 20.0f;
    // a.showTime();
    //
    // cout << "Час +20 хвилин: ";
    // a += 20;
    // a.showTime();
    //
    // cout << "Час +2 години: ";
    // a += 2L;
    // a.showTime();
    //
    // cout << "============ [ Поточний час ] ================" << endl;
    //
    // cout << "Час без змін: ";
    // b.showTime();
    //
    // cout << "Час +20 секунд: ";
    // b += 20.0f;
    // b.showTime();
    //
    // cout << "Час +20 хвилин: ";
    // b += 20;
    // b.showTime();
    //
    // cout << "Час +2 години: ";
    // b += 2L;
    // b.showTime();

    //================= [ Taks 2 ] =====================

    Time_ start(8, 30, 0);

    Schedule lessonTime(start, 45, 10, 20, 3, 6);

    lessonTime.generateSchedule();

    cout << "\nУроки закінченно! Гарного дня!" << endl;




    return 0;
}

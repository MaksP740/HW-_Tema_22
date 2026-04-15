#include <iostream>

#include "Bus_HW.h"
#include "Time.h"
#include "Schedule_HW.h"
#include "Bus_HW.h"

int main() {

    Time_ a(17, 20, 43, false);
    Time_ b;
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

    // Time_ start(8, 30, 0);
    //
    // Schedule lessonTime(start, 45, 10, 20, 3, 6);
    //
    // lessonTime.generateSchedule();
    //
    // cout << "\nУроки закінченно! Гарного дня!" << endl;

    //================= [ Tema 23 Taks 1 ] =====================

    // Time_ a1 = --a;
    // a.showTime();
    // a1.showTime();
    //
    // cout << "====================\n";
    //
    // Time_ a2 = a--;
    // a.showTime();
    // a2.showTime();
    //
    // cout << "====================\n";
    //
    // cout << a << " : " << a + 5 << " = " << 5 + a << endl;
    // cout << a << " : " << a + 5.0f << " = " << 5.0f + a << endl;
    // cout << a << " : " << a + 5L << " = " << 5L + a << endl;

    //================= [ Tema 23 Taks 2 ] =====================

    Time_ start(6, 30, 0);
    Time_ end(23, 30, 0);

    Bus_HW bus(start, 70, 20, end);

    bus.generateSchedule();






    return 0;
}

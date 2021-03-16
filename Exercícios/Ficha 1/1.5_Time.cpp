#include <iostream>
using namespace std;

//A) WITH SEPARATOR

// int main(){
//     int hours1, minutes1, seconds1;
//     int hours2, minutes2, seconds2;
//     int days_f, hours_f, minutes_f, seconds_f;

//     cout << "Time1 (hours minutes seconds) ? ";
//     cin >> hours1 >> minutes1 >> seconds1;
//     cout << "Time2 (hours minutes seconds) ? ";
//     cin >> hours2 >> minutes2 >> seconds2;

//     seconds_f = (seconds1 + seconds2) % 60;
//     minutes_f = (seconds1 + seconds2) / 60 + (minutes1 + minutes2) % 60;
//     hours_f = (minutes1 + minutes2) / 60 + (hours1 + hours2)  % 24;
//     days_f = (hours1 + hours2) / 24;

//     cout << "Time1 + Time2 = " << days_f << " day(s), " << hours_f << " hours, " << minutes_f << " minutes and " << seconds_f << " seconds" << endl;

//     return 0;

// }

//B) WITH SEPARATOR

int main(){
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;
    int days_f, hours_f, minutes_f, seconds_f;
    char k; //separator

    cout << "Time1 (hours minutes seconds) ? ";
    cin >> hours1 >> k >> minutes1 >> k >> seconds1;
    cout << "Time2 (hours minutes seconds) ? ";
    cin >> hours2 >> k >> minutes2 >> k >> seconds2;

    seconds_f = (seconds1 + seconds2) % 60;
    minutes_f = (seconds1 + seconds2) / 60 + (minutes1 + minutes2) % 60;
    hours_f = (minutes1 + minutes2) / 60 + (hours1 + hours2)  % 24;
    days_f = (hours1 + hours2) / 24;

    cout << "Time1 + Time2 = " << days_f << " day(s), " << hours_f << " hours, " << minutes_f << " minutes and " << seconds_f << " seconds" << endl;

    return 0;

}
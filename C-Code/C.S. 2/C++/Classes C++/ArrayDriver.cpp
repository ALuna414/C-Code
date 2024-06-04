//Example array of Time objects
//Compile with Time.h and Time.cpp
#include<iostream>
#include "Time.h"
using namespace std;

int main() {
    //arrays record times when recent calls came in
    Time recentCalls1[10];

// change some values
    recentCalls1[0].setHour(3);
    recentCalls1[0].setMinute(45);
    
// input some values from the user
    cout << "Enter a time value" << endl;
    int hour;
    cin >> hour;
    recentCalls1[1].setHour(hour);
    
    int minute;
    cin >> hour >> minute;
    Time x(hour,minute);
    recentCalls1[2] = x;
    
    for (int i=0; i<10; i++)
        cout << recentCalls1[i].display() << " ";
    cout << endl;

 //use multiple constructors
    Time recentCalls2[7] = {
        Time(1),
        Time(2,13),
        Time(3,24),
        Time(4),
        Time(4,50)};

    for (int i=0; i<7; i++)
        cout << recentCalls2[i].display() << " ";
    cout << endl;
}

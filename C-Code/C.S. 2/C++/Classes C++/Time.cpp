// The Time class
// A 12 hour clock
// Member function definitions (implementation) in a separate file

#include <iostream>
#include "Time.h"
using namespace std;

Time::Time() {
    hour = 12;
    minute = 0;
}

Time::Time(int hr) {
    hour = hr;
    minute = 0;
}

Time::Time(int hr, int min) {
    hour = hr;
    minute = min;
}

void Time::setHour(int hr) {
    hour = hr;
}

void Time::setMinute(int min) {
    minute = min;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

string Time::display() const {
    // returns time in string formatted to hh:mm
    string hourString = to_string(hour);
    string minuteString = to_string(minute);
    if (minuteString.length()==1)
        minuteString = "0" + minuteString;
    return hourString + ":" + minuteString;
}


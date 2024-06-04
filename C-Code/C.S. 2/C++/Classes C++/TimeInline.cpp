// For demonstrating inlining and constructors

#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    void addHour();  // not inlined
public:
    int getHour() const   {  return hour; }
    int getMinute() const {  return minute; }
    void setHour(int h)   {  hour = h; }
    void setMinute(int m) {  minute = m; }
    string display() const;  //not inlined
    void addMinute();        //not inlined
};

// the function definitions for getHour, getMinute, setHour and setMinute
// have been inlined (put into the class declaration)
// the others must still be defined outside of the class declaration


int main() {
    Time t;
    t.setHour(1);
    t.setMinute(0);
    cout << t.display() <<endl;
    t.setMinute(58);
    cout << t.display() <<endl;
    t.setHour(5);
    cout << t.display() << endl;
}

void Time::addHour() {  // a private member func
    if (hour == 12)
        hour = 1;
    else
        hour++;
}
void Time::addMinute()
{
    if (minute == 59) {
        minute = 0;
        addHour();   // call to private member func
    } else
        minute++;
}

string Time::display() const {
    // returns time in string formatted to hh:mm
    string hourString = to_string(hour);
    string minuteString = to_string(minute);
    if (minuteString.length()==1)
        minuteString = "0" + minuteString;
    return hourString + ":" + minuteString;
}

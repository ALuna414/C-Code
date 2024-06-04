// The Time class
// A 12 hour clock
// Driver (main) in a separate file

#include<iostream>
using namespace std;
#include "Time.h"


//Driver demo using Time class (with overloaded constructors)

int main() {
    Time t;
    cout << t.display() << endl;
    Time t1(5);  // 1 arg
    cout << t1.display() << endl;
    Time t2(12,5);  // 2 args
    cout << t2.display() << endl;
    return 0;
}

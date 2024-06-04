// sample C++ program: Scope
// global variables vs local variables

#include <iostream>
using namespace std;

void anotherFunction();
int num = 2; //global variable

int main() {
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0;
}
void func1 (int x) {
    int x;
    cout << x;
}

void anotherFunction(int x) {
    int num = 30;
    cout << "In anotherFunction, num is " << num << endl;
    num = 50;
    cout << "But now it is changed to " << num << endl;
}

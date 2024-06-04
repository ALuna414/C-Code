// sample C++ program: Scope
// two local vars in different functions with the same name

#include <iostream>
using namespace std;

void anotherFunction();

int main() {
    int num = 1;  //visible only in main
    cout << "In main, num is " << num << endl;
    anotherFunction();
    int num = 3;
    cout << "Back in main, num is " << num << endl;
    return 0;
}

void anotherFunction() {
    int num = 20;  //visible only in anotherFunction
    cout << "In anotherFunction, num is " << num << endl;
}

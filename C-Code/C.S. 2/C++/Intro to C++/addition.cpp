// sample C++ program: void and non-void functions

#include <iostream>
using namespace std;

// function example
#include <iostream>
using namespace std;

int addition (int a, int b) {
    int result;
    result=a+b;
    return result;
}
int main () {
    int z;
    z = addition (5,3);
    cout << "The result is " << z <<endl;
}
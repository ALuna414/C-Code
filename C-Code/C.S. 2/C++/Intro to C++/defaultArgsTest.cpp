// sample C++ program: Default arguments

#include <iostream>
using namespace std;


#include <iostream>
#include <cmath>
using namespace std;

void f (int x, int y=10) {
    for (int i=0; i<x; i++)
        cout << y;
}

int main() {
    f(3);
    cout << endl;
    f(3,4);
    cout << endl;
}

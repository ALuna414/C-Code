// sample C++ program: Default arguments

#include <iostream>
using namespace std;


#include <iostream>
#include <cmath>
using namespace std;

void symbols(char ch='*', int count=80) {
    for (int i=0; i < count; i++)
        cout << ch;
    cout << endl;
}

int main() {
    int x = 2;
    symbols('#',4);
    symbols();
    symbols('A');
    symbols('*',70);
}

// sample C++ program: Scope
// two local variables with the same name
// (one nested inside the scope of another)

#include <iostream>
using namespace std;


int main() {
    int x = 10;
    if (x < 100) {
        int x = 30;
        cout << x << endl;
    }
    cout << x << endl;
}


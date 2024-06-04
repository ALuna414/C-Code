// This program uses a pointer to access the first element of an array.
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    
    cout << "first: " << numbers[0] << endl;
    cout << "first: " << *numbers << endl;
    
    cout << &(numbers[0]) << endl;
    cout << numbers << endl;
   return 0;
}

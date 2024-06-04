// This program uses a pointer to access the first element of an array.
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    
    cout << "second: " << numbers[1] << endl;
    cout << "second: " << *(numbers+1) << endl;
    
    cout << "size: " << sizeof(int) << endl;
    cout << numbers << endl;
    cout << numbers+1 << endl;
    
   return 0;
}

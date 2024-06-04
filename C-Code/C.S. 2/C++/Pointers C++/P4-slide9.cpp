// Practice: slide 9 from Unit 3 lecture
#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75;
    int *ptr;
    
    ptr = &x;
    *ptr = *ptr + 100;
    
    ptr = &y;
    *ptr = *ptr + 100;
    
    ptr = &z;
    *ptr = *ptr + 100;
    
    cout << x << " " << y << " " << z << endl;
    return 0;
}

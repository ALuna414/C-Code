// This program stores the address of a variable in a pointer.
#include <iostream>
using namespace std;

int main()
{
   int x = 25;				// int variable
   int *ptr;     // Pointer variable, can point to an int

   ptr = &x;
   cout << "The value in x is " << x << endl;
   cout << "The value of ptr is " << ptr << endl;
   return 0;
}

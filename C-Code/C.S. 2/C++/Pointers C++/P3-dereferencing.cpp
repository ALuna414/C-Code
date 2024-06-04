// This program demonstrates the use of the dereferencing operator.
#include <iostream>
using namespace std;

int main()
{
   int x = 25;				// int variable
   int *ptr;      // Pointer variable, can point to an int

   ptr = &x;
   
   cout << "First time:\n";
   cout << x << endl;
   cout << *ptr << endl;
   
   *ptr = 100;
   
   cout << "Second time:\n";
   cout << x << endl;
   cout << *ptr << endl; 
   return 0;
}

// This program uses a function to duplicate
// an int array of any size.
#include <iostream>
using namespace std;

//*****************************************************
// The duplicateArray function accepts an int array   *
// and an int that indicates the array's size. The    *
// function creates a new array that is a duplicate   *
// of the argument array and returns a pointer to the *
// new array. If an invalid size is passed the        *
// function returns null.                             *
//*****************************************************
int *duplicateArray (int arr[], int size) {
   
   int *newArray;
   if (size <= 0)         //size must be positive
      return NULL;        //NULL is 0, an invalid address

   newArray = new int [size];  //allocate new array

   for (int index = 0; index < size; index++)
      *(newArray+index) = arr[index];  //copy to new array

   return newArray;
}

int main()
{
   int a [5] = {11, 22, 33, 44, 55};
   int *b = duplicateArray(a, 5);
   for (int i=0; i<5; i++)
      if (a[i] == b[i])
         cout << i << " ok" << endl;
   delete [] b;  //caller deallocates memory
}





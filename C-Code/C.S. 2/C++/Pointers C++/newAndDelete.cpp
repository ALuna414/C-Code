// This program demonstrates new and delete.
#include <iostream>
using namespace std;

int main()
{
    int *iptr;
    iptr = new int;  // iptr points to a new anonymous variable
    
    *iptr = 11;
    cout << *iptr << endl;
    int value = *iptr + 3;
    
    //---------------------------------------------------
    
    int *p2;         //for dynamically allocated array
    int size;
    
    cout << "Enter number of ints to be stored: ";
    cin >> size;
    p2 = new int[size];
    
    for (int i=0; i<size; i++)
        p2[i] = i;         // populating the array
    
    for (int i=0; i<size; i++)
        cout << p2[i] << " ";
    cout << endl;
    
    delete iptr;
    delete [] p2;  // note [] required for dynamic arrays!

    
    return 0;
}

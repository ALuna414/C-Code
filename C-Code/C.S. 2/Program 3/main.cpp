// File Name: Program 3
//
// Aaron Luna
// No Collaborators
// 10/05/21
// Assigment Number 3
// CS 2308 Fall 2021
// Main function


#include <iostream>

using namespace std;

// add prototypes here
int maximum (int *array, int size);
int oddSwap (int* x, int* y);
int *resize (int *array, int size);
int *concatenate (int *array1, int *array2, int size1, int size2);
int *duplicateArray (int *arr, int size);
int *subArray (int *array, int start, int length);
void showArray (int* array, int length);

int main() {
    int testForMax1[10] = { 1, 2, 3, 4, 5, 6, 7, -8, 9, 0};
    int testForMax2[10] = { 1, 2, 3, 4, 5, 16, 7, 8, 9, 0};
    //int expectedMaxForTest1 = 9;
    //int expectedMaxForTest2 = 16;

    int testForOddSwap1 = 3;
    int testForOddSwap2 = 5;
    //int expectedResultOfOddSwap = 40;
    //int expectedValueOfA = 25;
    //int expectedValueOfB = 15;

    int testArrayForResize[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    //int expectedResultOfResize[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    int testArrayForConcat1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int testArrayForConcat2[5] = { 11, 22, 33, 44, 55};
    //int expectedResultOfConcat[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 22, 33, 44, 55};

    int testArrayForSubArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    const int arrayStartIdx = 5, arrayLength = 4;
    //int expectedArraySub[4] = { 6, 7, 8, 9};
    
    //* add code here *//
    cout << "Testing maximum:" << endl << "test data: 1 2 3 4 5 6 7 -8 9 0 "
         << endl << "Expected maximum: 9" << endl
         << "Actual maximum:   " << maximum(testForMax1, 10) << endl
         << "test data: 1 2 3 4 5 16 7 8 9 0 " << endl << "Expected maximum: 16"
         << endl << "Actual maximum:   "
         << maximum(testForMax2, 10) << endl << endl;
    
    cout << "Testing oddSwap" << endl << "test data: testForOddSwapA:"
         << testForOddSwap1 << " testForOddSwapB:" << testForOddSwap2 << endl
         << "Expected result: 40" << "  testForOddSwapA: 25"
         << "  testForOddSwapB: 15" << endl << "Actual results : "
         << oddSwap(&testForOddSwap1, &testForOddSwap2)
         << "  " << "testForOddSwapA: " << testForOddSwap1 << "  " << "testForOddSwapB: "
         << testForOddSwap2 << endl << endl;
    
    cout << "Testing resize:" << endl << "test data: 1 2 3 4 5 6 7 8 9 0 " << endl
         << "Expected result: 1 2 3 4 5 6 7 8 9 0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1"
         << endl << "Actual result:   " << showArray(resize(testArrayForResize, 10), 20)
         << endl << endl;
    
    cout << "Testing concat:" << endl
         << "test data: 1 2 3 4 5 6 7 8 9 0 " << endl << " and 11 22 33 44 55 " << endl
         << "Expected result: 1 2 3 4 5 6 7 8 9 0 11 22 33 44 55 " << endl
         << "Actual result: " << showArray(concatenate(testArrayForConcat1, 10, testArrayForConcat2, 5), 15);
         << endl << endl;
    
    cout << "Testing subArray:" << endl << "test data: 1 2 3 4 5 6 7 8 9 0" << endl
         << "start: " << arrayStartIdx << " length: " << arrayLength << endl
         << "Expected result: 6 7 8 9" << endl << "Actual result: "
         << showArray(subArray(testArrayForSubArray, arrayStartIdx, arrayLength), arrayLength)
         << endl << endl;
    
    return 0;
}

//***********************************************************
// showArray: displays the elements of an integer array in one line
//       separated by a space.
// array: an array of ints
// size: the number of ints in the array
//***********************************************************
void showArray (int *array, int length)
{
    for (int i=0; i<length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

//***********************************************************
// duplicateArray: creates a new array that contains the elements of the
//      array argument in the same order
// array: an array of ints
// size: the number of ints in the array
// returns a pointer to the new array.
//      If an invalid size is passed the function returns null.
// NOTE: it is the caller's responsibility to delete the returned array
//      when finished with it.
//***********************************************************
int *duplicateArray (int *arr, int size)
{
   int *newArray;
   if (size <= 0)         //size must be positive
      return NULL;        //NULL is 0, an invalid address

   newArray = new int [size];  //allocate new array

   for (int index = 0; index < size; index++)
      newArray[index] = arr[index];  //copy to new array

   return newArray;
}

//***********************************************************
// maximum: takes int array and sets to 0. it will return the
//    maximum value of array elements.
// *array: a pointer of array of ints
// size: the number of ints in the array
//***********************************************************
int maximum (int *array, int size)
{
    int maximum = *array;
    
        for (int i=0; i<size; i++)
        {
            if (*(array+i) > maximum)
                maximum = *(array+i);
        }
    return maximum;
}

//***********************************************************
// oddSwap: uses reference parameters and rewrites function
//   so it uses pointers.
// int*: a pointer of int x
// int*: a pointer of int y
//***********************************************************
int oddSwap (int* x, int* y)
{
    int temp = *x;
    
    *x = *y * 5;
    *y = temp * 5;
    
    return *x + *y;
}

//***********************************************************
// resize: creates a new array that is twice the size of
//    argument array and it copies contents.
// int array: an array pointer of int array
// int: an int of size for doubling size
//***********************************************************
int *resize (int *array, int size)
{
    int *newArray = new int[2*size];
    
    for (int i=0; i<size; i++)
    {
        *(newArray+i) = *(array+i);
    }
    
    for (int i=0; i< 2*size; i++)
    {
        *(newArray+i) = -1;
    }
    
    return newArray;
}

//***********************************************************
// concatenate: gets array and arrays size and creates a new
//   array big enough to store both.
// int array: an array pointer of int array1
// int: an int of size1 for size of first array
// int array: an array pointer of int array2
// int: an int of size2 for size of last array
//***********************************************************
int *concatenate (int *array1, int size1, int *array2, int size2)
{
    int i;
    int *newArray = new int[size1+size2];
    
    for (i=0; i<size1; i++)
    {
        *(newArray+i) = *(array1+i);
    }
    
    for (int i=size1; i<size1+size2; i++)
    {
        *(newArray+i) = *(array2+ i - size1);
    }
    
    return newArray;
}

//***********************************************************
// subArray: takes an int array, start index, and length to
//    create a new array that is a copy of elements from og.
// int array: an array pointer of int array
// int: an int start that gives start index
// int: an int length for length
//***********************************************************
int *subArray (int *array, int start, int length)
{
    int *result = duplicateArray(array+start,length);
    return result;
}

#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4};
    for (int i = 1; i < SIZE-1; i++)
    {
        arr[i - 1] = arr[i];
        cout << arr[SIZE-i] << endl;
    }

    return 0;
}

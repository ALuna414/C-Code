// This program uses a pointer to return access to a local variable
#include <iostream>
using namespace std;

//int *getList() {
//    int list[80];
//    for (int i = 0; i<80; i++)
//        list[i] = i;
//    return list;
//}
int *getList () {
    int *list = new int[80];
    for (int i=0; i<80; i++)
        list[i] = i;
    return list;
}
int main()
{
    int* numbers;
    numbers = getList();
    for (int i=0; i<80; i++)
        cout << numbers[i] << " ";
    cout << endl;
    delete [] numbers;
   return 0;
}

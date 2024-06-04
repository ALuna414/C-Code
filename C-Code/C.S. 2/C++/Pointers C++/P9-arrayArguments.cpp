// This program demonstrates that a pointer may be used as a
// parameter to accept the address of an array. 
#include <iostream>
#include <iomanip>
using namespace std;

const int QTRS = 4;

//add prototype
double totalSales(double *, int);


int main() {
   double sales[4];
    for (int i=0; i<4; i++)
        cin >> sales[i];
   cout << “Total sales: “ << totalSales(sales, 4) << endl;
}

double totalSales(double *arr, int size) {
   double sum = 0.0;
   for (int i=0; i<size; i++) {
      sum += arr[i];   // or sum += *(arr+i);
   }
   return sum;
}

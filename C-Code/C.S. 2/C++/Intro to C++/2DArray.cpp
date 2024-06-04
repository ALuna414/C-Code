// This program demonstrates a two-dimensional array.
#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_DIVS = 3;           // Number of divisions
const int NUM_QTRS = 4;           // Number of quarters

double sumSales (double salesArray[][NUM_QTRS]) {
    double totalSales = 0;
    // Nested loops used to add all the elements.
    for (int div = 0; div < NUM_DIVS; div++)
    {
       for (int qtr = 0; qtr < NUM_QTRS; qtr++)
        // insert code here to add all the elements
           totalSales = totalSales + salesArray[div][qtr];
    }
    return totalSales;
}

int main()
{
   double sales[NUM_DIVS][NUM_QTRS]; // Array with 3 rows and 4 columns.
   double totalSales = 0;            // To hold the total sales.
   int div, qtr;                     // Loop counters.
   
   cout << "This program will calculate the total sales of\n";
   cout << "all the company's divisions.\n";
   cout << "Enter the following sales information:\n\n";

   // Nested loops to fill the array with quarterly
   // sales figures for each division.
   for (div = 0; div < NUM_DIVS; div++)
   {
      for (qtr = 0; qtr < NUM_QTRS; qtr++)
      {
         cout << "Division " << (div + 1);
         cout << ", Quarter " << (qtr + 1) << ": $";
          //insert code here to input the values
          cin >> sales[div][qtr];

      }
      cout << endl; // Print blank line.
   }

   totalSales = sumSales(sales);
   
   cout << fixed << setprecision(2);
   cout << "The total sales for the company are: $";
   cout << totalSales << endl;
}

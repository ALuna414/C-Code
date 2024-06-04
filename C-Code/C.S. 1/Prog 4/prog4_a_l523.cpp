/*
   File: prog4_a_l523.cpp
 
   Author: Aaron Luna
 
   C.S.1428.007
 
   Lab Section: L09
 
   Program: #4
   Due Date: 10/28/20

   This program prompts the user for the number of items purchased. If no
   items were purchased, the program terminates after printing an appropriate
   message to the screen; otherwise, the program repeatedly prompts the
   user for the price of the specified number of items and calculates the
   total of all purchased items. It then calculates the shipping charge,
   discounted total, tax on the discounted total, and the total amount due.

   After all calculations are performed, the program prints the author's
   identifying information followed by the total of all purchased items,
   the discounted total, the tax rate, the tax on the discounted total,
   shipping charges and the total amount due as shown below. Output is
   written in receipt form to both the console and to an output file.

   With the exception of the tax rate, the numeric data is formatted to
   two decimal places. The tax rate is formatted to four decimal places.

   Input (keyboard): number of items purchased, integer
                     item price, double

   Constants:        discount amount, double (sample: 0.20)
                     cut off amount for free shipping, double
                     shipping charge, double
                     tax rate, double (sample: 0.0825)

   Output (console):
          Sample Console Output (These samples do not reflect prompts.)

          Author's Name
          C.S.1428.?        // '?' represents three-digit lecture section number
          Lab Section: L?   // '?' represents two-digit lab section number
          --/--/--          // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??
               <blank line>
               <blank line>
          A copy for your records can be found in prog4_00?out.txt.

   Output (file - prog4_?out.txt):

          Author's Name
          C.S.1428.?        // '?' represents three-digit lecture section number
          Lab Section: L?   // '?' represents two-digit lab section number
          --/--/--          // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??

          ================================================

          <Output will vary based on actual input values.>
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main ()
{
    const double TAX_RATE = 0.0825;
    const double DISCOUNT = 0.20;
    const double SHIPPING_CHARGE = 8.50;
    const double FREE_SHIPPING_MIN = 150.00;
    
    int items = 0;
    
    double total = 0;
    double discounted_total = 0;
    double shipping = 0;
    double item_price = 0;
    
    ofstream fout;
    fout.open("prog4_007.txt");
    
    cout << "Enter the number of items purchased: ";
    cin >> items;
    
    if (items == 0)
    {
        cout << endl << "Come back again soon!" << endl;
    }
    else
    {
        for (int i = 1; i <= items; i++)
        {
            cout << "Enter item price: ";
            cin >> item_price;
            total += item_price;
        }
        
        discounted_total = total - (total * DISCOUNT);
        
        if (discounted_total >= FREE_SHIPPING_MIN)
        {
            shipping = 0;
        }
        else
        {
            shipping = SHIPPING_CHARGE;
        }
    
        cout << endl << endl;
        cout << fixed << setprecision(2) << "Aaron Luna" << endl;
        cout << "C.S.1428.007" << endl << "Lab Section: L07" << endl;
        cout << "10/28/20" << endl << endl << "Total Purchases:    $ ";
        cout << total << endl << "Discounted Total:     " << discounted_total;
        cout << endl << "Tax Rate:             " << fixed << setprecision(4);
        cout << TAX_RATE << endl << fixed << setprecision(2) << "Tax:                  ";
        cout << discounted_total * TAX_RATE << endl << "Shipping:             ";
        cout << shipping << endl << endl << "Total Amount Due:   $ ";
        cout << discounted_total + shipping + (discounted_total * TAX_RATE);
        cout << endl << endl;
        cout << "A copy for your records can be found in prog4_007out.txt" << endl;
        
        fout << "Aaron Luna" << endl
             << "C.S.1428.007" << endl
             << "Lab Section: L09" << endl
             << "10/28/20" << endl << endl
             << "Total Purchases:     $ " << total << endl
             << "Discounted Total:      " << discounted_total << endl
             << "Tax Rate:              " << fixed << setprecision(3) << TAX_RATE << endl
             << fixed << setprecision(1)
             << "Tax:                   " << discounted_total * TAX_RATE << endl
             << "Shipping:              " << shipping << endl << endl
             << "Total Amount Due:    $ " << discounted_total + shipping + (discounted_total * TAX_RATE)
             << endl << endl;
        
        fout.close();
        
    }
    
    system("PAUSE>NUL");
    
    return 0;
    
}

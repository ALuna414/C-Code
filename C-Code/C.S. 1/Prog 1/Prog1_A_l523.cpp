/*
    File: prog1_A_L523.cpp

    Author: Aaron Luna
    C.S.1428.007
    Program: #1
    Due Date: 09/16/20

    This program prompts the user for the number of prix fixe meals ordered
   by the customer(s). The program calculates the total cost of the meal(s),
   the sales tax, the tip, and the total amount due. The program then prints
   in receipt form the individual price of a prix fixe meal, the number of
   prix fixe meals ordered, the total for all prix fixe meals ordered, the
   sales tax, the tip and the total amount due. Sample layout of a receipt
   is shown below.

   Input (keyboard): meals_ordered      (integer)
   Constants:
              PRIX_FIXE = 75.50         (double)
              SALES_TAX_RATE = .0825    (double)
              TIP_PERCENTAGE = .20      (double)
   Output (console):

          Aaron Luna
          C.S.1428.007
          Lab Section: L17
          09/16/20
               <blank line>
          Prix Fixe Price:    $   75.50
                                x     3
          Total for 8 meals:     226.50
          Sales Tax @8.25%        18.69
          20% Tip                 49.04
          Total Due:          $  294.23
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ( )
{
     int meals_ordered = 3;

     const double PRIX_FIXE_MEAL = 75.50;

     const double SALES_TAX = .0825;

     const double TIP_PERCENTAGE = 0.20;

          cout << fixed << setprecision(2)

               << "Prix Fixe Meal  $      " << setw(6) << PRIX_FIXE_MEAL << endl

               << "                     x " << setw(6) << meals_ordered << endl

               << "Total for 3 meals:     " << setw(6) << PRIX_FIXE_MEAL * meals_ordered << endl

               << "Sales Tax @8.25%       " << setw(6) << SALES_TAX * 226.50 << endl

               << "20% Tip                " << setw(6) << TIP_PERCENTAGE * 245.19 << endl

               << "Total Due:         $   " << setw(6) << 245.19 + 49.04 << endl;

       return 0;
}

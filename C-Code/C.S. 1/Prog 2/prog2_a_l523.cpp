/*
File: prog2_a_l523.cpp

Author: Aaron Luna
C.S.1428.007
Lab Section: L17
Program: #2
Due Date: 09/30/20

This program prompts the user to enter the amount of a purchase (in cents).
It then prompts the user to enter the amount received in payment (in cents).
It calculates the amount of change due, printing the results to an output
file. The author's identifying information is provided followed by the
number of each coin to be given in change: the number of dollars, half
dollars, quarters, dimes, nickels and pennies are listed in tabular form.
Monetary amounts are displayed to two decimal places.
   
An appropriate message is displayed to the console screen if the output
file fails to open.
   
An appropriate message is written to the console screen informing the
user of the output file name to which the results have been written.
The layout and content of the file output are shown in the sample below.

Input (keyboard):
    cost, integer (in cents)
    payment, integer (in cents)
          
Constants: none
   
Output (screen):
           
    Aaron Luna
    C.S.1428.007
    Lab Section: L17
    09/30/20
              
              
         <Appropriate message indicating the name of the output file.>
           
Output (file - prog2_007out.txt):
             
    Aaron Luna
    C.S.1428.007
    Lab Section: L17
    09/30/20
              
         Received 70.00 for a purchase of 65.03
              
            Change in coins:
         Coin           Number
         ---------------------
         Dollars           4
         Half Dollars      1
         Quarters          1
         Dimes             2
         Nickels           0
         Pennies           2

   ================================================
  
   <Output will vary based on actual input values.>
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int cost;
    int payment;
    int change;
    int dollars = 0;
    int half_dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    cout << "Enter the amount of the purchase (in cents): " ;
    cin >> cost;
            
    cout << "Enter the amount recieved in payment (in cents): " ;
    cin >> payment;
    
    cout << endl << endl << "Aaron Luna" << endl << "C.S.1428.007" <<
    endl << "Lab Section: L17" << endl << "09/30/20" << endl << endl ;
    
    cout << "Program results has been written to prog2_007.txt." << endl ;
    cout << endl ;

          change = payment - cost ;
        
            if (change >= 100)
            {
                dollars = change / 100 ;
                cout << " Dollars: " << setw(9) << dollars << endl ;
                change = change % 100 ;
            }
            
            if (change >= 50)
            {
                half_dollars = change / 50 ;
                cout << " Half Dollars: " << setw(4) << half_dollars << endl ;
                change = change % 50 ;
            }
            
            if (change >= 25)
            {
                quarters = change / 25 ;
                cout << " Quarters: " << setw(8) << quarters << endl ;
                change = change % 25 ;
            }
            
            if (change >= 10)
            {
                dimes = change / 10 ;
                cout << " Dimes: " << setw(11) << dimes << endl ;
                change = change % 10 ;
            }
            
            if (change >= 5)
            {
                nickels = change / 5 ;
                cout << " Nickels: " << setw(9) << nickels << endl ;
                change = change % 5 ;
            }
            
            else
            {
                pennies = change / 1 ;
                cout << " Pennies: " << setw(9) << pennies << endl ;
            }

    ofstream fout;
    fout.open ("prog2_007.txt");
    
    if ( !fout )
        {
            cout << endl << endl
                 << "*** Program Terminated ***" << endl << endl
                 << "Output file failed to open." << endl ;
        
        system("PAUSE>NUL") ;
        return 1 ;
        }
        
    fout << "Aaron Luna" << endl << "C.S.1428.007" <<
    endl << "Lab Section: L17" << endl << "09/30/20" << endl << endl ;
    
    fout << fixed << setprecision(2)
         << "Received "             << cost / 100.0
         << " for a purchase of "   << payment / 100.0
         << endl << endl ;
    
    fout << setprecision(0)
         << "   Change in coins: " << endl
         << "Coin           Number" << endl
         << "---------------------" << endl ;
        
    fout << "Dollars:"        << setw(10) << dollars << endl
         << "Half Dollars:"   << setw(5)  << half_dollars << endl
         << "Quarters:"       << setw(9)  << quarters << endl
         << "Dimes:"          << setw(12) << dimes << endl
         << "Nickels:"        << setw(10) << nickels << endl
         << "Pennies:"        << setw(10) << pennies << endl ;
    
    fout.close();
    
    system("PAUSE>NUL");

    return 0;
}

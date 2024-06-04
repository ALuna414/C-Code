// sample C++ program: Structs: decl, vars, . and initialization

#include <iostream>
#include <iomanip>
using namespace std;


int main()  {
    struct EmployeePay  {
        string name;         // Employee name
        int empNum;          // Employee number
        double payRate;      // Hourly pay rate
        double hours;        // Hours worked
        double grossPay;     // Gross pay
    };
    
    EmployeePay employees[2] = {
        {"Betty Ross", 141, 18.75},
        {"Jill Sandburg", 142, 17.50}
    };
    
    cout << fixed << setprecision(2);
    
    // Calculate pay for employees
    for (int i=0; i<2; i++) {
        cout << "Name: " << employees[i].name << endl;
        cout << "Employee Number: " << employees[i].empNum << endl;
        cout << "Enter the hours worked by this employee: ";
        cin >> employees[i].hours;
        employees[i].grossPay = employees[i].hours * employees[i].payRate;
        cout << "Gross Pay: " << employees[i].grossPay << endl << endl;
    }
    //Todo: put the for loop above in a function and call it from here

}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name1 = "Harry Potter";
    string name2 = "Hermione Granger";
    string name3 = "Draco Malfoy";
    
    int age1 = 9;
    int age2 = 10;
    int age3 = 12;
    
    float gpa1 = 3.6;
    float gpa2 = 4.0;
    float gpa3 = 2.875;
    
    string major1 = "Flying";
    string major2 = "Transfiguration";
    string major3 = "Potions";
    
    cout << setprecision(1) << fixed;
    
    cout << left << setw(20) << name1 << right << setw(10) << age1 << setw(10)
    << gpa1 << left << setw(20) << major1 << endl;
    cout << left << setw(20) << name2 << right << setw(10) << age2 << setw(10)
    << gpa2 << left << setw(20) << major2 << endl;
    cout << left << setw(20) << name3 << right << setw(10) << age3 << setw(10)
    << gpa3 << left << setw(20) << major3 << endl;
    
    
    return 0;
}

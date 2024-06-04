// This program reads data from a file (Friends.txt).
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("Friends.txt");
    
    string name;
    
    cout << "Reading data from the file.\n";

    fin >> name;      // Read name from the file
    while ( fin ) {   // fin is true if last operation on fin succeeded
        cout << name << endl;   // Display name
        fin >> name;      // Read name from the file
    }

    
    // Close the file
    fin.close();
    
   return 0;
} 

// This program writes data to a single line in a file (demofile.txt)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("demofile.txt");
    
    cout << "Now writing data to the file.\n";
    
    // Write four names to the file.
    fout << "Bach";
    fout << "Beethoven";
    fout << "Mozart";
    fout << "Schubert";
    
    // Close the file
    fout.close();
    
    cout << "Done.\n";
    return 0;
} 

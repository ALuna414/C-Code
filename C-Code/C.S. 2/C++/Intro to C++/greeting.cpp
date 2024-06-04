#include <iostream>
#include <string>    //do we need this?
using namespace std;

int main() {
   string userName;
   string greetingText;
   
   cout << "Enter name: ";
   getline(cin,userName);      // does this work?
   
   // Combine "Hello" and name using +
    greetingText = "Hello " + userName;
   
   // Append a period using push_back
    greetingText.push_back('.');
   
   cout << greetingText << endl;
   
   // count how many spaces are in the greeting (use isspace())
    int count = 0;
    for (int i=0; i<greetingText.size(); i++) {
        if ( isspace(greetingText.at(i)))
          count++;
    }
    cout << count << endl;
    
   // make a new greeting that makes all letters capitalized
    string newGreeting;
    for (int i=0; i<greetingText.size(); i++) {
        newGreeting.push_back( toupper(greetingText.at(i)) );
    }
    cout << newGreeting << endl;
    
   return 0;
}

// This program asks for the programming assignment scores
// for one student. It stores the values in a vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //change the code to use a vector instead of an array
    const int NUM_SCORES = 7;
    vector<int> scores(NUM_SCORES);    // one variable, 7 values
    
    // Get the scores for each assignment
    cout << "Enter the " << NUM_SCORES << " programming assignment scores: ";
    for (int i=0; i<scores.size(); i++) {
        cin >> scores.at(i);
    }
    
    // Display the values in the array.
    cout << "The scores you entered are:";
    for (int i=0; i<scores.size(); i++) {
        cout << " " << scores.at(i);
    }
    cout << endl;

    
    //compute the average
//    float sum = scores[0];
//    float avg = 0;
    
    
    // For practice: find the minimum score
    // Recompute the average by dropping the minimum score
    
    return 0;
}

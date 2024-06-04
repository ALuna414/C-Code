// This program asks for the programming assignment scores
// for one student. It stores the values in an array.
#include <iostream>
using namespace std;

const int NUM_SCORES = 7;

double sumScores (int scores1[] ) {
    double sum = 0;
    for (int i=0; i<NUM_SCORES; i++) {
        sum = sum+scores1[i];
    }
    return sum;
}

int main() {
    int scores[NUM_SCORES];    // one variable, 7 values
    
    // Get the scores for each assignment
    cout << "Enter the " << NUM_SCORES << " programming assignment scores: ";
    for (int i=0; i<NUM_SCORES; i++) {
       cin >> scores[i];
    }
    
    // Display the values in the array.
    cout << "The scores you entered are:";
    for (int i=0; i<NUM_SCORES; i++) {
        cout << " " << scores[i];
    }
    cout << endl;
    
    //compute the average
    double sum = sumScores(scores);
    double avg = sum/NUM_SCORES;
    cout << "The average is: " << avg << endl;
    
    
    // For practice: find the minimum score
    // Recompute the average by dropping the minimum score
    
    return 0;
}

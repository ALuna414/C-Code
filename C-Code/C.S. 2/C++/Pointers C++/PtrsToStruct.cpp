#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    string name;      // Student’s name
    int idNum;        // Student ID number
    int creditHours;  // Credit hours enrolled
    float gpa;        // Current GPA
};

void inputStudent(Student *s);

int main()
{
    Student s1 = {"Jane Doe", 12345, 15, 3.3};
    Student *studentPtr;
    studentPtr = &s1;
    
    // output the name via studentPtr
    cout << (*studentPtr).name << endl;

    //use inputStudent function to input the data from the user into s1
    inputStudent(&s1);
    
    cout << s1.name << endl;
}



//You see lots of functions like this in C programs:
void inputStudent(Student *s) {
    cout << "Enter Student name: ";
    cin >> s->name;

    cout << "Enter studentID: ";
    cin >> s->idNum;

    cout << "Enter credit hours: ";
    cin >> s->creditHours;

    cout << "Enter GPA: ";
    cin >> s->gpa;
}

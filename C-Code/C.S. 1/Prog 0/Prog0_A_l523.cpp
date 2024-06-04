/*
   File: prog0_bbA_L523.cpp

   Author: Aaron Luna
   C.S.1428.007
   Lab Section: L17
   Program: #0
   Due Date: 09/02/20

   This program
       - writes the student's name on the 1st line of output, last name first.
	     e.g. Smith, John
       - writes 'C.S.1428.?' (without quotation marks) on the 2nd line of
         output with the student's three-digit lecture section number in place
         of the question mark
       - writes 'Lab Section: L?' (without quotation marks) on the 3rd line of
         output with the student's two-digit lab section number in place of the
         question mark
       - writes this program's due date on the fourth line of output
       - leaves line five blank
       - writes 'Major: <student's major>'(without quotation marks)
         on the 6th line of output with the student's major in place of
         <student's major>
       - writes 'Minor: <student's minor or specialization>' (without quotation
         marks)on the 7th line of output with the student's minor or
         specialization in place of <student's minor or specialization>
         Note: The keyword 'Minor:' might be replaced with the keyword
         'Specialization:' or 'Concentration:' depending on the student.
       - leaves line eight blank.
       - writes 'Favorite Hobby: <student's favorite hobby>'
         (without quotation marks) on the 9th line of output replacing
		 <student's favorite hobby> with one of the student's hobbies.

   Input: none
   Constants: none
   Output (screen): Sample Output:

        Luna, Aaron
        C.S.1428.007        // '?' represents three-digit lecture section number
        Lab Section: L17   // '?' represents two-digit lab section number
        09/02/20          // dashes represent due date, month/day/year
           <blank line>
        Major: Electrical Engineering
        Minor: Compputer Science
           <blank line>
        Favorite Hobby: Hiking
*/

#include <iostream>

using namespace std;

int main ( )
{
   cout << "Luna, Aaron" << endl
        << "C.S.1428.007" << endl
        << "Lab Section: L17" << endl
        << "09/02/20" << endl << endl;

   cout << "Major: Electrical Engineering" << endl
        << "Minor: Computer Science" << endl << endl;

   cout << "Favorite Hobby: Hiking" << endl;
    return 0;
}

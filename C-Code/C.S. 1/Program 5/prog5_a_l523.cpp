/*
   File: prog5_bb0000.cpp  // Remove this inline comment after replacing 'bb0000' with your account number.

   Author: Betty Boop      // Remove this inline comment after replacing Betty Boop with your first & last names.
   C.S.1428.?              // Remove this inline comment after replacing the '?' with your three-digit lecture section number.
   Lab Section: L?         // Remove this inline comment after replacing the '?' with your two-digit lab section number.
   Program: #5
   Due Date: --/--/--      // Remove this inline comment after replacing the dashes with the due date, in this format - month, day, year.

   This program reads an unknown number of simple binary expressions
   of the form 'operand1 operator operand2' from an input file. Each
   expression is evaluated. Real input values are allowed.

   Named constants to 'hold' CLASS ("C.S.1428") and DUE_DATE ("--/--/--")
   are locally declared in the calling routine (main).

   A sentinel value read loop is used to process as described below:
     - A void function getName is called to 'get' the user's first & last
       names using two different prompts. Two strings, one to 'hold' the
       first name and one to 'hold' the last name, are locally declared
       in the calling routine.
     - A typed function getLectureSection is called to 'get' the user's
       three-digit lecture section number. e.g. 009 A string to 'hold'
       the lecture section number is locally declared in the calling routine.
     - A typed function getLabSection is called to 'get' the user's
       two-digit lab section number. e.g. 01 A string to 'hold' the lab
       section number is locally declared in the calling routine.
     - A void function printIdInfo is called to print the user's personal
       identifying information to a file. One blank line is printed after
       the user's identifying information. Refer to the sample output
       below for details.
     - A void function readExpression is called to read from an input file
       a binary expression in the form operand1 operator operand2. One read
       statement is used to "get" the parts of the expression.
     - While the operator in the expression read from the input file is not
       a question mark, the expression is processed as follows:
             - A void function echoExpression is called to echo (print)
               the expression to the output file.
             - A void function evaluateExpression is called. If the
               expression currently being evaluated is valid, the results
               are calculated and written to the output file. If the
               expression currently being evaluated is not valid, an
               appropriate message is written to the output file. (See
               below for details. ***)
             - The void function readExpression is called to read the next
               expression of the form operand1 operator operand2. One read
               statement is used to "get" the parts of the expression.
     - Two blank lines are written to the screen before the void function
       printIdInfo is called to print the user's personal identifying
       information to the screen. One blank line is printed after the user's
       identifying information. Refer to the sample output below for details.
     - A void function writeFileLocation is called to print an appropriate
       message to the screen indicating to the user the name of the output
       file to which the results have been written. Refer to the sample
       output below for details.)

==========================================================================

   ***
   The expressions are checked for the addition (+), subtraction (-),
   multiplication (*), and division (/) operators. Included are a check
   for division by zero when the division operator is encountered and a
   check for an invalid operator (e.g. 134.6 ! 23.1). Since these are
   mutually exclusive events, a switch statement with a nested double-sided
   alternative for handling the division operator should be used to evaluate
   the expressions.

   If division by zero is encountered, the original expression is echoed to
   the output file along with the following message:
   '   Division by zero produces an undefined result.'

   If an invalid operator is encountered, the original expression is echoed
   to the output file along with the following message:
   '   Encountered unknown operator.'

   Every attempt is made to eliminate repetitive code!

   Numeric values in output is NOT formatted!

==========================================================================

   The layout and content of the file input and the file output are shown in
   the samples below. An appropriate message is displayed to the screen if
   either the input file or the output file fails to open.

   Input (file - prog5_?inp.txt)
   ('?' in the input file name represents a three-digit lecture section number)
   - input file contains an unknown number of binary expressions

     operand1(double)  operator(char)  operand2(double)
     ...

   Constants: CLASS = "C.S.1428"    (string)
              DUE_DATE = "--/--/--" (string)   // month/day/year

   Sample Screen Display:

   Enter your first name:
   Enter your last name:
   Enter your three-digit lecture section number:
   Enter your two-digit lab section number:
       <blank line>
       <blank line>
   Author's Name
   C.S.1428.?      // '?' - author's three-digit lecture sec#
   Lab Section: L? // '?' - author's two-digit lab sec#
   --/--/--        // dashes represent due date, month/day/year
        <blank line>
   <Appropriate message indicating the name of the output file.>

   Sample File Output (file - prog5_?out.txt):
   ('?' in the output file name represents a three-digit lecture section number)

   Author's Name
   C.S.1428.?      // '?' - author's three-digit lecture sec#
   Lab Section: L? // '?' - author's two-digit lab sec#
   --/--/--        // dashes represent due date, month/day/year
        <blank line>
   125 $ 28   Encountered unknown operator.
   123.5 + 59.3 = 182.8
   198.7 / 0   Division by zero produces an undefined result.
   ...

   ================================================

   <Output will vary based on actual input values.>
*/

#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

void getName ( string, string );
string getLectureSection ( );
string getLabSection ( );
void printIdInfo ( ostream &, string, string, const string, string, string, const string);
void readExpression ( ifstream &, double, char, double );
void echoExpression ( ofstream &, double, char, double );
void evaluateExpression ( ofstream &, double, char, double );
void writeFileLocation ( );

int main ()
{
    const string CLASS = "C.S.1428",
                  DUE_DATE = "11/11/20";      // month//day//year
    
    string first_name,
           last_name,
           lecture_section,
           lab_section;
    
    double operand1,
    operand2;
    
    char operatr;
    
    ifstream fin;
    fin.open("prog5_007inp.txt");
    if ( !fin )
    {
         cout << endl << endl
              << "***Program Terminated.***" << endl << endl
              << "Input file failed to open!" << endl;

         return 1;
    }
    
    ofstream fout;
    fout.open("prog5_007out.txt");
    if (!fout)
    {
        cout << endl << endl
             << "*** Program Terminated ***" << endl << endl
             << "Output file failed to open." << endl;
        
        system("PAUSE>NUL");
        return 2;
    }
                                        
    getName ( first_name, last_name );
    lecture_section = getLectureSection ( );
    lab_section = getLabSection ( );
    printIdInfo ( fout, first_name, last_name, CLASS,
                 lecture_section, lab_section, DUE_DATE);
    
    readExpression ( fin, operand1, operatr, operand2 );
    while ( operatr != '?' )
    {
        echoExpression ( fout, operand1, operatr, operand2 );
        evaluateExpression ( fout, operand1, operatr, operand2 );
        readExpression (fin, operand1, operatr, operand2 );
    }
    
    cout << endl << endl;
    printIdInfo ( cout, first_name, last_name, CLASS,
                  lecture_section, lab_section, DUE_DATE );
    writeFileLocation ( );
    
    /// REplace with CODE to CLOSE the input/output files.
    fin.close ( );
    fout.close ( );
    
    system("PAUSE>NUL");
    
    return 0;
    
}

// REPLACE THIS COMMENT WITH THE FUNCTION DEFINITION.
void getName ( string first_name, string last_name)
{
    cout << "Enter your first name: " << endl;
    cin >> first_name;
    cout << "Enter your last name: " << endl;
    cin >> last_name;
}

string getLectureSection ( )
{
    string lecture_section;
    cout << "Enter your three-digit lecture section: " << endl;
    cin >> lecture_section;
    return lecture_section;
}

string getLabSection ( )
{
    string lab_section;
    cout << "Enter your two-digit lab section: " << endl;
    cin >> lab_section;
    return lab_section;
}

void printIdInfo ( ostream &out, string first_name, string last_name, const string CLASS,
                  string lecture_section, string lab_section, const string DUE_DATE )
{
    out << first_name << " " << last_name << endl
        << CLASS << "." << lecture_section << endl
        << "Lab Section: L" << lab_section << endl
        << DUE_DATE << endl << endl;
}

void readExpression ( ifstream &fin, double operand1, char operatr, double operand2 )
{
    fin >> operand1;
    fin >> operatr;
    fin >> operand2;
}

void echoExpression ( ofstream &fout, double operand1, char operatr, double operand2 )
{
    fout << operand1 << " " << operatr << " " << operand2 << endl;
}

void evaluateExpression ( ofstream &fout, double operand1, char operatr, double operand2 )
{
    switch ( operatr )
    {
        case '+':
            fout << " = " << operand1 + operand2 << endl;
            break;
        case '-':
            fout << " = " << operand1 - operand2 << endl;
            break;
        case '*':
            fout << " = " << operand1 * operand2 << endl;
            break;
        case '/':
            if ( operand2 == 0 )
            {
                fout << "  Division by zero produces an undefined result." << endl;
                
            }
            else
                fout << " = " << operand1 / operand2 << endl;
            break;
        default:
            fout << "  Encountered unknown operator." << endl;
            break;
            
    }
}

void writeFileLocation ( )
{
    cout << "Program results have been written to prog5_007out.txt." << endl;
}

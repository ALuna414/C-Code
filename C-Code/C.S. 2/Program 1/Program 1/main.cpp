// File Name: main.cpp
//
// Author: Aaron Luna
// Collaborators: None
// Date: 9/7/2021
// Assignment Number: Program 1
// CS 2308 Fall 2021
//
// This program will track the total medals won by
// countries who participated in the olympics. The
// program will also allow users to enter more medals
// won for the selected country and update the medal
// count. When the user quits the program, the program
// should display a message of the country who has the
// most gold medals.

#include <iostream>
#include <iomanip>

using namespace std;
//***********************************************************
// Struct: make a struct with 4 elements inside named
// countries to represent country names. It has string type
// for the name and three int types for gold silver and
// bronze medals won.
//***********************************************************
struct countries {
    string name;
    int goldsWon;
    int silversWon;
    int bronzesWon;
};
//***********************************************************
// Void function to display information for Olympics countries
// with medals in tabular form. Prints a numbered list of
// countres with column headers and organized by country
// numbers. Also gives the total medal count for each country.
//***********************************************************
void displayCountries (countries countriesArray[])
{
    cout << left
         << setw(3) << "N"
         << setw(15) << "Country"
         << right
         << setw(10) << "Gold"
         << setw(10) << "Silver"
         << setw(10) << "Bronze"
         << setw(10) << "Total"
         << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << left << setw(3) << i+1 << setw(15)
             << countriesArray[i].name << right
             << setw(10) << countriesArray[i].goldsWon
             << setw(10) << countriesArray[i].silversWon
             << setw(10) << countriesArray[i].bronzesWon
             << setw(10) << countriesArray[i].goldsWon +
             countriesArray[i].silversWon +
             countriesArray[i].bronzesWon << endl;
    }
}
//***********************************************************
// Int function to update the medals of each country as
// provided by the user. Only three options available which
// are Gold, Silver, and Bronze.
//***********************************************************
int updateMedals(countries countriesArray[])
{
    int choice;
    char medalType;

    cout << "Enter the country number (0 to quit):" << endl;
    cin >> choice;
    if (choice == 0)
    return 0;
    else if (choice > 8 or choice < 1)
    {
        cout << "Invalid country number" << endl;
        return 1;
    }
    
    cout << "Enter the medal type (G,S, or B):" << endl;
    cin >> medalType;
    if (medalType != 'G' && medalType != 'S' && medalType != 'B')
    {
        cout << "Invalid medal type" << endl;
        return 1;
    }
    
    if (medalType == 'G')
        countriesArray[choice - 1].goldsWon += 1;
    else if (medalType == 'S')
        countriesArray[choice - 1].silversWon += 1;
    else if (medalType == 'B')
        countriesArray[choice - 1].bronzesWon += 1;
    return 1;
}
//***********************************************************
// Int function that is needed to add all the countries medal
// counts so user can see how many medals were distributed.
// Total gets updated eveytime user inputs another medal
// rewarded but now shown until user inputs 0 to exit program.
//***********************************************************
int medalsRewarded (countries countriesArray[])
{
    int total = 0;
    for (int i = 0; i < 8; i++)
    {
        total += countriesArray[i].goldsWon
        + countriesArray[i].silversWon
        + countriesArray[i].bronzesWon;
    }
    cout << "Total medals Awarded: " << total
         << endl;
    return total;
}
//***********************************************************
// String function that shows the country with the most gold
// medals. Then outputs the name of the country to the
// console.
//***********************************************************
string mostGolds (countries countriesArray[])
{
    int high = 0;
    string countryName;
    for (int i = 0; i < 8; i++)
    {
        if (countriesArray[i].goldsWon > high)
        {
            high = countriesArray[i].goldsWon;
            countryName = countriesArray[i].name;
        }
    }
    
    cout << "Country with the most Gold Medals: "
         << countryName << endl;
    return countryName;
}

int main()
{
    const int COUNTRIES_NUM = 8;
   
    countries countriesArr[COUNTRIES_NUM] = {
        {"Australia", 11, 14, 12}, {"Canada", 5, 0, 1},
        {"China", 9, 14, 11}, {"Great Britain", 8, 4, 8},
        {"Japan", 8, 10, 10}, {"Netherlands", 7, 6, 7},
        {"Russia", 6, 10, 8}, {"USA", 10, 6, 7}, };
    
    while (true)
    {
        displayCountries(countriesArr);
        int rewritten = updateMedals(countriesArr);
        if (rewritten == 0)
        {
            medalsRewarded(countriesArr);
            mostGolds(countriesArr);
            break;
        }
    }
    return 0;
}

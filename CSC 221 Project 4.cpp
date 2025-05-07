// CSC 221 Project 4.cpp : Program 1: Days in a Month

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int month, year, days; // variables to select the correct # of days and store that to be outputted

    cout << "Enter a month (1-12): "; // prompt the user for a month
    cin >> month;

    if (month >= 1 && month <= 12) { // if month is > 1 and < 12 continue
        cout << "Enter a year: ";
        cin >> year;

        if (year % 100 == 0 && year % 400 == 0) { // if year is divisible by 100 and 400
            if (month == 2) {
                days = 29;
            } // leap year 
            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                days = 31;
            }
            else {
                days = 30;
            }
        }
        else if (year % 100 != 0 && year % 4 == 0) { // else if year not divisible by 100 and divisible by 4
            if (month == 2) {
                days = 29;
            } // leap year if divisible by 4
            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                days = 31;
            }
            else {
                days = 30;
            }
        }
        else { // not a leap year
            if (month == 2) {
                days = 28;
            } 
            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                days = 31;
            }
            else {
                days = 30;
            }
        }
        cout << days << " days" << endl;
    }
    else { // Initial input out of range
        cout << "Invalid number";
    }
    return 0;
}


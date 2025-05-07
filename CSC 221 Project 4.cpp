// CSC 221 Project 4.cpp : Program 3: Geometry Calculator

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int selection;
    double radius, length, width, base, height, area;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter you choice (1-4): ";
    cin >> selection;

    if (selection < 1 || selection > 4) {
        "Invalid option";
    }
    else {
        if (selection == 4) {
            return 0;
        }
        else if (selection == 1) {
            cout << "What is the radius of the circle? ";
            cin >> radius;

            area = 3.14159 * radius * radius;
            cout << "The area is " << setprecision(2) << fixed << area << endl;
        }
        else if (selection == 2) {
            cout << "What is the length of the rectangle? ";
            cin >> length;
            cout << "What is the width of the rectangle? ";
            cin >> width;
            
            area = length * width;
            cout << "The area is " << area << endl;
        }
        else {
            cout << "What is the base of the rectangle? ";
            cin >> base;
            cout << "What is the height of the rectangle? ";
            cin >> height;

            area = (base * height) / 2;
            cout << "The area is " << area << endl;
        }
    }
}



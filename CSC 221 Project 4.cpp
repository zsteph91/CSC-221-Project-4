// CSC 221 Project 4.cpp : Program 2: Shipping Charges

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int weight, distance, rate;

    cout << "Weight of package (kg): ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight";
    }
    else {
        cout << "DIstance to be shipped (mi): ";
        cin >> distance;

        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance";
        }
        else {
            rate = 30;
        }
    }
    cout << "It will cost " << rate << " to ship this package" << endl;
    return 0;
}


// CSC 221 Project 4.cpp : Program 2: Shipping Charges

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    float weight, rate;
    int distance, distanceSegments;
    
    cout << "Weight of package (kg): ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight";
    }
    else {
        cout << "Distance to be shipped (mi): ";
        cin >> distance;

        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance";
        }
        else {
            if (distance % 500 == 0) {
                distanceSegments = distance / 500;

                if (weight <= 2) {
                    rate = distanceSegments * 1.10;
                }
                else if (weight <= 6) {
                    rate = distanceSegments * 2.20;
                }
                else if (weight <= 10) {
                    rate = distanceSegments * 3.70;
                }
                else {
                    rate = distanceSegments * 4.80;
                }
            }
            else {
                distanceSegments = (distance / 500) + 1;

                if (weight <= 2) {
                    rate = distanceSegments * 1.10;
                }
                else if (weight <= 6) {
                    rate = distanceSegments * 2.20;
                }
                else if (weight <= 10) {
                    rate = distanceSegments * 3.70;
                }
                else {
                    rate = distanceSegments * 4.80;
                }
            }
        }
        cout << "It will cost $" << setprecision(2) << fixed << rate <<  " to ship this package" << endl;
    }
        return 0;
}



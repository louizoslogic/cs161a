// NOTE: This template is to be used for discussion ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Jayson Louizos, Thomas
# Lab:              Discussion #3
# Date:             October 5th, 2026
# Description:      This program calculates the coinage needed for a given amount.
# Input:            miles, milesPerGallon,PriceOfGas
# Output:           costPerMile,costOfTrip
# Sources:          None
#******************************************************************************/
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string firstName, lastName, strNumber;
    int intNumber;
    cin >> firstName >> lastName >> intNumber;
    intNumber = intNumber % 100;
    switch(intNumber) {
        case 0: 
        case 1: 
        case 2: 
        case 3: 
        case 4:
        case 5: 
        case 6: 
        case 7: 
        case 8: 
        case 9:
            strNumber = "0" + to_string(intNumber);
            break;
        default:
            strNumber = to_string(intNumber);
    }
    cout << lastName.substr(0, 5) + firstName[0] + strNumber << endl;

    return 0;
}
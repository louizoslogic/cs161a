// NOTE: This template is to be used for discussion ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Jayson Louizos, Ash Dahl
# Lab:              Discussion #2
# Date:             September 27, 2026
# Description:      This program calculates the cost of gas for a trip.
# Input:            miles, milesPerGallon,PriceOfGas
# Output:           costPerMile,costOfTrip
# Sources:          None
#******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double costPerMile, costOfTrip;
    double miles, milesPerGallon, priceOfGas;

    //Welcome message
    cout << "Welcome to my Gas Cost Calculator program!!" << endl;
    cout << "Enter the distance of the trip in miles: ";
    cin >> miles;// Input distance in miles
    cout << "Enter the price of gas per gallon: ";
    cin >> priceOfGas;// Input price of gas per gallon
    cout << "Enter the car's fuel efficiency in miles per gallon: ";
    cin >> milesPerGallon;// Input fuel efficiency in miles per gallon
    cout << endl;

    // Calculate and display the cost of gas for the trip
    costOfTrip = (miles / milesPerGallon) * priceOfGas;
    cout <<  fixed << setprecision(2) << "The cost of gas for the trip is: $" << costOfTrip << endl;
    cout << endl;
    costPerMile = priceOfGas / milesPerGallon;
    cout <<  fixed << setprecision(2) << "The cost per mile for the trip is: $" << costPerMile << endl;
    cout << endl;

    return 0;
}
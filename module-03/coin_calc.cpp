// NOTE: This template is to be used for discussion ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Jayson Louizos, Partner
# Lab:              Discussion #3
# Date:             October 5th, 2026
# Description:      This program calculates the coinage needed for a given amount.
# Input:            miles, milesPerGallon,PriceOfGas
# Output:           costPerMile,costOfTrip
# Sources:          None
#******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int dollars,quarters,dimes,nickles,pennies,intPrice;
    float price;

    //Welcome message
    cout << "Welcome to my change calculator program!!" << endl;
    cout << "Enter the change you need broken down: ";
    cin >> price;// Input the total price
    
    // Check if any change is needed
    if (price <= 0){
        cout << "No change is needed." << endl;
        return 0;
    }

    price *= 100; // Convert price to cents
    intPrice = static_cast<int>(price);

    // Calculate the number of each coin type
    dollars = intPrice / 100;
    quarters = intPrice % 100 / 25;
    dimes = intPrice % 25 / 10;
    nickles = intPrice % 25 % 10 / 05;
    pennies = intPrice % 25 % 10 % 5;
    
    // Outputting coinage with proper singular/plural forms
    if (dollars==1)
    {
        cout << dollars << " dollar" << endl;
    }
    else if (dollars > 1)
    {
        cout << dollars << " dollars" << endl;
    }
    if (quarters==1)
    {
        cout << quarters << " quarter" << endl;
    }
    else if (quarters > 1)
    {
        cout << quarters << " quarters" << endl;
    }
    
    if (dimes==1)
    {
        cout << dimes << " dime" << endl;
    }
    else if (dimes > 1)
    {
        cout << dimes << " dimes" << endl;
    }
    
    if (nickles==1)
    {
        cout << nickles << " nickle" << endl;
    }
    else if (nickles > 1)
    {
        cout << nickles << " nickles" << endl;
    }
    
    if (pennies==1)
    {
        cout << pennies << " penny" << endl;
    }
    else if (pennies > 1)
    {
        cout << pennies << " pennies" << endl;
    }
    cout << "Thank you for using the Change Calculator program!" << endl;

    return 0;
}
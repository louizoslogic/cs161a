// NOTE: This template is to be used for discussion ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Jayson Louizos
# Lab:              Assignment #2
# Date:             September 30, 2026
# Description:      This program calculates the cost of gas for a trip.
# Input:            oreos
# Output:           calories, servings
# Sources:          None
#******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int calories,oreos;
    float servings;

    // Welcome message
    cout << "Welcome to the Oreo Calculator!" << endl;
    cout << endl;
    cout << "Enter the number of Oreos eaten: ";
    cin >> oreos;// Input number of Oreos eaten
    cout << endl;

    // Calculate and display the calories and servings for the Oreos eaten
    servings = oreos / 5.0; // Calculate number of servings
    calories = servings * 160; // Assuming 160 calories per serving
    cout << oreos <<" Oreos equals " << servings << " servings!" << endl;
    cout << "You consumed " << calories << " calories." << endl;
    cout << endl;
    if (calories < 2399) {
        cout << "Keep eating Oreos!" << endl;
    }
    else {
        cout << "You ate an entire package of Oreos please stop." << endl;
    }
    return 0;
}
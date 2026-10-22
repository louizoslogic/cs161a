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

    // Welcome message
    cout << "Welcome to the Oreo Calculator!" << endl;
    cout << endl;
    cout << "Enter the number of Oreos eaten: ";
    cin >> oreos;// Input number of Oreos eaten
    cout << endl;

    // Calculate and display the calories and servings for the Oreos eaten
    double servings = static_cast<double>(oreos) / 5; // Calculate number of servings
    calories = static_cast<int>(servings * 160); // Assuming 160 calories per serving
    calories = calories / 100; // Convert to whole number of calories
    cout << oreos <<" Oreos equals " << servings << " servings!" << endl;
    cout << "You consumed " << calories << " calories." << endl;
    cout << endl;
    cout << "Keep eating Oreos!" << endl;

    return 0;
}
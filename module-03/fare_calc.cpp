/******************************************************************************
# Author:           Jayson Louizos
# Lab:              Assignment #3
# Date:             October 6th, 2026
# Description:      This program calculates the fare needed for a ferry.
# Input:            vehicle adults seniors youths
# Output:           price
# Sources:          None
#******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    char vehicle;
    double price;
    int adults,seniors,youths,bikes,numPassengers;
    cout<<"Welcome to the Washington State Ferries Fare Calculator!"<<endl;
    cout << endl;
    std::cout << std::left << std::setw(60) << "Fare Description" << "Ticket $" << endl;
    std::cout << std::left << std::setw(60) << "--------------------------------------" << "--------" << endl;
    std::cout << std::left << std::setw(60) << "Vehicle Under 14' (less than 168”) & Driver" << "$57.90" << endl;
    std::cout << std::left << std::setw(60) << "Adult (age 19 - 64)" << "$14.95" << endl;
    std::cout << std::left << std::setw(60) << "Senior (age 65 & over) / Disability" << "$7.40" << endl;
    std::cout << std::left << std::setw(60) << "Youth (age 6 - 18)" << "$5.55" << endl;
    std::cout << std::left << std::setw(60) << "Bicycle Surcharge (included with Vehicle)" << "$4.00" << endl;
    cout << endl;
    cout << "Are you riding a vehicle on the Ferry (Y/N): ";
    cin >> vehicle;
    cout << endl;
    if (vehicle == 'Y' || vehicle == 'y') {
        price = 57.90;
    }
    else if (vehicle == 'N' || vehicle == 'n') {
        price = 0.0;
    }
    else {
        cout<<"Error!! Invalid answer!! Please try again later!!!" << endl << endl;
        cout << "Thank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
    cout<<endl<<price<<endl;

    cout << "How many adults? ";
    cin >> adults;
    if (adults >= 0) {
        price += adults * 14.95;
    }
    else{
        cout << "Error!! Invalid number of adults!! Please try again later!!!" << endl << endl;
        cout << "Thank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
    cout << "How many seniors? ";
    cin >> seniors;
    if (seniors >= 0) {
        price += seniors * 7.40;
    }
    else{
        cout << "Error!! Invalid number of seniors!! Please try again later!!!" << endl << endl;
        cout << "Thank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
    cout << "How many youths? ";
    cin >> youths;
    if (youths >= 0) {
        price += youths * 5.55;
    }
    else{
        cout << "Error!! Invalid number of youths!! Please try again later!!!" << endl << endl;
        cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
        return 1;
    }
    if (vehicle == 'N' || vehicle == 'n') {
        cout << "How many bicycles? ";
        cin >> bikes;
        if (bikes >= 0) {
            price += bikes * 4.00;
        }
        else{
            cout << "Error!! Invalid number of bicycles!! Please try again later!!!" << endl << endl;
            cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
            return 1;
        }
    }
    numPassengers = adults + seniors + youths;
    if (numPassengers > 19) {
        cout << "Uh oh!! Too many people in your group. Split into " << (numPassengers / 20) + 1; 
        cout << " groups and try again!" << endl << endl;
        cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
        return 1;
    }

    
    cout << endl;
    cout << "Your total charge is $" << price << endl;
    cout << endl;
    if (price < 100.0) {
        cout << "If you spend $"<< 100-price << " more, you are eligible for a free adult ticket for the next trip." << endl << endl;
    }

    cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;
    return 0;
}
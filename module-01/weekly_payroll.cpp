/******************************************************************************
# Author:           Jayson Louizos
# Assignment:       PayRoll Calculator (CS161A)
# Date:             September 27, 2026
# Description:      This program calculates the weekly payroll for an employee 
based on the number of hours worked, hourly rate, and federal withholding rate.
# Input:            This program asks for the employee ID number, number of hours worked, hourly rate, and federal withholding rate.
# Output:           This program displays the gross pay, federal tax withholding, and net pay for the employee.
# Sources:          Assignment 1 specifications 
#******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int employeeID;
    float hourlyRate, hoursWorked; 
    float federalWithholdingRate, federalTaxWithholding; 
    float grossPay, netPay;

    //Welcome message
    cout << "Welcome to my Weekly Payroll program!!" << endl;
    cout << "Enter your employee ID number (numbers only): ";
    cin >> employeeID;// Input employee ID number
    cout << "Enter number of hours worked (whole numbers): ";
    cin >> hoursWorked;// Input number of hours worked
    cout << "Enter the hourly rate: ";
    cin >> hourlyRate;// Input hourly rate
    cout << "Enter the federal withholding rate: ";
    cin >> federalWithholdingRate; // Input federal withholding rate
    cout << endl;
    
    // Calculate and display payroll summary
    cout << "Calculating payroll summary:" << endl;
    // Calculate gross pay
    grossPay = hourlyRate * hoursWorked;
    cout << "Gross Pay: $" << grossPay << endl;
    // Calculate federal tax withholding
    federalTaxWithholding = grossPay * (federalWithholdingRate / 100);
    cout << "Federal Tax Withholding: $" << federalTaxWithholding << endl;
    // Calculate net pay
    netPay = grossPay - federalTaxWithholding;
    cout << "Net Pay: $" << netPay << endl;
    cout << endl;

    cout << "Thank you for using my Weekly Payroll program!!" << endl;
    return 0;
}


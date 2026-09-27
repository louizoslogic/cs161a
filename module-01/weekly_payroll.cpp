// weekly payroll program
// Author: Jayson Louizos (louizosjayson06@gmail.com)
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float hourlyRate, federalWithholdingRate, federalTaxWithholding, grossPay, netPay, hoursWorked;
    int employeeID;

    //Welcome message
    cout << "Welcome to my Weekly Payroll program!!" << endl;
    
    // Input employee ID number
    cout << "Enter your employee ID number (numbers only): ";
    cin >> employeeID;
    
    // Input number of hours worked
    cout << "Enter number of hours worked (whole numbers): ";
    cin >> hoursWorked;
    
    // Input hourly rate
    cout << "Enter the hourly rate: ";
    cin >> hourlyRate;

    // Input federal withholding rate
    cout << "Enter the federal withholding rate: ";
    cin >> federalWithholdingRate;
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


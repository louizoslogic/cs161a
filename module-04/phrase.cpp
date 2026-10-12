/******************************************************************************
# Author:          Jayson Louizos
# Assignment:      Assignment #4
# Date:            October 12th, 2026
# Description:     This program evaluates phrases and discovers if they have 
#                  the same words existing.
# Input:           phrase1, phrase2
# Output:          Subphrase verification and text
# Sources:         None
#******************************************************************************/
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
   string phrase1 = "";
   string phrase2 = "";
   size_t pos1 = 0;
   size_t pos2 = 0;
   string extracted1 = "";
   string extracted2 = "";

   cout << "Welcome to the Phrases and Subphrases program!" << endl;
   cout << "This program evaluates phrases and discovers "
        << "if they share subphrases." << endl;
   cout << endl;

   cout << "Enter Phrase 1: ";
   getline(cin, phrase1);
   cout << "You entered: " << phrase1 << endl;

   cout << "Enter Phrase 2: ";
   getline(cin, phrase2);
   cout << "You entered: " << phrase2 << endl;
   cout << endl;

   pos1 = phrase1.find(phrase2);
   if (pos1 != std::string::npos) {
      cout << phrase2 << " is a subphrase of " 
           << phrase1 << "." << endl;
      extracted1 = phrase1.substr(pos1, phrase2.length());
      cout << extracted1 << endl;
   }

   pos2 = phrase2.find(phrase1);
   if (pos2 != std::string::npos) {
      cout << phrase1 << " is a subphrase of " 
           << phrase2 << "." << endl;
      extracted2 = phrase2.substr(pos2, phrase1.length());
      cout << extracted2 << endl;
   }

   cout << endl;
   cout << "Thank you for using my program!" << endl;

   return 0;
}
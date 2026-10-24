/******************************************************************************
# Author:           Jayson Louizos
# Lab:              MidTerm
# Date:             October 23th, 2026
# Description:      This calculates the winner of a rock collecting contest.
# Input:            playerName1, playerName2, playerName3, playerRocks1, playerRocks2, playerRocks3
# Output:           Average, output Strings
# Sources:          None
#******************************************************************************/
#include <iomanip>
#include <iostream>


int main() {
    std::string playerName1, playerName2, playerName3;
    int playerRocks1, playerRocks2, playerRocks3;
    double average;
    std::cout << "Welcome to the Rock Collector Championships!" << std::endl;
    std::cout << std::endl;

    std::cout << "Enter player 1 name: ";
    std::getline(std::cin, playerName1); 
    std::cout << "How many rocks did " << playerName1 << " collect? ";
    std::cin >> playerRocks1;
    if(playerRocks1 < 0) {
        std::cout << "Invalid amount. 0 will be entered" << std::endl;
        playerRocks1 = 0;
    }
    std::cout<< std::endl;

    std::cin.ignore();
    std::cout << "Enter player 2 name: ";
    std::getline(std::cin, playerName2);
    std::cout << "How many rocks did " << playerName2 << " collect? ";
    std::cin >> playerRocks2;
    if(playerRocks2 < 0) {
        std::cout << "Invalid amount. 0 will be entered" << std::endl;
        playerRocks2 = 0;
    }
    std::cout<< std::endl;
    
    std::cin.ignore();
    std::cout << "Enter player 3 name: ";
    std::getline(std::cin, playerName3);
    std::cout << "How many rocks did " << playerName3 << " collect? ";
    std::cin >> playerRocks3;
    if(playerRocks3 < 0) {
        std::cout << "Invalid amount. 0 will be entered" << std::endl;
        playerRocks3 = 0;
    }
    std::cout << std::endl;
    if(playerRocks1 == playerRocks2 && playerRocks2 == playerRocks3) {
        std::cout << "It is a three way tie!" << std::endl;
    }
    else if(playerRocks1 == playerRocks2 && playerRocks1 > playerRocks3) {
        std::cout  << playerName1 << " and " << playerName2 << " are tied for first place!" << std::endl;
        std::cout << playerName3 << " is in second place!" << std::endl;
    }
    else if(playerRocks1 == playerRocks3 && playerRocks1 > playerRocks2) {
        std::cout << playerName1 << " and " << playerName3 << " are tied for first place!" << std::endl;
        std::cout << playerName2 << " is in second place!" << std::endl;
    }
    else if(playerRocks2 == playerRocks3 && playerRocks2 > playerRocks1) {
        std::cout << playerName2 << " and " << playerName3 << " are tied for first place!" << std::endl;
        std::cout << playerName1 << " is in second place!" << std::endl;
    }
    else if(playerRocks1 > playerRocks2 && playerRocks2 > playerRocks3) {
        std::cout << playerName1 << " is in first place!" << std::endl;
        std::cout << playerName2 << " is in second place!" << std::endl;
        std::cout << playerName3 << " is in third place!" << std::endl;
    }
    else if(playerRocks1 > playerRocks3 && playerRocks3 > playerRocks2) {
        std::cout << playerName1 << " is in first place!" << std::endl;
        std::cout << playerName3 << " is in second place!" << std::endl;
        std::cout << playerName2 << " is in third place!" << std::endl;
    }
    else if(playerRocks2 > playerRocks1 && playerRocks1 > playerRocks3) {
        std::cout << playerName2 << " is in first place!" << std::endl;
        std::cout << playerName1 << " is in second place!" << std::endl;
        std::cout << playerName3 << " is in third place!" << std::endl;
    }
    else if(playerRocks2 > playerRocks3 && playerRocks3 > playerRocks1) {
        std::cout << playerName2 << " is in first place!" << std::endl;
        std::cout << playerName3 << " is in second place!" << std::endl;
        std::cout << playerName1 << " is in third place!" << std::endl;
    }
    else if(playerRocks3 > playerRocks1 && playerRocks1 > playerRocks2) {
        std::cout << playerName3 << " is in first place !" << std::endl;
        std::cout << playerName1 << " is in second place!" << std::endl;
        std::cout << playerName2 << " is in third place!" << std::endl;
    }
    else if(playerRocks3 > playerRocks2 && playerRocks2 > playerRocks1) {
        std::cout << playerName3 << " is in first place!" << std::endl;
        std::cout << playerName2 << " is in second place!" << std::endl;
        std::cout << playerName1 << " is in third place!" << std::endl;
    }
    std::cout << std::endl;

    average = static_cast<double>(playerRocks1 + playerRocks2 + playerRocks3) / 3;
    std::cout << "The average number of rocks collected by the top three players is" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << average << " rocks!" << std::endl;
    std::cout << std::endl;
    std::cout << "Congradulations Rock Collectors!";
    return 0;
}
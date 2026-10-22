#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
	char player = 'r';
    char computer = 'r';
    int computerChoice = 0;
    bool win = false;
    std::string playerName = "";
    std::cout << "Enter player name: ";
    std::cin >> playerName;

    while(player == computer) {
        computerChoice = rand() % 3;
        std::cout << "Computer choice: " << computerChoice << std::endl;
        if (computerChoice == 0) {
            computer = 'r';
        } else if (computerChoice == 1) {
            computer = 'p';
        } else {
            computer = 's';
        }
        std::cout << "What is your play " << playerName << "?" << std::endl;
        std::cout << "Enter r, p, or s: ";
        std::cin >> player;
        std::cout << "Computer plays: " << computer << std::endl;
        std::cout << std::endl;
        if(player == computer) {
            std::cout << "It's a tie!" << std::endl;
        } else if(player == 'r' && computer == 's' || player == 'p' && computer == 'r' || player == 's' && computer == 'p') {
            std::cout << "You win!" << std::endl;
        } else {
            std::cout << "Computer wins!" << std::endl;
        }
    }
    std::cout << std::endl << "Thank you for playing!" << std::endl;
    
    
    
    return 0;
}

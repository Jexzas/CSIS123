#include <iostream>
#include "calculator.hpp"
#include <vector>
#include <string>

int main () {
    std::vector<Board> inventory;
    int counter = 0;
    int notCounter = 0;
    std::string boardName;
    double boardLength;
    double boardWidth;
    double boardDepth;
    while (notCounter < 1) {
        std::cout << "What species is the wood? \n";
        std::cin >> boardName;
        std::cout << "\n What's the length (inches)? \n";
        std::cin >> boardLength;
        std::cout << "\n What's the width? \n";
        std::cin >> boardWidth;
        std::cout << "\n What's the depth/thickness? \n";
        std::cin >> boardDepth;
        std::cout << "\n";
        inventory.push_back(Board(boardName, boardLength, boardWidth, boardDepth));
        inventory[counter].getBoard();
        std::cout << counter;
        counter++;
    }
}
#pragma once
#include <iostream>
#include "externVer.hpp"

// Function to draw the board
void drew(char board[3][3]) {
    std::cout << "_______________________\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "|";
        for (int j = 0; j < 3; j++) {
            std::cout << " " << board[i][j] << " |";
        }
        std::cout << "\n_______________________\n";
    }
}

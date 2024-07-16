#include <iostream>
#include "checkwin.hpp"
#include "draw.hpp"
#include "externVer.hpp"


int game() {
    for (turn = 0; turn < 9; turn++) {
        drew(board);

        while (true) {
            std::cout << "Player " << player << ", Enter row (0-2) and column (0-2): ";
            std::cin >> row >> col;

            if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2) {
                std::cout << "Invalid move. Try again.\n";
            }
            else {
                break;
            }
        }

        board[row][col] = player;

        if (checkwin(board, player)) {
            drew(board);
            std::cout << "Player " << player << " wins!\n";
            break;  // Exit the loop after a win
        }

        // Switch to the other player
        player = (player == 'X') ? 'O' : 'X';
    }

    // End of the game
    drew(board);

    // Check for a draw
    if (turn == 9 && !checkwin(board, 'X') && !checkwin(board, 'O')) {
        std::cout << "It's a draw!\n";
    }

    return 0;
}

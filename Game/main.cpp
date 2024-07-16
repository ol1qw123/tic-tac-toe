#include <iostream>
#include "game.hpp"
#include "checkwin.hpp"
#include "externVer.hpp"
#include "draw.hpp"

char board[3][3] = { {' ', ' ', ' '},
					 {' ', ' ', ' '},
					 {' ', ' ', ' '} };
char player = 'X';  // Player 'X' starts
int row, col;
int turn;

int main() {

	std::cout << "What's up\n";

	game();


}
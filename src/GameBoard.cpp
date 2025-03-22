#include <iostream>
#include <string>
#include "GameBoard.hpp"

#include "King.hpp"

GameBoard::GameBoard()
{
    // Todo place pieces on the board
    for (int i = 0; i < board_width; i++) {
        for (int j = 0; j < board_height; j++) {
            gameMatrix[i][j] = nullptr;
        }
    }
    std::cout << "Done";
};

std::string GameBoard::to_string() const
{
    return "Hello";
}

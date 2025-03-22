#ifndef GAME_BOARD_HPP
#define GAME_BOARD_HPP

#include <string>
#include <map>
#include "GamePiece.hpp"

extern std::map<Piece, std::string> startPositionMap;

class GameBoard
{
public:
    // Default Constructor
    GameBoard();

    std::string to_string() const;

private:
    unsigned char board_width = 8;
    unsigned char board_height = 8;
    GamePiece *gameMatrix[8][8];
};

#endif
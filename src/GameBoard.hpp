#ifndef GAME_BOARD_HPP
#define GAME_BOARD_HPP

#include <string>

class GameBoard {
    public:
        // Default Constructor
        GameBoard();

        std::string to_string() const;

    private:
        int* gameMatrix[8][8];
};

#endif
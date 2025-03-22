#ifndef KING_HPP
#define KING_HPP

#include "GamePiece.hpp"

class King : public GamePiece
{
public:
    King(bool is_black) : GamePiece(Piece::KING, is_black) {}
};

#endif
#include <iostream>
#include <map>
#include "GamePiece.hpp"

std::map<Piece, std::string> chessUnicodeMap = {
    {KING, "\u2654"},
    {QUEEN, "\u265A"},
    {ROOK, "\u2655"}};

GamePiece::GamePiece(Piece piece, bool is_black)
    : piece(piece), is_black(is_black)
{
    unicode_chess = chessUnicodeMap.at(piece);
    has_moved = false;
};

std::string GamePiece::to_string() const
{
    return this->unicode_chess;
}
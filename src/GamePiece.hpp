#ifndef GAME_PIECE_HPP
#define GAME_PIECE_HPP

#include <map>
#include <string>

enum Piece
{
  KING,
  QUEEN,
  ROOK,
  BISHOP,
  KNIGHT,
  PAWN
};

extern std::map<Piece, std::string> chessUnicodeMap;

class GamePiece
{
public:
  // Default Constructor
  GamePiece(Piece piece, bool is_black);

  std::string to_string() const;

private:
  Piece piece;
  std::string unicode_chess;
  bool is_black;
  bool has_moved;
};

#endif
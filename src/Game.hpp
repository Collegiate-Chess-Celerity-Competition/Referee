#ifndef GAME_HPP
#define GAME_HPP

#include "GameBoard.hpp"

class Game
{
public:
  // Default Constructor
  Game();

  void print_settings();

private:
  // Duration of entire chess game per player in seconds
  unsigned char game_time;
  // Additional time gained by a player after their move in milliseconds
  unsigned char move_incr;

  GameBoard gameBoard;
};

#endif
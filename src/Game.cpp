#include "Game.hpp"

#include <iostream>
#include "Game.hpp"

Game::Game()
    : game_time(30), move_incr(0)
{
    gameBoard = GameBoard();
};

void Game::print_settings()
{
    std::cout << "Hello world";
    //  std::cout << this->game_time;
}
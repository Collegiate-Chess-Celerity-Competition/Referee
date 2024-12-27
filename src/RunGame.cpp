#include <iostream>
#include <chrono>

#include "Game.hpp"

int main() {


    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    std::cout << "Game Beginning!" << std::endl;

    // Todo: Run game 
    Game cur_game;
    cur_game.print_settings();

    end = std::chrono::high_resolution_clock::now();
    
    std::cout << "Game Done in " << (end - start).count() << " seconds!" << std::endl;
}
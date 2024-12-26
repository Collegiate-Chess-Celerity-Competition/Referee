#include <iostream>
#include <chrono>

int main() {
  std::chrono::time_point<std::chrono::system_clock> start, end;
  start = std::chrono::high_resolution_clock::now();
  std::cout << "Game Beginning!" << std::endl;
  
  // Todo: Run game 

  end = std::chrono::system_clock::now();
  std::cout << "Game Done in " << (end - start).count() << " seconds!" << std::endl;
}
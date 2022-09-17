#include <iostream>
#include "box.h"
#include "checkerboard.h"

int main(){
  std::string result;
  result = box(3,5);
  std::cout << "box(3,5):\n";
  std::cout << result;
  std::cout << "\n\n"; 
  result = box(7,4);
  std::cout << "box(7,4):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator
  result = checkerboard(11,6);
  std::cout << "checkboard(11,6):\n";
  std::cout << result;
  std::cout << "\n\n";
  result = checkerboard(4,9);
  std::cout << "checkboard(4,9):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator
  
  return 0;
}

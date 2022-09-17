#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main(){
  std::string result;

  //BOX
  result = box(3,5);
  std::cout << "box(3,5):\n";
  std::cout << result;
  std::cout << "\n\n"; 
  result = box(7,4);
  std::cout << "box(7,4):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator

  //CHECKERBOARD
  result = checkerboard(11,6);
  std::cout << "checkboard(11,6):\n";
  std::cout << result;
  std::cout << "\n\n";
  result = checkerboard(4,9);
  std::cout << "checkboard(4,9):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator

  //CROSS
  result = cross(8);
  std::cout << "cross(8):\n";
  std::cout << result;
  std::cout << "\n\n";
  result = cross(7);
  std::cout << "cross(7):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator

  //LOWER TRIANGLE
  result = lower(6);
  std::cout << "lower(6):\n";
  std::cout << result;
  std::cout << "\n\n";
  result = lower(9);
  std::cout << "lower(9):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator

  //UPPER TRIANGLE
  result = upper(6);
  std::cout << "upper(6):\n";
  std::cout << result;
  std::cout << "\n\n";
  result = upper(9);
  std::cout << "upper(9):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator

  //TRAPEZOID
  result = trapezoid(12,5);
  std::cout << "trapezoid(12,5):\n";
  std::cout << result;
  std::cout << "\n\n";
  result = trapezoid(12,7);
  std::cout << "trapezoid(12,7):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator

  //CHECKERBOARD 3X3
  result = checkerboard3x3(16,11);
  std::cout << "checkerboard3x3(16,11):\n";
  std::cout << result;
  std::cout << "\n\n";
  result = checkerboard3x3(27,27);
  std::cout << "checkerboard3x3(27,27):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // seperator
  
  return 0;
}

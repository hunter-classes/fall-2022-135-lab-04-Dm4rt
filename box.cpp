#include <iostream>
#include "box.h"
std::string box(int width, int height){
  std::string shape;
  for(int x=0;x<height;x++){
    for(int y=0;y<width;y++){
      shape+="*";
    }
    shape+="\n";
  }
  return shape;
}

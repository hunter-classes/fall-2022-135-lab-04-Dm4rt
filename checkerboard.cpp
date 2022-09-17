#include <iostream>
#include "checkerboard.h"
std::string checkerboard(int width, int height){
  std::string shape;
  bool space=true;
  for(int x=0;x<height;x++){
    for(int y=0;y<width;y++){
      if(space){
	shape+="*";
	space=false;
      }
      else{
	shape+=" ";
	space=true;
      }
    }
    if(width%2==0){
      space=!space;
    }
    shape+="\n";
  }
  return shape;
}

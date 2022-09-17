#include <iostream>
#include "trapezoid.h"

std::string trapezoid(int width, int height){
  std::string shape;
  int boundA,boundB;
  if(height<=(width/2)){
    for(int y=0;y<height;y++){
      boundA=width-(width-y);
      boundB=width-y;
      for(int x=0;x<width;x++){
	if(x>=boundA&&x<boundB){
	  shape+="*";
	}
	else{
	  shape+=" ";
	}
	
      }
      shape+="\n";
    }
  }
  else{
    shape="Impossible shape!";
  }

  return shape;
}

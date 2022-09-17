#include <iostream>
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height){
  std::string shape;
  bool ast=true;
  for(int y=1;y<=height;y++){
    for(int x=1;x<=width;x++){
      if(ast){
	shape+="*";
	if(x%3==0){
	  ast=false;
	}
      }
      else{
	shape+=" ";
	if(x%3==0){
	  ast=true;
	}
      }
    }
    if(y%3!=0){
      ast=!ast;
    }
    shape+="\n";
  }
  return shape;
}

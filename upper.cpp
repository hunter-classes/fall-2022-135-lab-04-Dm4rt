#include <iostream>
#include "upper.h"

std::string upper(int length){
  std::string shape;
  for(int y=0;y<=length;y++){
    for(int x=0;x<length;x++){
      if(x>=y){
	shape+="*";
      }
      else{
	shape+=" ";
      }
    }
    shape+="\n";
  }
  return shape;
}

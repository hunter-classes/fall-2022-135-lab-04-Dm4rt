#include <iostream>
#include "cross.h"

std::string cross(int size){
  std::string shape;
  int posA,posB;
  int index=size-1;
  for(int y=0;y<size;y++){
    posA=index-(index-y);
    posB=index-y;
    for(int x=0;x<size;x++){
      if(x==posA||x==posB){
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

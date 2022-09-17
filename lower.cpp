#include <iostream>
#include "lower.h"

std::string lower(int length){
  std::string shape;
  for(int y=1;y<=length;y++){
    for(int x=0;x<y;x++){
      shape+="*";
    }
    shape+="\n";
  }
  return shape;
}

#include "Shape.h"

using namespace std;

Shape::Shape(string& color){
  this.color = color;
}

string Shape::getColor(){
  return color;
}

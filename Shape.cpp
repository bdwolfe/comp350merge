#include "Shape.h"

Shape::Shape(std::string& color) : color(color)
{}

std::string Shape::getColor() {
  return color;
}

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

class Shape{
 public:
  Shape(std::string& color);

  std::string getColor();

 private:
  std::string color;
};

#endif

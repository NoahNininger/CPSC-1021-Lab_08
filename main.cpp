#include <iomanip>
#include <iostream>
#include <vector>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"

using namespace std;

int main()
{
  Circle circle {2.0};                  // make an object named 'circle' from class Circle with radius initialized to 2.0
  Square square {2.0};                  // make an object named 'square' from class Square with side initialized to 2.0
  Rectangle rectangle {2.5, 3};         // make an object named 'rectangle' from class Rectangle with length initialized to 2.5 and width to 3.0
  Trapezoid trapezoid {2.5, 3.5, 4.0};  // make an object named 'trapezoid' from class Trapezoid with base1 initialized to 2.5, base2 to 3.5, and height to 4.0
  
  vector<Shape*>shapeVect {&circle, &square, &rectangle, &trapezoid};   // make a vector 'vector<Type>shapeVect {element0, element1, element2, element3}'
                                                                        // where 'Type' is a pointer to class Shape and each element is the memory address
                                                                        // of one of objects you have instantiated above

  // use a range-based for loop to print the name and area of each object using
  for (Shape * s : shapeVect)
    { cout << fixed << showpoint << setprecision(1) << "Area of " << s->printName() << " is: " << s->getArea() << endl; } // functions printName() and getArea() accessed through the base class pointer
  
  return 0;
}
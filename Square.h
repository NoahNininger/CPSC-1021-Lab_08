#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape     // inherits class Square publicly from class Shape
{
    private:
        double side;
    public:
        Square() = default;      // default constructor
        Square(double s) : Shape("Square"), side{s} {}  // constructor w/ user-initialized & hard-coded values

        double getArea();
};

#endif
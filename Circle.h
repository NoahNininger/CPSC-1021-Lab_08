#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape     // inherits class Circle publicly from class Shape
{
    private:
        double radius;
        double const PI {3.14};     // member variable PI initialized to 3.14
    public:
        Circle() = default;     // default constructor
        Circle(double r) : Shape("Circle"), radius{r} {}        // constructor w/ user-initialized & hard-coded values

        double getArea();
};

#endif
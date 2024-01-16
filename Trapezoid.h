#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid : public Shape      // inherits class Trapezoid publicly from class Shape
{
    private:
        double base1, base2, height;
    public:
        Trapezoid() = default;      // default constructor
        Trapezoid(double b1, double b2, double h) : Shape("Trapezoid"), base1{b1}, base2{b2}, height{h} {}  // constructor w/ user-initialized & hard-coded values

        double getArea();
};

#endif
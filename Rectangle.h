#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape      // inherits class Rectangle publicly from class Shape
{
    private:
        double length, width;
    public:
        Rectangle() = default;      // default constructor
        Rectangle(double l, double w) : Shape("Rectangle"), length{l}, width{w} {}      // constructor w/ user-initialized & hard-coded values

        double getArea();
};

#endif
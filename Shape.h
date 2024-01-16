#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

class Shape
{
    private:
        std::string name;
    public:
        Shape() = default;      // default constructor
        Shape(std::string n) : name{n} {}       // constructor w/ user-initialized values

        virtual std::string printName() final
            { return name; }

        virtual double getArea() = 0;       // pure virtual / abstract function for polymorphism
};

#endif
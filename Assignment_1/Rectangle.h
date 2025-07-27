#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    float length, breadth;
public:
    Rectangle(float l, float b) : Shape("Rectangle"), length(l), breadth(b) {}

    void calculateArea() override {
        cout << name << " Area: " << length * breadth << endl;
    }

    ~Rectangle() {
        cout << name << " object deleted.\n";
    }
};

#endif

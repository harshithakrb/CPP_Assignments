#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : Shape("Circle"), radius(r) {}

    void calculateArea() override {
        cout << name << " Area: " << 3.14159f * radius * radius << endl;
    }

    ~Circle() {
        cout << name << " object deleted.\n";
    }
};

#endif

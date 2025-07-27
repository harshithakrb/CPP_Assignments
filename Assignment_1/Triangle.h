#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) : Shape("Triangle"), base(b), height(h) {}

    void calculateArea() override {
        cout << name << " Area: " << 0.5f * base * height << endl;
    }

    ~Triangle() {
        cout << name << " object deleted.\n";
    }
};

#endif

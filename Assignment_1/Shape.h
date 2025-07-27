#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string name;
public:
    Shape(string n) : name(n) {}
    virtual void calculateArea() = 0; // pure virtual
    virtual ~Shape() {
        cout << name << " destroyed.\n";
    }
};

#endif

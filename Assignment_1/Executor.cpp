#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main() {
    Shape* shapes[3];

    shapes[0] = new Rectangle(10, 5);
    shapes[1] = new Circle(7);
    shapes[2] = new Triangle(6, 4);

    cout << "Calculating areas using runtime polymorphism:\n";
    for (int i = 0; i < 3; ++i) {
        shapes[i]->calculateArea();
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];  // Destructor will be called
    }

    return 0;
}

#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    cin >> c1;

    cout << "\nEnter second complex number:\n";
    cin >> c2;

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;

    cout << "\nResults:\n";
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;

    if (c1 == c2) {
        cout << "Both complex numbers are equal.\n";
    } else {
        cout << "Complex numbers are different.\n";
    }

    return 0;
}

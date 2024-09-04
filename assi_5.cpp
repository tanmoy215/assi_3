#include <iostream>
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle:\n";
    cin >> side1 >> side2 >> side3;

    // Check for equilateral triangle
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." <<endl;
    }
    // Check for isosceles triangle
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is isosceles." <<endl;
    }
    // If it's neither equilateral nor isosceles, it must be scalene
    else {
        cout << "The triangle is scalene." <<endl;
    }

    return 0;
}

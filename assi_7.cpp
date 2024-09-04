#include <iostream>
using namespace std;
int main() {
    // Declare variables for the coordinates of the point
    int x, y;

    // Input the coordinates of the point
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    // Check if the point is at the origin
    if (x == 0 && y == 0) {
    cout << "The point (" << x << ", " << y << ") lies at the origin." << endl;
    }
    // Check if the point lies on the x-axis
    else if (y == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the x-axis." << endl;
    }
    // Check if the point lies on the y-axis
    else if (x == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the y-axis." << std::endl;
    }
    // If the point lies neither on the x-axis, y-axis, nor the origin
    else {
        cout << "The point (" << x << ", " << y << ") lies in neither the x-axis nor the y-axis, and it is not at the origin." << std::endl
    }
    }
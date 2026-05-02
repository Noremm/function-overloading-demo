#include <iostream>
#include <cmath>   // for M_PI and pow()
using namespace std;

// Volume of cube
double volume(double a) {
    return a * a * a;
}

// Volume of cylinder
double volume(double r, double h) {
    return M_PI * pow(r, 2) * h;
}

// Volume of rectangular box
double volume(double l, double b, double h) {
    return l * b * h;
}

int main() {
    double side, radius, height, length, breadth;

    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of cube = " << volume(side) << endl;

    cout << "Enter radius and height of cylinder: ";
    cin >> radius >> height;
    cout << "Volume of cylinder = " << volume(radius, height) << endl;

    cout << "Enter length, breadth and height of rectangular box: ";
    cin >> length >> breadth >> height;
    cout << "Volume of rectangular box = " << volume(length, breadth, height) << endl;

    return 0;
}

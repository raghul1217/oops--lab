#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;

double calculateVolume(double sideLength)
{
    return pow(sideLength, 3);
}

double calculateVolume(double length, double width, double height)
{
    return length * width * height;
}

double calculateVolume(double radius, double height)
{
    return PI * pow(radius, 2) * height;
}

int main()
{
    double sideLength, length, width, height, radius, cylinderHeight;

    cout << "Enter the side length of the cube: ";
    cin >> sideLength;
    double cubeVolume = calculateVolume(sideLength);
    cout << "Volume of the cube: " << cubeVolume << endl;

    cout << "\nEnter the length, width, and height of the rectangular box: ";
    cin >> length >> width >> height;
    double boxVolume = calculateVolume(length, width, height);
    cout << "Volume of the rectangular box: " << boxVolume << endl;

    cout << "\nEnter the radius and height of the cylinder: ";
    cin >> radius >> cylinderHeight;
    double cylinderVolume = calculateVolume(radius, cylinderHeight);
    cout << "Volume of the cylinder: " << cylinderVolume << endl;

    return 0;
}


#include <iostream>
using namespace std;
// Abstract base class
class Shape
{
public:
    virtual double calculateVolume() = 0; // Pure virtual function
};
// Derived class for a sphere
class Sphere : public Shape
{
private:
    double radius;

public:
    Sphere(double r)
    {
        radius = r;
    }
    double calculateVolume()
    {
        return (4.0 / 3.0) * 3.1415 * radius * radius * radius;
    }
};
// Derived class for a cube
class Cube : public Shape
{
private:
    double side;

public:
    Cube(double s)
    {
        side = s;
    }
    double calculateVolume()
    {
        return side * side * side;
    }
};
// Derived class for a cylinder
class Cylinder : public Shape
{
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h)
    {
        radius = r;
        height = h;
    }
    double calculateVolume()
    {
        return 3.1415 * radius * radius * height;
    }
};
int main()
{
    // Creating objects of different shapes
    Shape *shape1 = new Sphere(3.0);
    Shape *shape2 = new Cube(4.0);
    Shape *shape3 = new Cylinder(2.0, 5.0);
    // Calculating and displaying the volumes
    cout << "Volume of sphere: " << shape1->calculateVolume() << endl;
    cout << "Volume of cube: " << shape2->calculateVolume() << endl;
    cout << "Volume of cylinder: " << shape3->calculateVolume() << endl;
    // Cleaning up the objects
    delete shape1;
    delete shape2;
    delete shape3;
    return 0;
}
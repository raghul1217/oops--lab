#include <iostream>
using namespace std;
// Abstract base class
class Shape
{
public:
    virtual double calculateArea() = 0; // Pure virtual function
};
// Derived class for a rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    double calculateArea()
    {
        return length * width;
    }
};
// Derived class for a circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    double calculateArea()
    {
        return 3.1415 * radius * radius;
    }
};
// Derived class for a triangle
class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }
    double calculateArea()
    {
        return 0.5 * base * height;
    }
};
int main()
{
    // Creating objects of different shapes
    Shape *shape1 = new Rectangle(4.0, 5.0);
    Shape *shape2 = new Circle(3.0);
    Shape *shape3 = new Triangle(6.0, 8.0);
    // Calculating and displaying the areas
    cout << "Area of rectangle: " << shape1->calculateArea() << endl;
    cout << "Area of circle: " << shape2->calculateArea() << endl;
    cout << "Area of triangle: " << shape3->calculateArea() << endl;
    // Cleaning up the objects
    delete shape1;
    delete shape2;
    delete shape3;
    return 0;
}
#include <iostream>
using namespace std;
const double PI = 3.14159;

inline double calculateCircleArea(double radius)
{
    return PI * radius * radius;
}

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateCircleArea(radius);

    cout << "The area of the circle is: " << area << endl;

    return 0;
}

#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imaginary;

public:
    // Method to read the real and imaginary parts
    void read()
    {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> imaginary;
    }
    // Method to display the complex number
    void display()
    {
        cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
    }
    // Overloading the + operator using a member function
    Complex operator+(const Complex &other)
    {
        Complex sum;
        sum.real = real + other.real;
        sum.imaginary = imaginary + other.imaginary;
        return sum;
    }
};
int main()
{
    Complex c1, c2, sum;
    cout << "Enter the first complex number:" << endl;
    c1.read();
    cout << "Enter the second complex number:" << endl;
    c2.read();
    sum = c1 + c2;
    cout << "Sum of the complex numbers:" << endl;
    sum.display();
    return 0;
}
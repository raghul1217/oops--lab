#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0.0, double imaginary = 0.0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void readRealPart()
    {
        cout << "Enter the real part: ";
        cin >> real;
    }

    void readImaginaryPart()
    {
        cout << "Enter the imaginary part: ";
        cin >> imaginary;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex operator+(const Complex &other) const
    {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    Complex operator-(const Complex &other) const
    {
        Complex result;
        result.real = real - other.real;
        result.imaginary = imaginary - other.imaginary;
        return result;
    }
};

int main()
{
    Complex c1, c2, sum, diff;

    c1.readRealPart();
    c1.readImaginaryPart();

    c2.readRealPart();
    c2.readImaginaryPart();

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();

    sum = c1 + c2;
    cout << "Sum: ";
    sum.display();

    diff = c1 - c2;
    cout << "Difference: ";
    diff.display();

    return 0;
}


#include <iostream>
using namespace std;
class Complex {
private:
    double realPart;
    double imaginaryPart;

public:
    void readRealPart() {
        cout << "Enter Real Part: ";
        cin >> realPart;
    }

    void readImaginaryPart() {
        cout << "Enter Imaginary Part: ";
        cin >> imaginaryPart;
    }

    Complex add(const Complex& other) const {
        Complex sum;
        sum.realPart = realPart + other.realPart;
        sum.imaginaryPart = imaginaryPart + other.imaginaryPart;
        return sum;
    }

    Complex subtract(const Complex& other) const {
        Complex difference;
        difference.realPart = realPart - other.realPart;
        difference.imaginaryPart = imaginaryPart - other.imaginaryPart;
        return difference;
    }

    void display() const {
        cout << realPart;
        if (imaginaryPart >= 0)
            cout << " + " << imaginaryPart << "i";
        else
            cout << " - " << -imaginaryPart << "i";
        cout << endl;
    }
};

int main() {
    Complex complex1, complex2;

    cout << "Enter the first complex number:\n";
    complex1.readRealPart();
    complex1.readImaginaryPart();

    cout << "\nEnter the second complex number:\n";
    complex2.readRealPart();
    complex2.readImaginaryPart();

    Complex sum = complex1.add(complex2);
    Complex difference = complex1.subtract(complex2);

    cout << "\nSum of the complex numbers: ";
    sum.display();

    cout << "Difference of the complex numbers: ";
    difference.display();

    return 0;
}


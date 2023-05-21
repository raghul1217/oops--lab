#include <iostream>
#include <complex>

template <typename T>
T addThreeValues(T a, T b, T c)
{
    return a + b + c;
}

int main()
{
    int num1 = 5, num2 = 10, num3 = 15;
    int sum1 = addThreeValues(num1, num2, num3);
    std::cout << "Sum of three integers: " << sum1 << std::endl;

    double decimal1 = 2.5, decimal2 = 3.7, decimal3 = 1.2;
    double sum2 = addThreeValues(decimal1, decimal2, decimal3);
    std::cout << "Sum of three decimals: " << sum2 << std::endl;

    std::complex<double> comp1(1.0, 2.0), comp2(2.0, 3.0), comp3(3.0, 4.0);
    std::complex<double> sum3 = addThreeValues(comp1, comp2, comp3);
    std::cout << "Sum of three complex numbers: " << sum3 << std::endl;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int number)
{
    int originalNumber = number;
    int numDigits = 0;
    int sum = 0;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        numDigits++;
    }

    originalNumber = number;
    while (originalNumber != 0)
    {
        int digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    return (sum == number);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
    {
        cout << number << " is an Armstrong number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
void interchangeValues(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Before interchange: num1 = " << num1 << ", num2 = " << num2 << endl;

    interchangeValues(num1, num2);

    cout << "After interchange: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}


#include <iostream>
using namespace std;
void swapValues(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapValues(&a, &b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

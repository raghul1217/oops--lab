#include <iostream>
using namespace std;
int factorial(int n) {
    int result = 1;
    
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

int main() {
    int N;

    std::cout << "Enter a positive integer: ";
    std::cin >> N;

    int result = factorial(N);

    std::cout << "Factorial of " << N << " is " << result << std::endl;

    return 0;
}


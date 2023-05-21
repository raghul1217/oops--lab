#include <iostream>
#include <cmath>
using namespace std;
double calculateCompoundInterest(double principal, double time, double rate = 0.12) {
    double amount = principal * pow(1 + rate, time);
    double compoundInterest = amount - principal;
    return compoundInterest;
}

int main() {
    double principal, time;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time period (in years): ";
    cin >> time;

    double compoundInterest = calculateCompoundInterest(principal, time);

    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}


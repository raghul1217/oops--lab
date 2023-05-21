#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b)
{
    return a + b;
}
// Function to add two floating-point numbers
float add(float a, float b)
{
    return a + b;
}
// Function to concatenate two strings
string add(const string &str1, const string &str2)
{
    return str1 + str2;
}
int main()
{
    int num1 = 5, num2 = 10;
    float float1 = 1.5, float2 = 2.5;
    string str1 = "Hello", str2 = "World";
    // Add two integers
    int sumInt = add(num1, num2);
    cout << "Sum of integers: " << sumInt << endl;
    // Add two floating-point numbers
    float sumFloat = add(float1, float2);
    cout << "Sum of floating-point numbers: " << sumFloat << endl;
    // Concatenate two strings
    string concatStr = add(str1, str2);
    cout << "Concatenated string: " << concatStr << endl;
    return 0;
}

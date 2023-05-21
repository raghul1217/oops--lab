#include <iostream>
using namespace std;
// Custom exception class for age out of range
class AgeOutOfRangeException : public exception
{
public:
    const char *what() const throw()
    {
        return "Age out of range!";
    }
};
// Function to validate age
void validateAge(int age)
{
    if (age < 18 || age > 21)
    {
        throw AgeOutOfRangeException();
    }
}
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    try
    {
        validateAge(age);
        cout << "Age is within the range." << endl;
    }
    catch (AgeOutOfRangeException &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
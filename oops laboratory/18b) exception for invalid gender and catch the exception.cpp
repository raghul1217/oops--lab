#include <iostream>
#include <exception>
using namespace std;
 class InvalidGenderException : public exception
{
public:
    const char *what() const throw()
    {
        return "Invalid gender exception: Gender must be 'M' or 'F'.";
    }
};
void validateGender(char gender)
{
    if (gender != 'M' && gender != 'F')
    {
        throw InvalidGenderException();
    }
}
int main()
{
    char gender;
    cout << "Enter gender (M/F): ";
    cin >> gender;
    try
    {
        validateGender(gender);
        cout << "Gender is valid." << endl;
    }
    catch (const InvalidGenderException &ex)
    {
        cout << "Exception caught: " << ex.what() << endl;
    }
    return 0;
}

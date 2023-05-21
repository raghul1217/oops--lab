#include <iostream>
using namespace std;
// Custom exception class for marks out of range
class MarksOutOfRangeException : public exception
{
public:
    const char *what() const throw()
    {
        return "Marks out of range!";
    }
};
// Function to validate marks
void validateMarks(int marks)
{
    if (marks < 0 || marks > 100)
    {
        throw MarksOutOfRangeException();
    }
}
int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    try
    {
        validateMarks(marks);
        cout << "Marks are within the range." << endl;
    }
    catch (MarksOutOfRangeException &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
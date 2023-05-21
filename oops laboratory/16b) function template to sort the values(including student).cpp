#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student
{
private:
    int id;
    string name;
    float percentage;

public:
    // Constructor
    Student(int i, string n, float p)
    {
        id = i;
        name = n;
        percentage = p;
    }
    // Getter for percentage
    float getPercentage() const
    {
        return percentage;
    }
    // Method to display student details
    void display() const
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
// Function template to sort values
template <typename T>
void sortValues(vector<T> &values)
{
    sort(values.begin(), values.end());
}
int main()
{
    // Create a vector of integers
    vector<int> numbers = {3, 1, 4, 2, 5};
    cout << "Before sorting integers: ";
    for (const auto &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
    // Sort the integers
    sortValues(numbers);
    cout << "After sorting integers: ";
    for (const auto &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
    // Create a vector of Student objects
    vector<Student> students = {
        Student(1, "John", 75.5),
        Student(2, "Alice", 82.0),
        Student(3, "Bob", 90.25)};
    cout << "\nBefore sorting students:" << endl;
    for (const auto &student : students)
    {
        student.display();
        cout << endl;
    }
    // Sort the students based on percentage
    sortValues(students);
    cout << "After sorting students:" << endl;
    for (const auto &student : students)
    {
        student.display();
        cout << endl;
    }
    return 0;
}
#include <iostream>
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
    // Overloading the < operator
    bool operator<(const Student &other)
    {
        return percentage < other.percentage;
    }
    // Overloading the > operator
    bool operator>(const Student &other)
    {
        return percentage > other.percentage;
    }
    // Method to display student details
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
int main()
{
    Student s1(1, "John", 75.5);
    Student s2(2, "Alice", 82.0);
    cout << "Student 1 details:" << endl;
    s1.display();
    cout << "Student 2 details:" << endl;
    s2.display();
    if (s1 < s2)
    {
        cout << "Student 1 has a lower percentage than Student 2." << endl;
    }
    else if (s1 > s2)
    {
        cout << "Student 1 has a higher percentage than Student 2." << endl;
    }
    else
    {
        cout << "Student 1 and Student 2 have the same percentage." << endl;
    }
    return 0;
}
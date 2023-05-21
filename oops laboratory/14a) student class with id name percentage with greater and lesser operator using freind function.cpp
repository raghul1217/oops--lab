#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;
    float percentage;

public:
    // Default constructor
    Student() {}
    // Parameterized constructor
    Student(int i, string n, float p)
    {
        id = i;
        name = n;
        percentage = p;
    }
    // Friend function to overload the >> operator for input
    friend istream &operator>>(istream &in, Student &s)
    {
        cout << "Enter ID: ";
        in >> s.id;
        cout << "Enter Name: ";
        in >> s.name;
        cout << "Enter Percentage: ";
        in >> s.percentage;
        return in;
    }
    // Friend function to overload the << operator for output
    friend ostream &operator<<(ostream &out, const Student &s)
    {
        out << "ID: " << s.id << endl;
        out << "Name: " << s.name << endl;
        out << "Percentage: " << s.percentage << endl;
        return out;
    }
};
int main()
{
    Student s;
    cout << "Enter student details:" << endl;
    cin >> s;
    cout << "Student details:" << endl;
    cout << s;
    return 0;
}
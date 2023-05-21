#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int registerNumber;
    string name;

public:
    Student(int regNum, const string &studentName)
        : registerNumber(regNum), name(studentName) {}

    void readDetails()
    {
        cout << "Enter Register Number: ";
        cin >> registerNumber;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayDetails() const
    {
        cout << "Register Number: " << registerNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Personal : public Student
{
private:
    string fatherName;
    string address;

public:
    Personal(int regNum, const string &studentName, const string &father, const string &addr)
        : Student(regNum, studentName), fatherName(father), address(addr) {}

    void readPersonalDetails()
    {
        readDetails();
        cout << "Enter Father's Name: ";
        getline(cin, fatherName);
        cout << "Enter Address: ";
        getline(cin, address);
    }

    void displayPersonalDetails() const
    {
        displayDetails();
        cout << "Father's Name: " << fatherName << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    Personal student(0, "", "", "");

    student.readPersonalDetails();
    cout << endl;

    cout << "Student Details:" << endl;
    student.displayPersonalDetails();

    return 0;
}

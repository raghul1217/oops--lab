#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int registerNumber;
    string name;
    int subjectGrades[6];
    double cgpa;

public:
    void readRegisterNumber() {
        cout << "Enter Register Number: ";
        cin >> registerNumber;
    }

    void readName() {
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void readSubjectGrades() {
        cout << "Enter Six Subject Grades:\n";
        for (int i = 0; i < 6; i++) {
            cout << "Grade " << i + 1 << ": ";
            cin >> subjectGrades[i];
        }
    }

    void calculateCGPA() {
        int totalGrades = 0;
        for (int i = 0; i < 6; i++) {
            totalGrades += subjectGrades[i];
        }
        cgpa = (totalGrades) / 6;
    }

    void displayDetails() const {
        cout << "Register Number: " << registerNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Subject Grades: ";
        for (int i = 0; i < 6; i++) {
            cout << subjectGrades[i] << " ";
        }
        cout << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    const int ARRAY_SIZE = 3; 
    Student students[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Enter details for Student " << i + 1 << ":\n";
        students[i].readRegisterNumber();
        students[i].readName();
        students[i].readSubjectGrades();
        students[i].calculateCGPA();
        cout << endl;
    }

    cout << "Details of Students:\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Student " << i + 1 << ":\n";
        students[i].displayDetails();
        cout << endl;
    }

    return 0;
}


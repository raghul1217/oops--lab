#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int registerNumber;
    string name;
    int marks[6];
    string result;
    float percentage;

public:
    void readData() {
        cout << "Enter Register Number: ";
        cin >> registerNumber;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks for six subjects:\n";
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateResultAndPercentage() {
        int totalMarks = 0;
        for (int i = 0; i < 6; i++) {
            totalMarks += marks[i];
        }

        percentage = static_cast<float>(totalMarks) / 6;

        if (percentage >= 50) {
            result = "Pass";
        } else {
            result = "Fail";
        }
    }

    void displayDetails() {
        cout << "Register Number: " << registerNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks for six subjects:\n";
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Result: " << result << endl;
    }
};

int main() {
    const int numOfStudents = 3;
    Student students[numOfStudents];

    for (int i = 0; i < numOfStudents; i++) {
        cout << "Enter details for Student " << i + 1 << ":\n";
        students[i].readData();
        students[i].calculateResultAndPercentage();
    }

    for (int i = 0; i < numOfStudents; i++) {
        cout << "\nDetails of Student " << i + 1 << ":\n";
        students[i].displayDetails();
    }

    return 0;
}


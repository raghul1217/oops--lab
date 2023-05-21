#include <iostream>
#include <fstream>
using namespace std;
struct Person
{
    int id;
    string name;
    int age;
};
int main()
{
    // Create an array of Person objects
    Person people[] = {
        {1, "John", 25},
        {2, "Alice", 30},
        {3, "Bob", 35}};
    // Open the binary file for writing
    ofstream outputFile("people.dat", ios::binary);
    if (!outputFile)
    {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }
    // Write the array of Person objects to the file
    outputFile.write(reinterpret_cast<const char *>(people), sizeof(people));
    outputFile.close();
    // Open the binary file for reading
    ifstream inputFile("people.dat", ios::binary);
    if (!inputFile)
    {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }
    // Read and display the contents of the file
    Person person;
    while (inputFile.read(reinterpret_cast<char *>(&person), sizeof(person)))
    {
        cout << "ID: " << person.id << endl;
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << endl;
    }
    inputFile.close();
    return 0;
}

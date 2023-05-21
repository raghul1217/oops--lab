#include <iostream>
#include <algorithm>
using namespace std;
template <typename T, int SIZE>
class Array
{
private:
    T data[SIZE];

public:
    // Method to read values into the array
    void readValues()
    {
        cout << "Enter " << SIZE << " values: ";
        for (int i = 0; i < SIZE; i++)
        {
            cin >> data[i];
        }
    }
    // Method to display the values in the array
    void displayValues()
    {
        cout << "Values in the array: ";
        for (int i = 0; i < SIZE; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    // Method to sort the values in the array
    void sortValues()
    {
        sort(data, data + SIZE);
    }
};
int main()
{
    // Create an Array object of type int with size 5
    Array<int, 5> intArray;
    // Read values into the array
    intArray.readValues();
    // Display the values
    intArray.displayValues();
    // Sort the values
    intArray.sortValues();
    // Display the sorted values
    intArray.displayValues();
    return 0;
}
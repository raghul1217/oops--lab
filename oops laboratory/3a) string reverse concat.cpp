#include <iostream>
#include <string>
using namespace std;
class String {
	string name;
	int length;
	public:
	void readString() {
		cout << "Enter a string: ";
		getline(cin, name);
		length = name.length();
	}
	void concatenateString( String& other) {
		name += other.name;
		length = name.length();
	}
	void reverseString() {
		string reversed;
		for (int i = length - 1; i >= 0; i--) {	
		reversed += name[i];
	}
	name = reversed;
	}
	void displayString()  {
	cout << "String: " << name << endl;
	cout << "Length: " << length << endl;
	}
};
int main() {
	String string1, string2;
	cout << "Enter the first string:" << endl;
	string1.readString();
	cout << "Enter the second string:" << endl;
	string2.readString();
	string1.concatenateString(string2);
	cout << "Concatenated string:" << endl;
	string1.displayString();
	cout << "Reversed string:" << endl;
	string1.reverseString();
	string1.displayString();
	return 0;
}

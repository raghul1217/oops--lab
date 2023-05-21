#include <iostream>
#include <string>
using namespace std;
class String
{
    public:
	string str;
    String(const string &s) : str(s) {}

    friend String operator+(const String &lhs, const String &rhs)
    {
        String result(lhs.str + rhs.str);
        return result;
    }

    friend bool operator==(const String &lhs, const String &rhs)
    {
        return (lhs.str == rhs.str);
    }

    friend bool operator!=(const String &lhs, const String &rhs)
    {
        return !(lhs == rhs);
    }
};

int main()
{
    String s1("Hello");
    String s2("World");

    String s3 = s1 + s2;
    cout << "Concatenated string: " << s3.str << endl;

    if (s1 == s2)
    {
        cout << "s1 is equal to s2." << endl;
    }
    else
    {
        cout << "s1 is not equal to s2." << endl;
    }

    if (s1 != s2)
    {
        cout << "s1 is not equal to s2." << endl;
    }
    else
    {
        cout << "s1 is equal to s2." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class String
{
private:
    string str;

public:
    String(const string &s) : str(s) {}

    bool operator<(const String &other) const
    {
        return str.length() < other.str.length();
    }

    bool operator>(const String &other) const
    {
        return str.length() > other.str.length();
    }
};

int main()
{
    String s1("abc");
    String s2("a");

    if (s1 < s2)
    {
        cout << "s1 is less than s2." << endl;
    }
    else
    {
        cout << "s1 is not less than s2." << endl;
    }

    if (s1 > s2)
    {
        cout << "s1 is greater than s2." << endl;
    }
    else
    {
        cout << "s1 is not greater than s2." << endl;
    }

    return 0;
}

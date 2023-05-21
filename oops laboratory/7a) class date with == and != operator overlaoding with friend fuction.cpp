#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year) : day(day), month(month), year(year) {}

    friend bool operator==(const Date &date1, const Date &date2);

    friend bool operator!=(const Date &date1, const Date &date2);
};

bool operator==(const Date &date1, const Date &date2)
{
    return (date1.day == date2.day) && (date1.month == date2.month) && (date1.year == date2.year);
}

bool operator!=(const Date &date1, const Date &date2)
{
    return !(date1 == date2);
}

int main()
{
    Date date1(21, 5, 2023);
    Date date2(21, 5, 2023);
    Date date3(15, 2, 2022);

    if (date1 == date2)
    {
        cout << "Date 1 is equal to Date 2." << endl;
    }
    else
    {
        cout << "Date 1 is not equal to Date 2." << endl;
    }

    if (date1 != date3)
    {
        cout << "Date 1 is not equal to Date 3." << endl;
    }
    else
    {
        cout << "Date 1 is equal to Date 3." << endl;
    }

    return 0;
}

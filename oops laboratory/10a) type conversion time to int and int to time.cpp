#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h = 0, int m = 0, int s = 0)
        : hour(h), minute(m), second(s) {}

    static Time intToTime(int seconds)
    {
        int h = seconds / 3600;
        int m = (seconds % 3600) / 60;
        int s = seconds % 60;
        return Time(h, m, s);
    }

    operator int() const
    {
        return hour * 3600 + minute * 60 + second;
    }

    void displayTime() const
    {
        cout << hour << " hours, " << minute << " minutes, " << second << " seconds" << endl;
    }
};

int main()
{

    int totalSeconds = 3660;
    Time time = Time::intToTime(totalSeconds);
    time.displayTime();

    Time currentTime(1, 1, 0);
    int seconds = static_cast<int>(currentTime);
    cout << "Total seconds: " << seconds << endl;

    return 0;
}

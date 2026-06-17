/*Write a C++ program to find the total number of minutes between two given times (formatted with a colon and am or pm).

Example:
Sample Input: Minutes between 12:01PM to 12:00PM:
Sample Output: Minutes between 12:01PM to 12:00PM: 1439*/

#include <iostream>
using namespace std;

int TimetoMinutes(string time)
{
    string period = time.substr(time.size() - 2);
    string t = time.substr(0, time.size() - 2);

    int colonPos = t.find(':');
    int hours = stoi(t.substr(0, colonPos));
    int minutes = stoi(t.substr(colonPos + 1));
    if (period == "AM")
    {
        if (hours == 12)
            hours = 0;
    }
    else
    {
        if (hours != 12)
            hours += 12;
    }
    return hours * 60 + minutes;
}
int main(int argc, char const *argv[])
{
    string time1, time2;
    cout << "Input time 1: ";
    cin >> time1;
    cout << "Input time 2: ";
    cin >> time2;

    int minutes1 = TimetoMinutes(time1);
    int minutes2 = TimetoMinutes(time2);

    int totalMinutes = minutes2 - minutes1;
    if (totalMinutes < 0)
    {
        totalMinutes += 24 * 60;
    }
    cout << "Minutes between " << time1 << " to " << time2 << ": " << totalMinutes << endl;

    return 0;
}

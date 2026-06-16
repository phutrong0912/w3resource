/*Write a C++ program to display all the leap years between two given years.
If there is no leap year in the given period,display a suitable message.
Note: Range of the two given years: ( 0 < year1 = year2 < 3,000).*/
#include <iostream>
using namespace std;

bool leapyear(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int y1, y2;
    cout << "Input Year 1: ";
    cin >> y1;
    cout << "Input Year 2: ";
    cin >> y2;
    bool found = false;
    for (int y = y1; y <= y2; y++)
    {
        if (leapyear(y))
        {
            found = true;
            cout << "Leap year is: " << y << endl;
        }
    }
    if (found != true)
        cout << "No exist leap year ";
    return 0;
}

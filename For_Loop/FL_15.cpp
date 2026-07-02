/*Write a C++ program that asks the user to enter positive integers in order to process count, maximum, minimum, and average or terminate the process with -1.

Sample Output:
Your input is for termination. Here is the result below:
Number of positive integers is: 4
The maximum value is: 9
The minimum value is: 3
The average is 6.00*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    int count = 0, sum = 0;
    int maxv, minv;

    for (;;)
    {
        cout << "Input a positive integer (-1 to stop): ";
        cin >> num;

        if (num == -1)
            break;

        if (num <= 0)
            continue;

        if (count == 0)
        {
            maxv = minv = num;
        }
        else
        {
            if (num > maxv)
                maxv = num;
            if (num < minv)
                minv = num;
        }

        sum += num;
        count++;
    }

    cout << "\nYour input is for termination. Here is the result below:\n";

    if (count > 0)
    {
        cout << "Number of positive integers is: " << count << endl;
        cout << "The maximum value is: " << maxv << endl;
        cout << "The minimum value is: " << minv << endl;
        cout << fixed << setprecision(2);
        cout << "The average is: " << (double)sum / count << endl;
    }
    else
    {
        cout << "No positive integers were entered.\n";
    }

    return 0;
}
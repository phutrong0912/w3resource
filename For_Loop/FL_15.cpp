/*Write a C++ program that asks the user to enter positive integers in order to process count, maximum, minimum, and average or terminate the process with -1.
Sample Output:
Your input is for termination. Here is the result below:
Number of positive integers is: 4
The maximum value is: 9
The minimum value is: 3
The average is 6.00*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0, max = 0, min = 0;
    int sum = 0;
    bool flag = false; 

    cout << "Input positive integers: " << endl;

    while (true)
    {
        cin >> n;
        if (n == -1)
            break;

        if (n > 0)
        {
            count++;
            sum += n;

            if (!flag)
            {
                max = n;
                min = n;
                flag = true;
            }
            else
            {
                if (n > max)
                    max = n;
                if (n < min)
                    min = n;
            }
        }
    }

    if (!flag)
    {
        cout << "No positive integers were entered." << endl;
    }
    else
    {
        double average = sum / count;
        cout << "Your input is for termination. Here is the result below:" << endl;
        cout << "Number of positive integers is: " << count << endl;
        cout << "The maximum value is: " << max << endl;
        cout << "The minimum value is: " << min << endl;
        cout << "The average is: " << average << endl;
    }
    return 0;
}
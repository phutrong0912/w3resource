/* Write a C++ program that accepts various numbers and computes the difference between the highest number and
the lowest number. All input numbers should be real numbers between 0 and 1,000,000.
The output (real numbers) may include an error of 0.01 or less.*/

#include <iostream>
using namespace std;

int main()
{
    float n, max = 0, min = 1000000;
    cout << "Input various numbers: ";
    while (cin >> n)
    {
        if (n > max)
        {
            max = n;
        }
        if (n < min)
        {
            min = n;
        }
    }
    cout << "Difference between the highest number and the lowest number: " << max - min;
}
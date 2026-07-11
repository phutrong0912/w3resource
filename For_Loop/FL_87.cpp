/*Write a C++ program to create and display an original three-digit numbers using 1, 2, 3, 4.
Also count how many three-digit numbers are there.
Sample Output:
The three-digit numbers are:
123 124 132 134 142 143 213 214 231 234 241 243 312 314 321 324 341 342 412 413 421 423 431 432
Total number of the three-digit-number is: 24
*/
#include <iostream>
using namespace std;

int printThreeDigitNumbers()
{
    int count = 0;
    cout << "The three-digit numbers are: " << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                if (i != j && j != k && i != k)
                {
                    cout << i << j << k << " ";
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    cout << "The three-digit numbers are:" << endl;
    int total = printThreeDigitNumbers();
    cout << endl;
    cout << "Total number of the three-digit-number is: "<< total << endl;
    return 0;
}
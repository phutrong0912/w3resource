/*Write a C++ program to find the numbers in a given string and calculate the sum of all numbers.
Example:
Sample Input: w3resource from 2008
Sample Output: Sum of the numbers: 2011*/

#include <iostream>
#include <string>
using namespace std;

int sumNumbers(string s)
{
    int sum = 0;
    int number = 0;

    for (int i = 0; i <= s.length(); i++)
    {
        if (i < s.length() && s[i] >= '0' && s[i] <= '9')
        {
            number = number * 10 + (s[i] - '0');
        }
        else
        {
            sum += number;
            number = 0;
        }
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Sum of the numbers: " << sumNumbers(s) << endl;
    return 0;
}

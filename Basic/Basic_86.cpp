/*Write a C++ program to add up all the digits between two given integers. Add all the digits between 11 and 16.
Example: Add up all the digits between 39 and 41 is: 21*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input number 1: ";
    cin >> a;
    cout << "Input number 2: ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        int n = i;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
    }
    cout << "Add up all the digits between " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
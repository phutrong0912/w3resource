/*Write a program in C++ to convert a decimal number to a binary number.

Sample Output:
Input a decimal number: 35
The binary number is: 100011*/

#include <iostream>
using namespace std;
void printBinary(int decimal)
{
    if (decimal == 0)
    {
        cout << 0;
        return;
    }
    int bits[32];
    int index = 0;
    while (decimal > 0)
    {
        bits[index++] = decimal % 2;
        decimal /= 2;
    }
    while (index--)
    {
        cout << bits[index];
    }
}
int main(int argc, char const *argv[])
{
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    cout << "The binary number is: ";
    printBinary(decimal);
    return 0;
}

/*Write a program in C++ to convert a decimal number to a binary number.

Sample Output:
Input a decimal number: 35
The binary number is: 100011*/
#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int decimal)
{
    if (decimal == 0)
        return "0";
    string bi;
    while (decimal > 0)
    {
        bi = char(decimal % 2 + '0') + bi;
        decimal /= 2;
    }
    return bi;
}

int main()
{
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    cout << "The binary number is: " << decimalToBinary(decimal) << endl;
    return 0;
}
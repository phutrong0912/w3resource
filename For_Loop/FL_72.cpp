/*Write a C++ program to convert a decimal number to an octal number.

Sample Output:
Input a decimal number: 15
The octal number is: 17*/

#include <iostream>
#include <string>
using namespace std;

string decimalToOctal(int decimal)
{
    if (decimal == 0)
        return "0";
    string octal;
    while (decimal > 0)
    {
        octal = char(decimal % 8 + '0') + octal;
        decimal /= 8;
    }
    return octal;
}

int main(int argc, char const *argv[])
{
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    cout << "The octal number is: " << decimalToOctal(decimal) << endl;
    return 0;
}

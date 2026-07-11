/*Write a C++ program to convert an octal number to a hexadecimal number.

Sample Output:
Input any octal number: 77
The hexadecimal value of 77 is: 3F*/

#include <iostream>
#include <string>
using namespace std;

int octalToDecimal(string octal)
{
    int decimal = 0;
    for (int i = 0; i < octal.length(); i++)
    {
        decimal = decimal * 8 + (octal[i] - '0');
    }
    return decimal;
}
string decimalToHexadecimal(int decimal)
{
    if (decimal == 0)
        return "0";
    string hexadecimal;
    const string hexDigits = "0123456789ABCDEF";
    while (decimal > 0)
    {
        hexadecimal = hexDigits[decimal % 16] + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}

string octalToHexadecimal(string octal)
{
    return decimalToHexadecimal(octalToDecimal(octal));
}

int main(int argc, char const *argv[])
{
    string octal;
    cout << "Input any octal number: ";
    cin >> octal;
    cout << "The equivalent hexadecimal number: " << octalToHexadecimal(octal) << endl;
    return 0;
}

/*Write a C++ program to convert a hexadecimal number to an octal number.

Sample Output:
Input any 32-bit Hexadecimal Number: 5f
The equivalant octal number is: 137*/

#include <iostream>
#include <string>
using namespace std;

int hexadecimalToDecimal(string hexadecimal)
{
    int decimal = 0;
    for (int i = 0; i < hexadecimal.length(); i++)
    {
        decimal *= 16;
        char digit = hexadecimal[i];
        if (digit >= '0' && digit <= '9')
            decimal += digit - '0';
        else if (digit >= 'A' && digit <= 'F')
            decimal += digit - 'A' + 10;
        else if (digit >= 'a' && digit <= 'f')
            decimal += digit - 'a' + 10;
    }
    return decimal;
}

string decimalToOctal(int decimal)
{
    if (decimal == 0)
        return "0";
    string Octal;
    while (decimal > 0)
    {
        Octal = char(decimal % 8 + '0') + Octal;
        decimal /= 8;
    }
    return Octal;
}
string hexadecimalToBinary(string hexadecimal)
{
    return decimalToOctal(hexadecimalToDecimal(hexadecimal));
}

int main(int argc, char const *argv[])
{
    string hexadecimal;
    cout << "Input any 32-bit Hexadecimal Number: ";
    cin >> hexadecimal;
    cout << "The value in decimal number is: " << hexadecimalToBinary(hexadecimal) << endl;
    return 0;
}
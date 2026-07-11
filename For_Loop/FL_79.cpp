/*Write a C++ program to convert a hexadecimal number to a decimal number.

Sample Output:
Input any 32-bit Hexadecimal Number: 25
The value in decimal number is: 37*/

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

int main(int argc, char const *argv[])
{
    string hexadecimal;
    cout << "Input any 32-bit Hexadecimal Number: ";
    cin >> hexadecimal;
    cout << "The value in decimal number is: "<< hexadecimalToDecimal(hexadecimal) << endl;
    return 0;
}
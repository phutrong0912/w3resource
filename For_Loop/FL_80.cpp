/*Write a C++ program to convert a hexadecimal number to a binary number.

Sample Output:
Input any 32-bit Hexadecimal Number: 5f
The equivalant binary number is: 1011111*/

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
string hexadecimalToBinary(string hexadecimal){
    return decimalToBinary(hexadecimalToDecimal(hexadecimal));
}

int main(int argc, char const *argv[])
{
    string hexadecimal;
    cout << "Input any 32-bit Hexadecimal Number: ";
    cin >> hexadecimal;
    cout << "The value in decimal number is: "<< hexadecimalToBinary(hexadecimal) << endl;
    return 0;
}
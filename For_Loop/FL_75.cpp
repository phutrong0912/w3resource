/*Write a C++ program to convert a binary number to an octal number.
Sample Output:
Input a binary number: 1011
The equivalent octal value of 1011 is : 13*/

#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary)
{
    int decimal = 0;
    for (int i = 0; i < binary.length(); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}
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

string binaryToOctal(string binary)
{
    return decimalToOctal(binaryToDecimal(binary));
}

int main(int argc, char const *argv[])
{
    string binary;
    cout << "Input a binary number: ";
    cin >> binary;
    cout << "The equivalent octal value of " << binary << " is : " << binaryToOctal(binary) << endl;
    return 0;
}

/*Write a C++ program to convert a binary number to a hexadecimal number.

Sample Output:
Input a binary number: 1011
The hexadecimal value: B*/

#include <iostream>
#include <string>
using namespace std;

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

string binaryToHexadecimal(string binary)
{
    return decimalToHexadecimal(binaryToDecimal(binary));
}
int main(int argc, char const *argv[])
{
    string binary;
    cout << "Input a binary number: ";
    cin >> binary;
    cout << "The hexadecimal value: " << binaryToHexadecimal(binary) << endl;
    return 0;
}

/*Write a program in C++ to convert a decimal number to a hexadecimal number.
Sample Output:
Input a decimal number: 43
The hexadecimal number is : 2B*/

#include <iostream>
#include <string>
using namespace std;

string decimalToHexadecimal(int decimal)
{
    if (decimal == 0)
        return "0";
    string hexadecimal;
    string hexDigits = "0123456789ABCDEF";
    while (decimal > 0)
    {
        hexadecimal = hexDigits[decimal % 16] + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}

int main(int argc, char const *argv[])
{
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    cout << "The hexadecimal number is : "<< decimalToHexadecimal(decimal) << endl;
    return 0;
}

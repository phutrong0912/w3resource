/*Write a C++ program to convert an octal number to a binary number. C & C++

Sample Output:
Input any octal number: 17
The equivalent binary number: 1111*/

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
string decimalToBinary(int decimal)
{
    if (decimal == 0)
        return "0";

    string binary;
    while (decimal > 0)
    {
        binary = char(decimal % 2 + '0') + binary;
        decimal /= 2;
    }
    return binary;
}

string octalToBinary(string octal)
{
    return decimalToBinary(octalToDecimal(octal));
}
int main(int argc, char const *argv[])
{
    string octal;
    cout << "Input any octal number: ";
    cin >> octal;
    cout << "The equivalent binary number: " << octalToBinary(octal) << endl;
    return 0;
}

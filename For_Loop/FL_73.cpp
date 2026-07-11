/*Write a C++ program to convert a binary number to a decimal number.

Sample Output:
Input a binary number: 1011
The decimal number: 11*/

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

int main(int argc, char const *argv[])
{
    string binary;
    cout << "Input a binary number: ";
    cin >> binary;
    cout << "The decimal number: "<< binaryToDecimal(binary) << endl;
    return 0;
}

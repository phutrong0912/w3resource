/*Write a program in C++ to find the two's complement of a binary number.

Sample Output:
Input a 8 bit binary value: 01101110
The original binary = 01101110
After ones complement the value = 10010001
After twos complement the value = 10010010*/
#include <iostream>
#include <string>
using namespace std;

void twosComplement(string binary)
{
    cout << "The original binary = " << binary << endl;
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';
    }

    cout << "After ones complement the value = " << binary << endl;
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
            break;
        }
        else
        {
            binary[i] = '0';
        }
    }
    cout << "After twos complement the value = " << binary << endl;
}

int main(int argc, char const *argv[])
{
    string bi;
    cout << "Input a 8 bit binary value: ";
    cin >> bi;
    twosComplement(bi);
    return 0;
}

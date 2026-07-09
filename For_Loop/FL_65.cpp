/*Write a program in C++ to find the two's complement of a binary number.

Sample Output:
Input a 8 bit binary value: 01101110
The original binary = 01101110
After ones complement the value = 10010001
After twos complement the value = 10010010*/
#include <iostream>
#include <string>
using namespace std;

string onesComplement(string bi)
{
    for (int i = 0; i < bi.length(); i++)
    {
        if (bi[i] == '0')
            bi[i] = '1';
        else
            bi[i] = '0';
    }
    return bi;
}

string twosComplement(string bi)
{
    bi = onesComplement(bi);

    for (int i = bi.length() - 1; i >= 0; i--)
    {
        if (bi[i] == '0')
        {
            bi[i] = '1';
            return bi;
        }
        bi[i] = '0';
    }

    return bi;
}

int main(int argc, char const *argv[])
{
    string bi;
    cout << "Input a 8 bit binary value: ";
    cin >> bi;
    string one = onesComplement(bi);

    cout << "The original binary = " << bi << endl;
    cout << "After ones complement the value = " << one << endl;
    cout << "After twos complement the value = " << twosComplement(bi) << endl;

    return 0;
}

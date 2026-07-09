/*Write a program in C++ to find the one's complement of a binary number.

Sample Output:
Input a 8 bit binary value: 10100101
The original binary = 10100101
After ones complement the number = 01011010*/

#include <iostream>
#include <string>
using namespace std;

string Binary(string bi)
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

int main(int argc, char const *argv[])
{
    string bi;
    cout << "Input a 8 bit binary value: ";
    cin >> bi;
    cout << "The original binary = " << bi << endl;
    cout << "After one's complement = " << Binary(bi) << endl;
    return 0;
}

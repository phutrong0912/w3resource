/*Write a program in C++ to find the one's complement of a binary number.

Sample Output:
Input a 8 bit binary value: 10100101
The original binary = 10100101*/

#include <iostream>
#include <string>
using namespace std;

void Binary(string bi)
{
    cout << "The original binary = " << bi << endl;
    cout << "After one's complement = ";
    for (int i = 0; i < bi.length(); i++)
    {
        if (bi[i] == '0')
            cout << '1';
        else
            cout << '0';
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    string bi;
    cout << "Input a 8 bit binary value: ";
    cin >> bi;
    Binary(bi);
    return 0;
}

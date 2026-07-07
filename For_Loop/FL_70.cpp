/*Write a program in C++ to convert a decimal number to a binary number.

Sample Output:
Input a decimal number: 35
The binary number is: 100011*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    if (decimal == 0) {
        cout << "The binary number is: 0";
        return 0;
    }
    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    cout << "The binary number is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    return 0;
}

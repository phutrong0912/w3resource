/*Write a C++ program to convert an octal number to a decimal number.
Sample Output:
Input any octal number: 17
The equivalent decimal number: 15*/

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
int main(int argc, char const *argv[])
{
    
    string octal;
    cout << "Input any octal number: ";
    cin >> octal;
    cout << "The equivalent decimal number: " << octalToDecimal(octal) << endl;
    return 0;
}

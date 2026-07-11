/*Write a program in C++ to compare two numbers.

Sample Output:
Input the first integer: 25
Input the second integer: 15
25 != 15
25 > 15
25 >= 15*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int first, second;
    cout << "Input the first integer: ";
    cin >> first;
    cout << "Input the second integer: ";
    cin >> second;
    if (first == second)
        cout << first << " == " << second << endl;
    if (first != second)
        cout << first << " != " << second << endl;
    if (first < second)
        cout << first << " < " << second << endl;
    if (first > second)
        cout << first << " > " << second << endl;
    if (first <= second)
        cout << first << " <= " << second << endl;
    if (first >= second)
        cout << first << " >= " << second << endl;
    return 0;
}

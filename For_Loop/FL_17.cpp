/*Write a program in C++ to print a square pattern with the # character.

Sample Output:
Print a pattern like square with # character:
--------------------------------------------------
Input the number of characters for a side: 4
# # # #
# # # #
# # # #
# # # #*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input the number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "#" << " ";
        }
        cout << endl;
    }
    return 0;
}

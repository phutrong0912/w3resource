/*Write a program in C++ to display the numbers in reverse order.
Sample Output:
Input a number: 12345
The number in reverse order is : 54321*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, reverse = 0;
    cout << "Input a number: ";
    cin >> n;
    for (int i = n; i > 0; i /= 10)
    {
        reverse = reverse * 10 + i % 10;
    }
    cout << "The number in reverse order is : " << reverse;
    return 0;
}

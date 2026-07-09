/*Write a C++ program to display the pattern using digits with left justified spacing and the highest columns appearing in the first row in descending order.

Sample Output:

 Input number of rows: 5
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
            cout << j << " ";
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}

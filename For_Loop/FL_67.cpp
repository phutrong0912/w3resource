/*Write a program in C++ to calculate the sum of the series 1.2+2.3+3.4+...
Each term i is formed by i.(i+1) — e.g. 9.10 (displayed as 9.1), 10.11
Sample Output:
Input the last integer between 1 to 98: 10
1.2 + 2.3 + 3.4 + 4.5 + 5.6 + 6.7 + 7.8 + 8.9 + 9.1 + 10.11
The sum of the series = 59.61 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
     int n;
    double num, sum = 0,  m;
    cout << " Input the last integer between 1 to 98 without fraction you want to add: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i < 9)
        {
            m = .1;
        }
        else
        {
            m = .01;
        }
        num = i + ((i + 1) * (m));
        sum += num;
        cout << num;

        if (i < n)
        {
            cout << " + ";
        }
    }

    cout << "\n The sum of the series = " << sum << endl;
    return 0;
}

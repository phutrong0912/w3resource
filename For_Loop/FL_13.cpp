/*Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).

Sample Output:
Input the value for nth term: 5
1 = 1
1+2 = 3
1+2+3 = 6
1+2+3+4 = 10
1+2+3+4+5 = 15
The sum of the above series is: 35*/

#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    int t = 0;
    string s;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            s = "1";
        else
            s += "+" + to_string(i);
        t += i;
        cout << s << " = " << t << endl;
        sum += t;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input the value : ";
    cin >> n;
    int result = sum(n);
    cout << "The sum of the above series is: " << result << endl;
    return 0;
}
/* Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive.
Sample Input:
100, 199
250, 300
105, 190
Sample Output:
1
0
1*/

#include <iostream>
using namespace std;

bool check(int a, int b)
{
    return(a>=100 && a<=200) || (b>=100 && b<=200);
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Input two integers: ";
    cin >> a >> b;
    cout << check(a, b) << endl;
    return 0;
}
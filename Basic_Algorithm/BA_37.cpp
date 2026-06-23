/*Write a C++ program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
Sample Input:
12, 17
2, 17
22, 17
20, 0
Sample Output:
29
30
39
30*/

#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    int sum = a + b;
    return (sum >= 10 && sum <= 20) ? 30 : sum;
}

int main()
{
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout<< Sum(a, b) << endl;
    return 0;
}
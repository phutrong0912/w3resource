/*Write a C++ program to find the larger of two given integers. 
However if the two integers have the same remainder when divided by 7, 
then return the smaller integer. If the two integers are the same, return 0.
Sample Input:
11, 21
11, 20
10, 10
Sample Output:
21
20
0*/

#include <iostream>
using namespace std;

int test(int a, int b) {
    if (a == b) return 0;
    if (a % 7 == b % 7) {
        return a < b ? a : b;
    }
    return a > b ? a : b;
}

int main() {
    int a, b;
    cout << "Input 2 number: ";
    cin >> a >> b;
    cout << test(a, b) << endl;
    return 0;
}
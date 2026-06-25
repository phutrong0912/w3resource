/*Write a C++ program to check three given integers (small, medium and large) 
and return true if the difference between small and medium and the difference between medium and large is same.
Sample Input:
4, 5, 6
7, 12, 13
-1, 0, 1
Sample Output:
1
0
1*/

#include <iostream>
using namespace std;

bool test(int x, int y, int z) {
    return (y - x == z - y);
}

int main() {
    int x, y, z;
    cout << "Input 3 numbers: ";
    cin >> x >> y >> z;
    cout << (test(x, y, z)) << endl;
    return 0;
}
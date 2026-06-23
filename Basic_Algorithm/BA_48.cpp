/*Write a C++ program to check three given integers and return true if one of them is 20 lower than one of the others.
Sample Input:
11, 21, 31
11, 22, 31
10, 20, 15
Sample Output:
1
1
0*/

#include <iostream>

using namespace std;

bool test(int x, int y, int z)
{
    return abs(x - y) == 20 || abs(x - z) == 20 || abs(y - z) == 20;
}

int main()
{
    int x, y, z;
    cout<<"Input 3 numbers: ";
    cin >> x >> y >> z;
    cout << test(x, y, z)<<endl;
}
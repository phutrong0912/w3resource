/*Write a C++ program to check if y is greater than x, and z is greater than y from three given integers x,y,z.
Sample Input:
1, 2, 3
4, 5, 6
-1, 1, 0
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    return x < y && y < z;
}

int main()
{
    int x, y, z;
    cout << "Input three numbers: ";
    cin >> x >> y >> z;
    cout << check(x, y, z);
    return 0;
}
/*Write a C++ program to check if one given temperature is less than 0 and the other is greater than 100.
Sample Input:
120, -1
-1, 120
2, 120
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

bool check(int t1, int t2)
{
    return (t1 < 0 && t2 > 100) || (t1 > 100 && t2 < 0);
}

int main(int argc, char const *argv[])
{
    int t1, t2;
    cout << "Input two temperatures: ";
    cin >> t1 >> t2;
    cout << check(t1, t2) << endl;
    return 0;
}
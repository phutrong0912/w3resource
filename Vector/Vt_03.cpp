/*Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.
Example:
Input: 2
Input an integer value: Create an n x n matrix by said integer:
2 2
2 2*/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input an integer value: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n, n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }

    return 0;
}

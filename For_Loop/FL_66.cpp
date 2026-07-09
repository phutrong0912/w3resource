/*Write code to create a checkerboard pattern with the words "black" and "white".

Sample Output:
Input number of rows: 5
black-white-black-white-black
white-black-white-black-white
black-white-black-white-black
white-black-white-black-white
black-white-black-white-black*/

#include <iostream>
using namespace std;

void checkerboard(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "black";
            else
                cout << "white";

            if (j != n - 1)
                cout << "-";
        }

        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    checkerboard(n);
    return 0;
}

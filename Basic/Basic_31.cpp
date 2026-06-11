/* Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows.

Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5
5 5
5 5
5 5
5555*/

#include <iostream>
using namespace std;    
int main() {
    int num;
    cin >> num;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 0 || i == 5 || j == 0 || j == 3) {
                cout << num;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

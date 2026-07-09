/*Write a program that will print the first N numbers for a specific base.

Sample Output:
Print the first N numbers for a specific base:
The number 11 in base 10 = 1*(10^1)+1*(10^0)=11
Similarly the number 11 in base 7 = 1*(7^1)+1*(7^0)=8
----------------------------------------------------------------
Input the number of term: 15
Input the base: 9
The numbers in base 9 are:
1 2 3 4 5 6 7 8 10 11 12 13 14 15 16*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, bs, r, q, num;
    cout << " Input the number of term: ";
    cin >> n;
    cout << " Input the base: ";
    cin >> bs;
    cout << " The numbers in base " << bs << " are: " << endl;
    for (int i = 1; i <= n; i++)
    {
        r = i % bs;
        q = i / bs;
        num = q * 10 + r;
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

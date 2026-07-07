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

/*Write a program in C++ to input any number and print it in words. Mathematics
Sample Output:
Input any number: 8309
Eight Three Zero Nine*/

#include <iostream>
using namespace std;

void printWords(int n)
{
    if (n == 0)
    {
        cout << "Zero";
        return;
    }
    int m = 0;
    for (int i = n; i > 0; i /= 10)
    {
        m = m * 10 + i % 10;
    }
    for (int i = m; i > 0; i /= 10)
    {
        switch (i % 10)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input any number: ";
    cin >> n;
    printWords(n);

    return 0;
}
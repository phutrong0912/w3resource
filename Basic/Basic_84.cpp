/*Write a C++ program to check whether the sequence of the numbers in a given array is an "Arithmetic" or "
Geometric" sequence. Return -1 if the sequence is not "Arithmetic" or "Geometric".
From Wikipedia
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the
difference between the consecutive terms is constant. Difference here means the second minus the first.
For instance, the sequence 5, 7, 9, 11, 13, 15, . . . is an arithmetic progression with common difference of 2.
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after 
the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio. 
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. 
Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
Example:
Sample Input: int nums1[] = { 1, 3, 5, 7 }
Sample Output: Arithmetic sequence */

#include <iostream>
using namespace std;
bool Arithmetic(int a[], int n)
{
    int d = a[1] - a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] != d)
            return false;
    }
    return true;
}
bool Geometric(int a[], int n)
{

    int r = a[1] / a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] / a[i - 1] != r)
            return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int n,a[100];
    cout << "Input size of array: ";
    cin >> n;
    cout << "Input elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (Arithmetic(a, n))
    {
        cout << "Arithmetic sequence" << endl;
    }
    else if (Geometric(a, n))
    {
        cout << "Geometric sequence" << endl;
    }
    else
    {
        cout << "the sequence is not Arithmetic or Geometric" << endl;
    }

    return 0;
}

/*Write a C++ program to find the next more powerful element of every element of a given array of integers.
Ignore those elements that have no greater element.*/

#include <iostream>
#include <stack>
using namespace std;

void nextGreater(int a[], int n, int result[])
{
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= a[i])
            st.pop();

        if (st.empty())
            result[i] = -1;
        else
            result[i] = st.top();

        st.push(a[i]);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int result[100];
    nextGreater(a, n, result);
    cout << "Next greater elements:\n";
    for (int i = 0; i < n; i++)
    {
        if (result[i] != -1)
            cout << a[i] << " -> " << result[i] << endl;
    }
    return 0;
}

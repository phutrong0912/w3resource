/*Write a C++ program to find the most frequent element in an array of integers.*/
#include <iostream>
#include <unordered_map>
using namespace std;

int mostFrequent(int a[], int n)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
        freq[a[i]]++;

    int maxFreq = 0;
    int element = a[0];

    for (auto it : freq)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            element = it.first;
        }
    }

    return element;
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int element, frequency;
    cout << "Most frequent element: " << mostFrequent(a,n)<< endl;

    return 0;
}

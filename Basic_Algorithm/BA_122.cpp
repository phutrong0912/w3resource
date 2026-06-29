/*Write a C++ program to check a positive integer and return true if it contains the number 3. Otherwise return false.
Test Data:
(143) -> 1
(678) -> 0
(963) -> 1*/

#include <iostream>
#include <string>
using namespace std;

bool check(int num)
{
    string s = to_string(num);
    return s.find('3') != string::npos;
}

int main()
{
    int num;
    cout << "Input number: ";
    cin >> num;

    cout << check(num) << endl;

    return 0;
}
/*Write a C++ program to convert a given number into hours and minutes. 
Separate the number of hours and minutes with a colon.
For example if a given number is 67 the output should be 1:7*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number: ";
    cin >> n;
    int hours = n / 60;
    int minutes = n % 60;
    cout << hours << ":" << minutes;
    return 0;
}

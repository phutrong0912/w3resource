/*Write a program in C++ to find the length of a string without using the library function. Programming
Sample Output:
Input a string: w3resource.com
The string contains 14 number of characters.
So, the length of the string w3resource.com is:14*/

#include <iostream>
using namespace std;

int length(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    cout << "Input a string: ";
    cin.getline(str, 100);
    int len = length(str);
    cout << "The string contains " << len << " number of characters." << endl;
    cout << "So, the length of the string " << str << " is: " << len << endl;

    return 0;
}
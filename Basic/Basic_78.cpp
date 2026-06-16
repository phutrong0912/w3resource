/*Write a C++ program to sum all positive integers in a sentence.
Sample string: There are 12 chairs, 15 desks, 1 blackboard and 2 fans.
Output: 30*/

#include <iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int sum = 0, num = 0;
    cout << "Sample string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
        }
        else
        {
            sum += num;
            num = 0;
        }
    }
    cout << "Output: " << sum;
    return 0;
}

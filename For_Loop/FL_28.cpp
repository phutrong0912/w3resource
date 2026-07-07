/*Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9. Mathematics

Sample Output:
Numbers between 100 and 200, divisible by 9:
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int s = 0;
    cout << "Numbers between 100 and 200, divisible by 9:"<<endl;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            cout << i << " ";
            s += i;
        }
    }
    cout << endl;
    cout << "The sum: " << s;
    return 0;
}
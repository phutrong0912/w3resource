/*61. Print ASCII Characters with Their Values

Write a C++ program that prints all ASCII characters with their values.

Sample Output:
Input the starting value for ASCII characters: 65
Input the ending value for ASCII characters: 75
The ASCII characters:
65 --> A
66 --> B
67 --> C
68 --> D
69 --> E
70 --> F
71 --> G
72 --> H
73 --> I
74 --> J
75 --> K*/

#include <iostream>
using namespace std;

void printASCII(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << i << " --> " << char(i) << endl;
    }
}

int main(int argc, char const *argv[])
{
    int start, end;
    cout << "Input the starting value for ASCII characters: ";
    cin >> start;
    cout << "Input the ending value for ASCII characters: ";
    cin >> end;
    printASCII(start, end);
    return 0;
}

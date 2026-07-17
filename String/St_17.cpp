/*Write a C++ program to find all combinations of well-formed brackets from a given pair of parentheses.
Example:
n = 2
[[]] [][]
n = 3
[[]] [][] [[[]]] [[][]] [[]][] [][[]] [][][]*/
#include <iostream>
#include <string>
using namespace std;

void generate(string s, int open, int close, int n)
{
    if (open == n && close == n)
    {
        cout << s << " ";
        return;
    }
    if (open < n)
        generate(s + "[", open + 1, close, n);
    if (close < open)
        generate(s + "]", open, close + 1, n);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of pairs: ";
    cin >> n;
    generate("", 0, 0, n);
    cout << endl;
    return 0;
}
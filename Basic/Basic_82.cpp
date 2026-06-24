/*Write a C++ program that reads a list of pairs of a word and a page number,
 and prints the word and a list of the corresponding page numbers.*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int n;
    map<string, vector<int>> m;
    cout << "Input word and number: ";
    while (cin >> s >> n)
    {
        m[s].push_back(n);
    }
    for (auto word : m)
    {
        cout << word.first;
        for (int i = 0; i < (word.second).size(); i++)
            cout << word.second[i] << " " << endl;
    }
    return 0;
}

/*Write a C++ program to check whether a given string is a subsequence of another given string. Return 1 for true and 0 for false.
Example:
word1: apple
subse1: apl
Is subse1 is the subsequence of word1? 1
word2: apple
subse2: ppe
Is subse2 is the subsequence of word2? 1
word3: ACGGTGTCGTGCTATGCTGATGCTGACTTATATGCTA
subse3: CGTTCGGCTATGCTTCTACTTATTCTA
Is subse3 is the subsequence of word3? 1
word4: CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA
subse4: CGTTCGGCTATGCZTTCTACTTATTCTA
Is subse4 is the subsequence of word4? 0*/

#include <iostream>
#include <string>
using namespace std;

int Subsequence(string word, string sub)
{
    int i = 0, j = 0;
    while (i < word.length() && j < sub.length())
    {
        if (word[i] == sub[j])
            j++;

        i++;
    }
    return j == sub.length();
}

int main(int argc, char const *argv[])
{
    string word, sub;
    cout << "Input word: ";
    getline(cin,word);
    cout << "Input subsequence: ";
    getline(cin,sub);
    cout << "Is subsequence? "<< Subsequence(word, sub) << endl;
    return 0;
}

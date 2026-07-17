/*Write a C++ program to convert a given non-negative integer into English words.
Example:
Sample Input: 12
Sample Output: Twelve
Sample Input: 29
Sample Output: Twenty Nine*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ones[] = {
    "Zero", "One", "Two", "Three", "Four",
    "Five", "Six", "Seven", "Eight", "Nine",
    "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
    "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
};

string tens[] = {
    "", "", "Twenty", "Thirty", "Forty",
    "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
};

string units[] = {
    "", "Thousand", "Million", "Billion",
    "Trillion", "Quadrillion", "Quintillion"
};

string below1000(long long n)
{
    if (n == 0)
        return "";
    if (n < 20)
        return ones[n];

    if (n < 100)
    {
        string result = tens[n / 10];
        if (n % 10)
            result += " " + ones[n % 10];
        return result;
    }

    string result = ones[n / 100] + " Hundred";
    if (n % 100)
        result += " " + below1000(n % 100);

    return result;
}

string numberToWords(long long n)
{
    if (n == 0)
        return "Zero";
    vector<string> parts;
    while (n > 0)
    {
        parts.push_back(below1000(n % 1000));
        n /= 1000;
    }
    string result;
    for (int i = parts.size() - 1; i >= 0; i--)
    {
        if (parts[i].empty())
            continue;

        if (!result.empty())
            result += " ";

        result += parts[i];

        if (!units[i].empty())
            result += " " + units[i];
    }

    return result;
}

int main(int argc, char const *argv[])
{
    long long n;
    cout << "Input a non-negative integer: ";
    cin >> n;
    cout << numberToWords(n) << endl;
    return 0;
}
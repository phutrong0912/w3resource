/*Write a C++ program to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false.

Example:
1 2 5 0 3 6 7
Check consecutive numbers in the said vector! 0*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isConsecutive(vector<int> nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1] + 1) 
            return false;
    }

    return true;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Input vector: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << isConsecutive(nums);

    return 0;
}

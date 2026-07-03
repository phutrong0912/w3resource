/*Write a program in C++ to display n terms of natural numbers and their sum. 
Sample Output:
Input a number of terms: 7
The natural numbers upto 7th terms are:
1 2 3 4 5 6 7
The sum of the natural numbers is: 28*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum=0,n;
    cout<<"Input a number of terms: ";
    cin>>n;
    cout << "The natural numbers upto "<<n<< "th terms are : "<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
        sum+=i;
    }
    cout<<endl;
    cout<<"The sum of the natural numbers is: "<<sum;
    return 0;
}
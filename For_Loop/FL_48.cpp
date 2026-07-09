/*Write a program in C++ to display the pyramid pattern using the alphabet.

Sample Output:

 Input the number of Letters (less than 26) in the Pyramid: 5          
        A                                                              
      A B A                                                            
    A B C B A                                                          
  A B C D C B A                                                        
A B C D E D C B A
*/

#include<iostream>
using namespace std;

void pyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << char('A' + j) << " ";
        for (int j = i - 1; j >= 0; j--)
            cout << char('A' + j) << " ";
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;
    pyramid(n);
    return 0;
}

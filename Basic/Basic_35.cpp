/*  Write a program in C++ to compute the specified expressions and print the output.

Sample Output:
Compute the specified expressions and print the output:
------------------------------------------------------------
Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : 2.13889*/

#include <iostream>
using namespace std;

int main(){
    double result = (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5);
    cout << "Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : " << result << endl;
    return 0;
}
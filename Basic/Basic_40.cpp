/*Write a C++ program to print the area and perimeter of a rectangle.

Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2*/

#include<iostream>
using namespace std;

int main(){
    double width,height;
    cin>>width;
    cin>>height;
    
    cout<<" area : "<<width*height<<endl;
    cout<<" perimeter : "<<2*(width+height)<<endl;
    
    return 0;
}

/*Write a C++ program to calculate the sum of all even and odd numbers in an array.

Sample Output:
Original array: 1 2 3 4 5 6 7 8
Sum of all even and odd numbers: 20,16*/

#include<iostream>
using namespace std;

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int even , odd ;
    
    cout << "Original array: "<<endl;
    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
        if(arr[i] % 2 == 0) even += arr[i];
        else odd += arr[i];
    }
    
    cout << "Sum of all even and odd numbers: " << even << "," << odd << endl;
    return 0;
}

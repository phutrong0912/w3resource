/*Write a C++ program that prints the three highest numbers from a list of numbers in descending order. */

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,i;
    cout<<"Input the number of elements: ";
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++){
        cout<<"Input "<<i+1<<" numbers: ";
        cin>>arr[i];
    }
   /* for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"The three highest numbers are: "<<arr[0]<<", "<<arr[1]<<", "<<arr[2];*/
    int first=INT_MIN;
    int second=INT_MIN;
    int third=INT_MIN;

    for (i=0;i<n;i++){
        if(arr[i] > first){
            third  = second;
            second = first;
            first  = arr[i];
        } else if(arr[i] > second ){
            third  = second;
            second = arr[i];
        } else if(arr[i] > third ){
            third  = arr[i];
        }
    }
    cout<<"The three highest numbers are: "<<first<<", "<<second<<", "<<third;

}

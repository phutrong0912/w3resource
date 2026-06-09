/*Write a C++ program to print the following pattern.

Sample Output:

 xxxxx                                                                                                        
x     x       x        x                                                                                      
x             x        x                                                                                      
x          xxxxxxx  xxxxxxx                                                                                   
x             x        x                                                                                      
x     x       x        x                                                                                      
 xxxxx  
*/

#include<iostream>
using namespace std;

int main(){
    /*cout<<" xxxxx "<<endl;
    cout<<"x     x       x        x "<<endl;
    cout<<"x             x        x "<<endl;
    cout<<"x          xxxxxxx  xxxxxxx "<<endl;
    cout<<"x             x        x "<<endl;
    cout<<"x     x       x        x "<<endl;
    cout<<" xxxxx "<<endl;*/
    
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n || (i==4 && j>=4) || (j==4 && i>=4))
                cout<<"x";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

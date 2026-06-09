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
    
 for(int row = 0; row < 7; row++) {
        if(row == 0 || row == 6) {
            cout << " ";
            for(int i = 0; i < 5; i++) cout << "x";
            cout << endl;
        }
        else if(row == 1 || row == 5) {
            cout << "x     x       x        x" << endl;
        }
        else if(row == 2 || row == 4) {
            cout << "x             x        x" << endl;
        }
        else if(row == 3) {
            cout << "x          ";
            for(int i = 0; i < 7; i++) cout << "x";
            cout << "  ";
            for(int i = 0; i < 7; i++) cout << "x";
            cout << endl;
        }
    }
    return 0;
}

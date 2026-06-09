/*  Write a C++ program to display the current date and time.

Sample Output:
Display the Current Date and Time :
----------------------------------------
seconds = 57
minutes = 33
hours = 12
day of month = 6
month of year = 7
year = 2017
weekday = 4
day of year = 186
daylight savings = 0
Current Date: 6/7/2017
Current Time: 12:33:57*/

#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    cout << "seconds = " << ltm->tm_sec << endl;
    cout << "minutes = " << ltm->tm_min << endl;
    cout << "hours = " << ltm->tm_hour << endl;
    cout << "day of month = " << ltm->tm_mday << endl;
    cout << "month of year = " << 1 + ltm->tm_mon << endl;
    cout << "year = " << 1900 + ltm->tm_year << endl;
    cout << "weekday = " << ltm->tm_wday << endl;
    cout << "day of year = " << ltm->tm_yday << endl;
    cout << "daylight savings = " << ltm->tm_isdst << endl;
    
    cout <<"Current Date: "<< ltm->tm_mday<< "/"<< 1 + ltm->tm_mon<< "/"<< 1900 + ltm->tm_year<<endl;
    cout <<"Current Time: "<< ltm->tm_hour<< ":"<< ltm->tm_min<< ":"<< ltm->tm_sec<<endl;
    
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14;
    cout << fixed << setprecision(4);
    cout << "The value of pi 4 decimal place of total width 8   : " << setw(8) << pi  << endl;
    cout << "The value of pi 4 decimal place of total width 10  : " << setw(10) << pi  << endl;
    cout << "The value of pi in scientific format is : "<< scientific << pi << endl;
    bool status = false;
    cout << "Status in number : " << status << endl;
    cout << "Status in alphabet : " << boolalpha << status << endl;
    return 0;
}

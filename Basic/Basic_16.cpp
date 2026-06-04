#include <iostream>
using namespace std;

int main() {
    double r, h;
    cout << "Input the radius  : ";
    cin >> r;
    cout << "Input the height  : ";
    cin >> h;
    double volume = 3.14 * r * r * h;
    cout << "The volume of a cylinder is : "<< volume << endl;
    return 0;
}

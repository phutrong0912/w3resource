#include <iostream>
using namespace std;

int main() {
    double celsius, kelvin;
    cin >> kelvin;
    celsius = kelvin - 273.15;
    cout << "Temperature in Kelvin : " << kelvin << endl;
    cout << "Temperature in Celsius : " << celsius << endl;
    return 0;
}
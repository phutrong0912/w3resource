#include <iostream>
using namespace std;

int main() {
    double kelvin, celsius;
    cin >> celsius;
    kelvin = celsius + 273.15;
    cout << "Temperature in Celsius : " << celsius << endl;
    cout << "Temperature in Kelvin : " << kelvin << endl;
    return 0;
}
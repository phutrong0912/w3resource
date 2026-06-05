#include <iostream>
using namespace std;

int main() {
    double fahrenheit, kelvin;
    cin >> fahrenheit;
    kelvin = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
    cout << "Temperature in Fahrenheit : " << fahrenheit << endl;
    cout << "Temperature in Kelvin : " << kelvin << endl;
    return 0;
}
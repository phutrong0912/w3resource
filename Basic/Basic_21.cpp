#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "Temperature in Fahrenheit : " << fahrenheit << endl;
    cout << "Temperature in Celsius : " << celsius << endl;
    return 0;
}

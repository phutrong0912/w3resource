#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << "Temperature in Celsius    : " << celsius << endl;
    cout << "Temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}

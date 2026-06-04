#include <iostream>
using namespace std;

int main() {
    double length, width;
    cin >> length;
    cin >> width;
    cout << "The area : " << length * width << endl;
    cout << "The perimeter  : " << 2 * (length + width) << endl;
    return 0;
}

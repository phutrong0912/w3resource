#include <iostream          >
using namespace std;
int main() {
    double a,b,c,s;
    cin>> a>>b>>c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout<< area;
    return 0;
}
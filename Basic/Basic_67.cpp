/*Write a C++ program that prints the central coordinate and the radius of a circumscribed circle of a triangle. 
This circle is created from three points on the plane surface.*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3;
    cout << " Point 1 (x1 y1): "; cin >> x1 >> y1;
    cout << " Point 2 (x2 y2): "; cin >> x2 >> y2;
    cout << " Point 3 (x3 y3): "; cin >> x3 >> y3;

    double a = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
    double b = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    double c = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
 
    double radius = (a * b * c) / (4.0 * area);
    cout<<"Radius of a circumscribed circle of a triangle: "<<radius<<endl;

    double D = 2 * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
    
    double A = x1*x1 + y1*y1;
    double B = x2*x2 + y2*y2;
    double C = x3*x3 + y3*y3;
    
    double Ox = (A*(y2 - y3) + B*(y3 - y1) + C*(y1 - y2)) / D;
    double Oy = (A*(x3 - x2) + B*(x1 - x3) + C*(x2 - x1)) / D;

    cout<<"The central coordinate of a circumscribed circle of a triangle: "<<Ox<<" , "<<Oy<<endl;

    double OA = sqrt(pow(Ox - x1, 2) + pow(Oy - y1, 2));
    double OB = sqrt(pow(Ox - x2, 2) + pow(Oy - y2, 2));
    double OC = sqrt(pow(Ox - x3, 2) + pow(Oy - y3, 2));
    
    cout << "OA = " << OA << endl;
    cout << "OB = " << OB << endl;
    cout << "OC = " << OC << endl;
 
}
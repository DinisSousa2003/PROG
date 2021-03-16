#include <iostream>
#include <cmath> //needed for POW
using namespace std;

int main(){
    double M, p, r; //Mass, density, radius
    const double PI = 3.14159265;

    cout << "Density (Kg/m^3): ";
    cin >> p;
    cout << "Radius (m): ";
    cin >> r;

    M = 3 * (p * PI * pow(r, 3)) / 4;

    cout << "Mass of the sphere is: " << M << "Kg" << endl;

    return 0;
}
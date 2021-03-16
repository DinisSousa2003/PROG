#include <iostream>
#include <cmath>

int main(){

    double ax, ay, bx, by, cx, cy; //coords of triangle vertices
    double s; //semi-perimeter
    double l1, l2, l3; //lenght sides of the triangle

    std::cout << "a (x, y): ";
    std::cin >> ax >> ay;
    std::cout << "b (x, y): ";
    std::cin >> bx >> by;
    std::cout << "c (x, y): ";
    std::cin >> cx >> cy;

    l1 = sqrt(pow(bx-ax, 2) + pow(by-ay, 2)); //l1 = dist(a, b)
    l2 = sqrt(pow(cx-ax, 2) + pow(cy-ay, 2)); //l1 = dist(a, c)
    l3 = sqrt(pow(bx-cx, 2) + pow(by-cy, 2)); //l1 = dist(c, b)

    s = (l1 + l2 + l3) / 2;
    
    double area = sqrt(s * (s-l1) * (s-l2) * (s-l3));

    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}
#include <iostream>


int main(){

    double a, b, c, d, e, f;
    double x, y;

    std::cout << "a*x + b*y = c --> write a b and c values:" << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "d*x + e*y = f --> write d e and f values:" << std::endl;
    std::cin >> d >> e >> f;

    if(((c*e - b*f) == 0) && ((a*f - c*d) == 0))
        std::cout << "inconsitent" << std::endl;
    else if((a*e - b*d) == 0)
        std::cout << "impossible" << std::endl;
    else{
        x = (c*e - b*f)/(a*e - b*d);
        y = (a*f - c*d)/(a*e - b*d);

        std::cout << "x is " << x << " and y is " << y << std::endl;
    }
    

    return 0;
}


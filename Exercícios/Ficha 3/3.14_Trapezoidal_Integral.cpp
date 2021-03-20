#include <iostream>
#include <cmath>

using namespace std;

double integrateTR(double f(double), double a, double b, int n){
    double h = (b-a) / n;
    double sum = 0.0;

    for(int i = 0; i < n; i++){
        sum += h/2 * (f(a + (i - 1)*h) + f(a + i*h));
    }
    return sum;
}

double g(double x){
    return x*x; //x^2
}

double h(double x){
    return sqrt(4 - x*x);
}

int main(){
    cout << integrateTR(g, 0, 10, 200) << endl;
    cout << integrateTR(h, -1.9, 1.9, 100) << endl;

    return 0;
}
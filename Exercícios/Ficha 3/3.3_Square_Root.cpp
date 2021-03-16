#include <iostream>
#include <cmath>
using namespace std;

double square_root(int n, int MAXIT, double DELTA){

    double estimate = 1;
    double diff;

    for (int i = 0; i < MAXIT; i++){
        estimate = (estimate + (n / estimate)) / 2;
        diff = abs(n - pow(estimate, 2));
        cout << estimate << endl;
        if (DELTA > diff) break;
    }
    return estimate;
}

int main(){
    int n, MAXIT;
    double DELTA;

    cout << "Write a number:  ";
    cin >> n;
    cout << "Write max number of iterations:  ";
    cin >> MAXIT;
    cout << "Write the precision:  ";
    cin >> DELTA;

    double result = square_root(n, MAXIT, DELTA);

    cout << "SQUARE ROOT OF N IS:  " << result << endl;
    return 0;
}

#include <iostream>
#include <cmath> //for floor and pow
using namespace std;

double round(double x, int n){
    return floor(x * pow(10, n) + 0.5) / pow(10, n);
}

int main(){
    double x; //number
    int n; //decimal places

    cout << "Number?  " << endl;
    cin >> x;
    cout << "Decimal places?  " << endl;
    cin >> n;

    cout << round(x, n) << endl;

    return 0;
}
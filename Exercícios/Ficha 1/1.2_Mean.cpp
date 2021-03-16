#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    double mean;

    cout << "Please input 3 integer numbers" << endl;
    
    cout << "A? ";
    cin >> A;
    cout << "B? ";
    cin >> B;
    cout << "C? ";
    cin >> C;

    mean = static_cast<double>(A+B+C)/3;

    cout << "mean = " << mean << endl;
    cout << "A-mean = " << (A - mean) <<endl;
    cout << "B-mean = " << (B - mean) <<endl;
    cout << "C-mean = " << (C - mean) <<endl;

    return 0;
    
}
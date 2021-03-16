#include <iostream>
using namespace std;

int main(){
    int n; //years
    double q; //deposit
    double j; // annual interest rate

    cout << "Initial Deposit: ";
    cin >> q;
    cout << "Annual Interest Rate: ";
    cin >> j;
    cout << "Years after deposit: ";
    cin >> n;

    for (int i=0; i<n; i++){
        q += q * (j/100);
    }

    cout << "Ending money: " << q << endl;

    return 0;
}
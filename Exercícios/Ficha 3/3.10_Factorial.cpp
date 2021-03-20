#include <iostream>

using namespace std;

//works till 65 (inclusive)
unsigned long long iter_factorial(unsigned int n){
    unsigned long long result = 1;

    for(unsigned int i = n; i > 0; i--){
        result *= i;
    }
    return result;
}

unsigned long long rec_factorial(unsigned int n){
    unsigned long long result = 1;

    if (n == 1) return 1;
    else return (n * rec_factorial(n-1));
}

int main(){
    unsigned int n;
    cin >> n;
    cout << iter_factorial(n) << endl;
    cout << rec_factorial(n) << endl;
    
    return 0;
}
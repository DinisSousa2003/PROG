#include <iostream>

int GCD(int m, int n){
    if ((m % n) == 0)
        return n;
    else
        return GCD(n, m % n);
}

int main(){
    int n;
    int m;

    std::cout << "two numbers" << std::endl;
    std::cin >> m >> n;

    std::cout << GCD(m, n);

    return 0;
}
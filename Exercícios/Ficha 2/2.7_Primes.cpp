#include <iostream>
#include <cmath>
using namespace std;

// a)

int main(){
    int number;
    bool isPrime = true;

    cout << "bota aqui um numero" << endl;
    cin >> number;

    for(int i = 2; i <= sqrt(number); i++){
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "It's a prime my friend!";
    else
        cout << "Nono prime";
    
    return 0;
} 


// b)
/*
int main(){
    for(int i = 2; i <= 1000; i++){
        bool isPrime = true;
        for(int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << endl;
    }
    return 0;
}
*/

//c)
/*
int main(){
    int num_primes = 0; 
    int atual_num = 2;
    bool isPrime = true;

    while (num_primes < 100){
        isPrime = true;
        for(int i = 2; i <= sqrt(atual_num); i++){
            if (atual_num % i == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << atual_num << endl;
            num_primes++;
        }

        atual_num++;
    }
    return 0;
}
*/

//d)

/*
int main(){
    unsigned long int largest_prime(4294967295);
    bool isPrime(true);
    bool end(false);

    while (!end){
        isPrime = true;
        for(int i = 2; i <= sqrt(largest_prime); i++){
            if (largest_prime % i == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << largest_prime << endl;
            end = true;
        }
        largest_prime--;
    }
    return 0;
}
*/
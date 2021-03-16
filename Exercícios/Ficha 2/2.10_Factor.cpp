#include <iostream>
#include <cmath>

int main(){

    int num;
    int c_factor = 2; //current factor
    
    std::cout << "Write a number:  ";
    std::cin >> num;

     while(num != 1){

        if (num % c_factor == 0){
            num = num / c_factor;
            std::cout << c_factor << std::endl;
        }
        else{
            bool isPrime = true;
            do
            {
                c_factor++;
                for(int i = c_factor; i <= std::sqrt(i); i++){
                    if (c_factor % i == 0){
                        isPrime = false;
                        break; }
                }
            } while (isPrime == false);
        }
    }
return 0;
}
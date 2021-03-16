#include <iostream>

int main(){
    
    int weight;
    double price;

    std::cout << "Insert weight: (in grams) ";
    std::cin >> weight;

    if(weight <= 500)
        price = 5;
    else if (weight <= 1000)
        price = 5 + 1.5*((weight - 500) / 100);
    else
        price = 12.5 + 5*((weight -1000) / 250);

    std::cout << "You owe me " << price << " dollas modafoca" << std::endl;

    return 0;
}
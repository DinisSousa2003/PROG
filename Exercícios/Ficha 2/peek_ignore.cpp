#include <iostream>

int main(){

    char cur_char;
    int num = 0;


    std::cout << "Write where my friend, smth you want with numbers and stuff";
    
    do{
        cur_char = std::cin.peek();
        if (cur_char >= '0' && cur_char <= '9')
            num = num * 10 + cur_char - '0'; //sum ascii from the num - ascii of 0
        std::cin.ignore(1);
    }while (cur_char != '\n');

    std::cout << num;

    return 0;

}
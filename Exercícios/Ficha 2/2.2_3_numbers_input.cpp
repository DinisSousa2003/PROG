#include <iostream>

int main()
{
    //a) 

    int a, b, c;
    int max, min, mid;
    
    std::cout << "Write 3 numbers:  " << std::endl;
    std::cin >> a >> b >> c;

    if ((a > b) && (a > c)){
        max = a;
        if (c > b){
            min = b;
            mid = c;
        }
        else{
            min = c;
            mid = b;
        }
    }
    else if (b > c){
        max = b;
        if (a > c){
            min = c;
            mid = a;
        }
        else{
            min = a;
            mid = c;
        }
    }
    else{
        max = c;
        if (a > b){
            min = b;
            mid = a;
        }
        else{
            min = a;
            mid = b;
        }
    }

    std::cout << "Maximum: " << max << ", Minimum: " << min << std::endl;
    std::cout << "Descending order:  " << max << ", " << mid << ", " << min << std::endl;

    if (mid + min > max)
        std::cout << "You can form a triangle with these side lenghts" << std::endl;
    else
        std::cout << "You cannot form a triangle with these side lenghts" << std::endl;

    return 0;

}
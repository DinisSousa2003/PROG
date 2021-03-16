#include <iostream>
using namespace std;

int main()
{
    int operand1, operand2, sum, product, subtraction;
    double division;

    cout << "Operand 1?  ";
    cin >> operand1;
    cout << "Operand 2?  ";
    cin >> operand2;

    sum = operand1 + operand2;
    product = operand1 * operand2;
    subtraction = operand1 - operand2;
    division = static_cast<double>(operand1) / operand2;  //c++ only returns double in divison if at least one is double


    cout << "the sum of u nums is:  " << sum << endl;
    cout << "the product of u nums is:  " << product << endl;
    cout << "the sub of u nums is:  " << subtraction << endl;
    cout << "the quotient of u nums is:  " << division << endl;

    return 0;
}
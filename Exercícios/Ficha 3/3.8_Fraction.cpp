#include <iostream>
#include <string>

using namespace std;

bool readFraction(int &numerator, int &denominator){
    char separator;

    cout << "Fraction (num/den): \t";
    cin >> numerator >> separator >> denominator;

    if(separator != '/' || cin.fail()){
        cin.clear(); //remove the error flag
        cin.ignore(10000, '\n'); //clears the buffer
        numerator = 0;
        denominator = 0;
        return false;
    } 
    else return true;
}

int GCD(int m, int n){
    if ((m % n) == 0)
        return n;
    else
        return GCD(n, m % n);
}

void reduceFraction(int &numerator, int &denominator){
    int gcd = GCD(numerator, denominator);

    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

void operations(int num1, int den1, int num2, int den2, char op){
    int num_res, den_res;
    bool valid = true;

    if(op == '+'){
        num_res = num1 * den2 + num2 * den1;
        den_res = den1 * den2;
    }
    else if(op == '-'){
        num_res = num1 * den2 - num2 * den1;
        den_res = den1 * den2;
    }
    else if(op == '*'){
        num_res = num1 * num2;
        den_res = den1 * den2;
    }
    else if(op == '/'){
        num_res = num1 * den2;
        den_res = den1 * num2;
    }
    else{
        valid = false;
        cout << "INVALID";
    }
    
    if (valid){
        reduceFraction(num_res, den_res);

        //SHOWS THE RESULT
        //if you wanted to show the result on main, not deleting the others
        //you should have to more parameters, called by adress
        cout << num1 << '/' << den1 << " " << op << " "<< num2 << '/' << den2 << " = " << num_res << '/' << den_res << endl;
    }
}

int main(){//3.8.d
    int num1, num2, den1, den2;
    char op;

    readFraction(num1, den1); 
    cout << endl;

    readFraction(num2, den2); 
    cout << endl;

    cout << "select the operator (+,-,*,/):  ";
    cin>> op;
    cout << endl;

    operations(num1, den1, num2, den2, op);
}
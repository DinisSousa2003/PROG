#include <iostream>

using namespace std;

int gcd(int n1, int n2){

    //exceptions
    if (n1 == n2) return n1;
    if (n1 == 0) return n2;
    if (n2 == 0) return n1;

    //main gcd finder
    int max, min;

    if (n2 > n1){
        max = n2;
        min = n1;
    }
    else{
        max = n1;
        min = n2;
    }

    while (true){
        max -= min;
        
        if (max < min){
            int tmp = max;
            max = min;
            min = tmp;
        }


        if (max == min) break;
    }
    return min; //max and in are equal so yolo
}

int main(){
    int n1, n2, output;
    cout << "1 number?  " << endl;
    cin >> n1;
    cout << "2 number?  " << endl;
    cin >> n2;

    output = gcd(n1, n2);

    cout << output;

    return 0;
}
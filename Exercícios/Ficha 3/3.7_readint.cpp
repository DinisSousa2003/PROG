#include<iostream>

using namespace std;

bool readInt(int &x){
    x = true;
    
    // if there was a fail in the input,
    //the value was not an integer.
    if (cin.fail()){
        x = false;
    }
    //this condition sees if the next thing in the buffer 
    //is a line feed
    //if yes, x still true, else, x = false
    else if (int a = cin.peek()){
        if (!(a == 10)) x = false;
    }
    return x;
}

int main(){
    int x;

    cout << "Number here pls morron" << endl;
    cin >> x;

    cout << readInt(x);

    return 0;
}
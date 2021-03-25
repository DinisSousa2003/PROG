#include <iostream>
#include <ctime> //time()
#include <windows.h> // Sleep()

using namespace std;

time_t timeElapsed(){
    static time_t first = time(NULL);

    return time(NULL) - first;
}

int main(){
    time_t output;
     
    output = timeElapsed(); cout << output << endl;

    Sleep(1000);

    output = timeElapsed(); cout << output << endl;

    Sleep(10000);

    output = timeElapsed(); cout << output << endl;

    return 0;
}
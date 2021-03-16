#include <iostream>
#include <ctime>

using namespace std;

int randomNumber(){
    int u_limit = 9;
    int l_limit = 2;
    int randomNumber = (rand() % (u_limit - l_limit + 1)) + l_limit; //random number between 2 and 9
    return randomNumber;   
}

void showMessage(int answer, int guess, double time){
    if (answer == guess){
        if (time < 1) cout << "Legend" << endl;
        else if (time < 3) cout << "Amazing" << endl;
        else if (time < 5) cout << "Good" << endl;
        else if (time < 10) cout << "Satisfactory" << endl;
        else cout << "Insufficient" << endl;
    }
    else cout << "YOU SUCK" << endl;
}

int main(){
    const int NUMBER_OF_ITERATIONS = 10;
    srand((unsigned int) time(NULL)); //set random seed

    for (int i = 0; i < NUMBER_OF_ITERATIONS; i++){
        int op1, op2;
        int answer, guess;
        double time1, time2, elapsedTime;
        op1 = randomNumber();
        op2 = randomNumber();

        answer = op1*op2;
        cout << op1 << " * " << op2 <<endl;
        time1 = time(NULL);
        cin >> guess;
        time2 = time(NULL);
        elapsedTime = time2 - time1;

        showMessage(answer, guess, elapsedTime);
    }

    return 0;
}
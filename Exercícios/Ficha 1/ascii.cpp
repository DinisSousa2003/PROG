#include <iostream>
using namespace std;

int main()
{
    char symbol = ' ';
    const char STOP = '#';

    while (symbol != STOP)
    {
        cout << "Write smth, write " << STOP << " to stop." << endl;
        cin >> symbol;
        cout << symbol << " is " << int(symbol) << " in ASCII" << endl;
    }

    return 0;
}
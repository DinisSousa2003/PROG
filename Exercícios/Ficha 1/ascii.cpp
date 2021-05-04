#include <iostream>
#include <string>
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
        cout << stoi("1 aaa 2") << endl;
    }

    return 0;
}
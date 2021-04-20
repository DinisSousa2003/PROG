#include <iostream>
#include <string>

using namespace std;

string encryptString(string s, int key){
    string LOWER_ALPHABET = "abcdefghijklmnopqrstuvwxyz";
    string UPPER_ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string encryptedStr = "";
    char ch;

    for (int i=0; i < s.size(); i++){
        ch = s.at(i);
        cout << ch;
        for (int j = 0; j < LOWER_ALPHABET.size(); j++){
            if (LOWER_ALPHABET.at(j) == ch) {ch = LOWER_ALPHABET.at((j + key) % LOWER_ALPHABET.size()); break;}
        }
        for (int j = 0; j < UPPER_ALPHABET.size(); j++){
            if (UPPER_ALPHABET.at(j) == ch) {ch = UPPER_ALPHABET.at((j + key) % UPPER_ALPHABET.size()); break;}
        }
        encryptedStr += ch;
    }
    cout << endl << endl;
    return encryptedStr;
}

int main(){
    int key;
    string s;
    char ch; //to get the ""

    cout << "ENTER YOU SECRET MESSAGE HERE:\t" << endl;
    getline(cin, s);

    cout << "ENTER THE MAGIC KEY:\t" << endl;
    cin >> key;

    cout << encryptString(s, key);

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

bool sequenceSearch(const string &s, int nc, char c){
    string lookForThis;
    for (int i = 0; i < nc; i++){
        lookForThis += c;
    }

    cout << lookForThis;

    size_t find = s.find(lookForThis);
    //cout << find;
    if (find != string::npos){return true;}
    else{return false;}
}

int main(){
    string the_string = "penis inchaado";
    cout << sequenceSearch(the_string, 2, 'a');
    return 0; 
}

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void readVector(vector<int> &v){
    bool cont = true;
    int num, i = 0;

    while(cont){
        cout << "index" << i << "\t";
        cin >> num;
        if (cin.fail()){
            if (cin.eof()){
                cont = false;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        else{
            v.push_back(num);
            i++;
        }
    }
}

void showVector(const vector<int> &v){
     for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
     }
     cout << endl;
}

void showVector(const vector<size_t> &v){
     for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
     }
     cout << endl;
}

size_t findValueInVector(const vector<int> &v, int value, size_t pos1 = 0, size_t pos2 = ULONG_MAX){
   for(int i = pos1; i < v.size() && i <= pos2; i++){
        if (v.at(i) == value) return i;
    }
    //only return -1 if value is not in the array on the specified interval
    return -1; 
}

void findMultValuesInVector(const vector<int> &v, int value, vector<size_t> &index,  size_t pos1, size_t pos2){
    for(int i = pos1; i < v.size() && i<= pos2; i++){
        if (v.at(i) == value){
            index.push_back(i);
        }
    }
}

int main(){
    vector<int> v;
    vector<size_t> index;
    
    readVector(v);
    showVector(v);

    int value;
    size_t pos1, pos2;

    cout << "value, pos1, pos2" << endl; cin >> value >> pos1 >> pos2;

    cout << findValueInVector(v, value, pos1, pos2) << endl;
    findMultValuesInVector(v, value, index, pos1, pos2);

    showVector(index);

    return 0;
}
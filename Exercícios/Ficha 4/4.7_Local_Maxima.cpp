#include <iostream>
#include <vector>

using namespace std;

void localMax(const vector<vector<int>> v){
    for (int i = 1; i < v.size() - 1; i++){
        for (int j = 1; j < v.size() - 1; j++){
            int num =  v.at(i).at(j);
            if (num > v.at(i-1).at(j-1) && num > v.at(i-1).at(j) && num > v.at(i-1).at(j+1) && num > v.at(i).at(j-1) && num > v.at(i).at(j+1) && num > v.at(i+1).at(j-1) && num > v.at(i+1).at(j) && num > v.at(i+1).at(j+1)){
                cout << "position: (" << i << "," << j << ")" << endl;
                cout << "value: " << num << endl << endl;
            }
        }
    }
}

int main(){
    const vector<vector<int>> vect{
        {7, 3, 4, 1, 3}, 
        {2, 9, 6, 2, 1},
        {1, 3, 5, 1, 4},
        {6, 14, 2, 7, 5},
        {4, 2, 1, 3, 6}
    };

    localMax(vect);

    return 0;
}
#include <iostream>
#include <climits>

using namespace std;


void readArray(int a[], size_t nElem){
    for(int i=0; i < nElem; i++){
        cout << "index" << i << "\t";
        cin >> a[i];
    }
}
void showArray(int a[], size_t nElem){
     for(int i=0; i < nElem; i++){
        cout << a[i] << " ";
     }
     cout << endl;
}

void showArray(size_t a[], size_t nElem){
     for(int i=0; i < nElem; i++){
        cout << a[i] << " ";
     }
     cout << endl;
}

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1 = 0, size_t pos2 = ULLONG_MAX){
    for(int i = pos1; i < nElem && i <= pos2; i++){
        if (a[i] == value) return i;
    }
    //only return -1 if value is not in the array on the specified interval
    return -1; 
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]){
    
    size_t number_of_occurences = 0;
    size_t j = 0;
    
    for(int i = pos1; i < nElem && i <= pos2; i++){
        if (a[i] == value){
            index[j] = i;
            number_of_occurences++;
            j++;
        }
    }
    return number_of_occurences;
}


int main(){
    const size_t NUMBER_ELEMENTS = 10;
    int array[NUMBER_ELEMENTS];
    size_t index[NUMBER_ELEMENTS] = {0};

    readArray(array, NUMBER_ELEMENTS);
    showArray(array, NUMBER_ELEMENTS);

    int value, pos1, pos2;

    cout << "Value, lower limit, upper limit:" << endl;
    cin >> value >> pos1 >> pos2;

    cout << findValueInArray(array, NUMBER_ELEMENTS, value, pos1, pos2) << endl;
    cout << findMultValuesInArray(array, NUMBER_ELEMENTS, value, pos1, pos2, index) << endl;
    
    showArray(index, NUMBER_ELEMENTS);

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

vector<int> findingindices(vector<int> myArr, int key);

int main(){

    vector<int> myArr = {1, 24, 3, 5, 6, 3, 4, 9, 10, 11, 17,20 };
    cout << "Enter the key to be searched: ";
    int key;
    cin >> key;

    if (myArr.empty()) {
        cout << "You've got an empty array" << endl;
        return 0;
    }


    vector<int> finalArr = findingindices(myArr, key);

    cout << "The indices of the key are: ";
    if (finalArr.empty()) {
        cout << "There is no element like this in our Array" << endl;
    } else {
        cout << "Key found at indices: ";
        for (int i = 0; i < finalArr.size(); i++) {
            cout << finalArr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}


vector<int> findingindices(vector<int> myArr, int key){
    vector<int> finalArr;

    for(int i = 0; i < myArr.size(); i++){
        if(myArr[i] == key){
            finalArr.push_back(i);
        }
    }

    return finalArr;
}
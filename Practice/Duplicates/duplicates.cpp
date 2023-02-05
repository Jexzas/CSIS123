#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> removeDuplicates(vector<string> array) {
    for (int i = 0; i < array.size(); i++) {
        if (i != 0 && array[0] == array[i]) {
            array.erase(array.begin() + i);
        } 
    }
    return array;
}

int main() {
    vector<string> array;
    bool x = true;
    while (x = true) {
        cout << "Enter a word to add to the array: " << endl;
        string item;
        cin >> item;
        array.push_back(item);
        cout << "Are you done? (y/n)";
        string done;
        cin >> done;
        if (done == "y") {
            break;
        }
    }
    cout << "Pre-sort: " << endl;
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << endl;
    }
    vector<string> newArray = removeDuplicates(array);
    cout << "Post-sort: " << endl;
        for (int i = 0; i < newArray.size(); i++) {
        cout << newArray[i] << endl;
    }
}
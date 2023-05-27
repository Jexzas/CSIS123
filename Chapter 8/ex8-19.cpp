#include <iostream>
#include <iomanip>

using namespace std;
void init(int array[13], string array2[13][6]) {
    for (int i = 0; i < 13; i++) {
        array[i] = i + 1;
    }
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 6; j++) {
            array2[i][j] = "X";
        }
    }
}

void show(string array2[13][6]) {
    cout << "X = Unassigned, * = Assigned" << endl;
    cout << "Column A B C D E F" << endl;
    for (int i = 0; i < 13; i++) {
        i + 1 < 10 ? cout << "Row  " << i + 1 << " " : cout << "Row " << i + 1 << " ";
        
        for (int j = 0; j < 6; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
}

void chooseSeat(string array[13][6]) {
    int choiceX;
    int choiceY;
    cout << "Which row are you going to sit in (number)? First Class is 1/2, Business Class is 3-7, and Economy is 8-13: " << endl;
    cin >> choiceY;
    if (choiceY < 3) {
        char column;
        cout << "First class, eh? Okay, which column do you want to sit in (A-F)?" << endl;
        cin >> column;
        if (column == 'A' || column == 'a') {
            choiceX = 1;
        } else if (column == 'B' || column == 'b') {
            choiceX = 2;
        } else if (column == 'C' || column == 'c') {
            choiceX = 3;
        } else if (column == 'D' || column == 'd') {
            choiceX = 4;
        } else if (column == 'E' || column == 'e') {
            choiceX = 5;
        } else if (column == 'F' || column == 'f') {
            choiceX = 6;
        } else {
            cout << "Not a valid selection." << endl;
        }
    } else if (choiceY < 8 && choiceY > 2) {
        char column;
        cout << "Business class, eh? Okay, which column do you want to sit in (A-F)?" << endl;
        cin >> column;
        if (column == 'A' || column == 'a') {
            choiceX = 1;
        } else if (column == 'B' || column == 'b') {
            choiceX = 2;
        } else if (column == 'C' || column == 'c') {
            choiceX = 3;
        } else if (column == 'D' || column == 'd') {
            choiceX = 4;
        } else if (column == 'E' || column == 'e') {
            choiceX = 5;
        } else if (column == 'F' || column == 'f') {
            choiceX = 6;
        } else {
            cout << "Not a valid selection." << endl;
        }   
    } else if (choiceY < 14 && choiceY > 7) {
        cout << "Nothing wrong with coach. Which column? (A - F): " << endl;
        char column;
        cin >> column;
        if (column == 'A' || column == 'a') {
            choiceX = 1;
        } else if (column == 'B' || column == 'b') {
            choiceX = 2;
        } else if (column == 'C' || column == 'c') {
            choiceX = 3;
        } else if (column == 'D' || column == 'd') {
            choiceX = 4;
        } else if (column == 'E' || column == 'e') {
            choiceX = 5;
        } else if (column == 'F' || column == 'f') {
            choiceX = 6;
        } else {
            cout << "Not a valid selection." << endl;
        }
    } else {
        cout << "That's not a valid choice.";
    }
    choiceY = choiceY - 1;
    choiceX = choiceX - 1;
    if (array[choiceY][choiceX] == "X"){
        array[choiceY][choiceX] = "*";
        cout << "Okay! Your seat is reserved! Returning to menu." << endl; 
        show(array);
    } else {
        cout << "Sorry! That seat is already taken. Returning to menu..." << endl;
    }
}

void checkSection(string array[13][6]) {
    int section;
    cout << "Choose a section: " << endl;
    cout << "1. First Class" << endl;
    cout << "2. Business Class" << endl;
    cout << "3. Economy" << endl;
    cin >> section;
    if (section == 1) {
        bool open;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 6; j++) {
                if (array[i][j] == "X") {
                    open = true;
                }
            }
        }
        if (open) {
            cout << "There are seats available in First Class!" << endl;
        } else {
            cout << "No seats open :[" << endl;
        }
    } else if (section == 2) {
        bool open;
        for (int i = 3; i < 8; i++) {
            for (int j = 0; j < 6; j++) {
                if (array[i][j] == "X") {
                    open = true;
                }
            }
        }
        if (open) {
            cout << "There are seats available in Business Class!" << endl;
        } else {
            cout << "No seats open :[" << endl;
        }
    } else if (section == 3) {
        bool open;
        for (int i = 8; i < 13; i++) {
            for (int j = 0; j < 6; j++) {
                if (array[i][j] == "X") {
                    open = true;
                }
            }
        }
        if (open) {
            cout << "There are seats available in Economy Class!" << endl;
        } else {
            cout << "No seats open :[" << endl;
        }
    } else {
        cout << "Invalid selection. Returning to menu..." << endl;
    }
}

void menu(string array[13][6]) {
    bool exit = false;
    while (!exit) {
        int userInput = 0;
        while (userInput == 0) {
            
            cout << "Select an option(number): " << endl;
            cout << "1. See seating arrangement again" << endl;
            cout << "2. Choose a seat" << endl;
            cout << "3. Check a section" << endl;
            cout << "4. Exit" << endl;
            cin >> userInput;
        }
        switch (userInput){
            case 1:
                show(array);
                userInput = 0;
                break;
            case 2:
                chooseSeat(array);
                userInput = 0;
                break;
            case 3: 
                checkSection(array);
                userInput = 0;
                break;
            case 4:
                exit = true;
                userInput = 0;
                break;
            default:
                cout << "Returning to main menu" << endl;
                userInput = 0;
                break;
        }

    }

}



int main() {
    cout << "Welcome to Air Apparent! Here is the seating chart: " << endl;
    int rowNum[13];
    string seatingAssignment[13][6];
    init(rowNum, seatingAssignment);
    show(seatingAssignment);
    menu(seatingAssignment);
    return 0;
}

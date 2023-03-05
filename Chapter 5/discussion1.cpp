//while
bool isDone;
string userInput;
while (!isDone) {
    cout << "Who are we greeting? If no one, leave blank or respond 'No one'" << endl;
    cin >> userInput;
    if (!userInput || userInput == "No one") {
        cout << "Goodbye." << endl;
        userInput = true;
    }
    cout << "Good day to you, " << userInput << "!" << endl;
}
//dowhile
bool isDone;
string userInput;
cout << "Who are we greeting today? Leave blank or respond 'No one' to quit:" << endl;
cin >> userInput;
do {
    cout << "Good day to you, " << userInput << "!" << endl;
    if (!userInput || userInput == "No one") {
        isDone = true;
    }
} while (!isDone);
//for 

int names;
cout << "How many people would you like to greet?" << endl;
cin >> names;
for (int i = 0; i < names; i++) {
    string name;
    cout << "Who would you like to greet?" << endl;
    cin >> name;
    cout << "Good day to you, " << name << "!" << endl;
}



 
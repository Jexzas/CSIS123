#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

string pigLatinize(string normalWord) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    vector<char> symbols = {',', '.', '?', ';', ':'};
    string newWord;
    bool isVowelFirst;
    char punct;
    for (unsigned int i = 0; i < vowels.size(); i++) {    
        if (normalWord[0] != vowels[i]){
            continue;
        } else {
            isVowelFirst = true;
        }
    }
    for (unsigned int i = 0; i < symbols.size(); i++) {
        if (normalWord[normalWord.length() - 1] != symbols[i]) {
            continue;
        } else {
            punct = normalWord[normalWord.length() - 1];
        }
    }
    if (normalWord.length() != 0) {
        if (isVowelFirst && !punct) {
            newWord = normalWord + "-way";
        }
        if (isVowelFirst && punct) {
            newWord = normalWord.substr(0, normalWord.length() - 1) + "-way" + punct;
        }
        if (!isVowelFirst && !punct) {
            if ((normalWord[0] == 's' || normalWord[0] == 's' || normalWord[0] == 't' || normalWord[0] == 'T' || normalWord[0] == 'w' || normalWord[0] == 'W') && normalWord[1] == 'h' || ((normalWord[0] == 's' || normalWord[0] == 'S') && (normalWord[1] == 'p'))) {
                newWord = normalWord.substr(2, normalWord.length() - 1) + "-" + normalWord[0] +  normalWord[1] + "ay";
            } else {
             newWord = normalWord.substr(1, normalWord.length() - 1) + "-" + normalWord[0] + "ay";
            }

        }
        if (!isVowelFirst && punct) {
            if ((normalWord[0] == 's' || normalWord[0] == 's' || normalWord[0] == 't' || normalWord[0] == 'T' || normalWord[0] == 'w' || normalWord[0] == 'W') && normalWord[1] == 'h' || ((normalWord[0] == 's' || normalWord[0] == 'S') && (normalWord[1] == 'p'))) {
                newWord = normalWord.substr(2, normalWord.length() - 2) + "-" + normalWord[0] +  normalWord[1] + "ay" + punct;
            } else {
            newWord = normalWord.substr(1, normalWord.length() - 2) + "-" + normalWord[0] + "ay" + punct;
            }
        }
    }
    return newWord;
}

int main () {
    ifstream fin;
    ofstream fout;
    fin.open("Ch7_Ex3Data.txt");
    fout.open("Ch7_Ex3Out.txt");
    string current;
    string final;
    while (true) {
        fin >> current;
        if (final.empty()) {
            final = pigLatinize(current) + " ";
        } else if (fin.peek() != EOF) {
            final = final + pigLatinize(current) + " ";
        } else {
            final = final + pigLatinize(current);
        }
        if (fin.peek() == EOF) {
            break;
        }
    }
    fout << final;
    fin.close();
    fout.close();
}
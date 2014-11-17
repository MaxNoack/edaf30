#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

map<char, string> codes() {
    map<char, string> morseMap;
    morseMap['A'] = ".-";
    morseMap['B'] = "-...";
    morseMap['C'] = "-.-.";
    morseMap['D'] = "-..";
    morseMap['E'] = ".";
    morseMap['F'] = "..-.";
    morseMap['G'] = "--.";
    morseMap['H'] = "....";
    morseMap['I'] = "..";
    morseMap['J'] = ".---";
    morseMap['K'] = "-.-";
    morseMap['L'] = ".-..";
    morseMap['M'] = "--";
    morseMap['N'] = "-.";
    morseMap['O'] = "---";
    morseMap['P'] = ".--.";
    morseMap['Q'] = "--.-";
    morseMap['R'] = ".-.";
    morseMap['S'] = "...";
    morseMap['T'] = "-";
    morseMap['U'] = "..-";
    morseMap['V'] = "...-";
    morseMap['W'] = ".--";
    morseMap['X'] = "-..-";
    morseMap['Y'] = "-.--";
    morseMap['Z'] = "--..";
    morseMap['Å'] = ".--.-";
    morseMap['Ä'] = ".-.-";
    morseMap['Ö'] = "---.";

    return morseMap;

    }


string morse(string text) {
    string morse;
    string translated;
    map<char, string> code = codes();

    for(int i = 0; i< text.size(); i++) {
        if(text[i] == ' ') translated = ' ';

        else {
            translated = code[text[i]];
            translated += " ";
            }
        morse += translated;

        }
    return morse;
    }

int main() {
    system("chcp 1252 >nul 2>nul");
    string text;
    string morsetext;
    cout << "Type your line:" << endl;
    getline(cin, text);
    morsetext = morse(text);
    cout << "answer is: " << morsetext << endl;
    }

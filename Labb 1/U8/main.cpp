#include <iostream>

using namespace std;


string capitalize(string& word);
string encrypt(string& word);

int main() {

    string word;
    cout << "Type in a word (less than 80 characters): ";

    getline(cin, word);

    if(word.length() > 80) {
        cout << "The word was too long." << endl;
        return 0;
        }

    word = capitalize(word);
    word = encrypt(word);

    cout << word;
    return 0;
    }

string capitalize(string& word) {
    for(int i=0; i<word.length(); i++) {
        if(word[i] >= 'a' && word[i]<= 'z') {
            word[i] -= 32;
            }
        }
    return word;
    }

string encrypt(string& word) {
    for(int i = 0; i < word.length(); i++) {
        if(word[i]>= 'A' && word[i] <= 'Z') {

            word[i] = ((word[i] - 'A' + 13) % 26) + 'A';

            }
        }
    return word;
}

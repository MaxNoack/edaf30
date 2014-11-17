#include <iostream>

using namespace std;

int check(char);
bool correct(string& s);
int main() {
    string word;
    int sum = 0;
    int temp = 0;
    bool checking=true;

    cout << "Type in roman numerals: ";
    getline(cin, word);

    while(!correct(word)) {
        cin >> word;
        }
        cout << "Roman number registered: " << word << "\n";


    for(int i=0; i<word.length(); i++) {

        temp = check(word[i]);
        if(i+1 > word.length()-1) {
            checking = false;
            }
        if(check(word[i+1])>check(word[i]) && checking) {
            temp = check(word[i+1]) - check(word[i]);
            i+=1;
            }
        sum += temp;

        }
    cout << "Sum is: "<<sum;

    return 0;
    }

bool correct(string& s) {
    int k = s.size()-1;
    while(k>=0) {
        if(!(s[k] == 'I' || s[k] == 'V' || s[k] == 'X' || s[k] == 'L' || s[k] == 'C' || s[k] == 'D' || s[k] == 'M')) {
            cout << "Not a roman number. Try Again:\n";
            return false;
            }
        k--;
        }
    return true;
    }


int check(char bokstav) {
    int resultat;
    char roman[7] = {'M','D','C','L','X','V','I'};
    int value[7] = {1000, 500, 100, 50, 10, 5, 1};

    for(int i=0; i<7; i++) {
        if(bokstav == roman[i]) {
            resultat = value[i];
            }

        }
    return resultat;
    }

#include <iostream>

using namespace std;

int main() {
    string bilnummer;
    bool correctChar = true;
    bool correctNum = true;

    cout << "Input car number: ";
    cin >> bilnummer;

    if(bilnummer.length() != 6) {
        cout << "Need six characters.";
        return 0;
        }

    else {
        for(int i=0; i<3; i++) {
            if(!(bilnummer[i] >= 'A' && bilnummer[i] <= 'Z') && !(bilnummer[i] >= 'a' && bilnummer[i] <= 'z')) {
                cout << bilnummer[i] << " is wrong! Three first have to be a letter." << endl;
                correctChar = false;
                }
            }

        for(int i=3; i<6; i++) {
            if(!(bilnummer[i] > '0') || !(bilnummer[i] < '9')) {
                cout << bilnummer[i] << " is wrong! Three last have to be numbers." << endl;
                correctNum = false;
                }
            }
        }

    if(correctChar && correctNum) {
        cout << "\nNumber is correct.\n";
        return 0;
        }

    }

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    int judgeAmount = 5;        //Minst 3.
    double judges[judgeAmount+1];
    int length = 0;
    int k = 0;
    string line;
    ifstream myfile ("score.txt");      //Filen innehåller 1.2 2 3 4.
    double num = 0.0;

    if (myfile.is_open()) {
        while ( getline (myfile, line)) {       //Finns det rader kvar att läsa?
            double num = atof(line.c_str());
            cout << "Score from a Judge read from file: " << num << "\n";
            judges[k] = num;
            k++;
            }
        }
    myfile.close();

    cout << "Score from " << k << " judges registered from file.\n";

    double min = judges[0];
    double max = judges[0];
    double sum = 0;
    for (int i = 0; i < k; i++) {
        if (max < judges[i]) {
            max = judges[i];
            }

        if (min > judges[i]) {
            min = judges[i];
            }
        }
    cout << "Maxvalue: " << max << " Minvalue: " << min << "\n";

    for (int j = 0; j < judgeAmount; j++) {
        sum = sum + judges[j];
        cout << judges[j] << "added to sum. \n";
        }
    cout << "Total sum: " << sum << "\n";
    sum = sum - max; //Summan av alla tal utom max och min.
    sum = sum - min;

    double result = sum / (judgeAmount-2);
    cout << "Final sum: " << sum << "\n";

    for(int k = 0; k < judgeAmount; k++) {      //skriver ut arrayen.
        cout << "  Judges[" << k << "]: " << judges[k];
        if(k==3 || k==7) cout << "\n";
        if(k == (judgeAmount-1)) cout << "\n\n";
        }
    cout << "Final score: " << result;
    return 0;
    }

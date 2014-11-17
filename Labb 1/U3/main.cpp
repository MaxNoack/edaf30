#include <iostream>

using namespace std;

int main() {
    int judgeAmount = 4;        //Minst 3.
    double judges[judgeAmount+1];
    int k = 0;
    cout << "Input the score from " << judgeAmount << " judges:\n";
    while(k < judgeAmount){
    cin >> judges[k];
    k++;
    }

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

        for(int k = 0; k < judgeAmount; k++){       //skriver ut arrayen.
         cout << "  Judges[" << k << "]: " << judges[k];
         if(k==3 || k==7) cout << "\n";
         if(k == (judgeAmount-1)) cout << "\n\n";
        }
        cout << "Final score: " << result;
    }


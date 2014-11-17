#include <iostream>
#include "PrizeMoney.h"
#include <ctime>
#include <cstdlib>

using namespace std;

bool intLength(int number, int length) { //kollar om längden på talet är som önskat.

    int number_of_digits = 0;

    while (number>0){
        number = number/10;
        ++number_of_digits;
    }

    if(number_of_digits == length) {
        return true;
        }
    return false;
    }

int prizeMoney(int lotteryNum, int winNum) {    //Returnerar vinsten.
    int counter = 0;
    int correct = 0;

    int oneCorrect = 10;
    int twoCorrect = 100;
    int threeCorrect = 1000;
    int fourCorrect = 10000;
    int fiveCorrect = 100000;
    int sixCorrect = 1000000;
    int threeOtherCorrect = 250;

    int lottery[7];
    int win[7];
    int i = 0;

    while (lotteryNum) {
        lottery[i++] = lotteryNum%10;
        lotteryNum /= 10;
    }

    while(winNum){
        win[i++] = winNum%10;
        winNum /= 10;
    }
    for(int i=0; i<lotteryNumberLength; i++) {      //Spara lottonummer och vinstnummer i två arrays.
        int divide = 100000;
        lottery[i] = lotteryNum%divide;
        win[i] = winNum%divide;
        divide = 100000/10;
        }
                                                //Jämför varje siffra för sig och lägger till om det är vinst.
    while(lottery[counter] == win[counter] && counter<7) {
        correct++;
        counter++;
        }
        if (correct == 1){
            return oneCorrect;
        }
        if (counter == 2){
            return twoCorrect;
        }
        if (counter == 3){
            return threeCorrect;
        }
        if (counter == 4){
            return fourCorrect;
        }
        if (counter == 5){
            return fiveCorrect;
        }
        if (counter == 6){
            return sixCorrect;
        }
    }

int main() {
    srand(time (0));
    int winNumber = rand() % 1000;
    int winNumber2 = (rand() % 1000) * 1000;
    winNumber += winNumber2;
    cout << "Vinnarnumret är:" << winNumber << "\n";

    int lotteryNumber;
    int digit1;
    int digit2;
    int digit3;
    int digit4;
    int digit5;
    int digit6;

    int lotteryNumberLength = 6;
    int prize = 0;

//    cout << "Ange ett vinnarnummer:\n";
//    cin >> winNumber;

    while(!intLength(winNumber, lotteryNumberLength)) { //kollar längden på vinstnumret.
        cout << "Ange 6 siffror..\n";
        cin >> winNumber;
        }

    cout << "Vinnarnummer registrerad.\n";


    while(true) {   //körs hela tiden och returnerar inskrivet nummers vinstmängd.
        cout << "Ange ett lottnummer:\n";
        cin >> lotteryNumber;

        while(!intLength(lotteryNumber, lotteryNumberLength)) { //kollar längden på lottonumret.
            cout << "Ange 6 siffror...\n";
            cin >> lotteryNumber;
            }

        prize = prizeMoney(lotteryNumber, winNumber);

        if(prize < 0) {
            cout << "Du vann" << prize << "kr!\n\n";
            }
        else {
            cout << "Ingen vinst.\n\n";
            }
        }
    }

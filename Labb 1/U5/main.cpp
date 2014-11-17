#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    string plone;
    string pltwo;
    string r = "r";
    string p = "p";
    string s = "s";

    system("COLOR EC");
    cout << "\n                 It's time for...\n";
    cout << "      A Game of Rock, Paper and Scissors!\n\n";

    while(true) {

        cout << "\nPlayer One, please enter your move: \n('p' for Paper, 'r' for Rock, 's' for Scissor)\n";

        cin >> plone;
        while(!(plone == r || plone == p || plone == s)){
            cout << "Please enter a correct value:\n";
            cin >> plone;
        }


        srand(time(0));
        int num = (rand() % 3) + 1;

        if(num == 1) pltwo = r;
        if(num == 2) pltwo = p;
        if(num == 3) pltwo = s;

        cout <<"Player two plays: "<< pltwo << "\n";

        if (plone == pltwo) {
            cout <<"\nIt's a tie!"<<endl;
            }

        if ( plone == r && pltwo == p) {
            cout << "\nPlayer 2 wins"<<endl;
            }
        else if (plone == r && pltwo == s) {
            cout << "\nPlayer 1 wins"<<endl;
            }

        if (plone == p && pltwo == r) {
            cout <<"\nPlayer 1 wins"<<endl;
            }
        else if ( plone == p && pltwo == s) {
            cout <<"\nPlayer 2 wins"<<endl;
            }

        if ( plone == s && pltwo == r) {
            cout <<"\nPlayer 2 wins"<<endl;
            }
        else if (plone == s && pltwo == p) {
            cout <<"\nPlayer 1 wins"<<endl;
            }
        }
    return 0;
    }


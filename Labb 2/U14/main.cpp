#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <unistd.h>

using namespace std;
vector<int> matrix (int tiles);
void printMatrix(vector<vector<int>> numbers);
vector<vector<int>> vectorOfVectors(vector<int> randomvector, int RowCount);


vector<int> matrix (int tiles) {    //genererar slumpad vector med tiles antal brickor.
    srand (time(NULL));
    vector<int> numbers;
    for (int i=0; i<=tiles-1; i++) numbers.push_back(i);    //lägger till i vektorn 0-15
    random_shuffle (numbers.begin(), numbers.end());   //blandar.
    return numbers;
    }

vector<vector<int>> vectorOfVectors(vector<int> randomvector, int RowCount) {   //gör om från vector till vectormatris med radlängd rowcount.
    vector<vector<int>> vectofVector(RowCount, vector<int>(RowCount));
    int Rowpos = 0;
    for(int i = 0; Rowpos < RowCount ; i++) {
        for(int j = 0; j<RowCount; j++) {
            vectofVector[i][j] = randomvector.at(j + RowCount * Rowpos);
            }
        Rowpos++;
        }
    return vectofVector;
    }

void printMatrix(vector<vector<int>> numbers) {   //Skriver ut en matris med RowCount antal element per rad.
    cout << endl;
    for(int i = 0; i<numbers.size(); i++) {
        for(int j = 0; j<numbers[i].size(); j++) {
            if(numbers[i][j]<10) cout << " ";
            cout << numbers[i][j] << "  ";
            }
        cout << endl;
        }
    cout << endl;
    }


int zeroPosition(vector<vector<int>> gameMatrix, int i, int j) {

    if(j < (gameMatrix[i].size()-1)) {
        if(gameMatrix.at(i).at(j+1) == 0) {
            return 1;
            }
        }
    if (j > 0) {
        if(gameMatrix [i][j-1] == 0) {
            return 2;
            }
        }
    if (i < (gameMatrix.size()-1)) {
        if(gameMatrix [i+1][j] == 0) {
            return 3;
            }
        }
    if (i > 0) {
        if(gameMatrix [i-1][j] == 0) {
            return 4;
            }
        }
    else return 0;
    }

//Check if won.
void won(vector<vector<int>> gameMatrix) {
    int position=0;
    int correct=0;
    for(int i = 0; i<gameMatrix.size(); i++) {
        for(int j = 0; j<gameMatrix[i].size(); j++) {
            if(gameMatrix[i][j] == position) correct++;
            position++;
            if(correct >= 16) {
                int count = 0;
                while(count < 10) {
                    cout << "~~~  U WON! ~~~" << endl;
                    usleep(500000);
                    cout << " ~~~ U WON!  ~~~" << endl;
                    usleep(500000);
                    count++;
                    }
                }
            }
        }
    }



int main() {
    int num;
    int numberTiles = 16;
    int numbersPerRow = 4;
    int temp = 0;
    bool found = false;
    int pos = 0;
    vector<int> correctBoard;

    vector<int> gameVector = matrix(numberTiles);   //skapar slumpad spelbräde.
    vector<vector<int>> gameMatrix = vectorOfVectors(gameVector, numbersPerRow);

    cout << "This is the game board: " << endl;

    printMatrix(gameMatrix);                        //skriver ut på skärmen.


    while(1) {                                      //Spelet startar.
        cout << "Which tile to move? (1-15):" << endl;
        cin >> num;
        if(num > 15 || num < 1) cout << "Number is out of range! Try a nother one." << endl;
        else {
            for(int i = 0; i<gameMatrix.size(); i++) {
                for(int j = 0; j<gameMatrix[i].size(); j++) {
                    if(gameMatrix[i][j] == num) {
                        found = true;

                        switch(zeroPosition(gameMatrix, i, j)) {
                            case 0:
                                cout << endl;
                                system("CLS");
                                cout << "This is the game board: " << endl;
                                printMatrix(gameMatrix);
                                cout << "FORBIDDEN!" << endl;
                                cout << num << " is not next to 0 tile! Try a nother one." << endl;
                                break;
                            case 1:
                                temp = gameMatrix [i][j];
                                gameMatrix [i][j] = gameMatrix [i][j+1];
                                gameMatrix [i][j+1] = temp;
                                system("CLS");
                                cout << "This is the game board: " << endl;
                                printMatrix(gameMatrix);
                                break;
                            case 2:
                                temp = gameMatrix [i][j];
                                gameMatrix [i][j] = gameMatrix [i][j-1];
                                gameMatrix [i][j-1] = temp;
                                system("CLS");
                                cout << "This is the game board: " << endl;
                                printMatrix(gameMatrix);
                                break;
                            case 3:
                                temp = gameMatrix [i][j];
                                gameMatrix [i][j] = gameMatrix [i+1][j];
                                gameMatrix [i+1][j] = temp;
                                system("CLS");
                                cout << "This is the game board: " << endl;
                                printMatrix(gameMatrix);
                                break;
                            case 4:
                                temp = gameMatrix [i][j];
                                gameMatrix [i][j] = gameMatrix [i-1][j];
                                gameMatrix [i-1][j] = temp;
                                system("CLS");
                                cout << "This is the game board: " << endl;
                                printMatrix(gameMatrix);
                                break;
                            default:
                                cout << "FORBIDDEN!" << endl;
                                cout << num << " is not next to 0 tile! Try a nother one." << endl;
                            }
                        if(found) break;
                        }

                    }
                if(found) break;
                }
            num = 0;
            found = false;
            }
        won(gameMatrix);
        }
    return 0;

    }

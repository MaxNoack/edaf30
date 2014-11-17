#include <iostream>
#include <random>
#include <time.h>
using namespace std;


void matrix () {
    srand (time(NULL));
    int matrix[4][4];
    int random;
    vector<int> numbers;
    for (int i=0; i<=15; i++) numbers.push_back(i); //lägger till i vektorn 0-15

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            random = rand() % numbers.size();
            matrix [i][j] = numbers[random];
            numbers.erase(numbers.begin()+ random);
            }
        }
    for(int x=0; x<4; x++) {
        for(int y=0; y<4; y++) {
            if(matrix[x][y]<=9) {
                cout << " " <<matrix[x][y] << "  ";
                }

        else {
            cout <<matrix[x][y] << "  ";
            }
        }
        cout<<endl;
        }
    }

int main() {
    cout << "This is a random matrix: \n\n";
    matrix();
    }

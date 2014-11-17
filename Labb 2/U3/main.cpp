#include <iostream>
#include <cstdlib>

using namespace std;


int randInt(int min, int max){
    int scope = max - min;
    srand (scope);

    int randInt = rand();
    randInt += min;
    return randInt;
}

int main()
{
    int max;
    int min;
    cout << "Input max value: ";
    cin >> max;
    cout << "Input min value: ";
    cin >> min;
    cout << randInt(max, min);
}

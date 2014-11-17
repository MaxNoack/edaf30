#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int kvadratkubtabell(int n){

    const char separator = ' ';
    const int nameWidth = 11;
    const int numWidth = 11;

    cout << left << setw(nameWidth) << setfill(separator) << "Number";
    cout << left << setw(nameWidth) << setfill(separator) << "Square";
    cout << left << setw(nameWidth) << setfill(separator) << "Cube";
    cout << endl;

    for(int i = 1; i<=n; i++){

    cout << left << setw(numWidth) << setfill(separator) << i;
    cout << left << setw(numWidth) << setfill(separator) << pow(i, 2);
    cout << left << setw(numWidth) << setfill(separator) << pow(i, 3);
    cout << endl;
    }
}

int main()
{
    int a;
    cout << "Input a number: ";
    cin >> a;
    kvadratkubtabell(a);
}

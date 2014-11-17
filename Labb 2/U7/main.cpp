#include <iostream>
#include <math.h>

using namespace std;


int squareItt(int k) {
    int a;
    for(int i = 1; i<=k; i++) {
        a += i*i;
        }
    return a;
    }

int squareRek(int n) {
    if(n == 1) {
        return 1;
        }
    else {
        return n * n + squareRek(n - 1);
        }
    }


int main() {
    while(1) {
        cout << "Write a numbers: "<< endl;
        int i;
        cin >> i;
        cout << "itterative: " << squareItt(i) << endl;
        cout << "Recursive: " << squareRek(i) << endl;
        }
    }

#include <iostream>
#include <vector>

using namespace std;


void byt(int &a, int &b) { //byter plats på a och b om a > b.
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
        }
    }

int main() {
    vector <int > v = {
        11,
        2,
        5,
        3,
        69,
        8,
        42,
        1
    };

    for(int i = 0; i < v.size() - 1; i++) {
        for(int j = i + 1; j < v.size(); j++)
            byt(v[i], v[j]);
        }

    for(int i: v)
        cout << i <<endl;
    cout << endl;
    }

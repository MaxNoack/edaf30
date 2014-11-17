#include <iostream>

using namespace std;

int main() {

    string z;
    cout << "Input a string: ";
    cin >> z;

        for(int i=0; i<z.length(); i++) {
            if(z[i] >='A' && z[i] <='Z') {
                z[i] = z[i] - ('A'-'a');
                }
            }

    cout << z;
    return 0;

    }


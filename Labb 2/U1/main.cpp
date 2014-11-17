#include <iostream>


using namespace std;

bool delbar(int a, int b) {
    double c = a%b;
    if(c == 0) {
        return true;
        }
    else {
        return false;
        }
    }

int main() {

    int a;
    int b;
    bool result;
    while(true) {
        cout << "First number: ";
        cin >> a;
        cout << "Second number: ";
        cin >> b;
        result = delbar(a, b);
        if(result) cout << a << " and "<< b <<" is evenly dividable\n";
        if(!result) cout << a << " and "<< b <<" is NOT evenly dividable\n";
        }
    }

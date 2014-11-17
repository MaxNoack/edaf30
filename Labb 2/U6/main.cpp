#include <iostream>
#include <vector>
using namespace std;

void add(vector<int> &a) {
    for(int i = 0; i< a.size(); i++) {
        a[i] += 1;
        }
    }

int main(vector<int>) {

    vector<int> a = {1, 2, 3, 4, 5};
    add(a);

    for(int i = 0; i< a.size(); i++) {
        cout << a[i];
        }
    }

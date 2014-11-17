#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>

using namespace std;


int poly(int base, vector<int> coeff){
	double sum = 0;
	for(double i=0; i<coeff.size(); i++){
		sum += coeff[i] * pow(base, i);
	}
	cout << "Answer is: " << sum << endl;
	system("pause");
	return 0;
}

int main() {
    int si = 4;
    int x;
    int temp;
    vector<int> k;

    cout << "Write value of x: \n";
    cin >> x;
    for(int i = 0; i < si; i++) {
        cout << "Write koefficient nr " << i+1 << ": \n";
        cin >> temp;
        k.push_back(temp);
        }

        int answer = poly(x, k);
}


#include <iostream>

using namespace std;


void strreverse(char *s) {
    int sPosition = 0;
    while(s[sPosition] != '\0') sPosition++;
    char tmp[sPosition];

    for(int i = 0; i < sPosition; i++) {
        tmp[i] = s[sPosition - i - 1];
        }

    for(int i = 0; s[i] != '\0'; i++) {
        s[i] = tmp[i];
        }
    }


int main() {
    char first[] = "A string of text.";
    strreverse(first);
    cout << first;
    }

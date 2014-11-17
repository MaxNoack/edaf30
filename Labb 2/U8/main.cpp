#include <iostream>

using namespace std;
char * mystrcat(char *s, const char *t);

//string mystrcat(string s, string t){
//
//    return s + t;
//}

char * mystrcat(char *s, const char *t) {
    int smax = 0;
    while(s[smax] != '\0') smax++;

    while(s[smax++] = *t++);
    return s;
}

int main()
{
    char first[] = "hej";
    char second[] = "san";
    cout << "Result: " << mystrcat(first, second) << endl;
}

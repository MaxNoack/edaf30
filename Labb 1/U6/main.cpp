#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    string rev = "";
    string sp = " ";
    std::string space (sp);
    getline(cin, s);
    int length = s.length()+1;
    char f[length];

    std::string str (s);
    for (int i=0; i<s.length(); ++i) {
        if (isspace(str.at(i))) f[i] = ' ';
        f[i] = str.at(i);
        }

//    cout << "f[1]: space:" << f[1] << ".\n";
//    cout << "f[2]: " << f[2] << "\n";
//    cout << "f[3]: " << f[3] << "\n";

    for(int i = (s.length()-1); i>= 0; i--) {
        rev+=f[i];
        }
    cout << rev;

    }

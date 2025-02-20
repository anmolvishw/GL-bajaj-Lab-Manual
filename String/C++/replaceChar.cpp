#include <iostream>
#include <string>
using namespace std;

string replaceCharacter(string str, char ch, char replace) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            str[i] = replace;
        }
    }
    return str;
}

int main() {
    string str = "This book is very easy";
    char ch = 's';
    char replace = 'p';
    cout << replaceCharacter(str, ch, replace) << endl;
    return 0;
}
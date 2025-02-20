#include <iostream>
#include <cstring>
using namespace std;

void delRepeatedOccurrence(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                str[j] = ' ';
            }
        }
    }
}

int main() {
    char str[] = "This book is very easy";
    delRepeatedOccurrence(str);
    cout << str << endl;
    return 0;
}
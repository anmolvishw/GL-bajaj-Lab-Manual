#include <iostream>
#include <cstring>
using namespace std;

void sort(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[] = "STRING";
    sort(str);
    cout << str << endl;
    return 0;
}
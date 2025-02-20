#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            cout << str[i];
            count++;
        }
    }
    cout << "\nNo of characters: " << count << endl;
    return 0;
}
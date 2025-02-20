#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "NOON";
    int i = 0, j = str.length() - 1;
    bool isPalindrome = true;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        cout << "The given string is a palindrome" << endl;
    } else {
        cout << "The given string is not a palindrome" << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

bool isMatch(const string &text, const string &pattern) {
    if (pattern.empty()) {
        return text.empty();
    }
    if (text.empty() && pattern[0] != '*') {
        return false;
    }
    if (pattern[0] == '*') {
        return isMatch(text, pattern.substr(1)) || (!text.empty() && isMatch(text.substr(1), pattern));
    } else {
        return !text.empty() && (pattern[0] == '?' || pattern[0] == text[0]) && isMatch(text.substr(1), pattern.substr(1));
    }
}

int main() {
    string text = "baaabab";
    string pattern = "*****ba*****ab";
    cout << (isMatch(text, pattern) ? "true" : "false") << endl;
    return 0;
}
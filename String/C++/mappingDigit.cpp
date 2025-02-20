#include <iostream>
#include <vector>
#include <string>
using namespace std;

void backtrack(vector<string> &ans, const vector<string> &mapping, const string &digits, int index, string &path) {
    if (index == digits.length()) {
        ans.push_back(path);
        return;
    }
    string letters = mapping[digits[index] - '0'];
    for (char letter : letters) {
        path.push_back(letter);
        backtrack(ans, mapping, digits, index + 1, path);
        path.pop_back();
    }
}

vector<string> sol(const string &digits) {
    vector<string> ans;
    if (digits.empty()) {
        return ans;
    }
    vector<string> mapping = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    string path;
    backtrack(ans, mapping, digits, 0, path);
    return ans;
}

int main() {
    vector<string> result = sol("23");
    for (const string &s : result) {
        cout << s << endl;
    }
    return 0;
}
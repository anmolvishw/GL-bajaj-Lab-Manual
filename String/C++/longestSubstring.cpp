#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sol(const string &s) {
    int n = s.length();
    int ans = 0;
    int index[128] = {0};
    for (int j = 0, i = 0; j < n; j++) {
        i = max(index[s[j]], i);
        ans = max(ans, j - i + 1);
        index[s[j]] = j + 1;
    }
    return ans;
}

int main() {
    cout << sol("abcabcbb") << endl;
    return 0;
}
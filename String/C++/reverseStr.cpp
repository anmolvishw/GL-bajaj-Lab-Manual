#include <iostream>
#include <string>
using namespace std;

string sol(string str) {
    if (str.empty()) {
        return str;
    }
    return sol(str.substr(1)) + str[0];
}

int main() {
    cout << sol("Hello") << endl;
    return 0;
}
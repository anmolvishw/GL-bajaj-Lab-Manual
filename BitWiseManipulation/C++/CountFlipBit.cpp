#include <iostream>
using namespace std;

int countBitsToFlip(int A, int B) {
    int xorResult = A ^ B;
    int count = 0;
    while (xorResult > 0) {
        count += (xorResult & 1);
        xorResult >>= 1;
    }
    return count;
}

int main() {
    int A, B;
    cout << "Enter two numbers A and B: ";
    cin >> A >> B;
    cout << "Number of bits to flip: " << countBitsToFlip(A, B) << endl;
    return 0;
}

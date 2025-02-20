#include <stdio.h>

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
    printf("Enter two numbers A and B: ");
    scanf("%d %d", &A, &B);
    printf("Number of bits to flip: %d\n", countBitsToFlip(A, B));
    return 0;
}

#include <stdio.h>

int main() {
    int amount;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Number of notes required for Rs. %d:\n", amount);
    printf("500 Rs notes: %d\n", amount / 500); amount = amount % 500;
    printf("200 Rs notes: %d\n", amount / 200);  amount = amount % 200;
    printf("100 Rs notes: %d\n", amount / 100);  amount = amount % 100;
    printf("50 Rs notes: %d\n", amount / 50);   amount = amount % 50;
    printf("20 Rs notes: %d\n", amount / 20);   amount = amount % 20;
    printf("10 Rs notes: %d\n", amount / 10);   amount = amount % 10;
    printf("5 Rs notes: %d\n", amount / 5);  amount = amount % 5;
    printf("2 Rs notes: %d\n", amount / 2);   amount = amount % 2;
    printf("1 Rs notes: %d\n", amount / 1);
    
    return 0;
}

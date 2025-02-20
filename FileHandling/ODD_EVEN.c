#include <stdio.h>
#include <stdlib.h>

void separateOddEven(const char *inputFile, const char *oddFile, const char *evenFile) {
    FILE *inFile = fopen(inputFile, "r");
    FILE *oddOutFile = fopen(oddFile, "w");
    FILE *evenOutFile = fopen(evenFile, "w");

    if (inFile == NULL || oddOutFile == NULL || evenOutFile == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    int number;
    while (fscanf(inFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenOutFile, "%d\n", number);
        } else {
            fprintf(oddOutFile, "%d\n", number);
        }
    }

    fclose(inFile);
    fclose(oddOutFile);
    fclose(evenOutFile);
}

int main() {
    const char *inputFile = "numbers.txt";
    const char *oddFile = "ODD.txt";
    const char *evenFile = "EVEN.txt";

    separateOddEven(inputFile, oddFile, evenFile);

    printf("Numbers have been separated into ODD.txt and EVEN.txt.\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    int numbers[10];
    int i;

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Read 10 integers from the input file
    for (i = 0; i < 10; i++) {
        if (fscanf(inputFile, "%d", &numbers[i]) != 1) {
            printf("Error reading integer from input file.\n");
            fclose(inputFile);
            return 1;
        }
    }
    fclose(inputFile);

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    // Write the squares of the integers to the output file
    for (i = 0; i < 10; i++) {
        fprintf(outputFile, "%d\n", numbers[i] * numbers[i]);
    }
    fclose(outputFile);

    printf("Squares of the integers have been written to output.txt\n");

    return 0;
}
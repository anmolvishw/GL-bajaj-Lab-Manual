#include <stdio.h>

int main() {
    float width, height;
    printf("Enter the dimensions of the rectangle (Width x Height): ");
    scanf("%f %f", &width, &height);
    printf("Area of Rectangle: %.2f\n", width * height);
    return 0;
}

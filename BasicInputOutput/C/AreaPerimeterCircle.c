#include <stdio.h>

int main() {
    float pi = 3.14f, radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of Circle: %.2f\n", pi * radius * radius);
    printf("Perimeter of Circle: %.2f\n", 2 * pi * radius);
    return 0;
}

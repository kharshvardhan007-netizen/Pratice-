#include <stdio.h>

int main() {
    float radius, area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = 3.14 * radius * radius;

    // Display result
    printf("Area of the circle = %.2f\n", area);

    return 0;
}


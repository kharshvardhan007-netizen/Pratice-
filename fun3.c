#include <stdio.h>

// Function Prototype
float add(float, float);

// Function Definition
float add(float a, float b)
{
    return a + b;
}

int main() // Fixed: changed void to int
{
    float a, b;
    printf("Enter the value of a and b: ");
    scanf("%f%f", &a, &b);

    // Fixed: Properly passed the function call as an argument to printf
    printf("Sum = %f\n", add(a, b)); 
  
}

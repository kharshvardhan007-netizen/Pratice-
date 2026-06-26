#include <stdio.h>

// Function Prototype: Takes two integer pointers as arguments
void swap(int *a, int *b);

int main() 
{
    int a, b;
    
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    
    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);
    
    // Call by Reference: Passing the actual memory addresses of a and b
    swap(&a, &b); 
    
    printf("After Swapping:  a = %d, b = %d\n", a, b);
    
    return 0;
}

// Function Definition: Uses pointers to modify the values at those addresses
void swap(int *a, int *b) 
{
    int temp;
    
    temp = *a;   // Step 1: Save the value at address 'a' into temp
    *a = *b;     // Step 2: Copy the value at address 'b' into address 'a'
    *b = temp;   // Step 3: Copy the saved value from temp into address 'b'
}

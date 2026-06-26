#include <stdio.h>

int main() 
{
    int i, n1, n2, hcf = 1, min;
    
    printf("Enter two numbers (n1 and n2): ");
    // Fixed: Properly separated format specifiers and variables
    scanf("%d %d", &n1, &n2);
    
    // Find the smaller number
    min = (n1 < n2) ? n1 : n2;
    
    // Loop from 1 up to the smaller number
    for(i = 1; i <= min; i++)
    {
        // Fixed: Used == for comparison
        if(n1 % i == 0 && n2 % i == 0)
        {
            hcf = i; // Update hcf whenever 'i' divides both numbers
        }
    }
    
    // Fixed: Corrected printf typo and placement
    printf("HCF = %d\n", hcf);
    
    return 0;
}

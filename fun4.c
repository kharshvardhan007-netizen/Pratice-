#include <stdio.h>

// Function Prototype: Expects an integer argument, returns nothing (void)
void check(int n);

int main() 
{
    int n;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    // Function Call: Passing 'n' as an argument to the function
    check(n); 
    
    return 0;
}

// Function Definition: Takes 'n' from main and checks if it's a Perfect Number
void check(int n) 
{
    int i, sum = 0; // sum must be initialized to 0
    
    // Loop through all numbers less than n to find factors
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    
    // Check if the sum of all proper divisors equals the number itself
    if (sum == n)
    {
        printf("%d is a perfect number.\n", n);
    }
    else
    {
        printf("%d is not a perfect number.\n", n);
    }
}

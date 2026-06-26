#include <stdio.h>

int main() 
{
    float age;

    printf("Enter the age: ");
    scanf("%f", &age);

    // Removed the comma and fixed the logic
    if (age >= 18 && age < 150) 
    {
        printf("Eligible to vote.\n");
    } 
    else if (age >= 0 && age < 18) 
    {
        printf("Not eligible to vote.\n");
    } 
    else 
    {
        printf("Invalid age entered.\n");
    }

    
}

#include <stdio.h>

int main() 
{
    int a, b;
    
    printf("Enter a and b: ");
    // Fixed: Cleaned up the broken scanf statement
    scanf("%d%d", &a, &b);
    
    if (a == b)
    {
        printf("Both are equal\n");
    }
    // Fixed: Removed the "3>2;" comment/semicolon mistake
    else if (a > b) 
    {
        printf("A is greater\n");
    }
    else
    {
        printf("B is greater\n");
    }
    
    return 0;
}

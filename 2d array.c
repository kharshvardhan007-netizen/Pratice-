#include <stdio.h>

int main() 
{
    int r, c, i, j;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);
    
    int a[r][c]; // Variable Length Array (VLA)
    
    // 1. TAKING INPUT
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            // %d needs the address of the element (&a[i][j])
            scanf("%d", &a[i][j]); 
        }
    }
    
    // 2. PRINTING OUTPUT
    printf("\nThe entered matrix is:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            // Print each element in the row separated by a tab
            printf("%d\t", a[i][j]);
        }
        // Print a new line after completing each row
        printf("\n");
    }
    
    return 0;
}

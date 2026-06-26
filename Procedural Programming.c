#include <stdio.h>

int main()
{ 
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Fixed: Changed double quotes to single quotes
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("vowel\n");
    }
    // Fixed: Changed > to >= so 'A' and 'a' are included, and fixed quotes
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("consonant\n");
    }
    // Fixed: Changed double quotes to single quotes
    else if (ch >= '0' && ch <= '9')
    {
        printf("digit\n");
    }
    else
    {
        printf("special character\n");
    }

    
}

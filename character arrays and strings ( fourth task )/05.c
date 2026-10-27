// Read a line and count digits, spaces, alphabets and special characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i, digits = 0, spaces = 0, alphabets = 0, special = 0;

    printf("Enter a line of text: ");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= '0') && (a[i] <= '9'))
            digits++;
        else if ((a[i] >= 'a' && a[i] <= 'z') ||
                 (a[i] >= 'A' && a[i] <= 'Z'))
            alphabets++;
        else if (a[i] == ' ')
            spaces++;
        else
            special++;
    }

    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Alphabets = %d\n", alphabets);
    printf("Special characters = %d\n", special);

    return 0;
}
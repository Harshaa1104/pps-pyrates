// Read 5 characters into a character array and display them one by one.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[6];

    printf("Enter 5 characters: ");
    scanf("%s", a);

    printf("Characters are: %s\n", a);

    return 0;
}
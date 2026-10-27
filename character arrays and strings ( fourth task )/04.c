// Convert uppercase letters to lowercase using strlwr().

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];

    printf("Enter an uppercase string: ");
    scanf("%s", a);

    printf("Lowercase string = %s\n", strlwr(a));

    return 0;
}
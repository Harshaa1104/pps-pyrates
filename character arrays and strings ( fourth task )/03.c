// Convert lowercase letters to uppercase using strupr().

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];

    printf("Enter a lowercase string: ");
    scanf("%s", a);

    printf("Uppercase string = %s\n", strupr(a));

    return 0;
}
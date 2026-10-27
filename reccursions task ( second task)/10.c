//Check palindrome string using recursion
#include <stdio.h>

int pal(char s[], int l, int r)
{
    if (l >= r)
        return 1;

    if (s[l] != s[r])
        return 0;

    return pal(s, l + 1, r - 1);
}

int main()
{
    char s[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    while (s[i] != '\0')
        i++;

    if (pal(s, 0, i - 1))
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
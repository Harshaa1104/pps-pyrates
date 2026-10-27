// Check whether a number is palindrome
#include <stdio.h>
int main()
{
    int n, temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Not a palindrome");
        return 0;
    }

    temp = n;
    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}